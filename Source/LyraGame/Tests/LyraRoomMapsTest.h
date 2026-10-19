// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GauntletTestController.h"
#include "LyraRoomMapsTest.generated.h"

/** Five maps, real LAN list join and IP rejoin, native gameplay and fresh inventories. */
UCLASS()
class ULyraRoomMapsTest : public UGauntletTestController
{
 GENERATED_BODY()
public:
 virtual void OnInit() override;
 virtual void OnTick(float DeltaTime) override;
private:
 void Signal(const FString& Name, const FString& Value = TEXT("ok"));
 bool Has(const FString& Name) const;
 void Advance(int32 Next);
 bool CheckWorld(class ALyraPlayerController* PC);
 bool Probe(class ALyraPlayerController* PC);
 void Fail(const TCHAR* Reason);
 FString Directory;
 bool bHost = false, bBombSeen = false, bFinished = false, bRoomShot = false, bClockVerified = false;
 int32 Round = 0, Step = 0, ProbeStep = 0, Port = 17777;
 double Started = 0, Changed = 0, ProbeAt = 0;
 FVector StartPosition = FVector::ZeroVector;
 float Moved = 0;
 int32 AmmoBefore = 0;
 TWeakObjectPtr<class ULyraRangedWeaponInstance> FiredWeapon;
};
