// Copyright Fireteam Interactive

#include "Character/DodCharacterBase.h"

ADodCharacterBase::ADodCharacterBase()
{

    PrimaryActorTick.bCanEverTick = false;
}

void ADodCharacterBase::BeginPlay()
{
    Super::BeginPlay();
}