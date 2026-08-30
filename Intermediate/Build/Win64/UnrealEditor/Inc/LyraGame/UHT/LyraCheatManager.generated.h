// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraCheatManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraCheatManager_generated_h
#error "LyraCheatManager.generated.h already included, missing '#pragma once' in LyraCheatManager.h"
#endif
#define LYRAGAME_LyraCheatManager_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnlimitedHealth); \
	DECLARE_FUNCTION(execOnRecoilTestSampleTick); \
	DECLARE_FUNCTION(execOnRecoilTestFireTick); \
	DECLARE_FUNCTION(execTestRecoil); \
	DECLARE_FUNCTION(execDamageSelfDestruct); \
	DECLARE_FUNCTION(execHealTarget); \
	DECLARE_FUNCTION(execHealSelf); \
	DECLARE_FUNCTION(execDamageSelf); \
	DECLARE_FUNCTION(execRemoveTagFromSelf); \
	DECLARE_FUNCTION(execAddTagToSelf); \
	DECLARE_FUNCTION(execCancelActivatedAbilities); \
	DECLARE_FUNCTION(execCycleAbilitySystemDebug); \
	DECLARE_FUNCTION(execCycleDebugCameras); \
	DECLARE_FUNCTION(execToggleFixedCamera); \
	DECLARE_FUNCTION(execPlayNextGame); \
	DECLARE_FUNCTION(execCheatAll); \
	DECLARE_FUNCTION(execCheat);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCheatManager(); \
	friend struct Z_Construct_UClass_ULyraCheatManager_Statics; \
public: \
	DECLARE_CLASS(ULyraCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(ULyraCheatManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCheatManager(ULyraCheatManager&&); \
	ULyraCheatManager(const ULyraCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, ULyraCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCheatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraCheatManager) \
	LYRAGAME_API virtual ~ULyraCheatManager();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_23_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraCheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
