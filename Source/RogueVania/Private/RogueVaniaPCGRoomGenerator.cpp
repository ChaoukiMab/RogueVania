// Fill out your copyright notice in the Description page of Project Settings.


#include "RogueVaniaPCGRoomGenerator.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"

URogueVaniaPCGRoomGenerator::URogueVaniaPCGRoomGenerator()
{
	RandomStream.Initialize(FMath::Rand());
}

TArray<FPCGPoint> URogueVaniaPCGRoomGenerator::GenerateRoomPoints(
	ERogueVaniaRoomSize RoomSize,
	const FVector& CenterLocation,
	float NoiseScale)
{
	FVector2D Dimensions = GetRoomDimensions(RoomSize);

	// Generate organic room with noise for more natural cave-like appearance
	return GenerateOrganicRoom(CenterLocation, Dimensions.X * 0.5f, NoiseScale, 50.0f);
}

TArray<FPCGPoint> URogueVaniaPCGRoomGenerator::GenerateRectangularRoom(
	const FVector& CenterLocation,
	float Width,
	float Height,
	float Depth,
	float PointSpacing)
{
	TArray<FPCGPoint> Points;

	int32 WidthSteps = FMath::CeilToInt(Width / PointSpacing);
	int32 HeightSteps = FMath::CeilToInt(Height / PointSpacing);
	int32 DepthSteps = FMath::CeilToInt(Depth / PointSpacing);

	FVector StartPos = CenterLocation - FVector(Width * 0.5f, Height * 0.5f, Depth * 0.5f);

	for (int32 x = 0; x <= WidthSteps; x++)
	{
		for (int32 y = 0; y <= HeightSteps; y++)
		{
			for (int32 z = 0; z <= DepthSteps; z++)
			{
				FVector PointLocation = StartPos + FVector(
					x * PointSpacing,
					y * PointSpacing,
					z * PointSpacing
				);

				Points.Add(CreateRoomPoint(PointLocation));
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Generated rectangular room with %d points"), Points.Num());
	return Points;
}

TArray<FPCGPoint> URogueVaniaPCGRoomGenerator::GenerateCircularRoom(
	const FVector& CenterLocation,
	float Radius,
	float PointSpacing)
{
	TArray<FPCGPoint> Points;

	int32 Steps = FMath::CeilToInt((Radius * 2.0f) / PointSpacing);
	float HalfSteps = Steps * 0.5f;

	for (int32 x = 0; x <= Steps; x++)
	{
		for (int32 y = 0; y <= Steps; y++)
		{
			for (int32 z = 0; z <= Steps; z++)
			{
				FVector LocalPos = FVector(
					(x - HalfSteps) * PointSpacing,
					(y - HalfSteps) * PointSpacing,
					(z - HalfSteps) * PointSpacing
				);

				// Check if point is within sphere
				if (LocalPos.Size() <= Radius)
				{
					FVector WorldPos = CenterLocation + LocalPos;
					Points.Add(CreateRoomPoint(WorldPos));
				}
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Generated circular room with %d points"), Points.Num());
	return Points;
}

TArray<FPCGPoint> URogueVaniaPCGRoomGenerator::GenerateOrganicRoom(
	const FVector& CenterLocation,
	float BaseRadius,
	float NoiseScale,
	float PointSpacing)
{
	TArray<FPCGPoint> Points;

	int32 Steps = FMath::CeilToInt((BaseRadius * 2.0f) / PointSpacing);
	float HalfSteps = Steps * 0.5f;

	for (int32 x = 0; x <= Steps; x++)
	{
		for (int32 y = 0; y <= Steps; y++)
		{
			for (int32 z = 0; z <= Steps; z++)
			{
				FVector LocalPos = FVector(
					(x - HalfSteps) * PointSpacing,
					(y - HalfSteps) * PointSpacing,
					(z - HalfSteps) * PointSpacing
				);

				// Calculate distance from center
				float Distance = LocalPos.Size();

				// Add noise to create organic shape
				float NoiseValue = FMath::PerlinNoise3D(LocalPos * NoiseScale);
				float ModifiedRadius = BaseRadius + (NoiseValue * BaseRadius * 0.3f);

				// Check if point is within the organic shape
				if (Distance <= ModifiedRadius)
				{
					FVector WorldPos = CenterLocation + LocalPos;

					// Create point with density based on distance from center
					float Density = FMath::Clamp(1.0f - (Distance / ModifiedRadius), 0.1f, 1.0f);
					Points.Add(CreateRoomPoint(WorldPos, Density));
				}
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Generated organic room with %d points"), Points.Num());
	return Points;
}

FVector2D URogueVaniaPCGRoomGenerator::GetRoomDimensions(ERogueVaniaRoomSize RoomSize)
{
	switch (RoomSize)
	{
	case ERogueVaniaRoomSize::Small:
		return FVector2D(400.0f, 400.0f);
	case ERogueVaniaRoomSize::Medium:
		return FVector2D(800.0f, 800.0f);
	case ERogueVaniaRoomSize::Large:
		return FVector2D(1200.0f, 1200.0f);
	default:
		return FVector2D(800.0f, 800.0f);
	}
}

FPCGPoint URogueVaniaPCGRoomGenerator::CreateRoomPoint(const FVector& Location, float Density)
{
	FPCGPoint Point;
	Point.Transform = FTransform(FQuat::Identity, Location, FVector::OneVector);
	Point.Density = Density;
	Point.Color = FVector4(1.0f, 1.0f, 1.0f, 1.0f);

	// Set metadata for room points
	Point.MetadataEntry = 0; // Could be used to identify point type

	return Point;
}
