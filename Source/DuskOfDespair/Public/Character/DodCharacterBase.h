// Copyright Fireteam Interactive

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DodCharacterBase.generated.h"

UCLASS(Abstract)
class DUSKOFDESPAIR_API ADodCharacterBase : public ACharacter
{
    GENERATED_BODY()

public:
    ADodCharacterBase();

protected:
    virtual void BeginPlay() override;
};