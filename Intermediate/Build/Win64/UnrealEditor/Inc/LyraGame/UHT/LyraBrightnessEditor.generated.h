// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/Screens/LyraBrightnessEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraBrightnessEditor_generated_h
#error "LyraBrightnessEditor.generated.h already included, missing '#pragma once' in LyraBrightnessEditor.h"
#endif
#define LYRAGAME_LyraBrightnessEditor_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleDoneClicked); \
	DECLARE_FUNCTION(execHandleBackClicked);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraBrightnessEditor(); \
	friend struct Z_Construct_UClass_ULyraBrightnessEditor_Statics; \
public: \
	DECLARE_CLASS(ULyraBrightnessEditor, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraBrightnessEditor) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraBrightnessEditor*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraBrightnessEditor(ULyraBrightnessEditor&&); \
	ULyraBrightnessEditor(const ULyraBrightnessEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraBrightnessEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraBrightnessEditor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraBrightnessEditor) \
	NO_API virtual ~ULyraBrightnessEditor();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_24_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraBrightnessEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Settings_Screens_LyraBrightnessEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
