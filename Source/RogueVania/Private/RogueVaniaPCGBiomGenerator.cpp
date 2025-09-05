
#include "RogueVaniaPCGBiomGenerator.h"
#include "URogueVaniaPCGTunnelGenerator.h"
#include "RogueVaniaPCGRoomGenerator.h"
#include "Engine/Engine.h"

URogueVaniaPCGBiomGenerator::URogueVaniaPCGBiomGenerator()
{
	// Initialize generators
	TunnelGenerator = CreateDefaultSubobject<URogueVaniaPCGTunnelGenerator>(TEXT("TunnelGenerator"));
	RoomGenerator = CreateDefaultSubobject<URogueVaniaPCGRoomGenerator>(TEXT("RoomGenerator"));

	// Initialize with default biom node if empty
	if (BiomNodes.Num() == 0)
	{
		FRogueVaniaBiomNode DefaultNode;
		DefaultNode.RoomSize = ERogueVaniaRoomSize::Medium;
		DefaultNode.RelativeLocation = FVector::ZeroVector;
		BiomNodes.Add(DefaultNode);
	}
}

void URogueVaniaPCGBiomGenerator::GenerateBiom(const FVector& StartLocation, TArray<FPCGPoint>& OutRoomPoints, TArray<FPCGPoint>& OutTunnelPoints)
{
	// Ensure generators exist
	EnsureGeneratorsExist();

	// Clear output arrays
	OutRoomPoints.Empty();
	OutTunnelPoints.Empty();

	// null check
		if (!RoomGenerator || !TunnelGenerator)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create generators"));
			return;
		}

	if (BiomNodes.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No biom nodes defined"));
		return;
	}

	// Generate room points from biom nodes
	TArray<FVector> RoomPositions;

	for (const FRogueVaniaBiomNode& Node : BiomNodes)
	{
		FVector RoomWorldLocation = GetRoomWorldLocation(Node, StartLocation);
		RoomPositions.Add(RoomWorldLocation);

		// Generate room points using the room generator
		TArray<FPCGPoint> RoomPoints = RoomGenerator->GenerateRoomPoints(
			Node.RoomSize,
			RoomWorldLocation,
			0.05f // Default noise scale
		);

		OutRoomPoints.Append(RoomPoints);

		UE_LOG(LogTemp, Log, TEXT("Generated room at %s with %d points"),
			*RoomWorldLocation.ToString(), RoomPoints.Num());
	}

	// Connect rooms with tunnels
	ConnectRoomsWithTunnels(RoomPositions, OutTunnelPoints);

	UE_LOG(LogTemp, Log, TEXT("Biom generation complete: %d room points, %d tunnel points"),
		OutRoomPoints.Num(), OutTunnelPoints.Num());
}

void URogueVaniaPCGBiomGenerator::GenerateRandomRoomPositions(const FVector& StartLocation, TArray<FVector>& OutPositions)
{
	OutPositions.Empty();

	// This could be expanded for procedural room placement
	// For now, we use the predefined biom nodes
	for (const FRogueVaniaBiomNode& Node : BiomNodes)
	{
		OutPositions.Add(GetRoomWorldLocation(Node, StartLocation));
	}
}

void URogueVaniaPCGBiomGenerator::ConnectRoomsWithTunnels(const TArray<FVector>& RoomPositions, TArray<FPCGPoint>& OutTunnelPoints)
{
	if (!TunnelGenerator || RoomPositions.Num() < 2)
	{
		return;
	}

	// Connect each room to the next one in sequence
	for (int32 i = 0; i < RoomPositions.Num() - 1; i++)
	{
		TArray<FPCGPoint> TunnelSegment = TunnelGenerator->GenerateAdvancedTunnelPoints(
			RoomPositions[i],
			RoomPositions[i + 1],
			ERogueVaniaTunnelType::RandomWalk,
			100.0f, // Step distance
			50.0f,  // Max deviation
			0.05f,  // Noise scale
			200.0f, // Tunnel width
			200.0f  // Tunnel height
		);

		OutTunnelPoints.Append(TunnelSegment);

		UE_LOG(LogTemp, Log, TEXT("Generated tunnel from %s to %s with %d points"),
			*RoomPositions[i].ToString(), *RoomPositions[i + 1].ToString(), TunnelSegment.Num());
	}
}

FVector URogueVaniaPCGBiomGenerator::GetRoomWorldLocation(const FRogueVaniaBiomNode& Node, const FVector& StartLocation)
{
	return StartLocation + Node.RelativeLocation;
}

float URogueVaniaPCGBiomGenerator::CalculateRoomSpacing(ERogueVaniaRoomSize RoomSize)
{
	switch (RoomSize)
	{
	case ERogueVaniaRoomSize::Small:
		return 500.0f;
	case ERogueVaniaRoomSize::Medium:
		return 800.0f;
	case ERogueVaniaRoomSize::Large:
		return 1200.0f;
	default:
		return 800.0f;
	}
}

void URogueVaniaPCGBiomGenerator::EnsureGeneratorsExist()
{
	if (!TunnelGenerator)
	{
		TunnelGenerator = NewObject<URogueVaniaPCGTunnelGenerator>(this);
	}

	if (!RoomGenerator)
	{
		RoomGenerator = NewObject<URogueVaniaPCGRoomGenerator>(this);
	}
}
