// Copyright Fireteam Interactive

#include "DotCharacterBase.h"

ADotCharacterBase::ADotCharacterBase()
{

    PrimaryActorTick.bCanEverTick = true;
}

void ADotCharacterBase::BeginPlay()
{
    Super::BeginPlay();
}

void ADotCharacterBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADotCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
