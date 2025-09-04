// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UChunkData.h"
#include "AChunkActor.h"
#include "Kismet/GameplayStatics.h"
#include "UProceduralGenerationManager.generated.h"

class UUChunkData;
class AAChunkActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROGUEVANIA_API UUProceduralGenerationManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUProceduralGenerationManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Procedural Generation")
	void GenerateLevel(int32 LevelIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Procedural Generation")
	TArray<UUChunkData*> AvailableChunks;

private:
	TArray<AAChunkActor*> SpawnedChunks;

		
};
