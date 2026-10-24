// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GauntletTestController.h"
#include "LyraRoomFlowTest.generated.h"

/** Explicit two-process acceptance driver: uses the same screen actions as the player. */
UCLASS()
class ULyraRoomFlowTest : public UGauntletTestController
{
 GENERATED_BODY()
public:
 virtual void OnInit() override;
 virtual void OnTick(float DeltaTime) override;
private:
 void Signal(const FString& Name);
 bool HasSignal(const FString& Name) const;
 void Advance(int32 Next);
 bool OpenMenuFromFrontend();
 void TickLegacyDirectJoin(double Now);
 TWeakObjectPtr<APawn> HostPawn;
 TWeakObjectPtr<APawn> ClientPawn;
 double MenuSeen = 0;
 int32 MenuClicks = 0;
 bool bMenuScreenshot = false;
 bool bRecoveryReopened = false;
 bool bHost = false;
 bool bLegacyDirect = false;
 int32 Step = 0;
 int32 Searches = 0;
 int32 Port = 17777;
 double Started = 0, Changed = 0;
 FString Directory;
};
