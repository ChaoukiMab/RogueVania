// Fill out your copyright notice in the Description page of Project Settings.

#include "UProceduralGenerationManager.h"

// Sets default values for this component's properties
UUProceduralGenerationManager::UUProceduralGenerationManager()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UUProceduralGenerationManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UUProceduralGenerationManager::GenerateLevel(int32 LevelIndex)
{
	// 1. Clear existing level content
	for (AAChunkActor* SpawnedChunk : SpawnedChunks)
	{
		if (SpawnedChunk)
		{
			SpawnedChunk->Destroy();
		}
	}
	SpawnedChunks.Empty();

	if (AvailableChunks.Num() > 0)
	{
		// Get the first UChunkData asset from the array.
		// Make sure DA_Corridor_01 is the first element in the array in your GameMode Blueprint.
		UUChunkData* CorridorChunkData = AvailableChunks[0];

		// Check if the data asset and its associated Blueprint are valid.
		if (CorridorChunkData && CorridorChunkData->ChunkMesh)
		{
			// Spawn the actor defined in the ChunkMesh property.
			AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(CorridorChunkData->ChunkMesh, FVector::ZeroVector, FRotator::ZeroRotator);

			UE_LOG(LogTemp, Log, TEXT("Successfully spawned a test corridor chunk."));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("CorridorChunkData is not valid or ChunkMesh is not set."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No chunks available in AvailableChunks array."));
	}
}
