
#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGNode.h"
#include "RogueVaniaPCGBiomGenerator.h"
#include "PCG_RogueVaniaBiomGenerator.generated.h"

// Settings class - inherits from UPCGSettings
UCLASS(BlueprintType, ClassGroup = (Procedural))
class ROGUEVANIA_API UPCG_RogueVaniaBiomGeneratorSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	UPCG_RogueVaniaBiomGeneratorSettings();

	// Required PCG overrides
	virtual FPCGElementPtr CreateElement() const override;

#if WITH_EDITOR
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PCGRogueVaniaBiomGeneratorSettings", "NodeTitle", "RogueVania Biom Generator"); }
	virtual FText GetNodeTooltipText() const override { return NSLOCTEXT("PCGRogueVaniaBiomGeneratorSettings", "NodeTooltip", "Generates rooms and tunnels for RogueVania biom"); }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;

public:
	// Your biom configuration - these appear as properties in the editor
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biom Settings")
	TArray<FRogueVaniaBiomNode> BiomNodes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Biom Settings")
	FVector StartLocation = FVector::ZeroVector;
};

// Element class - inherits from IPCGElement  
class ROGUEVANIA_API FPCG_RogueVaniaBiomGeneratorElement : public IPCGElement
{
public:
	// Remove the Initialize method completely - it's not needed in modern PCG
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
