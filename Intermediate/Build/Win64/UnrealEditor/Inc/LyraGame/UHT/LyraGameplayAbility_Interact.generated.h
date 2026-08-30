// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Abilities/LyraGameplayAbility_Interact.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionOption;
#ifdef LYRAGAME_LyraGameplayAbility_Interact_generated_h
#error "LyraGameplayAbility_Interact.generated.h already included, missing '#pragma once' in LyraGameplayAbility_Interact.h"
#endif
#define LYRAGAME_LyraGameplayAbility_Interact_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerInteraction); \
	DECLARE_FUNCTION(execUpdateInteractions);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_Interact(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_Interact_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_Interact, ULyraGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_Interact)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameplayAbility_Interact(ULyraGameplayAbility_Interact&&); \
	ULyraGameplayAbility_Interact(const ULyraGameplayAbility_Interact&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_Interact); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_Interact); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_Interact) \
	NO_API virtual ~ULyraGameplayAbility_Interact();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_22_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameplayAbility_Interact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Abilities_LyraGameplayAbility_Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
