// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LyraSettingsShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EColorBlindMode : uint8;
enum class ELyraAllowBackgroundAudioSetting : uint8;
enum class ELyraGamepadSensitivity : uint8;
enum class ESubtitleDisplayBackgroundOpacity : uint8;
enum class ESubtitleDisplayTextBorder : uint8;
enum class ESubtitleDisplayTextColor : uint8;
enum class ESubtitleDisplayTextSize : uint8;
#ifdef LYRAGAME_LyraSettingsShared_generated_h
#error "LyraSettingsShared.generated.h already included, missing '#pragma once' in LyraSettingsShared.h"
#endif
#define LYRAGAME_LyraSettingsShared_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGamepadTargetingSensitivityPreset); \
	DECLARE_FUNCTION(execGetGamepadTargetingSensitivityPreset); \
	DECLARE_FUNCTION(execSetLookSensitivityPreset); \
	DECLARE_FUNCTION(execGetGamepadLookSensitivityPreset); \
	DECLARE_FUNCTION(execSetInvertHorizontalAxis); \
	DECLARE_FUNCTION(execGetInvertHorizontalAxis); \
	DECLARE_FUNCTION(execSetInvertVerticalAxis); \
	DECLARE_FUNCTION(execGetInvertVerticalAxis); \
	DECLARE_FUNCTION(execSetTargetingMultiplier); \
	DECLARE_FUNCTION(execGetTargetingMultiplier); \
	DECLARE_FUNCTION(execSetMouseSensitivityY); \
	DECLARE_FUNCTION(execGetMouseSensitivityY); \
	DECLARE_FUNCTION(execSetMouseSensitivityX); \
	DECLARE_FUNCTION(execGetMouseSensitivityX); \
	DECLARE_FUNCTION(execSetAllowAudioInBackgroundSetting); \
	DECLARE_FUNCTION(execGetAllowAudioInBackgroundSetting); \
	DECLARE_FUNCTION(execSetSubtitlesBackgroundOpacity); \
	DECLARE_FUNCTION(execGetSubtitlesBackgroundOpacity); \
	DECLARE_FUNCTION(execSetSubtitlesTextBorder); \
	DECLARE_FUNCTION(execGetSubtitlesTextBorder); \
	DECLARE_FUNCTION(execSetSubtitlesTextColor); \
	DECLARE_FUNCTION(execGetSubtitlesTextColor); \
	DECLARE_FUNCTION(execSetSubtitlesTextSize); \
	DECLARE_FUNCTION(execGetSubtitlesTextSize); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execGetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetTriggerHapticStartPosition); \
	DECLARE_FUNCTION(execGetTriggerHapticStartPosition); \
	DECLARE_FUNCTION(execSetTriggerHapticStrength); \
	DECLARE_FUNCTION(execGetTriggerHapticStrength); \
	DECLARE_FUNCTION(execSetTriggerPullUsesHapticThreshold); \
	DECLARE_FUNCTION(execGetTriggerPullUsesHapticThreshold); \
	DECLARE_FUNCTION(execSetTriggerHapticsEnabled); \
	DECLARE_FUNCTION(execGetTriggerHapticsEnabled); \
	DECLARE_FUNCTION(execSetGamepadLookStickDeadZone); \
	DECLARE_FUNCTION(execGetGamepadLookStickDeadZone); \
	DECLARE_FUNCTION(execSetGamepadMoveStickDeadZone); \
	DECLARE_FUNCTION(execGetGamepadMoveStickDeadZone); \
	DECLARE_FUNCTION(execSetForceFeedbackEnabled); \
	DECLARE_FUNCTION(execGetForceFeedbackEnabled); \
	DECLARE_FUNCTION(execSetColorBlindStrength); \
	DECLARE_FUNCTION(execGetColorBlindStrength); \
	DECLARE_FUNCTION(execSetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindMode);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraSettingsShared(); \
	friend struct Z_Construct_UClass_ULyraSettingsShared_Statics; \
public: \
	DECLARE_CLASS(ULyraSettingsShared, ULocalPlayerSaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSettingsShared)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraSettingsShared(ULyraSettingsShared&&); \
	ULyraSettingsShared(const ULyraSettingsShared&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSettingsShared); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSettingsShared); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraSettingsShared) \
	NO_API virtual ~ULyraSettingsShared();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_63_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraSettingsShared>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_LyraSettingsShared_h


#define FOREACH_ENUM_ECOLORBLINDMODE(op) \
	op(EColorBlindMode::Off) \
	op(EColorBlindMode::Deuteranope) \
	op(EColorBlindMode::Protanope) \
	op(EColorBlindMode::Tritanope) 

enum class EColorBlindMode : uint8;
template<> struct TIsUEnumClass<EColorBlindMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<EColorBlindMode>();

#define FOREACH_ENUM_ELYRAALLOWBACKGROUNDAUDIOSETTING(op) \
	op(ELyraAllowBackgroundAudioSetting::Off) \
	op(ELyraAllowBackgroundAudioSetting::AllSounds) \
	op(ELyraAllowBackgroundAudioSetting::Num) 

enum class ELyraAllowBackgroundAudioSetting : uint8;
template<> struct TIsUEnumClass<ELyraAllowBackgroundAudioSetting> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraAllowBackgroundAudioSetting>();

#define FOREACH_ENUM_ELYRAGAMEPADSENSITIVITY(op) \
	op(ELyraGamepadSensitivity::Invalid) \
	op(ELyraGamepadSensitivity::Slow) \
	op(ELyraGamepadSensitivity::SlowPlus) \
	op(ELyraGamepadSensitivity::SlowPlusPlus) \
	op(ELyraGamepadSensitivity::Normal) \
	op(ELyraGamepadSensitivity::NormalPlus) \
	op(ELyraGamepadSensitivity::NormalPlusPlus) \
	op(ELyraGamepadSensitivity::Fast) \
	op(ELyraGamepadSensitivity::FastPlus) \
	op(ELyraGamepadSensitivity::FastPlusPlus) \
	op(ELyraGamepadSensitivity::Insane) 

enum class ELyraGamepadSensitivity : uint8;
template<> struct TIsUEnumClass<ELyraGamepadSensitivity> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraGamepadSensitivity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
