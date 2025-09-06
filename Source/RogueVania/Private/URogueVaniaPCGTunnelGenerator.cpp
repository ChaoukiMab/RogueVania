// Fill out your copyright notice in the Description page of Project Settings.

#include "URogueVaniaPCGTunnelGenerator.h"
#include "Engine/Engine.h"
#include "PCGPoint.h"
#include "Metadata/PCGMetadata.h"
#include "Math/UnrealMathUtility.h"

URogueVaniaPCGTunnelGenerator::URogueVaniaPCGTunnelGenerator()
{
	RandomStream.Initialize(FMath::Rand());
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateTunnelPoints(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale)
{
	TArray<FPCGPoint> Points = GenerateAdvancedTunnelPoints(
		StartLocation,
		EndLocation,
		ERogueVaniaTunnelType::RandomWalk,
		StepDistance,
		MaxDeviation,
		NoiseScale,
		-1 // default: randomized seed
	);
	return Points;
}

FPCGPoint URogueVaniaPCGTunnelGenerator::CreateTunnelPoint(
	const FVector& Location,
	float PointSpacing,
	float /*Density*/) // we ignore the passed density now
{
	FPCGPoint Point;
	Point.Transform = FTransform(FQuat::Identity, Location, FVector::OneVector);
	Point.SetExtents(FVector(PointSpacing * 0.5f));

	// Global density rule (spacing-driven)
	float GlobalDensity = FMath::Clamp(PointSpacing / 200.0f, 0.1f, 1.0f);
	Point.Density = GlobalDensity;

	Point.Color = FVector4(0.8f, 0.6f, 0.4f, 1.0f);
	Point.Seed = RandomStream.RandRange(0, INT_MAX);

	return Point;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateRandomWalkTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale)
{
	TArray<FPCGPoint> Points;

	FVector CurrentLocation = StartLocation;
	float TotalDistance = FVector::Dist(StartLocation, EndLocation);
	int32 MaxSteps = FMath::Clamp(FMath::CeilToInt(TotalDistance / StepDistance) * 2, 1, 500); // prevent infinite wandering and tunnel overshooting

	Points.Add(CreateTunnelPoint(CurrentLocation, StepDistance));

	for (int32 Step = 0; Step < MaxSteps; Step++)
	{
		float DistanceToTarget = FVector::Dist(CurrentLocation, EndLocation);

		// If we're close enough to the target, go straight there
		if (DistanceToTarget <= StepDistance * 1.5f)
		{
			Points.Add(CreateTunnelPoint(EndLocation, StepDistance));
			break;
		}

		// Get next step direction with noise
		FVector NextDirection = GetNextStep(CurrentLocation, EndLocation, MaxDeviation, NoiseScale, StepDistance, RandomStream.FRand());
		FVector NextLocation = CurrentLocation + NextDirection * StepDistance;

		Points.Add(CreateTunnelPoint(NextLocation, StepDistance));
		CurrentLocation = NextLocation;

		// Safety check to avoid excessive points
		if (Points.Num() > 100000) break;
	}

	UE_LOG(LogTemp, Log, TEXT("Generated random walk tunnel with %d points"), Points.Num());
	return Points;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateAdvancedTunnelPoints(
	const FVector& StartLocation,
	const FVector& EndLocation,
	ERogueVaniaTunnelType TunnelType,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale,
	int32 RandomSeed)
{
	// Initialize random stream
	if (RandomSeed >= 0)
	{
		RandomStream.Initialize(RandomSeed);
	}

	switch (TunnelType)
	{
	case ERogueVaniaTunnelType::StraightLine:
		return GenerateStraightTunnel(StartLocation, EndLocation, StepDistance);
	case ERogueVaniaTunnelType::LShape:
		return GenerateLShapeTunnel(StartLocation, EndLocation, StepDistance);
	case ERogueVaniaTunnelType::RandomWalk:
	default:
		return GenerateRandomWalkTunnel(StartLocation, EndLocation, StepDistance, MaxDeviation, NoiseScale);
	}
}



TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateMultiSegmentTunnel(
	const TArray<FVector>& WayPoints,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale)
{
	TArray<FPCGPoint> AllPoints;

	if (WayPoints.Num() < 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Need at least 2 waypoints for multi-segment tunnel"));
		return AllPoints;
	}

	for (int32 i = 0; i < WayPoints.Num() - 1; i++)
	{
		TArray<FPCGPoint> SegmentPoints = GenerateAdvancedTunnelPoints(
			WayPoints[i],
			WayPoints[i + 1],
			ERogueVaniaTunnelType::RandomWalk,
			StepDistance,
			MaxDeviation,
			NoiseScale
		);

		AllPoints.Append(SegmentPoints);
	}

	return AllPoints;
}

FVector URogueVaniaPCGTunnelGenerator::GetNextStep(
	const FVector& CurrentLocation, const FVector& TargetLocation,
	float MaxDeviation, float NoiseScale, float StepDistance, float RandomSeed)
{
	FVector toTarget = TargetLocation - CurrentLocation;
	float dist = toTarget.Size();
	FVector dir = (dist > KINDA_SMALL_NUMBER) ? toTarget / dist : FVector::ZeroVector;

	FVector noise(
		FMath::PerlinNoise3D(CurrentLocation * NoiseScale + FVector(RandomSeed, 0, 0)),
		FMath::PerlinNoise3D(CurrentLocation * NoiseScale + FVector(0, RandomSeed, 0)),
		FMath::PerlinNoise3D(CurrentLocation * NoiseScale + FVector(0, 0, RandomSeed))
	);

	float noiseWeight = FMath::Clamp(StepDistance / (MaxDeviation * 2.0f), 0.1f, 1.0f);

	// Fade noise as we approach target
	float ApproachFactor = FMath::Clamp(dist / (StepDistance * 6.0f), 0.0f, 1.0f);

	FVector Deviated = (dir * (1.0f - noiseWeight * ApproachFactor)) +
		(noise * noiseWeight * ApproachFactor);

	return Deviated.GetSafeNormal();
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateStraightTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance
	)
{
	TArray<FPCGPoint> Points;

	FVector Direction = (EndLocation - StartLocation).GetSafeNormal();
	float TotalDistance = FVector::Dist(StartLocation, EndLocation);
	int32 NumSteps = FMath::CeilToInt(TotalDistance / StepDistance);

	for (int32 i = 0; i <= NumSteps; i++)
	{
		float Alpha = (NumSteps > 0) ? (float)i / NumSteps : 0.0f;
		FVector StepLocation = FMath::Lerp(StartLocation, EndLocation, Alpha);
		Points.Add(CreateTunnelPoint(StepLocation, StepDistance));
		if (Points.Num() > 100000) break;
	}

	UE_LOG(LogTemp, Log, TEXT("Generated straight tunnel with %d points"), Points.Num());
	return Points;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateLShapeTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance)
{
	TArray<FPCGPoint> Points;

	// Create L-shape by going to corner point first
	FVector CornerPoint;
	if (RandomStream.FRand() > 0.5f)
	{
		// Horizontal first, then vertical
		CornerPoint = FVector(EndLocation.X, StartLocation.Y, StartLocation.Z);
	}
	else
	{
		// Vertical first, then horizontal
		CornerPoint = FVector(StartLocation.X, EndLocation.Y, StartLocation.Z);
	}

	// Generate first segment
	TArray<FPCGPoint> FirstSegment = GenerateStraightTunnel(StartLocation, CornerPoint, StepDistance);
	Points.Append(FirstSegment);

	// Generate second segment
	TArray<FPCGPoint> SecondSegment = GenerateStraightTunnel(CornerPoint, EndLocation, StepDistance);
	Points.Append(SecondSegment);

	UE_LOG(LogTemp, Log, TEXT("Generated L-shape tunnel with %d points"), Points.Num());
	return Points;
}
