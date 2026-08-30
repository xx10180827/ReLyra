// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hotfix/LyraRuntimeOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraRuntimeOptions;
#ifdef LYRAGAME_LyraRuntimeOptions_generated_h
#error "LyraRuntimeOptions.generated.h already included, missing '#pragma once' in LyraRuntimeOptions.h"
#endif
#define LYRAGAME_LyraRuntimeOptions_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRuntimeOptions);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraRuntimeOptions(); \
	friend struct Z_Construct_UClass_ULyraRuntimeOptions_Statics; \
public: \
	DECLARE_CLASS(ULyraRuntimeOptions, URuntimeOptionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraRuntimeOptions)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraRuntimeOptions(ULyraRuntimeOptions&&); \
	ULyraRuntimeOptions(const ULyraRuntimeOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraRuntimeOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraRuntimeOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraRuntimeOptions) \
	NO_API virtual ~ULyraRuntimeOptions();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_25_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraRuntimeOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Hotfix_LyraRuntimeOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
