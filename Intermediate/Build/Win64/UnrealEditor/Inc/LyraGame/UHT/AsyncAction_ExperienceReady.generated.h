// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/AsyncAction_ExperienceReady.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_ExperienceReady;
class UObject;
#ifdef LYRAGAME_AsyncAction_ExperienceReady_generated_h
#error "AsyncAction_ExperienceReady.generated.h already included, missing '#pragma once' in AsyncAction_ExperienceReady.h"
#endif
#define LYRAGAME_AsyncAction_ExperienceReady_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_14_DELEGATE \
LYRAGAME_API void FExperienceReadyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExperienceReadyAsyncDelegate);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForExperienceReady);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_ExperienceReady(); \
	friend struct Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ExperienceReady, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ExperienceReady)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ExperienceReady(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ExperienceReady) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ExperienceReady); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ExperienceReady); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncAction_ExperienceReady(UAsyncAction_ExperienceReady&&); \
	UAsyncAction_ExperienceReady(const UAsyncAction_ExperienceReady&); \
public: \
	NO_API virtual ~UAsyncAction_ExperienceReady();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_20_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_RPC_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_INCLASS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UAsyncAction_ExperienceReady>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_AsyncAction_ExperienceReady_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
