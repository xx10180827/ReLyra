// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraCheatManager.h"
#include "GameFramework/Pawn.h"
#include "LyraPlayerController.h"
#include "LyraDebugCameraController.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Console.h"
#include "GameFramework/HUD.h"
#include "System/LyraAssetManager.h"
#include "System/LyraGameData.h"
#include "LyraGameplayTags.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Character/LyraHealthComponent.h"
#include "Character/LyraPawnExtensionComponent.h"
#include "System/LyraSystemStatics.h"
#include "Development/LyraDeveloperSettings.h"
#include "Equipment/LyraEquipmentManagerComponent.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "TimerManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraCheatManager)

DEFINE_LOG_CATEGORY(LogLyraCheat);

namespace LyraCheat
{
	static const FName NAME_Fixed = FName(TEXT("Fixed"));
	
	static bool bEnableDebugCameraCycling = false;
	static FAutoConsoleVariableRef CVarEnableDebugCameraCycling(
		TEXT("LyraCheat.EnableDebugCameraCycling"),
		bEnableDebugCameraCycling,
		TEXT("If true then you can cycle the debug camera while running the game."),
		ECVF_Cheat);

	static bool bStartInGodMode = false;
	static FAutoConsoleVariableRef CVarStartInGodMode(
		TEXT("LyraCheat.StartInGodMode"),
		bStartInGodMode,
		TEXT("If true then the God cheat will be applied on begin play"),
		ECVF_Cheat);
};


ULyraCheatManager::ULyraCheatManager()
{
	DebugCameraControllerClass = ALyraDebugCameraController::StaticClass();
}

void ULyraCheatManager::InitCheatManager()
{
	Super::InitCheatManager();

#if WITH_EDITOR
	if (GIsEditor)
	{
		APlayerController* PC = GetOuterAPlayerController();
		for (const FLyraCheatToRun& CheatRow : GetDefault<ULyraDeveloperSettings>()->CheatsToRun)
		{
			if (CheatRow.Phase == ECheatExecutionTime::OnCheatManagerCreated)
			{
				PC->ConsoleCommand(CheatRow.Cheat, /*bWriteToLog=*/ true);
			}
		}
	}
#endif

	if (LyraCheat::bStartInGodMode)
	{
		God();	
	}
}

void ULyraCheatManager::CheatOutputText(const FString& TextToOutput)
{
#if USING_CHEAT_MANAGER
	// Output to the console.
	if (GEngine && GEngine->GameViewport && GEngine->GameViewport->ViewportConsole)
	{
		GEngine->GameViewport->ViewportConsole->OutputText(TextToOutput);
	}

	// Output to log.
	UE_LOG(LogLyraCheat, Display, TEXT("%s"), *TextToOutput);
#endif // USING_CHEAT_MANAGER
}

void ULyraCheatManager::Cheat(const FString& Msg)
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
		LyraPC->ServerCheat(Msg.Left(128));
	}
}

void ULyraCheatManager::CheatAll(const FString& Msg)
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
		LyraPC->ServerCheatAll(Msg.Left(128));
	}
}

void ULyraCheatManager::PlayNextGame()
{
	ULyraSystemStatics::PlayNextGame(this);
}

void ULyraCheatManager::EnableDebugCamera()
{
	Super::EnableDebugCamera();
}

void ULyraCheatManager::DisableDebugCamera()
{
	FVector DebugCameraLocation;
	FRotator DebugCameraRotation;

	ADebugCameraController* DebugCC = Cast<ADebugCameraController>(GetOuter());
	APlayerController* OriginalPC = nullptr;

	if (DebugCC)
	{
		OriginalPC = DebugCC->OriginalControllerRef;
		DebugCC->GetPlayerViewPoint(DebugCameraLocation, DebugCameraRotation);
	}

	Super::DisableDebugCamera();

	if (OriginalPC && OriginalPC->PlayerCameraManager && (OriginalPC->PlayerCameraManager->CameraStyle == LyraCheat::NAME_Fixed))
	{
		OriginalPC->SetInitialLocationAndRotation(DebugCameraLocation, DebugCameraRotation);

		OriginalPC->PlayerCameraManager->ViewTarget.POV.Location = DebugCameraLocation;
		OriginalPC->PlayerCameraManager->ViewTarget.POV.Rotation = DebugCameraRotation;
		OriginalPC->PlayerCameraManager->PendingViewTarget.POV.Location = DebugCameraLocation;
		OriginalPC->PlayerCameraManager->PendingViewTarget.POV.Rotation = DebugCameraRotation;
	}
}

