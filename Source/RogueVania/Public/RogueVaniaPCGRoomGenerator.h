// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGPoint.h"
#include "RogueVaniaPCGRoomGenerator.generated.h"

// Enum to define room sizes
UENUM(BlueprintType)
enum class ERogueVaniaRoomSize : uint8
{
	Small UMETA(DisplayName = "Small"),
	Medium UMETA(DisplayName = "Medium"),
	Large UMETA(DisplayName = "Large")
};

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaPCGRoomGenerator : public UObject
{
	GENERATED_BODY()

public:
	URogueVaniaPCGRoomGenerator();

	// Main room generation function
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateRoomPoints(
		ERogueVaniaRoomSize RoomSize,
		const FVector& CenterLocation,
		float NoiseScale = 0.05f
	);

	// Generate rectangular room
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateRectangularRoom(
		const FVector& CenterLocation,
		float Width,
		float Height,
		float Depth,
		float PointSpacing = 50.0f
	);

	// Generate circular room
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateCircularRoom(
		const FVector& CenterLocation,
		float Radius,
		float PointSpacing = 50.0f
	);

	// Generate organic shaped room with noise
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateOrganicRoom(
		const FVector& CenterLocation,
		float BaseRadius,
		float NoiseScale,
		float PointSpacing = 50.0f
	);

private:
	// Helper functions
	FVector2D GetRoomDimensions(ERogueVaniaRoomSize RoomSize);
	FPCGPoint CreateRoomPoint(const FVector& Location, float Density = 1.0f);

	// Random stream for consistent generation
	FRandomStream RandomStream;
};
