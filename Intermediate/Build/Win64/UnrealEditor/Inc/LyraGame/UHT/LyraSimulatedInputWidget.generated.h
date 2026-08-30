// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/LyraSimulatedInputWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedInputLocalPlayerSubsystem;
class UInputAction;
struct FKey;
#ifdef LYRAGAME_LyraSimulatedInputWidget_generated_h
#error "LyraSimulatedInputWidget.generated.h already included, missing '#pragma once' in LyraSimulatedInputWidget.h"
#endif
#define LYRAGAME_LyraSimulatedInputWidget_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnControlMappingsRebuilt); \
	DECLARE_FUNCTION(execFlushSimulatedInput); \
	DECLARE_FUNCTION(execInputKeyValue2D); \
	DECLARE_FUNCTION(execInputKeyValue); \
	DECLARE_FUNCTION(execGetSimulatedKey); \
	DECLARE_FUNCTION(execGetAssociatedAction); \
	DECLARE_FUNCTION(execGetEnhancedInputSubsystem);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraSimulatedInputWidget(); \
	friend struct Z_Construct_UClass_ULyraSimulatedInputWidget_Statics; \
public: \
	DECLARE_CLASS(ULyraSimulatedInputWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraSimulatedInputWidget)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraSimulatedInputWidget(ULyraSimulatedInputWidget&&); \
	ULyraSimulatedInputWidget(const ULyraSimulatedInputWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraSimulatedInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraSimulatedInputWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraSimulatedInputWidget) \
	NO_API virtual ~ULyraSimulatedInputWidget();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraSimulatedInputWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraSimulatedInputWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