bool ULyraCheatManager::InDebugCamera() const
{
	return (Cast<ADebugCameraController>(GetOuter()) ? true : false);
}

void ULyraCheatManager::EnableFixedCamera()
{
	const ADebugCameraController* DebugCC = Cast<ADebugCameraController>(GetOuter());
	APlayerController* PC = (DebugCC ? ToRawPtr(DebugCC->OriginalControllerRef) : GetOuterAPlayerController());

	if (PC && PC->PlayerCameraManager)
	{
		PC->SetCameraMode(LyraCheat::NAME_Fixed);
	}
}

void ULyraCheatManager::DisableFixedCamera()
{
	const ADebugCameraController* DebugCC = Cast<ADebugCameraController>(GetOuter());
	APlayerController* PC = (DebugCC ? ToRawPtr(DebugCC->OriginalControllerRef) : GetOuterAPlayerController());

	if (PC && PC->PlayerCameraManager)
	{
		PC->SetCameraMode(NAME_Default);
	}
}

bool ULyraCheatManager::InFixedCamera() const
{
	const ADebugCameraController* DebugCC = Cast<ADebugCameraController>(GetOuter());
	const APlayerController* PC = (DebugCC ? ToRawPtr(DebugCC->OriginalControllerRef) : GetOuterAPlayerController());

	if (PC && PC->PlayerCameraManager)
	{
		return (PC->PlayerCameraManager->CameraStyle == LyraCheat::NAME_Fixed);
	}

	return false;
}

void ULyraCheatManager::ToggleFixedCamera()
{
	if (InFixedCamera())
	{
		DisableFixedCamera();
	}
	else
	{
		EnableFixedCamera();
	}
}

void ULyraCheatManager::CycleDebugCameras()
{
	if (!LyraCheat::bEnableDebugCameraCycling)
	{
		return;
	}
	
	if (InDebugCamera())
	{
		EnableFixedCamera();
		DisableDebugCamera();
	}
	else if (InFixedCamera())
	{
		DisableFixedCamera();
		DisableDebugCamera();
	}
	else
	{
		EnableDebugCamera();
		DisableFixedCamera();
	}
}

void ULyraCheatManager::CycleAbilitySystemDebug()
{
	APlayerController* PC = Cast<APlayerController>(GetOuterAPlayerController());

	if (PC && PC->MyHUD)
	{
		if (!PC->MyHUD->bShowDebugInfo || !PC->MyHUD->DebugDisplay.Contains(TEXT("AbilitySystem")))
		{
			PC->MyHUD->ShowDebug(TEXT("AbilitySystem"));
		}

		PC->ConsoleCommand(TEXT("AbilitySystem.Debug.NextCategory"));
	}
}

void ULyraCheatManager::CancelActivatedAbilities()
{
	if (ULyraAbilitySystemComponent* LyraASC = GetPlayerAbilitySystemComponent())
	{
		const bool bReplicateCancelAbility = true;
		LyraASC->CancelInputActivatedAbilities(bReplicateCancelAbility);
	}
}

void ULyraCheatManager::AddTagToSelf(FString TagName)
{
	FGameplayTag Tag = LyraGameplayTags::FindTagByString(TagName, true);
	if (Tag.IsValid())
	{
		if (ULyraAbilitySystemComponent* LyraASC = GetPlayerAbilitySystemComponent())
		{
			LyraASC->AddDynamicTagGameplayEffect(Tag);
		}
	}
	else
	{
		UE_LOG(LogLyraCheat, Display, TEXT("AddTagToSelf: Could not find any tag matching [%s]."), *TagName);
	}
}

