// Fill out your copyright notice in the Description page of Project Settings.

#include "URogueVaniaPCGTunnelGenerator.h"
#include "Kismet/KismetMathLibrary.h"

TArray<FPCGPoint> URogueVaniaPCGTunnelGenerator::GenerateTunnelPoints(
	const FVector& StartLocation,
	const FVector& EndLocation,
	float StepDistance, 
	float MaxDeviation,
	float NoiseScale
)
{
	TArray<FPCGPoint> TunnelPoints;
	FRandomStream RandomStream(FMath::Rand()); // Use a random seed for variation

	// Add the starting point
	FPCGPoint StartPoint;
	StartPoint.Transform.SetLocation(StartLocation);
	StartPoint.Steepness = 1.0f;
	StartPoint.Density = 1.0f;
	StartPoint.SetExtents(FVector(500.0f, 500.0f, 500.0f)); // Use SetExtents for tunnel radius
	TunnelPoints.Add(StartPoint);

	FVector CurrentLocation = StartLocation;
	int32 LoopCount = 0;
	const int32 MaxLoopCount = 10000; // Safety measure to prevent infinite loops

	// Loop until we are close enough to the end location
	while (FVector::Dist(CurrentLocation, EndLocation) > StepDistance && LoopCount < MaxLoopCount)
	{
		// Calculate the direction towards the target
		FVector DirectionToTarget = (EndLocation - CurrentLocation).GetSafeNormal();

		// Determine the next location based on the step distance
		FVector NextLocation = CurrentLocation + DirectionToTarget * StepDistance;

		// Add noise and deviation to make it organic. This is what gives the "random walk" look.
		NextLocation += FVector(
			(RandomStream.FRand() - 0.5f) * MaxDeviation,
			(RandomStream.FRand() - 0.5f) * MaxDeviation,
			(RandomStream.FRand() - 0.5f) * MaxDeviation
		);

		// Add Perlin noise for more organic flow
		float NoiseX = FMath::PerlinNoise3D(NextLocation * NoiseScale + FVector(RandomStream.FRand(), 0, 0));
		float NoiseY = FMath::PerlinNoise3D(NextLocation * NoiseScale + FVector(0, RandomStream.FRand(), 0));
		float NoiseZ = FMath::PerlinNoise3D(NextLocation * NoiseScale + FVector(0, 0, RandomStream.FRand()));

		NextLocation += FVector(NoiseX, NoiseY, NoiseZ) * MaxDeviation * 2.0f;

		// IMPORTANT: Instead of reverting, we clamp the distance to ensure progress.
		// The new point must be at least one step closer to the end point.
		// This prevents the tunnel from ever moving backward, guaranteeing loop termination.
		FVector DirectionToTarget_New = (EndLocation - NextLocation).GetSafeNormal();
		NextLocation = FVector::VectorPlaneProject(NextLocation, DirectionToTarget);
		NextLocation += DirectionToTarget * FVector::Dist(CurrentLocation, NextLocation);

		CurrentLocation = NextLocation;

		// Add the new point to the array
		FPCGPoint NewPoint;
		NewPoint.Transform.SetLocation(CurrentLocation);
		NewPoint.Steepness = 1.0f;
		NewPoint.Density = 1.0f;
		NewPoint.SetExtents(FVector(500.0f, 500.0f, 500.0f)); // Use SetExtents for tunnel radius
		TunnelPoints.Add(NewPoint);

		LoopCount++;
	}

	// Add the final point to ensure the tunnel reaches the end
	FPCGPoint EndPoint;
	EndPoint.Transform.SetLocation(EndLocation);
	EndPoint.Steepness = 1.0f;
	EndPoint.Density = 1.0f;
	EndPoint.SetExtents(FVector(500.0f, 500.0f, 500.0f));
	TunnelPoints.Add(EndPoint);

	return TunnelPoints;
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