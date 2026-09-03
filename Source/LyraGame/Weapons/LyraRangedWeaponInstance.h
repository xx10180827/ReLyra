// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Curves/CurveFloat.h"
#include "TimerManager.h"

#include "LyraWeaponInstance.h"
#include "AbilitySystem/LyraAbilitySourceInterface.h"

#include "LyraRangedWeaponInstance.generated.h"

class UPhysicalMaterial;
class ULyraInventoryItemInstance;

/**
 * ULyraRangedWeaponInstance
 *
 * A piece of equipment representing a ranged weapon spawned and applied to a pawn
 */
UCLASS()
class ULyraRangedWeaponInstance : public ULyraWeaponInstance, public ILyraAbilitySourceInterface
{
	GENERATED_BODY()

public:
	ULyraRangedWeaponInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PostLoad() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	void UpdateDebugVisualization();
#endif

	int32 GetBulletsPerCartridge() const
	{
		return BulletsPerCartridge;
	}
	
	/** Returns the current spread angle (in degrees, diametrical) */
	float GetCalculatedSpreadAngle() const
	{
		return CurrentSpreadAngle;
	}

	float GetCalculatedSpreadAngleMultiplier() const
	{
		return bHasFirstShotAccuracy ? 0.0f : CurrentSpreadAngleMultiplier;
	}

	bool HasFirstShotAccuracy() const
	{
		return bHasFirstShotAccuracy;
	}

	float GetSpreadExponent() const
	{
		return SpreadExponent;
	}

	float GetMaxDamageRange() const
	{
		return MaxDamageRange;
	}

	float GetBulletTraceSweepRadius() const
	{
		return BulletTraceSweepRadius;
	}

	/** Returns true if the weapon has ammo available to fire. */
	bool CanFire() const;

	/** Returns true when the magazine is not full and reserve ammo is available. */
	bool CanReload() const;

	/** Returns the current ammo count. */
	int32 GetCurrentAmmo() const;

	/** Returns the maximum ammo count. */
	int32 GetMaxAmmo() const
	{
		return MaxAmmo;
	}

	/** Returns the current reserve ammo count. */
	int32 GetCurrentReserveAmmo() const;

	/** Returns the maximum reserve ammo count. */
	int32 GetMaxReserveAmmo() const
	{
		return MaxReserveAmmo;
	}

	/** Returns the time (in seconds) it takes to reload the weapon. */
	float GetReloadTime() const
	{
		return ReloadTime;
	}

	/** Enables/disables the opt-in finite-ammo system for native setup and tests. */
	void SetFiniteAmmoSystemEnabled(bool bEnabled)
	{
		bUseFiniteAmmoSystem = bEnabled;
	}

	/** Returns the minimum per-shot upward recoil (degrees). */
	float GetRecoilPitchMin() const
	{
		return RecoilPitchMin;
	}

	/** Returns the maximum per-shot upward recoil (degrees). */
	float GetRecoilPitchMax() const
	{
		return RecoilPitchMax;
	}

	/** Returns the minimum per-shot yaw recoil (degrees). */
	float GetRecoilYawMin() const
	{
		return RecoilYawMin;
	}

	/** Returns the maximum per-shot yaw recoil (degrees). */
	float GetRecoilYawMax() const
	{
		return RecoilYawMax;
	}

	/** Returns the rate at which pending recoil recovers (@see FInterpTo). */
	float GetRecoilRecoveryRate() const
	{
		return RecoilRecoveryRate;
	}

	/** Consumes the requested amount of ammo, clamped at zero. */
	void ConsumeAmmo(int32 Amount = 1);

	/**
	 * Transfers reserve ammo into the magazine and returns the amount loaded.
	 * The transfer is clamped by both the magazine's missing capacity and the remaining reserve ammo.
	 */
	int32 ReloadAmmo();

	/** Applies a single shot's recoil to the locally-controlled player's view (no-op on dedicated servers / AI). */
	void ApplyRecoil();

	/** Returns true if there is any pending recoil left to recover from. */
	bool HasPendingRecoil() const
	{
		return (PendingRecoilPitch != 0.0f) || (PendingRecoilYaw != 0.0f);
	}

protected:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = "Spread|Fire Params")
	float Debug_MinHeat = 0.0f;

	UPROPERTY(VisibleAnywhere, Category = "Spread|Fire Params")
	float Debug_MaxHeat = 0.0f;

	UPROPERTY(VisibleAnywhere, Category="Spread|Fire Params", meta=(ForceUnits=deg))
	float Debug_MinSpreadAngle = 0.0f;

	UPROPERTY(VisibleAnywhere, Category="Spread|Fire Params", meta=(ForceUnits=deg))
	float Debug_MaxSpreadAngle = 0.0f;

	UPROPERTY(VisibleAnywhere, Category="Spread Debugging")
	float Debug_CurrentHeat = 0.0f;

	UPROPERTY(VisibleAnywhere, Category="Spread Debugging", meta = (ForceUnits=deg))
	float Debug_CurrentSpreadAngle = 0.0f;

	// The current *combined* spread angle multiplier
	UPROPERTY(VisibleAnywhere, Category = "Spread Debugging", meta=(ForceUnits=x))
	float Debug_CurrentSpreadAngleMultiplier = 1.0f;

