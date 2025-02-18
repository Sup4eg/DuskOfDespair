// Copyright Fireteam Interactive

#pragma once

#include "CoreMinimal.h"
#include "DodCharacterBase.h"
#include "DodCharacter.generated.h"

UCLASS()
class DUSKOFDESPAIR_API ADodCharacter : public ADodCharacterBase
{
    GENERATED_BODY()

public:
    ADodCharacter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};