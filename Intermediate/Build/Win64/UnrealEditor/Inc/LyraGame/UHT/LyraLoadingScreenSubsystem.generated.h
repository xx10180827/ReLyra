// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Foundation/LyraLoadingScreenSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef LYRAGAME_LyraLoadingScreenSubsystem_generated_h
#error "LyraLoadingScreenSubsystem.generated.h already included, missing '#pragma once' in LyraLoadingScreenSubsystem.h"
#endif
#define LYRAGAME_LyraLoadingScreenSubsystem_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_15_DELEGATE \
LYRAGAME_API void FLoadingScreenWidgetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoadingScreenWidgetChangedDelegate, TSubclassOf<UUserWidget> NewWidgetClass);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLoadingScreenContentWidget); \
	DECLARE_FUNCTION(execSetLoadingScreenContentWidget);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLoadingScreenSubsystem(); \
	friend struct Z_Construct_UClass_ULyraLoadingScreenSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraLoadingScreenSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraLoadingScreenSubsystem)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraLoadingScreenSubsystem(ULyraLoadingScreenSubsystem&&); \
	ULyraLoadingScreenSubsystem(const ULyraLoadingScreenSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLoadingScreenSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLoadingScreenSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraLoadingScreenSubsystem) \
	NO_API virtual ~ULyraLoadingScreenSubsystem();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_21_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraLoadingScreenSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraLoadingScreenSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
