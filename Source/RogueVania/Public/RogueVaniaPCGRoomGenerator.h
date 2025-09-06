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

	// Main room generation function (currently always organic)
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateRoomPoints(
		ERogueVaniaRoomSize RoomSize,
		const FVector& CenterLocation,
		float NoiseScale = -1.0f // -1 means "use default"
	);

	// --- Additional Room Types (kept for future use) ---
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation|Legacy")
	TArray<FPCGPoint> GenerateRectangularRoom(
		const FVector& CenterLocation,
		float Width,
		float Height,
		float Depth,
		float PointSpacing = 50.0f
	);

	UFUNCTION(BlueprintCallable, Category = "PCG|Generation|Legacy")
	TArray<FPCGPoint> GenerateCircularRoom(
		const FVector& CenterLocation,
		float Radius,
		float PointSpacing = 50.0f
	);

	// --- Core Organic Room Generation ---
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateOrganicRoom(
		const FVector& CenterLocation,
		float BaseRadius,
		float NoiseScale = -1.0f, // -1 means "use default"
		float PointSpacing = 50.0f
	);

	/** Default noise scale for organic rooms (can be tweaked in editor) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Settings")
	float DefaultNoiseScale = 0.05f;

	/** Default spacing between PCG points (can be tweaked in editor) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Settings")
	float DefaultPointSpacing = 50.0f;

private:
	// Helpers
	FVector GetRoomDimensions(ERogueVaniaRoomSize RoomSize);
	FPCGPoint CreateRoomPoint(const FVector& Location, float PointSpacing, float Density = 1.0f);

	FRandomStream RandomStream;
};

