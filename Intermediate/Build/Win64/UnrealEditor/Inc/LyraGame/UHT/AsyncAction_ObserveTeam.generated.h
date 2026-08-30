// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/AsyncAction_ObserveTeam.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_ObserveTeam;
class UObject;
#ifdef LYRAGAME_AsyncAction_ObserveTeam_generated_h
#error "AsyncAction_ObserveTeam.generated.h already included, missing '#pragma once' in AsyncAction_ObserveTeam.h"
#endif
#define LYRAGAME_AsyncAction_ObserveTeam_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_14_DELEGATE \
LYRAGAME_API void FTeamObservedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamObservedAsyncDelegate, bool bTeamSet, int32 TeamId);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnWatchedAgentChangedTeam); \
	DECLARE_FUNCTION(execObserveTeam);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_ObserveTeam(); \
	friend struct Z_Construct_UClass_UAsyncAction_ObserveTeam_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ObserveTeam, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ObserveTeam)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ObserveTeam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ObserveTeam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ObserveTeam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ObserveTeam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncAction_ObserveTeam(UAsyncAction_ObserveTeam&&); \
	UAsyncAction_ObserveTeam(const UAsyncAction_ObserveTeam&); \
public: \
	NO_API virtual ~UAsyncAction_ObserveTeam();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_19_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_RPC_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_INCLASS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UAsyncAction_ObserveTeam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_AsyncAction_ObserveTeam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
