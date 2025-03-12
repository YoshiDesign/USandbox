// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingThing.generated.h"

UCLASS()
class LEARNING4_API AMovingThing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingThing();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere) int32 velocity = 1;
	UPROPERTY(EditAnywhere) bool enemy = true;
	UPROPERTY(EditAnywhere) float intensity = 1.0f;
};
