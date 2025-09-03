// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"
#include "PCGPoint.h"
#include "RogueVaniaPCGRoomGenerator.generated.h"

/**
 * 
 */
 // Enum to define the size of the room
UENUM(BlueprintType)
enum class ERogueVaniaRoomSize : uint8
{
	Small UMETA(DisplayName = "Small"),
	Medium UMETA(DisplayName = "Medium"),
	Large UMETA(DisplayName = "Large"),
	Huge UMETA(DisplayName = "Huge")
};

UCLASS()
class ROGUEVANIA_API URogueVaniaPCGRoomGenerator : public UObject
{
	GENERATED_BODY()

public:
	// Generates the points that define the room's shape
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateRoomPoints(
		ERogueVaniaRoomSize RoomSize,
		const FVector& CenterLocation,
		float NoiseScale = 0.05f
	);

private:
	// Helper function to get the base size based on the enum
	FVector GetRoomDimensions(ERogueVaniaRoomSize RoomSize);
};