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
	bool TickInventoryOperations(bool bHost);
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
