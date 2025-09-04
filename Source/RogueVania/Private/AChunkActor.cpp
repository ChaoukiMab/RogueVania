// Fill out your copyright notice in the Description page of Project Settings.


#include "AChunkActor.h"

// Sets default values
AAChunkActor::AAChunkActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ChunkMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChunkMeshComponent"));
	RootComponent = ChunkMeshComponent;
}

// Called when the game starts or when spawned
void AAChunkActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAChunkActor::SetChunkMesh(UStaticMesh* Mesh)
{
	if (ChunkMeshComponent && Mesh)
	{
		ChunkMeshComponent->SetStaticMesh(Mesh);
	}
}

