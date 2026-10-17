// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "Player/LyraPlayerController.h"
#include "LyraInventoryPlayerController.generated.h"

/** Inventory demonstration fixture. Shared gameplay/UI lives on ALyraPlayerController. */
UCLASS()
class ALyraInventoryPlayerController : public ALyraPlayerController
{
    GENERATED_BODY()
public:
    virtual void Tick(float DeltaTime) override;
private:
    UFUNCTION(Server, Reliable)
    void ServerReadyForUseFixture();
    bool bUseFixtureRequested = false;
    bool bUseFixtureReady = false;
    bool bUIFixtureSeeded = false;
    bool bUseFixtureSeeded = false;
};