void ULyraCheatManager::RemoveTagFromSelf(FString TagName)
{
	FGameplayTag Tag = LyraGameplayTags::FindTagByString(TagName, true);
	if (Tag.IsValid())
	{
		if (ULyraAbilitySystemComponent* LyraASC = GetPlayerAbilitySystemComponent())
		{
			LyraASC->RemoveDynamicTagGameplayEffect(Tag);
		}
	}
	else
	{
		UE_LOG(LogLyraCheat, Display, TEXT("RemoveTagFromSelf: Could not find any tag matching [%s]."), *TagName);
	}
}

void ULyraCheatManager::DamageSelf(float DamageAmount)
{
	if (ULyraAbilitySystemComponent* LyraASC = GetPlayerAbilitySystemComponent())
	{
		ApplySetByCallerDamage(LyraASC, DamageAmount);
	}
}

void ULyraCheatManager::DamageTarget(float DamageAmount)
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
		if (LyraPC->GetNetMode() == NM_Client)
		{
			// Automatically send cheat to server for convenience.
			LyraPC->ServerCheat(FString::Printf(TEXT("DamageTarget %.2f"), DamageAmount));
			return;
		}

		FHitResult TargetHitResult;
		AActor* TargetActor = GetTarget(LyraPC, TargetHitResult);

		if (ULyraAbilitySystemComponent* LyraTargetASC = Cast<ULyraAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(TargetActor)))
		{
			ApplySetByCallerDamage(LyraTargetASC, DamageAmount);
		}
	}
}

void ULyraCheatManager::ApplySetByCallerDamage(ULyraAbilitySystemComponent* LyraASC, float DamageAmount)
{
	check(LyraASC);

	TSubclassOf<UGameplayEffect> DamageGE = ULyraAssetManager::GetSubclass(ULyraGameData::Get().DamageGameplayEffect_SetByCaller);
	FGameplayEffectSpecHandle SpecHandle = LyraASC->MakeOutgoingSpec(DamageGE, 1.0f, LyraASC->MakeEffectContext());

	if (SpecHandle.IsValid())
	{
		SpecHandle.Data->SetSetByCallerMagnitude(LyraGameplayTags::SetByCaller_Damage, DamageAmount);
		LyraASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

void ULyraCheatManager::HealSelf(float HealAmount)
{
	if (ULyraAbilitySystemComponent* LyraASC = GetPlayerAbilitySystemComponent())
	{
		ApplySetByCallerHeal(LyraASC, HealAmount);
	}
}

void ULyraCheatManager::HealTarget(float HealAmount)
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
		FHitResult TargetHitResult;
		AActor* TargetActor = GetTarget(LyraPC, TargetHitResult);

		if (ULyraAbilitySystemComponent* LyraTargetASC = Cast<ULyraAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(TargetActor)))
		{
			ApplySetByCallerHeal(LyraTargetASC, HealAmount);
		}
	}
}

void ULyraCheatManager::ApplySetByCallerHeal(ULyraAbilitySystemComponent* LyraASC, float HealAmount)
{
	check(LyraASC);

	TSubclassOf<UGameplayEffect> HealGE = ULyraAssetManager::GetSubclass(ULyraGameData::Get().HealGameplayEffect_SetByCaller);
	FGameplayEffectSpecHandle SpecHandle = LyraASC->MakeOutgoingSpec(HealGE, 1.0f, LyraASC->MakeEffectContext());

	if (SpecHandle.IsValid())
	{
		SpecHandle.Data->SetSetByCallerMagnitude(LyraGameplayTags::SetByCaller_Heal, HealAmount);
		LyraASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	}
}

ULyraAbilitySystemComponent* ULyraCheatManager::GetPlayerAbilitySystemComponent() const
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
		return LyraPC->GetLyraAbilitySystemComponent();
	}
	return nullptr;
}

void ULyraCheatManager::DamageSelfDestruct()
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
 		if (const ULyraPawnExtensionComponent* PawnExtComp = ULyraPawnExtensionComponent::FindPawnExtensionComponent(LyraPC->GetPawn()))
		{
			if (PawnExtComp->HasReachedInitState(LyraGameplayTags::InitState_GameplayReady))
			{
				if (ULyraHealthComponent* HealthComponent = ULyraHealthComponent::FindHealthComponent(LyraPC->GetPawn()))
				{
					HealthComponent->DamageSelfDestruct();
				}
			}
		}
	}
}

