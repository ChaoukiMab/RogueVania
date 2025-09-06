#include "RogueVaniaCaveTestActor.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"

ARogueVaniaCaveTestActor::ARogueVaniaCaveTestActor()
{
	PrimaryActorTick.bCanEverTick = false;

	// Create mesh component
	CaveMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CaveMeshComponent"));
	RootComponent = CaveMeshComponent;

	// Create generators
	BiomGenerator = CreateDefaultSubobject<URogueVaniaPCGBiomGenerator>(TEXT("BiomGenerator"));
	MeshGenerator = CreateDefaultSubobject<URogueVaniaCaveMeshGenerator>(TEXT("MeshGenerator"));
}

void ARogueVaniaCaveTestActor::BeginPlay()
{
	Super::BeginPlay();

	if (bAutoGenerateOnStart)
	{
		GenerateCave();
	}
}

void ARogueVaniaCaveTestActor::GenerateCave()
{
	if (!BiomGenerator || !MeshGenerator)
	{
		UE_LOG(LogTemp, Error, TEXT("Cave generators not initialized!"));
		return;
	}

	// Pass NumRooms to biom generator
	BiomGenerator->NumRooms = NumRooms;

	UE_LOG(LogTemp, Warning, TEXT("Generating cave at location: %s with %d rooms"),
		*GetActorLocation().ToString(), NumRooms);

	// Generate biome data
	TArray<FPCGPoint> RoomPoints;
	TArray<FPCGPoint> TunnelPoints;

	FVector GenerationLocation = GetActorLocation() + StartLocation;
	BiomGenerator->GenerateBiom(GenerationLocation, RoomPoints, TunnelPoints);

	if (bShowDebugInfo)
	{
		UE_LOG(LogTemp, Warning, TEXT("Generated %d room points and %d tunnel points"),
			RoomPoints.Num(), TunnelPoints.Num());

		DrawDebugPoints(RoomPoints, TunnelPoints);
	}

	// Cache points for regeneration
	CachedRoomPoints = RoomPoints;
	CachedTunnelPoints = TunnelPoints;

	// Generate cave mesh
	UStaticMesh* CaveMesh = MeshGenerator->GenerateCaveMeshFromPoints(
		RoomPoints,
		TunnelPoints,
		VoxelSize,
		SmoothingIterations
	);

	if (CaveMesh)
	{
		CaveMeshComponent->SetStaticMesh(CaveMesh);
		UE_LOG(LogTemp, Warning, TEXT("Cave mesh generated successfully!"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to generate cave mesh!"));
	}
}

void ARogueVaniaCaveTestActor::UpdateCaveMesh()
{
	if (CaveMeshComponent && CachedRoomPoints.Num() > 0)
	{
		UStaticMesh* GeneratedMesh = MeshGenerator->GenerateCaveMeshFromPoints(
			CachedRoomPoints,
			CachedTunnelPoints,
			VoxelSize,
			SmoothingIterations
		);

		if (GeneratedMesh)
		{
			CaveMeshComponent->SetStaticMesh(GeneratedMesh);

			// Apply material
			UMaterial* DefaultMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Game/World/Biom_One/CaveMaterials/CaveRooms/Materials/RoomsMaterialProto"));
			if (DefaultMaterial)
			{
				CaveMeshComponent->SetMaterial(0, DefaultMaterial);
			}

			UE_LOG(LogTemp, Warning, TEXT("Cave mesh updated with material"));
		}
	}
}

void ARogueVaniaCaveTestActor::ClearCave()
{
	if (CaveMeshComponent)
	{
		CaveMeshComponent->SetStaticMesh(nullptr);
	}

	if (GetWorld())
	{
		FlushDebugStrings(GetWorld());
		FlushPersistentDebugLines(GetWorld());
	}

	UE_LOG(LogTemp, Warning, TEXT("Cave cleared"));
}

void ARogueVaniaCaveTestActor::RegenerateCave()
{
	ClearCave();
	GenerateCave();
}

void ARogueVaniaCaveTestActor::DrawDebugPoints(const TArray<FPCGPoint>& RoomPoints, const TArray<FPCGPoint>& TunnelPoints)
{
	if (!GetWorld() || !bShowDebugInfo)
	{
		return;
	}

	// Rooms in blue
	for (const FPCGPoint& Point : RoomPoints)
	{
		FVector Location = Point.Transform.GetLocation();
		FVector Extents = Point.GetExtents();

		DrawDebugBox(GetWorld(), Location, Extents, FColor::Blue, true, 30.0f, 0, 5.0f);
	}

	// Tunnels in green
	for (int32 i = 0; i < TunnelPoints.Num(); i++)
	{
		FVector Location = TunnelPoints[i].Transform.GetLocation();
		FVector Extents = TunnelPoints[i].GetExtents();

		DrawDebugSphere(GetWorld(), Location, Extents.X, 12, FColor::Green, true, 30.0f, 0, 3.0f);

		if (i > 0)
		{
			FVector PrevLocation = TunnelPoints[i - 1].Transform.GetLocation();
			DrawDebugLine(GetWorld(), PrevLocation, Location, FColor::Yellow, true, 30.0f, 0, 8.0f);
		}
	}
}
