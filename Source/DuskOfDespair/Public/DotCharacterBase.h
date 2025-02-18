// Copyright Fireteam Interactive

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DotCharacterBase.generated.h"

UCLASS()
class DUSKOFDESPAIR_API ADotCharacterBase : public ACharacter
{
    GENERATED_BODY()

public:
    ADotCharacterBase();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};