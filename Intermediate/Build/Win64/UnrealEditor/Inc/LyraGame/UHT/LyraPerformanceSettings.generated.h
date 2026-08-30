// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Performance/LyraPerformanceSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraPerformanceSettings_generated_h
#error "LyraPerformanceSettings.generated.h already included, missing '#pragma once' in LyraPerformanceSettings.h"
#endif
#define LYRAGAME_LyraPerformanceSettings_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraQualityDeviceProfileVariant_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraQualityDeviceProfileVariant>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraPerformanceStatGroup_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraPerformanceStatGroup>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPlatformSpecificRenderingSettings(); \
	friend struct Z_Construct_UClass_ULyraPlatformSpecificRenderingSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraPlatformSpecificRenderingSettings, UPlatformSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPlatformSpecificRenderingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraPlatformSpecificRenderingSettings(ULyraPlatformSpecificRenderingSettings&&); \
	ULyraPlatformSpecificRenderingSettings(const ULyraPlatformSpecificRenderingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPlatformSpecificRenderingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPlatformSpecificRenderingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraPlatformSpecificRenderingSettings) \
	NO_API virtual ~ULyraPlatformSpecificRenderingSettings();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_67_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_70_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPlatformSpecificRenderingSettings>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPerformanceSettings(); \
	friend struct Z_Construct_UClass_ULyraPerformanceSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraPerformanceSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPerformanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraPerformanceSettings(ULyraPerformanceSettings&&); \
	ULyraPerformanceSettings(const ULyraPerformanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPerformanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPerformanceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraPerformanceSettings) \
	NO_API virtual ~ULyraPerformanceSettings();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_120_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_123_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPerformanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceSettings_h


#define FOREACH_ENUM_ELYRAFRAMEPACINGMODE(op) \
	op(ELyraFramePacingMode::DesktopStyle) \
	op(ELyraFramePacingMode::ConsoleStyle) \
	op(ELyraFramePacingMode::MobileStyle) 

enum class ELyraFramePacingMode : uint8;
template<> struct TIsUEnumClass<ELyraFramePacingMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraFramePacingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
