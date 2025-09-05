#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGNode.h"
#include "RogueVaniaPCGBiomGenerator.h"
#include "PCG_RogueVaniaCaveGenerator.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ROGUEVANIA_API UPCG_RogueVaniaCaveGeneratorSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	UPCG_RogueVaniaCaveGeneratorSettings();

	// Cave generation parameters
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cave Generation")
	float VoxelSize = 100.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cave Generation")
	int32 SmoothingIterations = 3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cave Generation")
	bool bOutputDebugPoints = false;

	// Biome configuration
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Settings")
	TArray<FRogueVaniaBiomNode> BiomNodes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biome Settings")
	FVector StartLocation = FVector::ZeroVector;

	//~Begin UPCGSettings interface
#if WITH_EDITOR
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PCGRogueVaniaCaveGeneratorSettings", "NodeTitle", "RogueVania Cave Generator"); }
	virtual FText GetNodeTooltipText() const override { return NSLOCTEXT("PCGRogueVaniaCaveGeneratorSettings", "NodeTooltip", "Generates complete cave systems with rooms and tunnels"); }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings interface
};

struct ROGUEVANIA_API FPCG_RogueVaniaCaveGeneratorElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
