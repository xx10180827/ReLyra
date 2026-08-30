// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraGameplayAbility_Reload.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "TimerManager.h"

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

	// Play the reload montage on the avatar if one was provided. Montage interruption is intentionally
	// not used to cancel reloading in the current single-player scope; ReloadTime remains the source of truth.
	if (ReloadMontage != nullptr)
	{
		if (ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo()))
		{
			if (USkeletalMeshComponent* Mesh = Character->GetMesh())
			{
				if (UAnimInstance* AnimInstance = Mesh->GetAnimInstance())
				{
					AnimInstance->Montage_Play(ReloadMontage);
				}
			}
		}
	}

	// Schedule the finite-reserve ammo transfer after the configured reload duration.
	const float ReloadDuration = WeaponData->GetReloadTime();

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
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(ReloadTimerHandle);
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void ULyraGameplayAbility_Reload::OnReloadDelayFinished()
{
	FinishReload();
}

void ULyraGameplayAbility_Reload::FinishReload()
{
	if (bReloadComplete)
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
