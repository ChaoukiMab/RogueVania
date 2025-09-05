
#include "RogueVaniaPCGBiomGenerator.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"

void URogueVaniaPCGBiomGenerator::GenerateBiom(const FVector& StartLocation, TArray<FPCGPoint>& OutRoomPoints, TArray<FPCGPoint>& OutTunnelPoints)
{
	UE_LOG(LogTemp, Warning, TEXT("GenerateBiom called! StartLocation: %s, BiomNodes count: %d"),
		*StartLocation.ToString(), BiomNodes.Num());

	// Clear output arrays
	OutRoomPoints.Empty();
	OutTunnelPoints.Empty();

	// Generate random room positions
	TArray<FVector> RoomPositions;
	GenerateRandomRoomPositions(StartLocation, RoomPositions);

	// Create room points
	for (int32 i = 0; i < RoomPositions.Num(); i++)
	{
		FPCGPoint RoomPoint;
		RoomPoint.Transform.SetLocation(RoomPositions[i]);
		RoomPoint.Transform.SetRotation(FQuat::Identity);
		RoomPoint.Transform.SetScale3D(FVector(1.0f));
		RoomPoint.Density = 1.0f;

		if (BiomNodes.IsValidIndex(i))
		{
			RoomPoint.SetLocalBounds(GetBoundsForRoomSize(BiomNodes[i].RoomSize));

			// 🔹 Add extents so PCG can voxelize
			switch (BiomNodes[i].RoomSize)
			{
			case ERogueVaniaRoomSize::Small:
				RoomPoint.SetExtents(FVector(500.0f, 500.0f, 250.0f));
				break;
			case ERogueVaniaRoomSize::Medium:
				RoomPoint.SetExtents(FVector(1000.0f, 1000.0f, 500.0f));
				break;
			case ERogueVaniaRoomSize::Large:
				RoomPoint.SetExtents(FVector(2000.0f, 2000.0f, 1000.0f));
				break;
			case ERogueVaniaRoomSize::Huge:
				RoomPoint.SetExtents(FVector(4000.0f, 4000.0f, 2000.0f));
				break;
			}
		}
		else
		{
			RoomPoint.SetLocalBounds(GetBoundsForRoomSize(ERogueVaniaRoomSize::Small));
			RoomPoint.SetExtents(FVector(500.0f, 500.0f, 250.0f));
		}

		OutRoomPoints.Add(RoomPoint);
	}

	// Generate tunnels connecting the rooms
	GenerateTunnelsBetweenRooms(RoomPositions, OutTunnelPoints);

	// 🔹 Ensure tunnel points also have extents
	for (FPCGPoint& TunnelPoint : OutTunnelPoints)
	{
		TunnelPoint.SetExtents(FVector(200.0f, 200.0f, 200.0f)); // thin tunnels
	}

	UE_LOG(LogTemp, Warning, TEXT("Generated %d room points and %d tunnel points"),
		OutRoomPoints.Num(), OutTunnelPoints.Num());
}

void URogueVaniaPCGBiomGenerator::GenerateRandomRoomPositions(const FVector& StartLocation, TArray<FVector>& OutPositions)
{
	OutPositions.Empty();

	// Parameters for room generation
	const int32 NumRooms = FMath::Max(1, BiomNodes.Num() > 0 ? BiomNodes.Num() : 5); // Default to 5 rooms
	const float MinDistance = 300.0f; // Minimum distance between rooms
	const float MaxDistance = 800.0f; // Maximum distance from start
	const int32 MaxAttempts = 100; // Max attempts to place each room

	// Always start with the starting location
	OutPositions.Add(StartLocation);

	// Generate additional rooms
	for (int32 i = 1; i < NumRooms; i++)
	{
		FVector NewPosition = StartLocation;
		bool bValidPosition = false;

		for (int32 Attempt = 0; Attempt < MaxAttempts; Attempt++)
		{
			// Generate random position around the start location
			float Angle = FMath::RandRange(0.0f, 2.0f * PI);
			float Distance = FMath::RandRange(MinDistance, MaxDistance);

			NewPosition = StartLocation + FVector(
				FMath::Cos(Angle) * Distance,
				FMath::Sin(Angle) * Distance,
				0.0f
			);

			// Check if this position is far enough from existing rooms
			bValidPosition = true;
			for (const FVector& ExistingPos : OutPositions)
			{
				if (FVector::Dist(NewPosition, ExistingPos) < MinDistance)
				{
					bValidPosition = false;
					break;
				}
			}

			if (bValidPosition)
			{
				break;
			}
		}

		OutPositions.Add(NewPosition);
		UE_LOG(LogTemp, Log, TEXT("Generated room %d at position: %s"), i, *NewPosition.ToString());
	}
}

