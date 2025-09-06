#include "RogueVaniaPCGRoomGenerator.h"
#include "Engine/Engine.h"
#include "Metadata/PCGMetadata.h"
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
	TArray<FPCGPoint> Points;

	// Get room dimensions based on size
	FVector Dimensions = GetRoomDimensions(RoomSize);

	// Apply default if NoiseScale not set
	float FinalNoiseScale = (NoiseScale < 0.0f) ? DefaultNoiseScale : NoiseScale;

	// Currently we use X as base radius (spherical rooms).
	// Future rectangular/cylindrical rooms will use full XYZ.
	// For now, ALL rooms are organic (default path)
	Points = GenerateOrganicRoom(CenterLocation, Dimensions.X * 0.5f, FinalNoiseScale);

	return Points;
}

FPCGPoint URogueVaniaPCGRoomGenerator::CreateRoomPoint(
	const FVector& Location,
	float PointSpacing,
	float DensityFactor)
{
	FPCGPoint Point;
	Point.Transform = FTransform(FQuat::Identity, Location, FVector::OneVector);

	// Density rule (scaled by spacing & factor)
	float RoomVolumeFactor = FMath::Clamp(PointSpacing / 200.0f, 0.1f, 1.0f);
	Point.Density = FMath::Clamp(RoomVolumeFactor * DensityFactor, 0.1f, 1.0f);

	Point.Color = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
	Point.Seed = RandomStream.RandRange(0, INT_MAX);
	Point.SetExtents(FVector(PointSpacing * 0.5f));

	return Point;
}

// --- Legacy Generators (kept but unused for now) ---
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

				Points.Add(CreateRoomPoint(PointLocation, PointSpacing, 1.0f));
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

				// Sphere check
				if (LocalPos.Size() <= Radius)
				{
					FVector WorldPos = CenterLocation + LocalPos;
					Points.Add(CreateRoomPoint(WorldPos, PointSpacing, 1.0f));
				}
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Generated circular room with %d points"), Points.Num());
	return Points;
}

// --- Organic Generator (default path) ---
TArray<FPCGPoint> URogueVaniaPCGRoomGenerator::GenerateOrganicRoom(
	const FVector& CenterLocation,
	float BaseRadius,
	float NoiseScale,
	float PointSpacing)
{
	TArray<FPCGPoint> Points;

	// Apply defaults if not provided
	float FinalNoiseScale = (NoiseScale < 0.0f) ? DefaultNoiseScale : NoiseScale;
	float FinalPointSpacing = (PointSpacing < 0.0f) ? DefaultPointSpacing : PointSpacing;

	int32 Steps = FMath::CeilToInt((BaseRadius * 2.0f) / PointSpacing);
	float r = BaseRadius + BaseRadius * 0.3f;
	float r2 = r * r;

	for (int32 x = -Steps; x <= Steps; ++x)
	{
		for (int32 y = -Steps; y <= Steps; ++y)
		{
			for (int32 z = -Steps; z <= Steps; ++z)
			{
				FVector LocalPos = FVector(x, y, z) * PointSpacing;
				if (LocalPos.SizeSquared() > r2) continue;

				float Distance = LocalPos.Size();
				float NoiseValue = FMath::PerlinNoise3D(LocalPos * FinalNoiseScale);
				float ModifiedRadius = BaseRadius + (NoiseValue * BaseRadius * 0.3f);

				if (Distance <= ModifiedRadius)
				{
					FVector WorldPos = CenterLocation + LocalPos;
					float GradientDensity = FMath::Clamp(1.0f - (Distance / ModifiedRadius), 0.1f, 1.0f);
					Points.Add(CreateRoomPoint(WorldPos, PointSpacing, GradientDensity));
				}

				if (Points.Num() > 100000)
				{
					UE_LOG(LogTemp, Warning, TEXT("Safety guard triggered in OrganicRoom"));
					return Points;
				}
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Generated organic room with %d points"), Points.Num());
	return Points;
}

// --- Size Definitions ---
FVector URogueVaniaPCGRoomGenerator::GetRoomDimensions(ERogueVaniaRoomSize RoomSize)
{
	switch (RoomSize)
	{
	case ERogueVaniaRoomSize::Small:
		return FVector(400.0f, 400.0f, 400.0f);
	case ERogueVaniaRoomSize::Medium:
		return FVector(800.0f, 800.0f, 800.0f);
	case ERogueVaniaRoomSize::Large:
		return FVector(1200.0f, 1200.0f, 1200.0f);
	default:
		return FVector(800.0f, 800.0f, 800.0f);
	}
}
