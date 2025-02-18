// Copyright Fireteam Interactive

#pragma once

#include "CoreMinimal.h"
#include "DodCharacterBase.h"
#include "DodEnemy.generated.h"

UCLASS()
class DUSKOFDESPAIR_API ADodEnemy : public ADodCharacterBase
{
    GENERATED_BODY()

public:
    ADodEnemy();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};