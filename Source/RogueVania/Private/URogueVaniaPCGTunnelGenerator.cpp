// Fill out your copyright notice in the Description page of Project Settings.

#include "URogueVaniaPCGTunnelGenerator.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/Engine.h"

URogueVaniaPCGTunnelGenerator::URogueVaniaPCGTunnelGenerator()
{
	// Initialize with a random seed
	RandomStream.Initialize(FMath::Rand());
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateTunnelPoints(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale
)
{
	// Use the enhanced version with default settings
	return GenerateAdvancedTunnelPoints(
		StartLocation,
		EndLocation,
		DefaultTunnelType,
		StepDistance,
		MaxDeviation,
		NoiseScale,
		DefaultTunnelWidth,
		DefaultTunnelHeight
	);
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
	int32 RandomSeed
)
{
	// Set random seed if provided
	if (RandomSeed >= 0)
	{
		RandomStream.Initialize(RandomSeed);
	}

	UE_LOG(LogTemp, Log, TEXT("Generating tunnel from %s to %s (Type: %d)"),
		*StartLocation.ToString(), *EndLocation.ToString(), (int32)TunnelType);

	// Generate based on tunnel type
	switch (TunnelType)
	{
	case ERogueVaniaTunnelType::StraightLine:
		return GenerateStraightTunnel(StartLocation, EndLocation, StepDistance, TunnelWidth, TunnelHeight);

	case ERogueVaniaTunnelType::LShape:
		return GenerateLShapeTunnel(StartLocation, EndLocation, StepDistance, TunnelWidth, TunnelHeight);

	case ERogueVaniaTunnelType::RandomWalk:
	default:
		// Your existing random walk implementation with improvements
		break;
	}

	// Enhanced Random Walk Implementation
	TArray<FPCGPoint> TunnelPoints;

	// Add the starting point
	TunnelPoints.Add(CreateTunnelPoint(StartLocation, TunnelWidth, TunnelHeight, 1.0f));

	FVector CurrentLocation = StartLocation;
	int32 LoopCount = 0;
	const int32 MaxLoopCount = 10000;

	// Loop until we are close enough to the end location
	while (FVector::Dist(CurrentLocation, EndLocation) > StepDistance && LoopCount < MaxLoopCount)
	{
		// Calculate the direction towards the target
		FVector DirectionToTarget = (EndLocation - CurrentLocation).GetSafeNormal();

		// Determine the next location based on the step distance
		FVector NextLocation = CurrentLocation + DirectionToTarget * StepDistance;

		// Add noise and deviation to make it organic
		NextLocation += FVector(
			(RandomStream.FRand() - 0.5f) * MaxDeviation,
			(RandomStream.FRand() - 0.5f) * MaxDeviation,
			(RandomStream.FRand() - 0.5f) * MaxDeviation * 0.5f // Less vertical deviation
		);

		// Add Perlin noise for more organic flow
		float NoiseX = FMath::PerlinNoise3D(NextLocation * NoiseScale + FVector(RandomStream.FRand(), 0, 0));
		float NoiseY = FMath::PerlinNoise3D(NextLocation * NoiseScale + FVector(0, RandomStream.FRand(), 0));
		float NoiseZ = FMath::PerlinNoise3D(NextLocation * NoiseScale + FVector(0, 0, RandomStream.FRand()));

		NextLocation += FVector(NoiseX, NoiseY, NoiseZ * 0.5f) * MaxDeviation * 2.0f;

		// Ensure progress towards target
		FVector ToTarget = EndLocation - CurrentLocation;
		FVector ToNext = NextLocation - CurrentLocation;

		// If we're moving away from target, correct the direction
		if (FVector::DotProduct(ToTarget.GetSafeNormal(), ToNext.GetSafeNormal()) < 0.1f)
		{
			NextLocation = CurrentLocation + ToTarget.GetSafeNormal() * StepDistance;
			// Add smaller deviation when correcting
			NextLocation += FVector(
				(RandomStream.FRand() - 0.5f) * MaxDeviation * 0.5f,
				(RandomStream.FRand() - 0.5f) * MaxDeviation * 0.5f,
				(RandomStream.FRand() - 0.5f) * MaxDeviation * 0.25f
			);
		}

		CurrentLocation = NextLocation;

		// Add the new point to the array
		TunnelPoints.Add(CreateTunnelPoint(CurrentLocation, TunnelWidth, TunnelHeight, 1.0f));

		LoopCount++;
	}

	// Add the final point to ensure the tunnel reaches the end
	TunnelPoints.Add(CreateTunnelPoint(EndLocation, TunnelWidth, TunnelHeight, 1.0f));

	UE_LOG(LogTemp, Log, TEXT("Generated tunnel with %d points"), TunnelPoints.Num());
	return TunnelPoints;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateMultiSegmentTunnel(
	const TArray<FVector>& WayPoints,
	float StepDistance,
	float MaxDeviation,
	float NoiseScale,
	float TunnelWidth
)
{
	TArray<FPCGPoint> AllTunnelPoints;

	if (WayPoints.Num() < 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Need at least 2 waypoints for multi-segment tunnel"));
		return AllTunnelPoints;
	}

	// Generate tunnel segments between each pair of waypoints
	for (int32 i = 0; i < WayPoints.Num() - 1; i++)
	{
		TArray<FPCGPoint> SegmentPoints = GenerateAdvancedTunnelPoints(
			WayPoints[i],
			WayPoints[i + 1],
			DefaultTunnelType,
			StepDistance,
			MaxDeviation,
			NoiseScale,
			TunnelWidth,
			DefaultTunnelHeight
		);

		// Remove first point of each segment except the first one to avoid duplicates
		if (i > 0 && SegmentPoints.Num() > 0)
		{
			SegmentPoints.RemoveAt(0, 1, EAllowShrinking::No);
		}

		AllTunnelPoints.Append(SegmentPoints);
	}

	return AllTunnelPoints;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateStraightTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float TunnelWidth,
	float TunnelHeight
)
{
	TArray<FPCGPoint> TunnelPoints;
	FVector Direction = (EndLocation - StartLocation).GetSafeNormal();
	float Distance = FVector::Dist(StartLocation, EndLocation);
	int32 NumSteps = FMath::CeilToInt(Distance / StepDistance);

	for (int32 i = 0; i <= NumSteps; ++i)
	{
		FVector Location = StartLocation + Direction * (i * StepDistance);
		TunnelPoints.Add(CreateTunnelPoint(Location, TunnelWidth, TunnelHeight, 1.0f));
	}

	return TunnelPoints;
}

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateLShapeTunnel(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance,
	float TunnelWidth,
	float TunnelHeight
)
{
	TArray<FPCGPoint> TunnelPoints;
	FVector Direction = (EndLocation - StartLocation).GetSafeNormal();
	float Distance = FVector::Dist(StartLocation, EndLocation);
	float HalfDistance = Distance * 0.5f;
	FVector MidPoint = StartLocation + Direction * HalfDistance;

	// First segment: start to midpoint
	TArray<FPCGPoint> FirstSegment = GenerateStraightTunnel(StartLocation, MidPoint, StepDistance, TunnelWidth, TunnelHeight);
	TunnelPoints.Append(FirstSegment);

	// Second segment: midpoint to end
	TArray<FPCGPoint> SecondSegment = GenerateStraightTunnel(MidPoint, EndLocation, StepDistance, TunnelWidth, TunnelHeight);
	// Remove first point to avoid duplication
	if (SecondSegment.Num() > 0)
	{
		SecondSegment.RemoveAt(0, 1, EAllowShrinking::No);
	}
	TunnelPoints.Append(SecondSegment);

	return TunnelPoints;
}

FPCGPoint URogueVaniaPCGTunnelGenerator::CreateTunnelPoint(const FVector& Location, float Width, float Height, float Density)
{
	FPCGPoint Point;
	Point.Transform.SetLocation(Location);
	Point.Steepness = 1.0f;
	Point.Density = Density;
	Point.SetExtents(FVector(Width, Width, Height)); // Use SetExtents for tunnel dimensions
	return Point;
}

// Internal helper for a more advanced random walk, can be expanded upon
FVector URogueVaniaPCGTunnelGenerator::GetNextStep(
	const FVector& CurrentLocation,
	const FVector& TargetLocation,
	float MaxDeviation,
	float NoiseScale,
	float RandomSeed
)
{
	FVector NextDirection = (TargetLocation - CurrentLocation).GetSafeNormal();

	// Create two random vectors orthogonal to NextDirection
	FVector UpVector = (FMath::Abs(NextDirection.Z) < 1.0f - KINDA_SMALL_NUMBER) ? FVector(0, 0, 1.f) : FVector(1.f, 0, 0);
	FVector Perpendicular1 = FVector::CrossProduct(UpVector, NextDirection).GetSafeNormal();
	FVector Perpendicular2 = FVector::CrossProduct(Perpendicular1, NextDirection).GetSafeNormal();

	NextDirection = NextDirection + Perpendicular1 * (FMath::PerlinNoise1D(RandomSeed) * NoiseScale);
	NextDirection = NextDirection + Perpendicular2 * (FMath::PerlinNoise1D(RandomSeed * 2.0f) * NoiseScale);

	NextDirection.Normalize();

	return CurrentLocation + NextDirection * MaxDeviation;
}