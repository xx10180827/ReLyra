// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Common/LyraWidgetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUserWidget;
#ifdef LYRAGAME_LyraWidgetFactory_generated_h
#error "LyraWidgetFactory.generated.h already included, missing '#pragma once' in LyraWidgetFactory.h"
#endif
#define LYRAGAME_LyraWidgetFactory_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSubclassOf<UUserWidget> FindWidgetClassForData_Implementation(const UObject* Data) const; \
	DECLARE_FUNCTION(execFindWidgetClassForData);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraWidgetFactory(); \
	friend struct Z_Construct_UClass_ULyraWidgetFactory_Statics; \
public: \
	DECLARE_CLASS(ULyraWidgetFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraWidgetFactory)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraWidgetFactory(ULyraWidgetFactory&&); \
	ULyraWidgetFactory(const ULyraWidgetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraWidgetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraWidgetFactory); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULyraWidgetFactory) \
	NO_API virtual ~ULyraWidgetFactory();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraWidgetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
