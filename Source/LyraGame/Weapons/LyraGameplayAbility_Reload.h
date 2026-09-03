// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Equipment/LyraGameplayAbility_FromEquipment.h"

#include "LyraGameplayAbility_Reload.generated.h"

class ULyraRangedWeaponInstance;
class UAnimMontage;

/**
 * ULyraGameplayAbility_Reload
 *
 * An ability granted by a ranged weapon that reloads its magazine.
 * Plays a character reload montage and, after the weapon's ReloadTime has elapsed,
 * transfers finite reserve ammo into the magazine after ReloadTime elapses.
 */
UCLASS()
class ULyraGameplayAbility_Reload : public ULyraGameplayAbility_FromEquipment
{
	GENERATED_BODY()

public:

	ULyraGameplayAbility_Reload(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Lyra|Ability")
	ULyraRangedWeaponInstance* GetWeaponInstance() const;

protected:

	//~UGameplayAbility interface
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~End of UGameplayAbility interface

	// Character-mesh montage to play while reloading. Lyra's montage notify drives the weapon-mesh montage.
	// Its duration should roughly match the weapon's ReloadTime.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Reload")
	TObjectPtr<UAnimMontage> ReloadMontage = nullptr;

private:
	// Called when the reload delay has elapsed.
	UFUNCTION()
	void OnReloadDelayFinished();

	// Transfers reserve ammo into the magazine and ends the ability.
	void FinishReload();

	// Timer used to wait for the weapon's ReloadTime before refilling ammo (used regardless of montage).
	FTimerHandle ReloadTimerHandle;

	// Guards against duplicate timer completion.
	bool bReloadComplete = false;
};
