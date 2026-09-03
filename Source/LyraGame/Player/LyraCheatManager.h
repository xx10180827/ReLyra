// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/CheatManager.h"
#include "LyraCheatManager.generated.h"

class ULyraAbilitySystemComponent;


#ifndef USING_CHEAT_MANAGER
#define USING_CHEAT_MANAGER (1 && !UE_BUILD_SHIPPING)
#endif // #ifndef USING_CHEAT_MANAGER

DECLARE_LOG_CATEGORY_EXTERN(LogLyraCheat, Log, All);


/**
 * ULyraCheatManager
 *
 *	Base cheat manager class used by this project.
 */
UCLASS(config = Game, Within = PlayerController, MinimalAPI)
class ULyraCheatManager : public UCheatManager
{
	GENERATED_BODY()

public:

	ULyraCheatManager();

	virtual void InitCheatManager() override;

	// Helper function to write text to the console and to the log.
	static void CheatOutputText(const FString& TextToOutput);

	// Runs a cheat on the server for the owning player.
	UFUNCTION(exec)
	void Cheat(const FString& Msg);

	// Runs a cheat on the server for the all players.
	UFUNCTION(exec)
	void CheatAll(const FString& Msg);

	// Starts the next match
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	void PlayNextGame();

	UFUNCTION(Exec)
	virtual void ToggleFixedCamera();

	UFUNCTION(Exec)
	virtual void CycleDebugCameras();

	UFUNCTION(Exec)
	virtual void CycleAbilitySystemDebug();

	// Forces input activated abilities to be canceled.  Useful for tracking down ability interruption bugs. 
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void CancelActivatedAbilities();

	// Adds the dynamic tag to the owning player's ability system component.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void AddTagToSelf(FString TagName);

	// Removes the dynamic tag from the owning player's ability system component.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void RemoveTagFromSelf(FString TagName);

	// Applies the specified damage amount to the owning player.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void DamageSelf(float DamageAmount);

	// Applies the specified damage amount to the actor that the player is looking at.
	virtual void DamageTarget(float DamageAmount) override;

	// Applies the specified amount of healing to the owning player.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void HealSelf(float HealAmount);

	// Applies the specified amount of healing to the actor that the player is looking at.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void HealTarget(float HealAmount);

	// Applies enough damage to kill the owning player.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void DamageSelfDestruct();

	// Simulates a rapid-fire burst of the currently-equipped ranged weapon and samples ControlRotation
	// every frame to validate the recoil system while temporarily ignoring manual look input.
	// Usage in PIE console:  TestRecoil [NumShots=10]
	UFUNCTION(Exec)
	void TestRecoil(int32 NumShots = 10);

private:

	// State machine for the TestRecoil console command. Kept as a single struct so it's easy to reset.
	struct FRecoilTestState
	{
		// Live pointers - WeakObjectPtr so a mid-test unequip/garbage-collect won't crash the timer callbacks.
		TWeakObjectPtr<class ULyraRangedWeaponInstance> Weapon;
		TWeakObjectPtr<APlayerController> PC;

		// Baseline view orientation captured at the moment the test started.
		FRotator InitialRotation = FRotator::ZeroRotator;

		// Fire phase bookkeeping.
		int32 ShotsRequested = 0;
		int32 ShotsFired = 0;
		float FireInterval = 0.1f;	// seconds between simulated shots (10 Hz = rifle auto)

		// Recovery phase bookkeeping.
		bool bInRecoveryPhase = false;
		float RecoveryElapsed = 0.0f;
		float RecoveryDuration = 1.5f;	// seconds of recovery sampling before final report

		// Sample cadence for both phases (one sample every 50 ms).
		float SampleInterval = 0.05f;

		// Observed extremes across the whole test, for the final pass/fail report.
		float MaxAbsPitchDelta = 0.0f;
		float MaxUpwardPitchDelta = 0.0f;
		float MaxAbsYawDelta = 0.0f;
		float FinalPitchDelta = 0.0f;
		float FinalYawDelta = 0.0f;
		bool bLookInputLocked = false;

		// Timers driving the test phases. Two independent handles so that firing cadence and
		// view-sampling cadence can run concurrently without one cancelling the other.
		FTimerHandle FireTimer;
		FTimerHandle SampleTimer;
	};

	FRecoilTestState RecoilTestState;

	// Called once per FireInterval during the firing phase: invokes ApplyRecoil on the weapon and
	// then schedules the next fire until ShotsFired reaches ShotsRequested.
	UFUNCTION()
	void OnRecoilTestFireTick();

	// Called once per SampleInterval throughout the entire test: samples the current ControlRotation
	// against InitialRotation, updates the observed maxima, and (in the recovery phase) checks completion.
	UFUNCTION()
	void OnRecoilTestSampleTick();

	// Emits the pass/fail report to the console + log and clears the test state.
	void FinalizeRecoilTest();

	// Prevents the owning player from taking any damage.
	virtual void God() override;

	// Prevents the owning player from dropping below 1 health.
	UFUNCTION(Exec, BlueprintAuthorityOnly)
	virtual void UnlimitedHealth(int32 Enabled = -1);

protected:

	virtual void EnableDebugCamera() override;
	virtual void DisableDebugCamera() override;
	bool InDebugCamera() const;

	virtual void EnableFixedCamera();
	virtual void DisableFixedCamera();
	bool InFixedCamera() const;

	void ApplySetByCallerDamage(ULyraAbilitySystemComponent* LyraASC, float DamageAmount);
	void ApplySetByCallerHeal(ULyraAbilitySystemComponent* LyraASC, float HealAmount);

	ULyraAbilitySystemComponent* GetPlayerAbilitySystemComponent() const;
};
