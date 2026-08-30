// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Foundation/LyraConfirmationScreen.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventReply;
struct FGeometry;
struct FPointerEvent;
#ifdef LYRAGAME_LyraConfirmationScreen_generated_h
#error "LyraConfirmationScreen.generated.h already included, missing '#pragma once' in LyraConfirmationScreen.h"
#endif
#define LYRAGAME_LyraConfirmationScreen_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTapToCloseZoneMouseButtonDown);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraConfirmationScreen(); \
	friend struct Z_Construct_UClass_ULyraConfirmationScreen_Statics; \
public: \
	DECLARE_CLASS(ULyraConfirmationScreen, UCommonGameDialog, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraConfirmationScreen)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraConfirmationScreen(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraConfirmationScreen(ULyraConfirmationScreen&&); \
	ULyraConfirmationScreen(const ULyraConfirmationScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraConfirmationScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraConfirmationScreen); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULyraConfirmationScreen) \
	NO_API virtual ~ULyraConfirmationScreen();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_21_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraConfirmationScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraConfirmationScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
