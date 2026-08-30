// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraTeamDisplayAsset;
class UObject;
class UTexture;
struct FLinearColor;
#ifdef LYRAGAME_LyraTeamStatics_generated_h
#error "LyraTeamStatics.generated.h already included, missing '#pragma once' in LyraTeamStatics.h"
#endif
#define LYRAGAME_LyraTeamStatics_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTeamTextureWithFallback); \
	DECLARE_FUNCTION(execGetTeamColorWithFallback); \
	DECLARE_FUNCTION(execGetTeamScalarWithFallback); \
	DECLARE_FUNCTION(execGetTeamDisplayAsset); \
	DECLARE_FUNCTION(execFindTeamFromObject);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTeamStatics(); \
	friend struct Z_Construct_UClass_ULyraTeamStatics_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamStatics)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraTeamStatics(ULyraTeamStatics&&); \
	ULyraTeamStatics(const ULyraTeamStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamStatics) \
	NO_API virtual ~ULyraTeamStatics();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_15_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTeamStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
