// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GauntletTestController.h"
#include "GameFramework/Actor.h"
#include "LyraInventoryMapTest.generated.h"

// Spawned only by the explicitly requested Gauntlet test; never a gameplay actor.
UCLASS()
class ALyraInventoryMapTestProbe : public AActor
{
	GENERATED_BODY()
public:
	ALyraInventoryMapTestProbe();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& Out) const override;
	UPROPERTY(Replicated) int32 Phase = 1;
	UPROPERTY(Replicated) FString Expected;
	int32 Acknowledged = 0;
	bool bFailed = false;
	UFUNCTION(Server, Reliable) void ServerAcknowledge(int32 ObservedPhase, const FString& Signature);
};

/** All-map UI/ownership checks and optional restart/change-map/return lifecycle test. */
UCLASS()
class ULyraInventoryMapTest : public UGauntletTestController
{
	GENERATED_BODY()
public:
	virtual void OnInit() override;
	virtual void OnTick(float DeltaTime) override;
private:
	FString Role, Directory, TravelTo, StartURL;
	TWeakObjectPtr<UWorld> ActiveWorld;
	TWeakObjectPtr<class ULyraInventoryScreen> PreviousScreen;
	TMap<FString, FString> Baselines;
	int32 Round = -1, LocalPhase = 0, UIStep = 0;
	double Started = 0, ReadySince = 0, UIAt = 0;
	bool bTransitionRequested = false, bFinished = false, bSeamless = false;
};
