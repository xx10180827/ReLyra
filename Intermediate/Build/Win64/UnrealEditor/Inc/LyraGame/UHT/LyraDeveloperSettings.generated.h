// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Development/LyraDeveloperSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraDeveloperSettings_generated_h
#error "LyraDeveloperSettings.generated.h already included, missing '#pragma once' in LyraDeveloperSettings.h"
#endif
#define LYRAGAME_LyraDeveloperSettings_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraCheatToRun_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraCheatToRun>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraDeveloperSettings(); \
	friend struct Z_Construct_UClass_ULyraDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(ULyraDeveloperSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(ULyraDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraDeveloperSettings(ULyraDeveloperSettings&&); \
	ULyraDeveloperSettings(const ULyraDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, ULyraDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraDeveloperSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraDeveloperSettings) \
	LYRAGAME_API virtual ~ULyraDeveloperSettings();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_39_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_42_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraDeveloperSettings_h


#define FOREACH_ENUM_ECHEATEXECUTIONTIME(op) \
	op(ECheatExecutionTime::OnCheatManagerCreated) \
	op(ECheatExecutionTime::OnPlayerPawnPossession) 

enum class ECheatExecutionTime;
template<> struct TIsUEnumClass<ECheatExecutionTime> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ECheatExecutionTime>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
