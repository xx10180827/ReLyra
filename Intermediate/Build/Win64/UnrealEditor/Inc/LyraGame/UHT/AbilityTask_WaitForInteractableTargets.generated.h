// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionOption;
#ifdef LYRAGAME_AbilityTask_WaitForInteractableTargets_generated_h
#error "AbilityTask_WaitForInteractableTargets.generated.h already included, missing '#pragma once' in AbilityTask_WaitForInteractableTargets.h"
#endif
#define LYRAGAME_AbilityTask_WaitForInteractableTargets_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_19_DELEGATE \
LYRAGAME_API void FInteractableObjectsChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& InteractableObjectsChangedEvent, TArray<FInteractionOption> const& InteractableOptions);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitForInteractableTargets(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitForInteractableTargets_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitForInteractableTargets, UAbilityTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitForInteractableTargets)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitForInteractableTargets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitForInteractableTargets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitForInteractableTargets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitForInteractableTargets); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_WaitForInteractableTargets(UAbilityTask_WaitForInteractableTargets&&); \
	UAbilityTask_WaitForInteractableTargets(const UAbilityTask_WaitForInteractableTargets&); \
public: \
	NO_API virtual ~UAbilityTask_WaitForInteractableTargets();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_21_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_24_INCLASS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UAbilityTask_WaitForInteractableTargets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_Tasks_AbilityTask_WaitForInteractableTargets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
