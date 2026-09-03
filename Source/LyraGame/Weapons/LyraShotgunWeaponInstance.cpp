// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraShotgunWeaponInstance.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Cosmetics/LyraPawnComponent_CharacterParts.h"
#include "Curves/CurveFloat.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraShotgunWeaponInstance)

ULyraShotgunWeaponInstance::ULyraShotgunWeaponInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Default to a sensible shotgun-style magazine: fewer rounds per magazine, longer reload than a rifle.
	bUseFiniteAmmoSystem = true;
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

	// B_WS_WeaponInstance_Shotgun is reparented directly to this native class, so it no longer
	// inherits ShooterCore's B_WeaponInstance_Base event graph that links the equipped animation
	// layer. Apply the existing shotgun layer here; this affects only the custom shotgun class.
	if (APawn* Pawn = GetPawn())
	{
		FGameplayTagContainer CosmeticTags;
		if (const ULyraPawnComponent_CharacterParts* CharacterParts = Pawn->FindComponentByClass<ULyraPawnComponent_CharacterParts>())
		{
			const FGameplayTag AnimationStyleTag = FGameplayTag::RequestGameplayTag(TEXT("Cosmetic.AnimationStyle"));
			CosmeticTags = CharacterParts->GetCombinedTags(AnimationStyleTag);
		}

		if (ACharacter* Character = Cast<ACharacter>(Pawn))
		{
			if (USkeletalMeshComponent* Mesh = Character->GetMesh())
			{
				if (const TSubclassOf<UAnimInstance> AnimLayer = PickBestAnimLayer(/*bEquipped=*/ true, CosmeticTags))
				{
					Mesh->LinkAnimClassLayers(AnimLayer);
				}
			}
		}
	}
}
