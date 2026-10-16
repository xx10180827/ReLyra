// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GauntletTestController.h"

#include "LyraInventoryNetworkTest.generated.h"

/** Launched explicitly with -gauntlet=LyraInventoryNetworkTest and InventoryTestRole. */
UCLASS()
class ULyraInventoryNetworkTest : public UGauntletTestController
{
	GENERATED_BODY()

public:
	virtual void OnInit() override;
	virtual void OnTick(float TimeDelta) override;

private:
	bool TickInventoryReload();
	bool bVerifyReload = false;
	bool bReloadVerified = false;
	int32 ReloadStep = 0;
	double ReloadAt = 0;
	bool TickInventoryEquipment(bool bHost);
	bool bVerifyEquipment = false;
	bool bEquipmentVerified = false;
	int32 EquipmentStep = 0;
	int32 EquipmentUIPhase = 0;
	double EquipmentUIAt = 0;
	bool TickInventoryOperations(bool bHost);
	bool TickInventoryUI(bool bHost);
	bool TickInventoryPickup(bool bHost);
	bool TickInventoryDrop(bool bHost);
	bool bVerifyDrop = false;
	bool bDropVerified = false;
	int32 DropStep = 0;
	int32 DropUIPhase = 0;
	double DropUIAt = 0;
	bool bVerifyPickup = false;
	bool bPickupVerified = false;
	int32 PickupStep = 0;
	double PickupRaceAt = 0;
	TWeakObjectPtr<class ALyraWorldPickup> PickupSource;
	FGuid PickupIdentity;
	bool bVerifyUI = false;
	bool bUIVerified = false;
	int32 UIStep = 0;
	double UIChangedAt = 0;
	bool bVerifyOperations = false;
	bool bOperationsVerified = false;
	int32 OperationStep = 0;
	bool bOperationPending = false;
	FString ExpectedRole;
	FString ScreenshotDirectory;
	bool bInteractive = false;
	bool bVerifyMovement = false;
	bool bVerifyRules = false;
	bool bRulesApplied = false;
	bool bRulesVerified = false;
	bool bVerifySnapshots = false;
	bool bSnapshotsVerified = false;
	bool bSnapshotMutationApplied = false;
	double SnapshotAppliedAt = 0.0;
	bool bScreenshotRequested = false;
	double StartedAt = 0.0;
	double ReadyAt = 0.0;
	double PassedAt = 0.0;
	double LastDiagnosticAt = 0.0;
};
