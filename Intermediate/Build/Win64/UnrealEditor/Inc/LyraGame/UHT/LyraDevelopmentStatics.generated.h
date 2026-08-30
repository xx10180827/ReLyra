// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraDevelopmentStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraDevelopmentStatics_generated_h
#error "LyraDevelopmentStatics.generated.h already included, missing '#pragma once' in LyraDevelopmentStatics.h"
#endif
#define LYRAGAME_LyraDevelopmentStatics_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanPlayerBotsAttack); \
	DECLARE_FUNCTION(execShouldLoadCosmeticBackgrounds); \
	DECLARE_FUNCTION(execShouldSkipDirectlyToGameplay);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraDevelopmentStatics(); \
	friend struct Z_Construct_UClass_ULyraDevelopmentStatics_Statics; \
public: \
	DECLARE_CLASS(ULyraDevelopmentStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraDevelopmentStatics)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraDevelopmentStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraDevelopmentStatics(ULyraDevelopmentStatics&&); \
	ULyraDevelopmentStatics(const ULyraDevelopmentStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraDevelopmentStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraDevelopmentStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraDevelopmentStatics) \
	NO_API virtual ~ULyraDevelopmentStatics();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_16_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraDevelopmentStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
