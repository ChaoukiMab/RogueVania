#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralMeshComponent.h"
#include "PCGPoint.h"
#include "RogueVaniaCaveMeshGenerator.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaCaveMeshGenerator : public UObject
{
	GENERATED_BODY()

public:
	/** Generates a cave mesh from voxelized room + tunnel points */
	UFUNCTION(BlueprintCallable, Category = "Cave Generation")
	UProceduralMeshComponent* GenerateCaveMeshFromPoints(
		AActor* Owner,
		const TArray<FPCGPoint>& RoomPoints,
		const TArray<FPCGPoint>& TunnelPoints,
		float VoxelSize,
		int32 SmoothingIterations = 3
	);

private:
	// --- Internal voxel grid representation ---
	struct FVoxelGrid
	{
		TArray<float> DensityValues;
		int32 SizeX, SizeY, SizeZ;
		FVector Origin;
		float VoxelSize;

		FVoxelGrid(int32 InSizeX, int32 InSizeY, int32 InSizeZ, const FVector& InOrigin, float InVoxelSize)
			: SizeX(InSizeX), SizeY(InSizeY), SizeZ(InSizeZ), Origin(InOrigin), VoxelSize(InVoxelSize)
		{
			DensityValues.Init(0.0f, SizeX * SizeY * SizeZ);
		}

		FORCEINLINE int32 Index(int32 X, int32 Y, int32 Z) const
		{
			return X + SizeX * (Y + SizeY * Z);
		}

		FORCEINLINE bool IsInside(int32 X, int32 Y, int32 Z) const
		{
			return (X >= 0 && X < SizeX && Y >= 0 && Y < SizeY && Z >= 0 && Z < SizeZ);
		}
	};

	// --- Internal steps ---
	void RasterizePointsToGrid(const TArray<FPCGPoint>& Points, FVoxelGrid& Grid);
	void SmoothGrid(FVoxelGrid& Grid, int32 Iterations);
	void GenerateMeshFromGrid(const FVoxelGrid& Grid, UProceduralMeshComponent* Mesh);

	// --- Marching Cubes ---
	FVector VertexInterp(float IsoLevel, const FVector& P1, const FVector& P2, float ValP1, float ValP2);
};
