// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATunnelGenerator.generated.h"

UCLASS()
class ROGUEVANIA_API AATunnelGenerator : public AActor
{
	GENERATED_BODY()
	
	class USplineComponent;
	class UPCGComponent;

public:	
	// Sets default values for this actor's properties
	AATunnelGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// This function is called in the editor when a property is changed
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// The function to generate the tunnel, exposed to Blueprints
	UFUNCTION(BlueprintCallable, Category = "PCG Tunnel")
	void GenerateTunnel(FVector StartLocation, FVector EndLocation);

protected:
	// PCG Component to handle the procedural generation
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UPCGComponent* PCGComponent;

	// Spline Component to define the tunnel path
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USplineComponent* TunnelSpline;
};
