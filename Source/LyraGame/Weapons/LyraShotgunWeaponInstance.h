// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Weapons/LyraRangedWeaponInstance.h"

#include "LyraShotgunWeaponInstance.generated.h"

/**
 * ULyraShotgunWeaponInstance
 *
 * A ranged weapon that fires multiple pellets per cartridge with a fixed spread angle.
 *
 * This class deliberately reuses the existing ranged-weapon firing ability (ULyraGameplayAbility_RangedWeapon)
 * rather than introducing a separate ability - Lyra's TraceBulletsInCartridge already loops over
 * BulletsPerCartridge, so a shotgun is expressed purely as data:
 *   - PelletCount is forwarded to BulletsPerCartridge (the firing ability loops that many times).
 *   - SpreadAngle is forwarded to a flat HeatToSpreadCurve, so designers can configure a fixed
 *     spread with a single number instead of authoring a curve.
 */
UCLASS()
class ULyraShotgunWeaponInstance : public ULyraRangedWeaponInstance
{
	GENERATED_BODY()

public:

	ULyraShotgunWeaponInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Number of pellets fired per single cartridge (forwarded to BulletsPerCartridge on equip).
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shotgun", meta = (ClampMin = 1))
	int32 PelletCount = 8;

	// Fixed spread angle (in degrees, diametrical) applied to each pellet.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shotgun", meta = (ClampMin = 0.0, ForceUnits = deg))
	float SpreadAngle = 5.0f;

protected:

	//~ULyraEquipmentInstance interface
	virtual void OnEquipped() override;
	//~End of ULyraEquipmentInstance interface
};
