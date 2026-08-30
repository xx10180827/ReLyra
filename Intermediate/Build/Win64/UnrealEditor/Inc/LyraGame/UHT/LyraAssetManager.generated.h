// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraAssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraAssetManager_generated_h
#error "LyraAssetManager.generated.h already included, missing '#pragma once' in LyraAssetManager.h"
#endif
#define LYRAGAME_LyraAssetManager_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraAssetManager(); \
	friend struct Z_Construct_UClass_ULyraAssetManager_Statics; \
public: \
	DECLARE_CLASS(ULyraAssetManager, UAssetManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraAssetManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraAssetManager(ULyraAssetManager&&); \
	ULyraAssetManager(const ULyraAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraAssetManager) \
	NO_API virtual ~ULyraAssetManager();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_28_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
