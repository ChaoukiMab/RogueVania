#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCGPoint.h"
#include "RogueVaniaPCGBiomGenerator.h"
#include "RogueVaniaCaveMeshGenerator.h"
#include "Components/StaticMeshComponent.h"
#include "RogueVaniaCaveTestActor.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API ARogueVaniaCaveTestActor : public AActor
{
	GENERATED_BODY()

public:
	ARogueVaniaCaveTestActor();

protected:
	virtual void BeginPlay() override;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* CaveMeshComponent;

	// Cave Generation Parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cave Generation")
	float VoxelSize = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cave Generation")
	int32 SmoothingIterations = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cave Generation")
	bool bAutoGenerateOnStart = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cave Generation")
	bool bShowDebugInfo = true;

	// Procedural Biome Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome Settings")
	int32 NumRooms = 6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome Settings")
	FVector StartLocation = FVector::ZeroVector;

public:
	// Generate cave mesh
	UFUNCTION(BlueprintCallable, Category = "Cave Generation")
	void GenerateCave();

	// Clear current cave
	UFUNCTION(BlueprintCallable, Category = "Cave Generation")
	void ClearCave();

	// Regenerate with new parameters
	UFUNCTION(BlueprintCallable, Category = "Cave Generation")
	void RegenerateCave();

private:
	UPROPERTY()
	URogueVaniaPCGBiomGenerator* BiomGenerator;

	UPROPERTY()
	URogueVaniaCaveMeshGenerator* MeshGenerator;

	// Internal data
	TArray<FPCGPoint> CachedRoomPoints;
	TArray<FPCGPoint> CachedTunnelPoints;

	// Helper functions
	void UpdateCaveMesh();
	void DrawDebugPoints(const TArray<FPCGPoint>& RoomPoints, const TArray<FPCGPoint>& TunnelPoints);
};
