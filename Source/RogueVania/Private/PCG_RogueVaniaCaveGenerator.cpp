#include "PCG_RogueVaniaCaveGenerator.h"
#include "PCGContext.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSurfaceData.h"
#include "RogueVaniaCaveMeshGenerator.h"
#include "RogueVaniaPCGBiomGenerator.h"
#include "Engine/StaticMesh.h"

UPCG_RogueVaniaCaveGeneratorSettings::UPCG_RogueVaniaCaveGeneratorSettings()
{
	// Set default biome configuration
	BiomNodes.Add(FRogueVaniaBiomNode());
	BiomNodes[0].RoomSize = ERogueVaniaRoomSize::Medium;
	BiomNodes[0].RelativeLocation = FVector::ZeroVector;

	// Default settings
	VoxelSize = 50.0f;
	SmoothingIterations = 3;
	bOutputDebugPoints = false;
	StartLocation = FVector::ZeroVector;
}

FPCGElementPtr UPCG_RogueVaniaCaveGeneratorSettings::CreateElement() const
{
	return MakeShared<FPCG_RogueVaniaCaveGeneratorElement>();
}

TArray<FPCGPinProperties> UPCG_RogueVaniaCaveGeneratorSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultInputLabel, EPCGDataType::Spatial);
	return PinProperties;
}

TArray<FPCGPinProperties> UPCG_RogueVaniaCaveGeneratorSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(FName("CaveMesh"), EPCGDataType::Surface);

	if (bOutputDebugPoints)
	{
		PinProperties.Emplace(FName("RoomPoints"), EPCGDataType::Point);
		PinProperties.Emplace(FName("TunnelPoints"), EPCGDataType::Point);
	}

	return PinProperties;
}

bool FPCG_RogueVaniaCaveGeneratorElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCG_RogueVaniaCaveGeneratorElement::Execute);

	const UPCG_RogueVaniaCaveGeneratorSettings* Settings = Context->GetInputSettings<UPCG_RogueVaniaCaveGeneratorSettings>();
	check(Settings);

	// Create the biome generator
	URogueVaniaPCGBiomGenerator* BiomGenerator = NewObject<URogueVaniaPCGBiomGenerator>();
	BiomGenerator->BiomNodes = Settings->BiomNodes;

	// Create the mesh generator
	URogueVaniaCaveMeshGenerator* MeshGenerator = NewObject<URogueVaniaCaveMeshGenerator>();

	// Generate biome data (rooms and tunnels)
	TArray<FPCGPoint> RoomPoints;
	TArray<FPCGPoint> TunnelPoints;

	FVector GenerationLocation = Settings->StartLocation;

	// If we have input data, use the first point's location
	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);
	if (Inputs.Num() > 0)
	{
		const UPCGPointData* InputPointData = Cast<UPCGPointData>(Inputs[0].Data);
		if (InputPointData && InputPointData->GetPoints().Num() > 0)
		{
			GenerationLocation = InputPointData->GetPoints()[0].Transform.GetLocation();
		}
	}

	// Generate the biome layout
	BiomGenerator->GenerateBiom(GenerationLocation, RoomPoints, TunnelPoints);

	UE_LOG(LogTemp, Log, TEXT("Generated %d room points and %d tunnel points"),
		RoomPoints.Num(), TunnelPoints.Num());

	// Generate the cave mesh from the points
	UStaticMesh* CaveMesh = MeshGenerator->GenerateCaveMeshFromPoints(
		RoomPoints,
		TunnelPoints,
		Settings->VoxelSize,
		Settings->SmoothingIterations
	);

	// Create output data
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	// Output the cave mesh
	if (CaveMesh)
	{
		// Create point data with mesh instance
		UPCGPointData* MeshPointData = NewObject<UPCGPointData>();

		// Create a single point at the generation location
		TArray<FPCGPoint>& MeshPoints = MeshPointData->GetMutablePoints();
		FPCGPoint MeshPoint;
		MeshPoint.Transform = FTransform(FQuat::Identity, GenerationLocation, FVector::OneVector);
		MeshPoint.Density = 1.0f;
		MeshPoint.Color = FVector4(1.0f, 1.0f, 1.0f, 1.0f);

		// Store the mesh reference in the point's metadata or use a custom approach
		MeshPoints.Add(MeshPoint);

		FPCGTaggedData& MeshOutput = Outputs.Emplace_GetRef();
		MeshOutput.Data = MeshPointData;
		MeshOutput.Pin = FName("CaveMesh");

		UE_LOG(LogTemp, Log, TEXT("Successfully generated cave mesh as point data"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to generate cave mesh"));
	}

	// Output debug points if requested
	if (Settings->bOutputDebugPoints)
	{
		// Output room points
		if (RoomPoints.Num() > 0)
		{
			UPCGPointData* RoomPointData = NewObject<UPCGPointData>();
			RoomPointData->GetMutablePoints() = RoomPoints;

			FPCGTaggedData& RoomOutput = Outputs.Emplace_GetRef();
			RoomOutput.Data = RoomPointData;
			RoomOutput.Pin = FName("RoomPoints");
		}

		// Output tunnel points
		if (TunnelPoints.Num() > 0)
		{
			UPCGPointData* TunnelPointData = NewObject<UPCGPointData>();
			TunnelPointData->GetMutablePoints() = TunnelPoints;

			FPCGTaggedData& TunnelOutput = Outputs.Emplace_GetRef();
			TunnelOutput.Data = TunnelPointData;
			TunnelOutput.Pin = FName("TunnelPoints");
		}
	}

	return true;
}
