// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LyraSettingsLocal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayerMappableInputConfig;
#ifdef LYRAGAME_LyraSettingsLocal_generated_h
#error "LyraSettingsLocal.generated.h already included, missing '#pragma once' in LyraSettingsLocal.h"
#endif
#define LYRAGAME_LyraSettingsLocal_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraScalabilitySnapshot_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraScalabilitySnapshot>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNumberOfReplaysToKeep); \
	DECLARE_FUNCTION(execGetNumberOfReplaysToKeep); \
	DECLARE_FUNCTION(execSetShouldAutoRecordReplays); \
	DECLARE_FUNCTION(execShouldAutoRecordReplays); \
	DECLARE_FUNCTION(execGetInputConfigByName); \
	DECLARE_FUNCTION(execGetControllerPlatform); \
	DECLARE_FUNCTION(execSetControllerPlatform); \
	DECLARE_FUNCTION(execSetSafeZone); \
	DECLARE_FUNCTION(execGetSafeZone); \
	DECLARE_FUNCTION(execIsSafeZoneSet); \
	DECLARE_FUNCTION(execSetAudioOutputDeviceId); \
	DECLARE_FUNCTION(execGetAudioOutputDeviceId); \
	DECLARE_FUNCTION(execSetVoiceChatVolume); \
	DECLARE_FUNCTION(execGetVoiceChatVolume); \
	DECLARE_FUNCTION(execSetDialogueVolume); \
	DECLARE_FUNCTION(execGetDialogueVolume); \
	DECLARE_FUNCTION(execSetSoundFXVolume); \
	DECLARE_FUNCTION(execGetSoundFXVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetOverallVolume); \
	DECLARE_FUNCTION(execGetOverallVolume); \
	DECLARE_FUNCTION(execRunAutoBenchmark); \
	DECLARE_FUNCTION(execShouldRunAutoBenchmarkAtStartup); \
	DECLARE_FUNCTION(execCanRunAutoBenchmark); \
	DECLARE_FUNCTION(execSetHDRAudioModeEnabled); \
	DECLARE_FUNCTION(execIsHDRAudioModeEnabled); \
	DECLARE_FUNCTION(execCanModifyHeadphoneModeEnabled); \
	DECLARE_FUNCTION(execSetHeadphoneModeEnabled); \
	DECLARE_FUNCTION(execIsHeadphoneModeEnabled); \
	DECLARE_FUNCTION(execSetDesiredDeviceProfileQualitySuffix); \
	DECLARE_FUNCTION(execGetDesiredDeviceProfileQualitySuffix); \
	DECLARE_FUNCTION(execSetFrameRateLimit_Always); \
	DECLARE_FUNCTION(execGetFrameRateLimit_Always); \
	DECLARE_FUNCTION(execSetFrameRateLimit_WhenBackgrounded); \
	DECLARE_FUNCTION(execGetFrameRateLimit_WhenBackgrounded); \
	DECLARE_FUNCTION(execSetFrameRateLimit_InMenu); \
	DECLARE_FUNCTION(execGetFrameRateLimit_InMenu); \
	DECLARE_FUNCTION(execSetFrameRateLimit_OnBattery); \
	DECLARE_FUNCTION(execGetFrameRateLimit_OnBattery); \
	DECLARE_FUNCTION(execSetDisplayGamma); \
	DECLARE_FUNCTION(execGetDisplayGamma);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraSettingsLocal(); \
	friend struct Z_Construct_UClass_ULyraSettingsLocal_Statics; \
public: \
	DECLARE_CLASS(ULyraSettingsLocal, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSettingsLocal)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraSettingsLocal(ULyraSettingsLocal&&); \
	ULyraSettingsLocal(const ULyraSettingsLocal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSettingsLocal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSettingsLocal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraSettingsLocal) \
	NO_API virtual ~ULyraSettingsLocal();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_37_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraSettingsLocal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsLocal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
