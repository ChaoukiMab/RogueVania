// Fill out your copyright notice in the Description page of Project Settings.


#include "RogueVaniaPCGRoomGenerator.h"


TArray<FPCGPoint> URogueVaniaPCGRoomGenerator::GenerateRoomPoints(
	ERogueVaniaRoomSize RoomSize,
	const FVector& CenterLocation,
	float NoiseScale
)
{
	TArray<FPCGPoint> RoomPoints;
	FRandomStream RandomStream(FMath::Rand());

	// Get the dimensions based on the room size
	FVector Dimensions = GetRoomDimensions(RoomSize);
	int32 NumPoints = FMath::CeilToInt(Dimensions.X * Dimensions.Y * Dimensions.Z / 1000.0f); // Adjust point count based on volume

	for (int32 i = 0; i < NumPoints; i++)
	{
		// Generate a random point within the base dimensions
		FVector PointLocation = CenterLocation + FVector(
			(RandomStream.FRand() - 0.5f) * Dimensions.X,
			(RandomStream.FRand() - 0.5f) * Dimensions.Y,
			(RandomStream.FRand() - 0.5f) * Dimensions.Z
		);

		// Add Perlin noise to make the point cloud organic
		float NoiseValue = FMath::PerlinNoise3D(PointLocation * NoiseScale + FVector(RandomStream.FRand(), 0, 0));
		PointLocation += FVector(NoiseValue, NoiseValue, NoiseValue) * 100.0f; // Scale the noise effect

		FPCGPoint NewPoint;
		NewPoint.Transform.SetLocation(PointLocation);
		NewPoint.Density = 1.0f; // Density for later processing in PCG
		RoomPoints.Add(NewPoint);
	}

	return RoomPoints;
}

FVector URogueVaniaPCGRoomGenerator::GetRoomDimensions(ERogueVaniaRoomSize RoomSize)
{
	switch (RoomSize)
	{
	case ERogueVaniaRoomSize::Small:
		return FVector(1000, 1000, 500);
	case ERogueVaniaRoomSize::Medium:
		return FVector(2500, 2500, 1000);
	case ERogueVaniaRoomSize::Large:
		return FVector(5000, 5000, 2000);
	case ERogueVaniaRoomSize::Huge:
		return FVector(10000, 10000, 4000);
	default:
		return FVector(1000, 1000, 500);
	}
}
