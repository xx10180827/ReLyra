// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PerformanceStats/LyraPerfStatWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELyraDisplayablePerformanceStat : uint8;
#ifdef LYRAGAME_LyraPerfStatWidgetBase_generated_h
#error "LyraPerfStatWidgetBase.generated.h already included, missing '#pragma once' in LyraPerfStatWidgetBase.h"
#endif
#define LYRAGAME_LyraPerfStatWidgetBase_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFetchStatValue); \
	DECLARE_FUNCTION(execGetStatToDisplay);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPerfStatWidgetBase(); \
	friend struct Z_Construct_UClass_ULyraPerfStatWidgetBase_Statics; \
public: \
	DECLARE_CLASS(ULyraPerfStatWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPerfStatWidgetBase)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraPerfStatWidgetBase(ULyraPerfStatWidgetBase&&); \
	ULyraPerfStatWidgetBase(const ULyraPerfStatWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPerfStatWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPerfStatWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraPerfStatWidgetBase) \
	NO_API virtual ~ULyraPerfStatWidgetBase();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_20_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h_26_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPerfStatWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_PerformanceStats_LyraPerfStatWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
