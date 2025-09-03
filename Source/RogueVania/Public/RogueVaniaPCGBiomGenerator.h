
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGPoint.h"
#include "URogueVaniaPCGTunnelGenerator.h"
#include "RogueVaniaPCGRoomGenerator.h"
#include "RogueVaniaPCGBiomGenerator.generated.h"

// Structure to define a single node in our Biom layout
USTRUCT(BlueprintType)
struct FRogueVaniaBiomNode
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biom")
    ERogueVaniaRoomSize RoomSize = ERogueVaniaRoomSize::Small;

    // Location of the room relative to the start of the biom
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biom")
    FVector RelativeLocation = FVector::ZeroVector;
};

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaPCGBiomGenerator : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biom")
    TArray<FRogueVaniaBiomNode> BiomNodes;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Generators")
    class URogueVaniaPCGTunnelGenerator* TunnelGenerator;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Generators")
    class URogueVaniaPCGRoomGenerator* RoomGenerator;

    UFUNCTION(BlueprintCallable, Category = "PCG")
    void GenerateBiom(const FVector& StartLocation, TArray<FPCGPoint>& OutRoomPoints, TArray<FPCGPoint>& OutTunnelPoints);

private:
    // Helper methods for dynamic generation
    void GenerateRandomRoomPositions(const FVector& StartLocation, TArray<FVector>& OutPositions);
    void GenerateTunnelsBetweenRooms(const TArray<FVector>& RoomPositions, TArray<FPCGPoint>& OutTunnelPoints);
    void GenerateTunnelPath(const FVector& StartPos, const FVector& EndPos, TArray<FPCGPoint>& OutTunnelPoints);
    FBox GetBoundsForRoomSize(ERogueVaniaRoomSize RoomSize);
};