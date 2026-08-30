// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cosmetics/LyraCosmeticDeveloperSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraCosmeticDeveloperSettings_generated_h
#error "LyraCosmeticDeveloperSettings.generated.h already included, missing '#pragma once' in LyraCosmeticDeveloperSettings.h"
#endif
#define LYRAGAME_LyraCosmeticDeveloperSettings_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCosmeticDeveloperSettings(); \
	friend struct Z_Construct_UClass_ULyraCosmeticDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraCosmeticDeveloperSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(ULyraCosmeticDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCosmeticDeveloperSettings(ULyraCosmeticDeveloperSettings&&); \
	ULyraCosmeticDeveloperSettings(const ULyraCosmeticDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, ULyraCosmeticDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCosmeticDeveloperSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraCosmeticDeveloperSettings) \
	LYRAGAME_API virtual ~ULyraCosmeticDeveloperSettings();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_25_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCosmeticDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticDeveloperSettings_h


#define FOREACH_ENUM_ECOSMETICCHEATMODE(op) \
	op(ECosmeticCheatMode::ReplaceParts) \
	op(ECosmeticCheatMode::AddParts) 

enum class ECosmeticCheatMode;
template<> struct TIsUEnumClass<ECosmeticCheatMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ECosmeticCheatMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