void ULyraCheatManager::God()
{
	if (ALyraPlayerController* LyraPC = Cast<ALyraPlayerController>(GetOuterAPlayerController()))
	{
		if (LyraPC->GetNetMode() == NM_Client)
		{
			// Automatically send cheat to server for convenience.
			LyraPC->ServerCheat(FString::Printf(TEXT("God")));
			return;
		}

		if (ULyraAbilitySystemComponent* LyraASC = LyraPC->GetLyraAbilitySystemComponent())
		{
			const FGameplayTag Tag = LyraGameplayTags::Cheat_GodMode;
			const bool bHasTag = LyraASC->HasMatchingGameplayTag(Tag);

			if (bHasTag)
			{
				LyraASC->RemoveDynamicTagGameplayEffect(Tag);
			}
			else
			{
				LyraASC->AddDynamicTagGameplayEffect(Tag);
			}
		}
	}
}

void ULyraCheatManager::UnlimitedHealth(int32 Enabled)
{
	if (ULyraAbilitySystemComponent* LyraASC = GetPlayerAbilitySystemComponent())
	{
		const FGameplayTag Tag = LyraGameplayTags::Cheat_UnlimitedHealth;
		const bool bHasTag = LyraASC->HasMatchingGameplayTag(Tag);

		if ((Enabled == -1) || ((Enabled > 0) && !bHasTag) || ((Enabled == 0) && bHasTag))
		{
			if (bHasTag)
			{
				LyraASC->RemoveDynamicTagGameplayEffect(Tag);
			}
			else
			{
				LyraASC->AddDynamicTagGameplayEffect(Tag);
			}
		}
	}
}

void ULyraCheatManager::TestRecoil(int32 NumShots)
{
	APlayerController* PC = GetOuterAPlayerController();
	if (PC == nullptr || PC->GetPawn() == nullptr)
	{
		CheatOutputText(TEXT("[RecoilTest] No player controller / pawn available - equip a weapon in PIE first."));
		return;
	}

	// Cancel any in-flight test before starting a new one - this also clears the timers.
	if (RecoilTestState.FireTimer.IsValid() || RecoilTestState.SampleTimer.IsValid())
	{
		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().ClearTimer(RecoilTestState.FireTimer);
			World->GetTimerManager().ClearTimer(RecoilTestState.SampleTimer);
		}
	}
	if (RecoilTestState.bLookInputLocked)
	{
		if (APlayerController* PreviousPC = RecoilTestState.PC.Get())
		{
			PreviousPC->SetIgnoreLookInput(false);
		}
	}
	RecoilTestState = FRecoilTestState();

	// Find the currently-equipped ranged weapon via the equipment manager on the pawn.
	ULyraEquipmentManagerComponent* EquipMgr = PC->GetPawn()->FindComponentByClass<ULyraEquipmentManagerComponent>();
	if (EquipMgr == nullptr)
	{
		CheatOutputText(TEXT("[RecoilTest] Pawn has no ULyraEquipmentManagerComponent - is this a Lyra hero?"));
		return;
	}

	ULyraRangedWeaponInstance* Weapon = Cast<ULyraRangedWeaponInstance>(
		EquipMgr->GetFirstInstanceOfType(ULyraRangedWeaponInstance::StaticClass()));

	if (Weapon == nullptr)
	{
		CheatOutputText(TEXT("[RecoilTest] No ULyraRangedWeaponInstance equipped. Pick up a weapon first."));
		return;
	}

	// Only the locally-controlled player has AddPitchInput/AddYawInput wired up by ApplyRecoil - bail
	// out early if this is a simulated proxy or AI pawn so the test doesn't silently produce zero deltas.
	if (!PC->IsLocalController())
	{
		CheatOutputText(TEXT("[RecoilTest] PlayerController is not local - recoil inputs have no effect. Run this on a locally-controlled player."));
		return;
	}

	const int32 EffectiveShots = FMath::Max(1, NumShots);
	RecoilTestState.Weapon = Weapon;
	RecoilTestState.PC = PC;
	PC->SetIgnoreLookInput(true);
	RecoilTestState.bLookInputLocked = true;
	RecoilTestState.InitialRotation = PC->GetControlRotation().GetNormalized();
	RecoilTestState.ShotsRequested = EffectiveShots;

	const FString StartMsg = FString::Printf(
		TEXT("[RecoilTest] Starting: %d shots @ %.0f Hz, baseline Pitch=%.2f Yaw=%.2f"),
		EffectiveShots, 1.0f / RecoilTestState.FireInterval,
		RecoilTestState.InitialRotation.Pitch, RecoilTestState.InitialRotation.Yaw);
	CheatOutputText(StartMsg);

	// Kick the firing phase off immediately, then the timer keeps it going.
	OnRecoilTestFireTick();

	if (UWorld* World = GetWorld())
	{
		// The sample timer runs throughout firing + recovery to track the view rotation trajectory.
		// Uses a SEPARATE handle from the fire timer so they never cancel each other.
		World->GetTimerManager().SetTimer(
			RecoilTestState.SampleTimer,
			this, &ThisClass::OnRecoilTestSampleTick,
			RecoilTestState.SampleInterval, /*bLoop=*/ true);
	}
}

