#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGPoint.h"
#include "URogueVaniaPCGTunnelGenerator.h"
#include "RogueVaniaPCGRoomGenerator.h"
#include "RogueVaniaPCGBiomGenerator.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaPCGBiomGenerator : public UObject
{
	GENERATED_BODY()

public:
	URogueVaniaPCGBiomGenerator();

	/** Generator instances */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Generators")
	class URogueVaniaPCGTunnelGenerator* TunnelGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Generators")
	class URogueVaniaPCGRoomGenerator* RoomGenerator;

	/** Number of rooms in this biom */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biom")
	int32 NumRooms = 6;

	/** Main biom generation entry point */
	UFUNCTION(BlueprintCallable, Category = "PCG")
	void GenerateBiom(const FVector& StartLocation, TArray<FPCGPoint>& OutRoomPoints, TArray<FPCGPoint>& OutTunnelPoints);

private:
	// Procedural layout
	void GenerateProceduralRoomPositions(const FVector& StartLocation, TArray<FVector>& OutPositions, TArray<ERogueVaniaRoomSize>& OutSizes);

	// Connect rooms with tunnels
	void ConnectRoomsWithTunnels(const TArray<FVector>& RoomPositions, TArray<FPCGPoint>& OutTunnelPoints);

	// Utility: size-based spacing
	float CalculateRoomSpacing(ERogueVaniaRoomSize RoomSize);

	// Safety: ensure generators are alive
	void EnsureGeneratorsExist();
};
