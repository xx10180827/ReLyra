// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraGameplayAbility_Reload.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "TimerManager.h"
#include "AbilitySystemComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraGameplayAbility_Reload)

ULyraGameplayAbility_Reload::ULyraGameplayAbility_Reload(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

ULyraRangedWeaponInstance* ULyraGameplayAbility_Reload::GetWeaponInstance() const
{
	return Cast<ULyraRangedWeaponInstance>(GetAssociatedEquipment());
}

bool ULyraGameplayAbility_Reload::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	const ULyraRangedWeaponInstance* WeaponData = GetWeaponInstance();
	return (WeaponData != nullptr) && WeaponData->CanReload();
}

void ULyraGameplayAbility_Reload::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	bReloadComplete = false;
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// Commit the ability (checks tags/costs); if it fails, end the ability immediately as cancelled
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, /*bReplicateEndAbility=*/ true, /*bWasCancelled=*/ true);
		return;
	}

	ULyraRangedWeaponInstance* WeaponData = GetWeaponInstance();
	if (WeaponData == nullptr || !WeaponData->CanReload())
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, /*bReplicateEndAbility=*/ true, /*bWasCancelled=*/ true);
		return;
	}

	// GAS predicts locally and replicates the character montage to observers. The
	// existing animation notify then drives the equipped weapon's montage.
	const float ReloadDuration = WeaponData->GetReloadTime();
	if (ReloadMontage && ActorInfo->GetAnimInstance())
	{
		auto* ASC = ActorInfo->AbilitySystemComponent.Get();
		const float Rate = ReloadDuration > 0 ? ReloadMontage->GetPlayLength() / ReloadDuration : 1.0f;
		if (ASC && ASC->PlayMontage(this, ActivationInfo, ReloadMontage, Rate) > 0)
		{
			if (!IsActive()) { return; }
			FOnMontageBlendingOutStarted Interrupted;
			Interrupted.BindUObject(this, &ThisClass::OnReloadMontageBlendingOut);
			ActorInfo->GetAnimInstance()->Montage_SetBlendingOutDelegate(Interrupted, ReloadMontage);
		}
	}
	if (ReloadDuration <= 0.0f)
	{
		OnReloadDelayFinished();
	}
	else if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ThisClass::OnReloadDelayFinished, ReloadDuration, /*bLoop=*/ false);
	}
	else
	{
		// No world/timer available (shouldn't happen in normal play) - complete immediately so the ability still ends.
		OnReloadDelayFinished();
	}
}

void ULyraGameplayAbility_Reload::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	// Cancel any in-flight reload timer before we let the ability end.
	bReloadComplete = true;
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(ReloadTimerHandle);
	}
	if (bWasCancelled && ActorInfo && ActorInfo->AbilitySystemComponent.IsValid())
	{
		auto* ASC = ActorInfo->AbilitySystemComponent.Get();
		if (ASC->GetAnimatingAbility() == this) { ASC->CurrentMontageStop(0.1f); }
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void ULyraGameplayAbility_Reload::OnReloadDelayFinished()
{
	FinishReload();
}

void ULyraGameplayAbility_Reload::OnReloadMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	if (bInterrupted && !bReloadComplete && IsActive())
	{
		CancelAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true);
	}
}

void ULyraGameplayAbility_Reload::FinishReload()
{
	if (bReloadComplete || !IsActive())
	{
		return;
	}

	// The predicting client waits for the server's completion. Sending EndAbility from
	// the client's timer can end the server instance before its timer transfers ammo.
	if (!CurrentActorInfo || !CurrentActorInfo->IsNetAuthority())
	{
		return;
	}

	bReloadComplete = true;
	if (ULyraRangedWeaponInstance* WeaponData = GetWeaponInstance())
	{
		WeaponData->ReloadAmmo();
	}

	const FGameplayAbilitySpecHandle Handle = CurrentSpecHandle;
	const FGameplayAbilityActorInfo* ActorInfo = CurrentActorInfo;
	const FGameplayAbilityActivationInfo ActivationInfo = CurrentActivationInfo;

	EndAbility(Handle, ActorInfo, ActivationInfo, /*bReplicateEndAbility=*/ true, /*bWasCancelled=*/ false);
}