#endif

	// Spread exponent, affects how tightly shots will cluster around the center line
	// when the weapon has spread (non-perfect accuracy). Higher values will cause shots
	// to be closer to the center (default is 1.0 which means uniformly within the spread range)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ClampMin=0.1), Category="Spread|Fire Params")
	float SpreadExponent = 1.0f;

	// A curve that maps the heat to the spread angle
	// The X range of this curve typically sets the min/max heat range of the weapon
	// The Y range of this curve is used to define the min and maximum spread angle
	UPROPERTY(EditAnywhere, Category = "Spread|Fire Params")
	FRuntimeFloatCurve HeatToSpreadCurve;

	// A curve that maps the current heat to the amount a single shot will further 'heat up'
	// This is typically a flat curve with a single data point indicating how much heat a shot adds,
	// but can be other shapes to do things like punish overheating by adding progressively more heat.
	UPROPERTY(EditAnywhere, Category="Spread|Fire Params")
	FRuntimeFloatCurve HeatToHeatPerShotCurve;
	
	// A curve that maps the current heat to the heat cooldown rate per second
	// This is typically a flat curve with a single data point indicating how fast the heat
	// wears off, but can be other shapes to do things like punish overheating by slowing down
	// recovery at high heat.
	UPROPERTY(EditAnywhere, Category="Spread|Fire Params")
	FRuntimeFloatCurve HeatToCoolDownPerSecondCurve;

	// Time since firing before spread cooldown recovery begins (in seconds)
	UPROPERTY(EditAnywhere, Category="Spread|Fire Params", meta=(ForceUnits=s))
	float SpreadRecoveryCooldownDelay = 0.0f;

	// Should the weapon have perfect accuracy when both player and weapon spread are at their minimum value
	UPROPERTY(EditAnywhere, Category="Spread|Fire Params")
	bool bAllowFirstShotAccuracy = false;

	// Multiplier when in an aiming camera mode
	UPROPERTY(EditAnywhere, Category="Spread|Player Params", meta=(ForceUnits=x))
	float SpreadAngleMultiplier_Aiming = 1.0f;

	// Multiplier when standing still or moving very slowly
	// (starts to fade out at StandingStillSpeedThreshold, and is gone completely by StandingStillSpeedThreshold + StandingStillToMovingSpeedRange)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params", meta=(ForceUnits=x))
	float SpreadAngleMultiplier_StandingStill = 1.0f;

	// Rate at which we transition to/from the standing still accuracy (higher values are faster, though zero is instant; @see FInterpTo)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params")
	float TransitionRate_StandingStill = 5.0f;

	// Speeds at or below this are considered standing still
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params", meta=(ForceUnits="cm/s"))
	float StandingStillSpeedThreshold = 80.0f;

	// Speeds no more than this above StandingStillSpeedThreshold are used to feather down the standing still bonus until it's back to 1.0
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params", meta=(ForceUnits="cm/s"))
	float StandingStillToMovingSpeedRange = 20.0f;


	// Multiplier when crouching, smoothly blended to based on TransitionRate_Crouching
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params", meta=(ForceUnits=x))
	float SpreadAngleMultiplier_Crouching = 1.0f;

	// Rate at which we transition to/from the crouching accuracy (higher values are faster, though zero is instant; @see FInterpTo)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params")
	float TransitionRate_Crouching = 5.0f;


	// Spread multiplier while jumping/falling, smoothly blended to based on TransitionRate_JumpingOrFalling
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params", meta=(ForceUnits=x))
	float SpreadAngleMultiplier_JumpingOrFalling = 1.0f;

	// Rate at which we transition to/from the jumping/falling accuracy (higher values are faster, though zero is instant; @see FInterpTo)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Spread|Player Params")
	float TransitionRate_JumpingOrFalling = 5.0f;

	// Number of bullets to fire in a single cartridge (typically 1, but may be more for shotguns)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon Config")
	int32 BulletsPerCartridge = 1;

	// The maximum distance at which this weapon can deal damage
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon Config", meta=(ForceUnits=cm))
	float MaxDamageRange = 25000.0f;

	// The radius for bullet traces sweep spheres (0.0 will result in a line trace)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon Config", meta=(ForceUnits=cm))
	float BulletTraceSweepRadius = 0.0f;

	// A curve that maps the distance (in cm) to a multiplier on the base damage from the associated gameplay effect
	// If there is no data in this curve, then the weapon is assumed to have no falloff with distance
	UPROPERTY(EditAnywhere, Category = "Weapon Config")
	FRuntimeFloatCurve DistanceDamageFalloff;

	// List of special tags that affect how damage is dealt
	// These tags will be compared to tags in the physical material of the thing being hit
	// If more than one tag is present, the multipliers will be combined multiplicatively
	UPROPERTY(EditAnywhere, Category = "Weapon Config")
	TMap<FGameplayTag, float> MaterialDamageMultiplier;

	// Maximum ammo capacity of the weapon's magazine
	// Opt-in for the custom finite-ammo/reload system. Kept off by default so original Lyra weapons are untouched.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo")
	bool bUseFiniteAmmoSystem = false;

	// Maximum ammo capacity of the weapon's magazine
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo", meta = (ClampMin = 0))
	int32 MaxAmmo = 30;

	// Time (in seconds) required to reload the weapon from empty to full
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo", meta = (ForceUnits = s, ClampMin = 0.0))
	float ReloadTime = 2.0f;

	// Maximum amount of ammunition carried outside the magazine
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo", meta = (ClampMin = 0))
	int32 MaxReserveAmmo = 90;

	// Minimum upward pitch (in degrees) applied to the view per shot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recoil", meta = (ClampMin = 0.0))
	float RecoilPitchMin = 0.3f;

	// Maximum upward pitch (in degrees) applied to the view per shot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recoil", meta = (ClampMin = 0.0))
	float RecoilPitchMax = 0.8f;

	// Minimum yaw (in degrees) applied to the view per shot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recoil")
	float RecoilYawMin = -0.2f;

	// Maximum yaw (in degrees) applied to the view per shot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recoil")
	float RecoilYawMax = 0.2f;

	// Speed at which the view recovers toward its pre-recoil orientation (higher = faster; @see FInterpTo)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Recoil", meta = (ClampMin = 0.0))
	float RecoilRecoveryRate = 6.0f;

