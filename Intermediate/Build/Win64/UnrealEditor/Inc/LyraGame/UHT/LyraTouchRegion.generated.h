// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LyraTouchRegion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraTouchRegion_generated_h
#error "LyraTouchRegion.generated.h already included, missing '#pragma once' in LyraTouchRegion.h"
#endif
#define LYRAGAME_LyraTouchRegion_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldSimulateInput);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTouchRegion(); \
	friend struct Z_Construct_UClass_ULyraTouchRegion_Statics; \
public: \
	DECLARE_CLASS(ULyraTouchRegion, ULyraSimulatedInputWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTouchRegion)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTouchRegion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraTouchRegion(ULyraTouchRegion&&); \
	ULyraTouchRegion(const ULyraTouchRegion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTouchRegion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTouchRegion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTouchRegion) \
	NO_API virtual ~ULyraTouchRegion();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_18_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTouchRegion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraTouchRegion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
