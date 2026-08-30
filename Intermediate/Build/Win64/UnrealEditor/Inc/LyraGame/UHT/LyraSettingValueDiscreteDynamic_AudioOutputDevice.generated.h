// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/CustomSettings/LyraSettingValueDiscreteDynamic_AudioOutputDevice.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioDeviceChangedRole : uint8;
struct FAudioOutputDeviceInfo;
struct FSwapAudioOutputResult;
#ifdef LYRAGAME_LyraSettingValueDiscreteDynamic_AudioOutputDevice_generated_h
#error "LyraSettingValueDiscreteDynamic_AudioOutputDevice.generated.h already included, missing '#pragma once' in LyraSettingValueDiscreteDynamic_AudioOutputDevice.h"
#endif
#define LYRAGAME_LyraSettingValueDiscreteDynamic_AudioOutputDevice_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDefaultDeviceChanged); \
	DECLARE_FUNCTION(execDeviceAddedOrRemoved); \
	DECLARE_FUNCTION(execOnCompletedDeviceSwap); \
	DECLARE_FUNCTION(execOnAudioOutputDevicesObtained);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraSettingValueDiscreteDynamic_AudioOutputDevice(); \
	friend struct Z_Construct_UClass_ULyraSettingValueDiscreteDynamic_AudioOutputDevice_Statics; \
public: \
	DECLARE_CLASS(ULyraSettingValueDiscreteDynamic_AudioOutputDevice, UGameSettingValueDiscreteDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSettingValueDiscreteDynamic_AudioOutputDevice)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraSettingValueDiscreteDynamic_AudioOutputDevice(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraSettingValueDiscreteDynamic_AudioOutputDevice(ULyraSettingValueDiscreteDynamic_AudioOutputDevice&&); \
	ULyraSettingValueDiscreteDynamic_AudioOutputDevice(const ULyraSettingValueDiscreteDynamic_AudioOutputDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSettingValueDiscreteDynamic_AudioOutputDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSettingValueDiscreteDynamic_AudioOutputDevice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraSettingValueDiscreteDynamic_AudioOutputDevice)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_15_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraSettingValueDiscreteDynamic_AudioOutputDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_CustomSettings_LyraSettingValueDiscreteDynamic_AudioOutputDevice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
