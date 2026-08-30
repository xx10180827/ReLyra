// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_GrantNearbyInteraction;
class UGameplayAbility;
#ifdef LYRAGAME_AbilityTask_GrantNearbyInteraction_generated_h
#error "AbilityTask_GrantNearbyInteraction.generated.h already included, missing '#pragma once' in AbilityTask_GrantNearbyInteraction.h"
#endif
#define LYRAGAME_AbilityTask_GrantNearbyInteraction_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGrantAbilitiesForNearbyInteractors);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_GrantNearbyInteraction(); \
	friend struct Z_Construct_UClass_UAbilityTask_GrantNearbyInteraction_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_GrantNearbyInteraction, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_GrantNearbyInteraction)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_GrantNearbyInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_GrantNearbyInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_GrantNearbyInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_GrantNearbyInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_GrantNearbyInteraction(UAbilityTask_GrantNearbyInteraction&&); \
	UAbilityTask_GrantNearbyInteraction(const UAbilityTask_GrantNearbyInteraction&); \
public: \
	NO_API virtual ~UAbilityTask_GrantNearbyInteraction();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_RPC_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_INCLASS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UAbilityTask_GrantNearbyInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_GrantNearbyInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
