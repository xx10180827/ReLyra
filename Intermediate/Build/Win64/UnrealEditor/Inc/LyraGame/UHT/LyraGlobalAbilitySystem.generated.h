// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/LyraGlobalAbilitySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UGameplayEffect;
#ifdef LYRAGAME_LyraGlobalAbilitySystem_generated_h
#error "LyraGlobalAbilitySystem.generated.h already included, missing '#pragma once' in LyraGlobalAbilitySystem.h"
#endif
#define LYRAGAME_LyraGlobalAbilitySystem_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FGlobalAppliedAbilityList>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FGlobalAppliedEffectList>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveEffectFromAll); \
	DECLARE_FUNCTION(execRemoveAbilityFromAll); \
	DECLARE_FUNCTION(execApplyEffectToAll); \
	DECLARE_FUNCTION(execApplyAbilityToAll);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGlobalAbilitySystem(); \
	friend struct Z_Construct_UClass_ULyraGlobalAbilitySystem_Statics; \
public: \
	DECLARE_CLASS(ULyraGlobalAbilitySystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGlobalAbilitySystem)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGlobalAbilitySystem(ULyraGlobalAbilitySystem&&); \
	ULyraGlobalAbilitySystem(const ULyraGlobalAbilitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGlobalAbilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGlobalAbilitySystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraGlobalAbilitySystem) \
	NO_API virtual ~ULyraGlobalAbilitySystem();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_46_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGlobalAbilitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraGlobalAbilitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
