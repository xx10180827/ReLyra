// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraSystemStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;
struct FLinearColor;
struct FPrimaryAssetId;
#ifdef LYRAGAME_LyraSystemStatics_generated_h
#error "LyraSystemStatics.generated.h already included, missing '#pragma once' in LyraSystemStatics.h"
#endif
#define LYRAGAME_LyraSystemStatics_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindComponentsByClass); \
	DECLARE_FUNCTION(execSetColorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetScalarParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execPlayNextGame); \
	DECLARE_FUNCTION(execGetPrimaryAssetIdFromUserFacingExperienceName); \
	DECLARE_FUNCTION(execGetTypedSoftObjectReferenceFromPrimaryAssetId);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraSystemStatics(); \
	friend struct Z_Construct_UClass_ULyraSystemStatics_Statics; \
public: \
	DECLARE_CLASS(ULyraSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSystemStatics)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraSystemStatics(ULyraSystemStatics&&); \
	ULyraSystemStatics(const ULyraSystemStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSystemStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraSystemStatics) \
	NO_API virtual ~ULyraSystemStatics();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraSystemStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraSystemStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