void ULyraCheatManager::OnRecoilTestFireTick()
{
	// Defensive: if either side got GC'd / the player unequipped mid-test, stop cleanly.
	ULyraRangedWeaponInstance* Weapon = RecoilTestState.Weapon.Get();
	APlayerController* PC = RecoilTestState.PC.Get();
	if (Weapon == nullptr || PC == nullptr)
	{
		FinalizeRecoilTest();
		return;
	}

	if (RecoilTestState.ShotsFired >= RecoilTestState.ShotsRequested)
	{
		// Firing phase is complete - flip into recovery. The sample timer keeps running and will
		// call FinalizeRecoilTest once RecoveryDuration elapses.
		if (!RecoilTestState.bInRecoveryPhase)
		{
			RecoilTestState.bInRecoveryPhase = true;
			RecoilTestState.RecoveryElapsed = 0.0f;

			const FString Phase2Msg = FString::Printf(
				TEXT("[RecoilTest] Firing complete. Max Pitch delta so far = %.3f deg. Entering recovery phase (%.2fs)."),
				RecoilTestState.MaxAbsPitchDelta, RecoilTestState.RecoveryDuration);
			CheatOutputText(Phase2Msg);
		}
		return;
	}

	// Fire one shot by directly invoking the recoil path on the weapon instance. This mirrors exactly
	// what ULyraGameplayAbility_RangedWeapon does after a successful CommitAbility (see
	// LyraGameplayAbility_RangedWeapon.cpp OnTargetDataReadyCallback -> WeaponData->ApplyRecoil()).
	Weapon->ApplyRecoil();
	++RecoilTestState.ShotsFired;

	// Schedule the next simulated shot. Uses the FireTimer handle so the SampleTimer keeps running
	// independently throughout the firing + recovery phases.
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(
			RecoilTestState.FireTimer,
			this, &ThisClass::OnRecoilTestFireTick,
			RecoilTestState.FireInterval, /*bLoop=*/ false);
	}
}

void ULyraCheatManager::OnRecoilTestSampleTick()
{
	APlayerController* PC = RecoilTestState.PC.Get();
	if (PC == nullptr)
	{
		FinalizeRecoilTest();
		return;
	}

	const FRotator CurrentRotation = PC->GetControlRotation().GetNormalized();
	const float PitchDelta = FMath::FindDeltaAngleDegrees(RecoilTestState.InitialRotation.Pitch, CurrentRotation.Pitch);
	const float YawDelta = FMath::FindDeltaAngleDegrees(RecoilTestState.InitialRotation.Yaw, CurrentRotation.Yaw);

	const float AbsPitch = FMath::Abs(PitchDelta);
	const float AbsYaw = FMath::Abs(YawDelta);
	RecoilTestState.MaxAbsPitchDelta = FMath::Max(RecoilTestState.MaxAbsPitchDelta, AbsPitch);
	RecoilTestState.MaxUpwardPitchDelta = FMath::Max(RecoilTestState.MaxUpwardPitchDelta, -PitchDelta);
	RecoilTestState.MaxAbsYawDelta = FMath::Max(RecoilTestState.MaxAbsYawDelta, AbsYaw);

	RecoilTestState.FinalPitchDelta = PitchDelta;
	RecoilTestState.FinalYawDelta = YawDelta;

	if (RecoilTestState.bInRecoveryPhase)
	{
		RecoilTestState.RecoveryElapsed += RecoilTestState.SampleInterval;
		if (RecoilTestState.RecoveryElapsed >= RecoilTestState.RecoveryDuration)
		{
			FinalizeRecoilTest();
		}
	}
}

