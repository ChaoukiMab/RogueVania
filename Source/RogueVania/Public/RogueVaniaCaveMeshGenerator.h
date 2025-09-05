#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGPoint.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshDescription.h"
#include "MeshDescription.h"
#include "StaticMeshAttributes.h"
#include "StaticMeshOperations.h"
#include "RogueVaniaCaveMeshGenerator.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaCaveMeshGenerator : public UObject
{
    GENERATED_BODY()

public:
    URogueVaniaCaveMeshGenerator();

    // Main function to generate cave mesh from room and tunnel points
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    UStaticMesh* GenerateCaveMeshFromPoints(
        const TArray<FPCGPoint>& RoomPoints,
        const TArray<FPCGPoint>& TunnelPoints,
        float VoxelSize = 50.0f,
        float SmoothingIterations = 3
    );

    // Generate room cavity in voxel grid
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    void GenerateRoomCavity(
        TArray<float>& VoxelGrid,
        const FPCGPoint& RoomPoint,
        float VoxelSize,
        FIntVector GridDimensions,
        const FVector& GridOrigin
    );

    // Generate tunnel cavity in voxel grid
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    void GenerateTunnelCavity(
        TArray<float>& VoxelGrid,
        const TArray<FPCGPoint>& TunnelPoints,
        float VoxelSize,
        FIntVector GridDimensions,
        const FVector& GridOrigin
    );

    // Smooth the cave mesh using cellular automata
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    void SmoothCaveMesh(
        TArray<float>& VoxelGrid,
        FIntVector GridDimensions,
        int32 Iterations = 3
    );

private:
    // Helper functions
    FIntVector WorldToGrid(const FVector& WorldPos, float VoxelSize, const FVector& GridOrigin);
    FVector GridToWorld(const FIntVector& GridPos, float VoxelSize, const FVector& GridOrigin);
    bool IsValidGridPosition(const FIntVector& GridPos, const FIntVector& GridDimensions);

    // Marching cubes implementation for mesh generation
    void GenerateMeshFromVoxels(const TArray<float>& VoxelGrid, FIntVector GridDimensions, UStaticMesh* OutMesh);

    // Generate quad face for mesh
    // Mesh generation helper functions
    void GenerateQuadFace(
        const FVector& VoxelPos,
        const FIntVector& Direction,
        int32 FaceIndex,
        TArray<FVector>& Vertices,
        TArray<int32>& Triangles,
        TArray<FVector>& Normals,
        TArray<FVector2D>& UVs
    );

    void PopulateMeshDescription(
        FMeshDescription* MeshDescription,
        const TArray<FVector>& Vertices,
        const TArray<int32>& Triangles,
        const TArray<FVector>& Normals,
        const TArray<FVector2D>& UVs
    );
};