// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AChunkActor.generated.h"

UCLASS()
class ROGUEVANIA_API AAChunkActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAChunkActor();

protected:

	virtual void BeginPlay() override;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* ChunkMeshComponent;

	void SetChunkMesh(UStaticMesh* Mesh);

};