void ULyraCheatManager::FinalizeRecoilTest()
{
	// Stop both timers - fire timer may have already expired naturally, sample timer is looping.
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(RecoilTestState.FireTimer);
		World->GetTimerManager().ClearTimer(RecoilTestState.SampleTimer);
	}

	ULyraRangedWeaponInstance* Weapon = RecoilTestState.Weapon.Get();
	APlayerController* PC = RecoilTestState.PC.Get();
	if (RecoilTestState.bLookInputLocked && PC != nullptr)
	{
		PC->SetIgnoreLookInput(false);
	}

	// --- Pass / fail criteria ---------------------------------------------------------
	// 1. ControlRotation pitch must have moved in the positive (upward) direction during the test.
	//    Checking the signed maximum prevents a downward kick from passing through an absolute-value test.
	// 2. Recovery must have brought the view back near the baseline within the recovery window.
	//    A lenient 1.0 degree tolerance is used (this is a "did the system engage at all" smoke
	//    test, not a tight game-feel assertion - tune tighter if needed).
	const bool bPitchKickedUp = (RecoilTestState.MaxUpwardPitchDelta > 0.01f);
	const bool bPitchRecovered = (FMath::Abs(RecoilTestState.FinalPitchDelta) < 1.0f);

	// Weapon-config sanity: report the configured recoil range so the operator can correlate
	// the observed kick to the design values without opening the blueprint.
	const float ExpectedPitchMin = Weapon ? Weapon->GetRecoilPitchMin() : 0.0f;
	const float ExpectedPitchMax = Weapon ? Weapon->GetRecoilPitchMax() : 0.0f;

	const FString Report = FString::Printf(
		TEXT("[RecoilTest] REPORT\n")
		TEXT("  Shots fired       : %d\n")
		TEXT("  Weapon config     : RecoilPitch=[%.3f, %.3f] deg, RecoilRecoveryRate=%.1f\n")
		TEXT("  Max |Pitch|       : %.3f deg (expected bound ~= %.3f)\n")
		TEXT("  Max upward Pitch  : %.3f deg\n")
		TEXT("  Max |Yaw|         : %.3f deg\n")
		TEXT("  Final Pitch delta : %.3f deg (recovery target ~= 0)\n")
		TEXT("  Final Yaw delta   : %.3f deg\n")
		TEXT("  RESULT            : %s (PitchKicked=%s, PitchRecovered=%s)"),
		RecoilTestState.ShotsFired,
		ExpectedPitchMin, ExpectedPitchMax,
		Weapon ? Weapon->GetRecoilRecoveryRate() : 0.0f,
		RecoilTestState.MaxAbsPitchDelta,
		ExpectedPitchMax * FMath::Max(1, RecoilTestState.ShotsFired),
		RecoilTestState.MaxUpwardPitchDelta,
		RecoilTestState.MaxAbsYawDelta,
		RecoilTestState.FinalPitchDelta,
		RecoilTestState.FinalYawDelta,
		(bPitchKickedUp && bPitchRecovered) ? TEXT("PASS") : TEXT("FAIL"),
		bPitchKickedUp ? TEXT("YES") : TEXT("NO"),
		bPitchRecovered ? TEXT("YES") : TEXT("NO")
	);
	CheatOutputText(Report);

	// Reset state so a subsequent TestRecoil starts clean.
	RecoilTestState = FRecoilTestState();
}