private:
	// Current ammo in the magazine (runtime state, initialized to MaxAmmo on equip)
	UPROPERTY(Transient, BlueprintReadOnly, VisibleAnywhere, Category = "Ammo", meta = (AllowPrivateAccess = "true"))
	int32 CurrentAmmo = 30;

	// Current ammunition carried outside the magazine (runtime state, initialized on equip)
	UPROPERTY(Transient, BlueprintReadOnly, VisibleAnywhere, Category = "Ammo", meta = (AllowPrivateAccess = "true"))
	int32 CurrentReserveAmmo = 90;

	// Time since this weapon was last fired (relative to world time)
	double LastFireTime = 0.0;

	// The current heat
	float CurrentHeat = 0.0f;

	// The current spread angle (in degrees, diametrical)
	float CurrentSpreadAngle = 0.0f;

	// Do we currently have first shot accuracy?
	bool bHasFirstShotAccuracy = false;

	// The current *combined* spread angle multiplier
	float CurrentSpreadAngleMultiplier = 1.0f;

	// The current standing still multiplier
	float StandingStillMultiplier = 1.0f;

	// The current jumping/falling multiplier
	float JumpFallMultiplier = 1.0f;

	// The current crouching multiplier
	float CrouchingMultiplier = 1.0f;

	// Remaining upward pitch (in degrees) that the view still needs to recover from after recent shots
	float PendingRecoilPitch = 0.0f;

	// Remaining yaw (in degrees) that the view still needs to recover from after recent shots
	float PendingRecoilYaw = 0.0f;

public:
	void Tick(float DeltaSeconds);

	//~ULyraEquipmentInstance interface
	virtual void OnEquipped();
	virtual void OnUnequipped();
	//~End of ULyraEquipmentInstance interface

	void AddSpread();

	//~ILyraAbilitySourceInterface interface
	virtual float GetDistanceAttenuation(float Distance, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr) const override;
	virtual float GetPhysicalMaterialAttenuation(const UPhysicalMaterial* PhysicalMaterial, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr) const override;
	//~End of ILyraAbilitySourceInterface interface

protected:
	// Resets the runtime magazine and reserve counts from the configured capacities.
	void ResetAmmoState();
	virtual void OnInstigatorChanged() override;

private:
	void ComputeSpreadRange(float& MinSpread, float& MaxSpread);
	void ComputeHeatRange(float& MinHeat, float& MaxHeat);
	ULyraInventoryItemInstance* GetAssociatedInventoryItem() const;
	void SetInventoryStatTagCount(ULyraInventoryItemInstance* ItemInstance, FGameplayTag Tag, int32 DesiredCount) const;
	void StartRecoilRecoveryTimer();
	void StopRecoilRecoveryTimer();
	void OnRecoilRecoveryTimerTick();

	inline float ClampHeat(float NewHeat)
	{
		float MinHeat;
		float MaxHeat;
		ComputeHeatRange(/*out*/ MinHeat, /*out*/ MaxHeat);

		return FMath::Clamp(NewHeat, MinHeat, MaxHeat);
	}

	// Updates the spread and returns true if the spread is at minimum
	bool UpdateSpread(float DeltaSeconds);

	// Updates the multipliers and returns true if they are at minimum
	bool UpdateMultipliers(float DeltaSeconds);

	// Smoothly recovers pending recoil on the locally-controlled player's view.
	void UpdateRecoilRecovery(float DeltaSeconds);

	// Recovery belongs to the weapon instance so it works in every experience and PIE mode.
	FTimerHandle RecoilRecoveryTimerHandle;
	static constexpr float RecoilRecoveryTickInterval = 1.0f / 60.0f;
};
