// Copyright Fireteam Interactive


#include "Character/DodEnemy.h"


ADodEnemy::ADodEnemy()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ADodEnemy::BeginPlay()
{
    Super::BeginPlay();
    
}

void ADodEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ADodEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