void URogueVaniaPCGBiomGenerator::GenerateTunnelsBetweenRooms(const TArray<FVector>& RoomPositions, TArray<FPCGPoint>& OutTunnelPoints)
{
	if (RoomPositions.Num() < 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not enough rooms to create tunnels (need at least 2, have %d)"), RoomPositions.Num());
		return; // Need at least 2 rooms to create tunnels
	}

	// Create tunnels connecting each room to the next one (simple chain)
	for (int32 i = 0; i < RoomPositions.Num() - 1; i++)
	{
		const FVector& StartPos = RoomPositions[i];
		const FVector& EndPos = RoomPositions[i + 1];

		// Generate tunnel points along the path
		GenerateTunnelPath(StartPos, EndPos, OutTunnelPoints);
		UE_LOG(LogTemp, Log, TEXT("Created tunnel from room %d to room %d"), i, i + 1);
	}

	// Optionally, connect the last room back to the first (creating a loop)
	if (RoomPositions.Num() > 2)
	{
		const FVector& LastPos = RoomPositions.Last();
		const FVector& FirstPos = RoomPositions[0];
		GenerateTunnelPath(LastPos, FirstPos, OutTunnelPoints);
		UE_LOG(LogTemp, Log, TEXT("Created tunnel from last room back to first room (loop)"));
	}
}

void URogueVaniaPCGBiomGenerator::GenerateTunnelPath(const FVector& StartPos, const FVector& EndPos, TArray<FPCGPoint>& OutTunnelPoints)
{
	const float TunnelSegmentLength = 100.0f; // Distance between tunnel points
	const FVector Direction = (EndPos - StartPos).GetSafeNormal();
	const float TotalDistance = FVector::Dist(StartPos, EndPos);
	const int32 NumSegments = FMath::CeilToInt(TotalDistance / TunnelSegmentLength);

	if (NumSegments <= 1)
	{
		// Rooms are too close, no tunnel needed
		return;
	}

	for (int32 i = 1; i < NumSegments; i++) // Skip start and end (those are rooms)
	{
		const float Alpha = static_cast<float>(i) / static_cast<float>(NumSegments);
		FVector TunnelPos = FMath::Lerp(StartPos, EndPos, Alpha);

		// Add some random variation to make tunnels more interesting
		const float NoiseAmount = 50.0f;
		TunnelPos.X += FMath::RandRange(-NoiseAmount, NoiseAmount);
		TunnelPos.Y += FMath::RandRange(-NoiseAmount, NoiseAmount);

		FPCGPoint TunnelPoint;
		TunnelPoint.Transform.SetLocation(TunnelPos);
		TunnelPoint.Transform.SetRotation(FQuat::Identity);
		TunnelPoint.Transform.SetScale3D(FVector(0.5f)); // Smaller scale for tunnels
		TunnelPoint.Density = 0.8f;

		// Set bounds for tunnels
		TunnelPoint.BoundsMin = FVector(-25.0f); // Smaller bounds for tunnels
		TunnelPoint.BoundsMax = FVector(25.0f);

		// 🔹 Set extents for tunnels (will be overridden later, but good to have)
		TunnelPoint.SetExtents(FVector(200.0f, 200.0f, 200.0f));

		OutTunnelPoints.Add(TunnelPoint);
	}
}

FBox URogueVaniaPCGBiomGenerator::GetBoundsForRoomSize(ERogueVaniaRoomSize RoomSize)
{
	switch (RoomSize)
	{
	case ERogueVaniaRoomSize::Small:
		return FBox(FVector(-50.0f), FVector(50.0f));
	case ERogueVaniaRoomSize::Medium:
		return FBox(FVector(-75.0f), FVector(75.0f));
	case ERogueVaniaRoomSize::Large:
		return FBox(FVector(-100.0f), FVector(100.0f));
	case ERogueVaniaRoomSize::Huge:
		return FBox(FVector(-150.0f), FVector(150.0f));
	default:
		return FBox(FVector(-50.0f), FVector(50.0f));
	}
}
