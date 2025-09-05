
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"
#include "PCGComponent.h"
#include "PCGPoint.h"
#include "URogueVaniaPCGTunnelGenerator.generated.h"

// Enum to define the type of tunnel generation
UENUM(BlueprintType)
enum class ERogueVaniaTunnelType : uint8
{
	RandomWalk UMETA(DisplayName = "Random Walk"),
	StraightLine UMETA(DisplayName = "Straight Line"),
	LShape UMETA(DisplayName = "L-Shape"),
	// You can add more types like A* pathfinding later
};

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API URogueVaniaPCGTunnelGenerator : public UObject
{
	GENERATED_BODY()

public:
	// Constructor
	URogueVaniaPCGTunnelGenerator();

	// Main tunnel generation function with enhanced parameters
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateTunnelPoints(
		const FVector& StartLocation,
		const FVector& EndLocation,
		float StepDistance = 100.0f,
		float MaxDeviation = 50.0f,
		float NoiseScale = 0.05f
	);

	// Enhanced tunnel generation with more options
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateAdvancedTunnelPoints(
		const FVector& StartLocation,
		const FVector& EndLocation,
		ERogueVaniaTunnelType TunnelType = ERogueVaniaTunnelType::RandomWalk,
		float StepDistance = 100.0f,
		float MaxDeviation = 50.0f,
		float NoiseScale = 0.05f,
		float TunnelWidth = 200.0f,
		float TunnelHeight = 200.0f,
		int32 RandomSeed = -1
	);

	// Generate multiple tunnel segments (useful for complex paths)
	UFUNCTION(BlueprintCallable, Category = "PCG|Generation")
	TArray<FPCGPoint> GenerateMultiSegmentTunnel(
		const TArray<FVector>& WayPoints,
		float StepDistance = 100.0f,
		float MaxDeviation = 50.0f,
		float NoiseScale = 0.05f,
		float TunnelWidth = 200.0f
	);

	// Configurable properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tunnel Settings")
	float DefaultTunnelWidth = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tunnel Settings")
	float DefaultTunnelHeight = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tunnel Settings")
	float DefaultStepDistance = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tunnel Settings")
	float DefaultMaxDeviation = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tunnel Settings")
	float DefaultNoiseScale = 0.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tunnel Settings")
	ERogueVaniaTunnelType DefaultTunnelType = ERogueVaniaTunnelType::RandomWalk;

private:
	// Internal helper function for random walk with noise
	FVector GetNextStep(
		const FVector& CurrentLocation,
		const FVector& TargetLocation,
		float MaxDeviation,
		float NoiseScale,
		float RandomSeed
	);

	// Generate straight line tunnel
	TArray<FPCGPoint> GenerateStraightTunnel(
		const FVector& StartLocation,
		const FVector& EndLocation,
		float StepDistance,
		float TunnelWidth,
		float TunnelHeight
	);

	// Generate L-shaped tunnel
	TArray<FPCGPoint> GenerateLShapeTunnel(
		const FVector& StartLocation,
		const FVector& EndLocation,
		float StepDistance,
		float TunnelWidth,
		float TunnelHeight
	);

	// Helper to create a PCG point with proper settings
	FPCGPoint CreateTunnelPoint(
		const FVector& Location,
		float TunnelWidth = 200.0f,
		float TunnelHeight = 200.0f,
		float Density = 1.0f
	);

	// Random stream for consistent randomization
	FRandomStream RandomStream;
};
