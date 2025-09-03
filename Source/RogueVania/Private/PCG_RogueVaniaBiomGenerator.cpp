
#include "PCG_RogueVaniaBiomGenerator.h"
#include "PCGContext.h"
#include "Data/PCGPointData.h"
#include "RogueVaniaPCGBiomGenerator.h"

UPCG_RogueVaniaBiomGeneratorSettings::UPCG_RogueVaniaBiomGeneratorSettings()
{
	// Set default biom nodes
	BiomNodes.Add(FRogueVaniaBiomNode());
	BiomNodes[0].RoomSize = ERogueVaniaRoomSize::Small;
	BiomNodes[0].RelativeLocation = FVector::ZeroVector;
}

FPCGElementPtr UPCG_RogueVaniaBiomGeneratorSettings::CreateElement() const
{
	return MakeShared<FPCG_RogueVaniaBiomGeneratorElement>();
}

TArray<FPCGPinProperties> UPCG_RogueVaniaBiomGeneratorSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultInputLabel, EPCGDataType::Spatial);
	return PinProperties;
}

TArray<FPCGPinProperties> UPCG_RogueVaniaBiomGeneratorSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(FName("Rooms"), EPCGDataType::Point);
	PinProperties.Emplace(FName("Tunnels"), EPCGDataType::Point);
	return PinProperties;
}

bool FPCG_RogueVaniaBiomGeneratorElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCG_RogueVaniaBiomGeneratorElement::Execute);

	const UPCG_RogueVaniaBiomGeneratorSettings* Settings = Context->GetInputSettings<UPCG_RogueVaniaBiomGeneratorSettings>();
	check(Settings);

	// Create the biom generator
	URogueVaniaPCGBiomGenerator* BiomGenerator = NewObject<URogueVaniaPCGBiomGenerator>();
	BiomGenerator->BiomNodes = Settings->BiomNodes;

	// Generate the biom
	TArray<FPCGPoint> RoomPoints;
	TArray<FPCGPoint> TunnelPoints;
	BiomGenerator->GenerateBiom(Settings->StartLocation, RoomPoints, TunnelPoints);

	// Create output data for rooms
	UPCGPointData* RoomData = NewObject<UPCGPointData>();
	RoomData->GetMutablePoints() = RoomPoints;

	// Create output data for tunnels  
	UPCGPointData* TunnelData = NewObject<UPCGPointData>();
	TunnelData->GetMutablePoints() = TunnelPoints;

	// Add to output
	FPCGTaggedData RoomTaggedData;
	RoomTaggedData.Data = RoomData;
	RoomTaggedData.Pin = FName("Rooms");
	Context->OutputData.TaggedData.Add(RoomTaggedData);

	FPCGTaggedData TunnelTaggedData;
	TunnelTaggedData.Data = TunnelData;
	TunnelTaggedData.Pin = FName("Tunnels");
	Context->OutputData.TaggedData.Add(TunnelTaggedData);

	return true;
}
