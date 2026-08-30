// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/LyraGameplayAbility_Reload.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraRangedWeaponInstance;
#ifdef LYRAGAME_LyraGameplayAbility_Reload_generated_h
#error "LyraGameplayAbility_Reload.generated.h already included, missing '#pragma once' in LyraGameplayAbility_Reload.h"
#endif
#define LYRAGAME_LyraGameplayAbility_Reload_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnReloadDelayFinished); \
	DECLARE_FUNCTION(execGetWeaponInstance);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_Reload(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_Reload, ULyraGameplayAbility_FromEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_Reload)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameplayAbility_Reload(ULyraGameplayAbility_Reload&&); \
	ULyraGameplayAbility_Reload(const ULyraGameplayAbility_Reload&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_Reload); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_Reload); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_Reload) \
	NO_API virtual ~ULyraGameplayAbility_Reload();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_19_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameplayAbility_Reload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
