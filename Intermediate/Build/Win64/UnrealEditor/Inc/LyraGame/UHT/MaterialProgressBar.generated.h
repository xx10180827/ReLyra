// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Basic/MaterialProgressBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef LYRAGAME_MaterialProgressBar_generated_h
#error "MaterialProgressBar.generated.h already included, missing '#pragma once' in MaterialProgressBar.h"
#endif
#define LYRAGAME_MaterialProgressBar_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_52_DELEGATE \
static LYRAGAME_API void FOnFillAnimationFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFillAnimationFinished);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimateProgressFromCurrent); \
	DECLARE_FUNCTION(execAnimateProgressFromStart); \
	DECLARE_FUNCTION(execSetColorBackground); \
	DECLARE_FUNCTION(execSetColorB); \
	DECLARE_FUNCTION(execSetColorA); \
	DECLARE_FUNCTION(execSetStartProgress); \
	DECLARE_FUNCTION(execSetProgress);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialProgressBar(); \
	friend struct Z_Construct_UClass_UMaterialProgressBar_Statics; \
public: \
	DECLARE_CLASS(UMaterialProgressBar, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UMaterialProgressBar)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialProgressBar(UMaterialProgressBar&&); \
	UMaterialProgressBar(const UMaterialProgressBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialProgressBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialProgressBar); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialProgressBar) \
	NO_API virtual ~UMaterialProgressBar();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UMaterialProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Basic_MaterialProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
