// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/LyraGameplayAbility_Jump.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraGameplayAbility_Jump_generated_h
#error "LyraGameplayAbility_Jump.generated.h already included, missing '#pragma once' in LyraGameplayAbility_Jump.h"
#endif
#define LYRAGAME_LyraGameplayAbility_Jump_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCharacterJumpStop); \
	DECLARE_FUNCTION(execCharacterJumpStart);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_Jump(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_Jump, ULyraGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_Jump)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameplayAbility_Jump(ULyraGameplayAbility_Jump&&); \
	ULyraGameplayAbility_Jump(const ULyraGameplayAbility_Jump&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_Jump); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_Jump); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_Jump) \
	NO_API virtual ~ULyraGameplayAbility_Jump();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_20_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameplayAbility_Jump>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
