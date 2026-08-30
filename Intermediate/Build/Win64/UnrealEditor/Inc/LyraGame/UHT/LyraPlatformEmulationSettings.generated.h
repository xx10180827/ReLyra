// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Development/LyraPlatformEmulationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraPlatformEmulationSettings_generated_h
#error "LyraPlatformEmulationSettings.generated.h already included, missing '#pragma once' in LyraPlatformEmulationSettings.h"
#endif
#define LYRAGAME_LyraPlatformEmulationSettings_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetKnownDeviceProfiles); \
	DECLARE_FUNCTION(execGetKnownPlatformIds);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPlatformEmulationSettings(); \
	friend struct Z_Construct_UClass_ULyraPlatformEmulationSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraPlatformEmulationSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(ULyraPlatformEmulationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraPlatformEmulationSettings(ULyraPlatformEmulationSettings&&); \
	ULyraPlatformEmulationSettings(const ULyraPlatformEmulationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, ULyraPlatformEmulationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPlatformEmulationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraPlatformEmulationSettings) \
	LYRAGAME_API virtual ~ULyraPlatformEmulationSettings();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPlatformEmulationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraPlatformEmulationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
