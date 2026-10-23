// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "LyraWeaponFireTagTestTypes.generated.h"

UCLASS()
class ULyraWeaponFireTagTestAbility : public ULyraGameplayAbility_RangedWeapon
{
	GENERATED_BODY()
public:
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override
	{
		ActivationOwnedTags.AddTag(FGameplayTag::RequestGameplayTag(TEXT("Event.Movement.WeaponFire")));
		Super::OnGiveAbility(ActorInfo, Spec);
	}
};

UCLASS()
class ULyraWeaponFireTagTestASC : public ULyraAbilitySystemComponent
{
	GENERATED_BODY()
public:
	bool ReceiveLooseTagSnapshot(FArchive& Reader, UPackageMap* PackageMap)
	{
		bool bSuccess = false;
		GetReplicatedLooseTags_Mutable().NetSerialize(Reader, PackageMap, bSuccess);
		return bSuccess;
	}
};
