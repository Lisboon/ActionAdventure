// Fill out your copyright notice in the Description page of Project Settings.


#include "INCharacter.h"

// Sets default values
AINCharacter::AINCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AINCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AINCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AINCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

