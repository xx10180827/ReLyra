// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ContentValidationCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAEDITOR_ContentValidationCommandlet_generated_h
#error "ContentValidationCommandlet.generated.h already included, missing '#pragma once' in ContentValidationCommandlet.h"
#endif
#define LYRAEDITOR_ContentValidationCommandlet_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUContentValidationCommandlet(); \
	friend struct Z_Construct_UClass_UContentValidationCommandlet_Statics; \
public: \
	DECLARE_CLASS(UContentValidationCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LyraEditor"), NO_API) \
	DECLARE_SERIALIZER(UContentValidationCommandlet)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentValidationCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentValidationCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentValidationCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentValidationCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentValidationCommandlet(UContentValidationCommandlet&&); \
	UContentValidationCommandlet(const UContentValidationCommandlet&); \
public: \
	NO_API virtual ~UContentValidationCommandlet();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_12_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_15_INCLASS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAEDITOR_API UClass* StaticClass<class UContentValidationCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraEditor_Commandlets_ContentValidationCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
