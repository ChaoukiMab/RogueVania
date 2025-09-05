#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGPoint.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshDescription.h"
#include "MeshDescription.h"
#include "StaticMeshAttributes.h"
#include "RogueVaniaCaveMeshGenerator.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaCaveMeshGenerator : public UObject
{
    GENERATED_BODY()

public:
    URogueVaniaCaveMeshGenerator();

    // Generate cave mesh from points
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    UStaticMesh* GenerateCaveMeshFromPoints(
        const TArray<FPCGPoint>& RoomPoints,
        const TArray<FPCGPoint>& TunnelPoints,
        float VoxelSize = 100.0f,
        float SmoothingIterations = 3
    );

    // Generate room cavity at specific point
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    void GenerateRoomCavity(
        TArray<float>& VoxelGrid,
        const FPCGPoint& RoomPoint,
        float VoxelSize,
        FIntVector GridDimensions,
        const FVector& GridOrigin
    );

    // Generate tunnel cavity between points
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    void GenerateTunnelCavity(
        TArray<float>& VoxelGrid,
        const TArray<FPCGPoint>& TunnelPoints,
        float VoxelSize,
        FIntVector GridDimensions,
        const FVector& GridOrigin
    );

    // Smooth the cave mesh
    UFUNCTION(BlueprintCallable, Category = "Cave Generation")
    void SmoothCaveMesh(TArray<float>& VoxelGrid, FIntVector GridDimensions, int32 Iterations);

private:
    // Helper functions
    FIntVector WorldToGrid(const FVector& WorldPos, float VoxelSize, const FVector& GridOrigin);
    FVector GridToWorld(const FIntVector& GridPos, float VoxelSize, const FVector& GridOrigin);
    bool IsValidGridPosition(const FIntVector& GridPos, const FIntVector& GridDimensions);

    // Marching cubes implementation for mesh generation
    void GenerateMeshFromVoxels(const TArray<float>& VoxelGrid, FIntVector GridDimensions, UStaticMesh* OutMesh);

    // Generate quad face for mesh
    void GenerateQuadFace(
        const FVector& VoxelPos,
        const FIntVector& Direction,
        int32 FaceIndex,
        TArray<FVector>& Vertices,
        TArray<int32>& Triangles,
        TArray<FVector>& Normals,
        TArray<FVector2D>& UVs
    );

    // Populate mesh description
    void PopulateMeshDescription(
        FMeshDescription* MeshDescription,
        const TArray<FVector>& Vertices,
        const TArray<int32>& Triangles,
        const TArray<FVector>& Normals,
        const TArray<FVector2D>& UVs
    );
};