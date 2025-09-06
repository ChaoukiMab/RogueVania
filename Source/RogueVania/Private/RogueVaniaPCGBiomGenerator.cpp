#include "RogueVaniaPCGBiomGenerator.h"
#include "URogueVaniaPCGTunnelGenerator.h"
#include "RogueVaniaPCGRoomGenerator.h"
#include "Engine/Engine.h"

URogueVaniaPCGBiomGenerator::URogueVaniaPCGBiomGenerator()
{
	// Initialize generators
	TunnelGenerator = NewObject<URogueVaniaPCGTunnelGenerator>(this);
	RoomGenerator = NewObject<URogueVaniaPCGRoomGenerator>(this);
}

void URogueVaniaPCGBiomGenerator::GenerateBiom(
	const FVector& StartLocation,
	TArray<FPCGPoint>& OutRoomPoints,
	TArray<FPCGPoint>& OutTunnelPoints)
{
	EnsureGeneratorsExist();

	OutRoomPoints.Empty();
	OutTunnelPoints.Empty();

	if (!RoomGenerator || !TunnelGenerator)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create generators"));
		return;
	}

	TArray<FVector> RoomPositions;
	TArray<ERogueVaniaRoomSize> RoomSizes;

	// Fully procedural layout
	GenerateProceduralRoomPositions(StartLocation, RoomPositions, RoomSizes);

	// Generate all rooms
	for (int32 i = 0; i < RoomPositions.Num(); i++)
	{
		const FVector& RoomLocation = RoomPositions[i];
		ERogueVaniaRoomSize Size = RoomSizes[i];

		TArray<FPCGPoint> RoomPoints = RoomGenerator->GenerateRoomPoints(
			Size,
			RoomLocation,
			RoomGenerator->DefaultNoiseScale
		);

		OutRoomPoints.Append(RoomPoints);

		UE_LOG(LogTemp, Log, TEXT("Generated room at %s with %d points"),
			*RoomLocation.ToString(), RoomPoints.Num());
	}

	// Connect with tunnels
	ConnectRoomsWithTunnels(RoomPositions, OutTunnelPoints);

	UE_LOG(LogTemp, Log, TEXT("Biom generation complete: %d room points, %d tunnel points"),
		OutRoomPoints.Num(), OutTunnelPoints.Num());
}

// --- Procedural room placement ---
void URogueVaniaPCGBiomGenerator::GenerateProceduralRoomPositions(
	const FVector& StartLocation,
	TArray<FVector>& OutPositions,
	TArray<ERogueVaniaRoomSize>& OutSizes)
{
	OutPositions.Empty();
	OutSizes.Empty();

	FVector CurrentLocation = StartLocation;

	// Start with an up or down bias
	float VerticalBias = FMath::RandBool() ? 1.0f : -1.0f;
	int32 StepsUntilSwitch = FMath::RandRange(2, 5);

	for (int32 i = 0; i < NumRooms; i++)
	{
		// Pick random room size
		ERogueVaniaRoomSize RoomSize = static_cast<ERogueVaniaRoomSize>(FMath::RandRange(0, 2));
		float Spacing = CalculateRoomSpacing(RoomSize);

		OutPositions.Add(CurrentLocation);
		OutSizes.Add(RoomSize);

		// Random offset with vertical bias
		FVector RandomOffset = FVector(
			Spacing,
			FMath::RandRange(-Spacing * 0.5f, Spacing * 0.5f),
			VerticalBias * FMath::RandRange(Spacing * 0.3f, Spacing * 0.8f)
		);

		CurrentLocation += RandomOffset;

		StepsUntilSwitch--;
		if (StepsUntilSwitch <= 0)
		{
			VerticalBias *= -1.0f; // flip up/down
			StepsUntilSwitch = FMath::RandRange(2, 5);
		}
	}
}

// --- Tunnels ---
void URogueVaniaPCGBiomGenerator::ConnectRoomsWithTunnels(
	const TArray<FVector>& RoomPositions,
	TArray<FPCGPoint>& OutTunnelPoints)
{
	if (!TunnelGenerator || RoomPositions.Num() < 2)
	{
		return;
	}

	for (int32 i = 0; i < RoomPositions.Num() - 1; i++)
	{
		TArray<FPCGPoint> TunnelSegment = TunnelGenerator->GenerateAdvancedTunnelPoints(
			RoomPositions[i],
			RoomPositions[i + 1],
			ERogueVaniaTunnelType::RandomWalk,
			100.0f, // Step distance
			50.0f,  // Max deviation
			0.05f   // Noise scale
		);

		OutTunnelPoints.Append(TunnelSegment);

		UE_LOG(LogTemp, Log, TEXT("Generated tunnel from %s to %s with %d points"),
			*RoomPositions[i].ToString(), *RoomPositions[i + 1].ToString(), TunnelSegment.Num());
	}
}

// --- Utilities ---
float URogueVaniaPCGBiomGenerator::CalculateRoomSpacing(ERogueVaniaRoomSize RoomSize)
{
	switch (RoomSize)
	{
	case ERogueVaniaRoomSize::Small:  return 500.0f;
	case ERogueVaniaRoomSize::Medium: return 800.0f;
	case ERogueVaniaRoomSize::Large:  return 1200.0f;
	default:                          return 800.0f;
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
