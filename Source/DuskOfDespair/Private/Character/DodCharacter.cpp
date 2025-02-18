// Copyright Fireteam Interactive


#include "Character/DodCharacter.h"


ADodCharacter::ADodCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ADodCharacter::BeginPlay()
{
    Super::BeginPlay();
    
}

void ADodCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ADodCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

