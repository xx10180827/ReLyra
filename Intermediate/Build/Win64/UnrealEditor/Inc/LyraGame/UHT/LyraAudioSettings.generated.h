// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/LyraAudioSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraAudioSettings_generated_h
#error "LyraAudioSettings.generated.h already included, missing '#pragma once' in LyraAudioSettings.h"
#endif
#define LYRAGAME_LyraAudioSettings_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraSubmixEffectChainMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraSubmixEffectChainMap>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraAudioSettings(); \
	friend struct Z_Construct_UClass_ULyraAudioSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraAudioSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraAudioSettings(ULyraAudioSettings&&); \
	ULyraAudioSettings(const ULyraAudioSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAudioSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAudioSettings) \
	NO_API virtual ~ULyraAudioSettings();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_30_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_33_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraAudioSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Audio_LyraAudioSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
