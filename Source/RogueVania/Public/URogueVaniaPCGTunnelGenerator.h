// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"
#include "PCGComponent.h"
#include "PCGPoint.h"
#include "URogueVaniaPCGTunnelGenerator.generated.h"

/**
 * 
 */
 // Enum to define the type of tunnel generation
UENUM(BlueprintType)
enum class ERogueVaniaTunnelType : uint8
{
	RandomWalk UMETA(DisplayName = "Random Walk"),
	// You can add more types like A* pathfinding later
};

UCLASS()
class ROGUEVANIA_API URogueVaniaPCGTunnelGenerator : public UObject
{
	GENERATED_BODY()

public:
	// Generates the tunnel spline points from a start to an end location.
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateTunnelPoints(
		const FVector& StartLocation,
		const FVector& EndLocation,
		float StepDistance = 100.0f,
		float MaxDeviation = 50.0f,
		float NoiseScale = 0.05f
	);

private:
	// Internal helper function for random walk with noise
	FVector GetNextStep(
		const FVector& CurrentLocation,
		const FVector& TargetLocation,
		float MaxDeviation,
		float NoiseScale,
		float RandomSeed
	);
};
