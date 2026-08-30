// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replays/LyraReplaySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULocalPlayer;
class ULyraReplayListEntry;
struct FDateTime;
struct FTimespan;
#ifdef LYRAGAME_LyraReplaySubsystem_generated_h
#error "LyraReplaySubsystem.generated.h already included, missing '#pragma once' in LyraReplaySubsystem.h"
#endif
#define LYRAGAME_LyraReplaySubsystem_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsLive); \
	DECLARE_FUNCTION(execGetNumViewers); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetFriendlyName);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReplayListEntry(); \
	friend struct Z_Construct_UClass_ULyraReplayListEntry_Statics; \
public: \
	DECLARE_CLASS(ULyraReplayListEntry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplayListEntry)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplayListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraReplayListEntry(ULyraReplayListEntry&&); \
	ULyraReplayListEntry(const ULyraReplayListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplayListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplayListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplayListEntry) \
	NO_API virtual ~ULyraReplayListEntry();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReplayListEntry>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReplayList(); \
	friend struct Z_Construct_UClass_ULyraReplayList_Statics; \
public: \
	DECLARE_CLASS(ULyraReplayList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplayList)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraReplayList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraReplayList(ULyraReplayList&&); \
	ULyraReplayList(const ULyraReplayList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplayList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplayList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraReplayList) \
	NO_API virtual ~ULyraReplayList();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_47_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_50_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReplayList>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReplayCurrentTime); \
	DECLARE_FUNCTION(execGetReplayLengthInSeconds); \
	DECLARE_FUNCTION(execSeekInActiveReplay); \
	DECLARE_FUNCTION(execCleanupLocalReplays); \
	DECLARE_FUNCTION(execRecordClientReplay); \
	DECLARE_FUNCTION(execPlayReplay); \
	DECLARE_FUNCTION(execDoesPlatformSupportReplays);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraReplaySubsystem(); \
	friend struct Z_Construct_UClass_ULyraReplaySubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraReplaySubsystem)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraReplaySubsystem(ULyraReplaySubsystem&&); \
	ULyraReplaySubsystem(const ULyraReplaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraReplaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraReplaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraReplaySubsystem) \
	NO_API virtual ~ULyraReplaySubsystem();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_58_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraReplaySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Replays_LyraReplaySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
