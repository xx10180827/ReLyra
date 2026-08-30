// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamDisplayAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UNiagaraComponent;
#ifdef LYRAGAME_LyraTeamDisplayAsset_generated_h
#error "LyraTeamDisplayAsset.generated.h already included, missing '#pragma once' in LyraTeamDisplayAsset.h"
#endif
#define LYRAGAME_LyraTeamDisplayAsset_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyToActor); \
	DECLARE_FUNCTION(execApplyToNiagaraComponent); \
	DECLARE_FUNCTION(execApplyToMeshComponent); \
	DECLARE_FUNCTION(execApplyToMaterial);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTeamDisplayAsset(); \
	friend struct Z_Construct_UClass_ULyraTeamDisplayAsset_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamDisplayAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamDisplayAsset)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTeamDisplayAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraTeamDisplayAsset(ULyraTeamDisplayAsset&&); \
	ULyraTeamDisplayAsset(const ULyraTeamDisplayAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamDisplayAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamDisplayAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTeamDisplayAsset) \
	NO_API virtual ~ULyraTeamDisplayAsset();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTeamDisplayAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamDisplayAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
