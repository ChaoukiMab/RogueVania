// Fill out your copyright notice in the Description page of Project Settings.

#include "URogueVaniaPCGTunnelGenerator.h"
#include "Engine/Engine.h"
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
	return GenerateAdvancedTunnelPoints(
		StartLocation,
		EndLocation,
		ERogueVaniaTunnelType::RandomWalk,
		StepDistance,
		MaxDeviation,
		NoiseScale,
		DefaultTunnelWidth,
		DefaultTunnelHeight
	);
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateRandomWalkTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale,
	float TunnelWidth,
	float TunnelHeight)
{
	TArray<FPCGPoint> Points;

	FVector CurrentLocation = StartLocation;
	float TotalDistance = FVector::Dist(StartLocation, EndLocation);
	int32 MaxSteps = FMath::CeilToInt(TotalDistance / StepDistance) * 2; // Allow for wandering

	Points.Add(CreateTunnelPoint(CurrentLocation, TunnelWidth, TunnelHeight));

	for (int32 Step = 0; Step < MaxSteps; Step++)
	{
		float DistanceToTarget = FVector::Dist(CurrentLocation, EndLocation);

		// If we're close enough to the target, go straight there
		if (DistanceToTarget <= StepDistance * 1.5f)
		{
			Points.Add(CreateTunnelPoint(EndLocation, TunnelWidth, TunnelHeight));
			break;
		}

		// Get next step direction with noise
		FVector NextDirection = GetNextStep(CurrentLocation, EndLocation, MaxDeviation, NoiseScale, RandomStream.FRand());
		FVector NextLocation = CurrentLocation + NextDirection * StepDistance;

		Points.Add(CreateTunnelPoint(NextLocation, TunnelWidth, TunnelHeight));
		CurrentLocation = NextLocation;
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
	float TunnelWidth,
	float TunnelHeight,
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
		return GenerateStraightTunnel(StartLocation, EndLocation, StepDistance, TunnelWidth, TunnelHeight);
	case ERogueVaniaTunnelType::LShape:
		return GenerateLShapeTunnel(StartLocation, EndLocation, StepDistance, TunnelWidth, TunnelHeight);
	case ERogueVaniaTunnelType::RandomWalk:
	default:
		return GenerateRandomWalkTunnel(StartLocation, EndLocation, StepDistance, MaxDeviation, NoiseScale, TunnelWidth, TunnelHeight);
	}
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateMultiSegmentTunnel(
	const TArray<FVector>& WayPoints,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale,
	float TunnelWidth)
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
			NoiseScale,
			TunnelWidth,
			TunnelWidth
		);

		AllPoints.Append(SegmentPoints);
	}

	return AllPoints;
}

FVector URogueVaniaPCGTunnelGenerator::GetNextStep(
	const FVector& CurrentLocation,
	const FVector& TargetLocation,
	float MaxDeviation,
	float NoiseScale,
	float RandomSeed)
{
	FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

	// Add noise for organic tunnel shape
	FVector NoiseOffset = FVector(
		FMath::PerlinNoise3D(CurrentLocation * NoiseScale + FVector(RandomSeed, 0, 0)),
		FMath::PerlinNoise3D(CurrentLocation * NoiseScale + FVector(0, RandomSeed, 0)),
		FMath::PerlinNoise3D(CurrentLocation * NoiseScale + FVector(0, 0, RandomSeed))
	) * MaxDeviation;

	return Direction + NoiseOffset.GetSafeNormal() * 0.3f;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateStraightTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float TunnelWidth,
	float TunnelHeight)
{
	TArray<FPCGPoint> Points;

	FVector Direction = (EndLocation - StartLocation).GetSafeNormal();
	float TotalDistance = FVector::Dist(StartLocation, EndLocation);
	int32 NumSteps = FMath::CeilToInt(TotalDistance / StepDistance);

	for (int32 i = 0; i <= NumSteps; i++)
	{
		float Alpha = (NumSteps > 0) ? (float)i / NumSteps : 0.0f;
		FVector StepLocation = FMath::Lerp(StartLocation, EndLocation, Alpha);
		Points.Add(CreateTunnelPoint(StepLocation, TunnelWidth, TunnelHeight));
	}

	UE_LOG(LogTemp, Log, TEXT("Generated straight tunnel with %d points"), Points.Num());
	return Points;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateLShapeTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float TunnelWidth,
	float TunnelHeight)
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
	TArray<FPCGPoint> FirstSegment = GenerateStraightTunnel(StartLocation, CornerPoint, StepDistance, TunnelWidth, TunnelHeight);
	Points.Append(FirstSegment);

	// Generate second segment
	TArray<FPCGPoint> SecondSegment = GenerateStraightTunnel(CornerPoint, EndLocation, StepDistance, TunnelWidth, TunnelHeight);
	Points.Append(SecondSegment);

	UE_LOG(LogTemp, Log, TEXT("Generated L-shape tunnel with %d points"), Points.Num());
	return Points;
}
FPCGPoint URogueVaniaPCGTunnelGenerator::CreateTunnelPoint(
	const FVector& Location,
	float TunnelWidth,
	float TunnelHeight,
	float Density)
{
	FPCGPoint Point;
	Point.Transform = FTransform(FQuat::Identity, Location, FVector(TunnelWidth / 100.0f, TunnelWidth / 100.0f, TunnelHeight / 100.0f));
	Point.Density = Density;
	Point.Color = FVector4(0.8f, 0.6f, 0.4f, 1.0f); // Brownish color for tunnels
	Point.MetadataEntry = 1; // Different from room points

	return Point;
}