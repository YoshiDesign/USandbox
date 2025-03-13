// Fill out your copyright notice in the Description page of Project Settings.


#include "My2DPawn.h"

// Sets default values
AMy2DPawn::AMy2DPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMy2DPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMy2DPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMy2DPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

