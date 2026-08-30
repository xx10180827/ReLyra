// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraShotgunWeaponInstance.h"
#include "Curves/CurveFloat.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraShotgunWeaponInstance)

ULyraShotgunWeaponInstance::ULyraShotgunWeaponInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Default to a sensible shotgun-style magazine: fewer rounds per magazine, longer reload than a rifle.
	MaxAmmo = 6;
	MaxReserveAmmo = 24;
	ReloadTime = 2.5f;

	// Each cartridge fires multiple pellets; the base class loops BulletsPerCartridge times in trace logic.
	BulletsPerCartridge = PelletCount;

	// Shotguns typically have a wider base spread than rifles.
	// If a designer authors HeatToSpreadCurve themselves, we leave it untouched in OnEquipped.
	HeatToSpreadCurve.EditorCurveData.Reset();
	HeatToSpreadCurve.EditorCurveData.AddKey(0.0f, SpreadAngle);
	HeatToSpreadCurve.EditorCurveData.AddKey(1.0f, SpreadAngle);

	// The base class constructor initialized runtime ammo before these shotgun capacities were applied.
	ResetAmmoState();
}

void ULyraShotgunWeaponInstance::OnEquipped()
{
	// Keep the firing-ability-facing BulletsPerCartridge in sync with the more intuitively named PelletCount.
	BulletsPerCartridge = PelletCount;

	// Keep the fixed-spread curve synchronized with the designer-facing SpreadAngle property.
	// This runs before Super so the base class initializes CurrentSpreadAngle from the updated curve.
	HeatToSpreadCurve.EditorCurveData.Reset();
	HeatToSpreadCurve.EditorCurveData.AddKey(0.0f, SpreadAngle);
	HeatToSpreadCurve.EditorCurveData.AddKey(1.0f, SpreadAngle);

	Super::OnEquipped();
}
