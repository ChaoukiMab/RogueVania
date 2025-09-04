// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UChunkData.generated.h"

/**
 * 
 */
UCLASS()
class ROGUEVANIA_API UUChunkData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Chunk")
	TArray<FVector> ConnectionPoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Chunk")
	TSubclassOf<AActor> ChunkMesh; // Use TSubclassOf for a Blueprint or C++ class
};