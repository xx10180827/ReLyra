// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraRangedWeaponInstance.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraRangedWeaponInstance() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilitySourceInterface_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraRangedWeaponInstance
void ULyraRangedWeaponInstance::StaticRegisterNativesULyraRangedWeaponInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraRangedWeaponInstance);
UClass* Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister()
{
	return ULyraRangedWeaponInstance::StaticClass();
}
struct Z_Construct_UClass_ULyraRangedWeaponInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraRangedWeaponInstance\n *\n * A piece of equipment representing a ranged weapon spawned and applied to a pawn\n */" },
#endif
		{ "IncludePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraRangedWeaponInstance\n\nA piece of equipment representing a ranged weapon spawned and applied to a pawn" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MinHeat_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MaxHeat_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MinSpreadAngle_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MaxSpreadAngle_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_CurrentHeat_MetaData[] = {
		{ "Category", "Spread Debugging" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_CurrentSpreadAngle_MetaData[] = {
		{ "Category", "Spread Debugging" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData[] = {
		{ "Category", "Spread Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current *combined* spread angle multiplier\n" },
#endif
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current *combined* spread angle multiplier" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadExponent_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spread exponent, affects how tightly shots will cluster around the center line\n// when the weapon has spread (non-perfect accuracy). Higher values will cause shots\n// to be closer to the center (default is 1.0 which means uniformly within the spread range)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spread exponent, affects how tightly shots will cluster around the center line\nwhen the weapon has spread (non-perfect accuracy). Higher values will cause shots\nto be closer to the center (default is 1.0 which means uniformly within the spread range)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeatToSpreadCurve_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A curve that maps the heat to the spread angle\n// The X range of this curve typically sets the min/max heat range of the weapon\n// The Y range of this curve is used to define the min and maximum spread angle\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A curve that maps the heat to the spread angle\nThe X range of this curve typically sets the min/max heat range of the weapon\nThe Y range of this curve is used to define the min and maximum spread angle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeatToHeatPerShotCurve_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A curve that maps the current heat to the amount a single shot will further 'heat up'\n// This is typically a flat curve with a single data point indicating how much heat a shot adds,\n// but can be other shapes to do things like punish overheating by adding progressively more heat.\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A curve that maps the current heat to the amount a single shot will further 'heat up'\nThis is typically a flat curve with a single data point indicating how much heat a shot adds,\nbut can be other shapes to do things like punish overheating by adding progressively more heat." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeatToCoolDownPerSecondCurve_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A curve that maps the current heat to the heat cooldown rate per second\n// This is typically a flat curve with a single data point indicating how fast the heat\n// wears off, but can be other shapes to do things like punish overheating by slowing down\n// recovery at high heat.\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A curve that maps the current heat to the heat cooldown rate per second\nThis is typically a flat curve with a single data point indicating how fast the heat\nwears off, but can be other shapes to do things like punish overheating by slowing down\nrecovery at high heat." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadRecoveryCooldownDelay_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time since firing before spread cooldown recovery begins (in seconds)\n" },
#endif
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since firing before spread cooldown recovery begins (in seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFirstShotAccuracy_MetaData[] = {
		{ "Category", "Spread|Fire Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the weapon have perfect accuracy when both player and weapon spread are at their minimum value\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the weapon have perfect accuracy when both player and weapon spread are at their minimum value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_Aiming_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier when in an aiming camera mode\n" },
#endif
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier when in an aiming camera mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_StandingStill_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier when standing still or moving very slowly\n// (starts to fade out at StandingStillSpeedThreshold, and is gone completely by StandingStillSpeedThreshold + StandingStillToMovingSpeedRange)\n" },
#endif
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier when standing still or moving very slowly\n(starts to fade out at StandingStillSpeedThreshold, and is gone completely by StandingStillSpeedThreshold + StandingStillToMovingSpeedRange)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRate_StandingStill_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate at which we transition to/from the standing still accuracy (higher values are faster, though zero is instant; @see FInterpTo)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which we transition to/from the standing still accuracy (higher values are faster, though zero is instant; @see FInterpTo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandingStillSpeedThreshold_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speeds at or below this are considered standing still\n" },
#endif
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds at or below this are considered standing still" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandingStillToMovingSpeedRange_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speeds no more than this above StandingStillSpeedThreshold are used to feather down the standing still bonus until it's back to 1.0\n" },
#endif
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speeds no more than this above StandingStillSpeedThreshold are used to feather down the standing still bonus until it's back to 1.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_Crouching_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplier when crouching, smoothly blended to based on TransitionRate_Crouching\n" },
#endif
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplier when crouching, smoothly blended to based on TransitionRate_Crouching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRate_Crouching_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate at which we transition to/from the crouching accuracy (higher values are faster, though zero is instant; @see FInterpTo)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which we transition to/from the crouching accuracy (higher values are faster, though zero is instant; @see FInterpTo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spread multiplier while jumping/falling, smoothly blended to based on TransitionRate_JumpingOrFalling\n" },
#endif
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spread multiplier while jumping/falling, smoothly blended to based on TransitionRate_JumpingOrFalling" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRate_JumpingOrFalling_MetaData[] = {
		{ "Category", "Spread|Player Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate at which we transition to/from the jumping/falling accuracy (higher values are faster, though zero is instant; @see FInterpTo)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which we transition to/from the jumping/falling accuracy (higher values are faster, though zero is instant; @see FInterpTo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletsPerCartridge_MetaData[] = {
		{ "Category", "Weapon Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of bullets to fire in a single cartridge (typically 1, but may be more for shotguns)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of bullets to fire in a single cartridge (typically 1, but may be more for shotguns)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageRange_MetaData[] = {
		{ "Category", "Weapon Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum distance at which this weapon can deal damage\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum distance at which this weapon can deal damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletTraceSweepRadius_MetaData[] = {
		{ "Category", "Weapon Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The radius for bullet traces sweep spheres (0.0 will result in a line trace)\n" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius for bullet traces sweep spheres (0.0 will result in a line trace)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDamageFalloff_MetaData[] = {
		{ "Category", "Weapon Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A curve that maps the distance (in cm) to a multiplier on the base damage from the associated gameplay effect\n// If there is no data in this curve, then the weapon is assumed to have no falloff with distance\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A curve that maps the distance (in cm) to a multiplier on the base damage from the associated gameplay effect\nIf there is no data in this curve, then the weapon is assumed to have no falloff with distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDamageMultiplier_MetaData[] = {
		{ "Category", "Weapon Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of special tags that affect how damage is dealt\n// These tags will be compared to tags in the physical material of the thing being hit\n// If more than one tag is present, the multipliers will be combined multiplicatively\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of special tags that affect how damage is dealt\nThese tags will be compared to tags in the physical material of the thing being hit\nIf more than one tag is present, the multipliers will be combined multiplicatively" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum ammo capacity of the weapon's magazine\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum ammo capacity of the weapon's magazine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time (in seconds) required to reload the weapon from empty to full\n" },
#endif
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time (in seconds) required to reload the weapon from empty to full" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReserveAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum amount of ammunition carried outside the magazine\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum amount of ammunition carried outside the magazine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilPitchMin_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum upward pitch (in degrees) applied to the view per shot\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum upward pitch (in degrees) applied to the view per shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilPitchMax_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum upward pitch (in degrees) applied to the view per shot\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum upward pitch (in degrees) applied to the view per shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilYawMin_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum yaw (in degrees) applied to the view per shot\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum yaw (in degrees) applied to the view per shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilYawMax_MetaData[] = {
		{ "Category", "Recoil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum yaw (in degrees) applied to the view per shot\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum yaw (in degrees) applied to the view per shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilRecoveryRate_MetaData[] = {
		{ "Category", "Recoil" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed at which the view recovers toward its pre-recoil orientation (higher = faster; @see FInterpTo)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed at which the view recovers toward its pre-recoil orientation (higher = faster; @see FInterpTo)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current ammo in the magazine (runtime state, initialized to MaxAmmo on equip)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current ammo in the magazine (runtime state, initialized to MaxAmmo on equip)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReserveAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ammo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current ammunition carried outside the magazine (runtime state, initialized on equip)\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current ammunition carried outside the magazine (runtime state, initialized on equip)" },
#endif
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MinHeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MaxHeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MinSpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_MaxSpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_CurrentHeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_CurrentSpreadAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Debug_CurrentSpreadAngleMultiplier;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadExponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToSpreadCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToHeatPerShotCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeatToCoolDownPerSecondCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadRecoveryCooldownDelay;
	static void NewProp_bAllowFirstShotAccuracy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFirstShotAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_Aiming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_StandingStill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRate_StandingStill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingStillSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingStillToMovingSpeedRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_Crouching;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRate_Crouching;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleMultiplier_JumpingOrFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRate_JumpingOrFalling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletsPerCartridge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletTraceSweepRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceDamageFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialDamageMultiplier_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialDamageMultiplier_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialDamageMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReserveAmmo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilPitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilPitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilYawMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilYawMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilRecoveryRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentReserveAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraRangedWeaponInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat = { "Debug_MinHeat", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MinHeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MinHeat_MetaData), NewProp_Debug_MinHeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat = { "Debug_MaxHeat", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MaxHeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MaxHeat_MetaData), NewProp_Debug_MaxHeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle = { "Debug_MinSpreadAngle", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MinSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MinSpreadAngle_MetaData), NewProp_Debug_MinSpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle = { "Debug_MaxSpreadAngle", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_MaxSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MaxSpreadAngle_MetaData), NewProp_Debug_MaxSpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat = { "Debug_CurrentHeat", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_CurrentHeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_CurrentHeat_MetaData), NewProp_Debug_CurrentHeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle = { "Debug_CurrentSpreadAngle", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_CurrentSpreadAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_CurrentSpreadAngle_MetaData), NewProp_Debug_CurrentSpreadAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier = { "Debug_CurrentSpreadAngleMultiplier", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, Debug_CurrentSpreadAngleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData), NewProp_Debug_CurrentSpreadAngleMultiplier_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent = { "SpreadExponent", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadExponent_MetaData), NewProp_SpreadExponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve = { "HeatToSpreadCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, HeatToSpreadCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeatToSpreadCurve_MetaData), NewProp_HeatToSpreadCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve = { "HeatToHeatPerShotCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, HeatToHeatPerShotCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeatToHeatPerShotCurve_MetaData), NewProp_HeatToHeatPerShotCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve = { "HeatToCoolDownPerSecondCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, HeatToCoolDownPerSecondCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeatToCoolDownPerSecondCurve_MetaData), NewProp_HeatToCoolDownPerSecondCurve_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay = { "SpreadRecoveryCooldownDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadRecoveryCooldownDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadRecoveryCooldownDelay_MetaData), NewProp_SpreadRecoveryCooldownDelay_MetaData) };
void Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_SetBit(void* Obj)
{
	((ULyraRangedWeaponInstance*)Obj)->bAllowFirstShotAccuracy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy = { "bAllowFirstShotAccuracy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraRangedWeaponInstance), &Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFirstShotAccuracy_MetaData), NewProp_bAllowFirstShotAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming = { "SpreadAngleMultiplier_Aiming", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_Aiming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngleMultiplier_Aiming_MetaData), NewProp_SpreadAngleMultiplier_Aiming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill = { "SpreadAngleMultiplier_StandingStill", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_StandingStill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngleMultiplier_StandingStill_MetaData), NewProp_SpreadAngleMultiplier_StandingStill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill = { "TransitionRate_StandingStill", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, TransitionRate_StandingStill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRate_StandingStill_MetaData), NewProp_TransitionRate_StandingStill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold = { "StandingStillSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, StandingStillSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandingStillSpeedThreshold_MetaData), NewProp_StandingStillSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange = { "StandingStillToMovingSpeedRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, StandingStillToMovingSpeedRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandingStillToMovingSpeedRange_MetaData), NewProp_StandingStillToMovingSpeedRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching = { "SpreadAngleMultiplier_Crouching", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_Crouching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngleMultiplier_Crouching_MetaData), NewProp_SpreadAngleMultiplier_Crouching_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching = { "TransitionRate_Crouching", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, TransitionRate_Crouching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRate_Crouching_MetaData), NewProp_TransitionRate_Crouching_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling = { "SpreadAngleMultiplier_JumpingOrFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, SpreadAngleMultiplier_JumpingOrFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData), NewProp_SpreadAngleMultiplier_JumpingOrFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling = { "TransitionRate_JumpingOrFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, TransitionRate_JumpingOrFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRate_JumpingOrFalling_MetaData), NewProp_TransitionRate_JumpingOrFalling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge = { "BulletsPerCartridge", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, BulletsPerCartridge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletsPerCartridge_MetaData), NewProp_BulletsPerCartridge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange = { "MaxDamageRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, MaxDamageRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDamageRange_MetaData), NewProp_MaxDamageRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius = { "BulletTraceSweepRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, BulletTraceSweepRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletTraceSweepRadius_MetaData), NewProp_BulletTraceSweepRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff = { "DistanceDamageFalloff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, DistanceDamageFalloff), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceDamageFalloff_MetaData), NewProp_DistanceDamageFalloff_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_ValueProp = { "MaterialDamageMultiplier", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_Key_KeyProp = { "MaterialDamageMultiplier_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier = { "MaterialDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, MaterialDamageMultiplier), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDamageMultiplier_MetaData), NewProp_MaterialDamageMultiplier_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAmmo_MetaData), NewProp_MaxAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTime_MetaData), NewProp_ReloadTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxReserveAmmo = { "MaxReserveAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, MaxReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReserveAmmo_MetaData), NewProp_MaxReserveAmmo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilPitchMin = { "RecoilPitchMin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, RecoilPitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilPitchMin_MetaData), NewProp_RecoilPitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilPitchMax = { "RecoilPitchMax", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, RecoilPitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilPitchMax_MetaData), NewProp_RecoilPitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilYawMin = { "RecoilYawMin", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, RecoilYawMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilYawMin_MetaData), NewProp_RecoilYawMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilYawMax = { "RecoilYawMax", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, RecoilYawMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilYawMax_MetaData), NewProp_RecoilYawMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilRecoveryRate = { "RecoilRecoveryRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, RecoilRecoveryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilRecoveryRate_MetaData), NewProp_RecoilRecoveryRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0040000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, CurrentAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAmmo_MetaData), NewProp_CurrentAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_CurrentReserveAmmo = { "CurrentReserveAmmo", nullptr, (EPropertyFlags)0x0040000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraRangedWeaponInstance, CurrentReserveAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentReserveAmmo_MetaData), NewProp_CurrentReserveAmmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinHeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxHeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MinSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_MaxSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentHeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_Debug_CurrentSpreadAngleMultiplier,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToSpreadCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToHeatPerShotCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_HeatToCoolDownPerSecondCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadRecoveryCooldownDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_bAllowFirstShotAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Aiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_StandingStill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_StandingStill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_StandingStillToMovingSpeedRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_Crouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_Crouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_SpreadAngleMultiplier_JumpingOrFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_TransitionRate_JumpingOrFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletsPerCartridge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxDamageRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_BulletTraceSweepRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_DistanceDamageFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaterialDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_ReloadTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_MaxReserveAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilPitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilPitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilYawMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilYawMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_RecoilRecoveryRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::NewProp_CurrentReserveAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraWeaponInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraAbilitySourceInterface_NoRegister, (int32)VTABLE_OFFSET(ULyraRangedWeaponInstance, ILyraAbilitySourceInterface), false },  // 3768332760
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::ClassParams = {
	&ULyraRangedWeaponInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraRangedWeaponInstance()
{
	if (!Z_Registration_Info_UClass_ULyraRangedWeaponInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraRangedWeaponInstance.OuterSingleton, Z_Construct_UClass_ULyraRangedWeaponInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraRangedWeaponInstance.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraRangedWeaponInstance>()
{
	return ULyraRangedWeaponInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraRangedWeaponInstance);
ULyraRangedWeaponInstance::~ULyraRangedWeaponInstance() {}
// End Class ULyraRangedWeaponInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraRangedWeaponInstance, ULyraRangedWeaponInstance::StaticClass, TEXT("ULyraRangedWeaponInstance"), &Z_Registration_Info_UClass_ULyraRangedWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraRangedWeaponInstance), 2377791587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_226222281(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraRangedWeaponInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
