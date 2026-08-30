// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FGameplayTagContainer;
#ifdef LYRAGAME_LyraAbilitySystemComponent_generated_h
#error "LyraAbilitySystemComponent.generated.h already included, missing '#pragma once' in LyraAbilitySystemComponent.h"
#endif
#define LYRAGAME_LyraAbilitySystemComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason); \
	DECLARE_FUNCTION(execClientNotifyAbilityFailed);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_ULyraAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraAbilitySystemComponent)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraAbilitySystemComponent(ULyraAbilitySystemComponent&&); \
	ULyraAbilitySystemComponent(const ULyraAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAbilitySystemComponent) \
	NO_API virtual ~ULyraAbilitySystemComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_25_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
