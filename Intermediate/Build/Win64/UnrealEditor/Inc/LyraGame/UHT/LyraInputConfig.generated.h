// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/LyraInputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FGameplayTag;
#ifdef LYRAGAME_LyraInputConfig_generated_h
#error "LyraInputConfig.generated.h already included, missing '#pragma once' in LyraInputConfig.h"
#endif
#define LYRAGAME_LyraInputConfig_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInputAction_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraInputAction>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindAbilityInputActionForTag); \
	DECLARE_FUNCTION(execFindNativeInputActionForTag);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraInputConfig(); \
	friend struct Z_Construct_UClass_ULyraInputConfig_Statics; \
public: \
	DECLARE_CLASS(ULyraInputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraInputConfig)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraInputConfig(ULyraInputConfig&&); \
	ULyraInputConfig(const ULyraInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraInputConfig) \
	NO_API virtual ~ULyraInputConfig();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_38_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Input_LyraInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
