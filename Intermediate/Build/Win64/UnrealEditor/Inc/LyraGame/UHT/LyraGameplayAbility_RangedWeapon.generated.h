// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraRangedWeaponInstance;
struct FGameplayAbilityTargetDataHandle;
#ifdef LYRAGAME_LyraGameplayAbility_RangedWeapon_generated_h
#error "LyraGameplayAbility_RangedWeapon.generated.h already included, missing '#pragma once' in LyraGameplayAbility_RangedWeapon.h"
#endif
#define LYRAGAME_LyraGameplayAbility_RangedWeapon_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartRangedWeaponTargeting); \
	DECLARE_FUNCTION(execGetWeaponInstance);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_RangedWeapon(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_RangedWeapon, ULyraGameplayAbility_FromEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_RangedWeapon)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameplayAbility_RangedWeapon(ULyraGameplayAbility_RangedWeapon&&); \
	ULyraGameplayAbility_RangedWeapon(const ULyraGameplayAbility_RangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_RangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_RangedWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_RangedWeapon) \
	NO_API virtual ~ULyraGameplayAbility_RangedWeapon();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_46_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameplayAbility_RangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h


#define FOREACH_ENUM_ELYRAABILITYTARGETINGSOURCE(op) \
	op(ELyraAbilityTargetingSource::CameraTowardsFocus) \
	op(ELyraAbilityTargetingSource::PawnForward) \
	op(ELyraAbilityTargetingSource::PawnTowardsFocus) \
	op(ELyraAbilityTargetingSource::WeaponForward) \
	op(ELyraAbilityTargetingSource::WeaponTowardsFocus) \
	op(ELyraAbilityTargetingSource::Custom) 

enum class ELyraAbilityTargetingSource : uint8;
template<> struct TIsUEnumClass<ELyraAbilityTargetingSource> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraAbilityTargetingSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
