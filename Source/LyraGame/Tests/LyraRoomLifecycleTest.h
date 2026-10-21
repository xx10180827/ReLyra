// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GauntletTestController.h"
#include "LyraRoomLifecycleTest.generated.h"

/** Real processes exercise original five experiences, death abilities and room admission. */
UCLASS()
class ULyraRoomLifecycleTest : public UGauntletTestController
{
 GENERATED_BODY()
public:
 virtual void OnInit() override;
 virtual void OnTick(float DeltaTime) override;
private:
 void Signal(const FString& Name);
 bool Has(const FString& Name) const;
 void Advance(int32 Next);
 void Fail(const TCHAR* Why);
 bool Seed(class ALyraPlayerController* PC, int32 Count);
 FString InventoryState(class ALyraPlayerController* PC) const;
 bool Capture(class ALyraPlayerController* PC);
 void ObserveDeath(class ALyraPlayerController* PC);
 void NextRound();
 FString Directory, Role, BeforeInventory;
 int32 Round = 0, Step = 0, Port = 17777, BeforeActive = -1;
 double Started = 0, Changed = 0;
 bool bHost = false, bIntruder = false, bFinished = false, bSawDeath = false, bRespawned = false, bCrash = false;
 TWeakObjectPtr<class APawn> BeforePawn;
 TWeakObjectPtr<class ALyraPlayerController> DepartedPlayer;
 TWeakObjectPtr<class ULyraInventoryManagerComponent> BeforeComponent;
 FVector RespawnPosition = FVector::ZeroVector;
 double RespawnAt = 0, DeathAt = 0, RespawnUIAt = 0;
 bool bStateVerified = false, bFired = false;
 float RespawnMoved = 0;
 double FiredAt = 0;
 int32 AmmoBeforeFire = 0;
 TWeakObjectPtr<class ULyraRangedWeaponInstance> RestoredWeapon;
};
