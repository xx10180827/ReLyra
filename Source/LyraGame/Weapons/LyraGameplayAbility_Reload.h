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
 * Plays a reload montage and, after the weapon's ReloadTime has elapsed,
 * refills the weapon's CurrentAmmo to MaxAmmo.
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
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	//~End of UGameplayAbility interface

	// Montage to play while reloading. Its duration should roughly match the weapon's ReloadTime.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Reload")
	TObjectPtr<UAnimMontage> ReloadMontage = nullptr;

private:

	// Called when the reload montage finishes (or blends out) successfully to refill ammo and end the ability.
	UFUNCTION()
	void OnReloadSucceeded();

	// Called when the reload montage is interrupted or cancelled; ends the ability without refilling.
	UFUNCTION()
	void OnReloadCanceled();

	// Called when the fallback WaitDelay task completes (used when no montage is assigned).
	UFUNCTION()
	void OnReloadDelayFinished();

	void FinishReload(bool bSuccess);
};
