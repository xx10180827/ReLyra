// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/IndicatorSystem/IActorIndicatorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIndicatorDescriptor;
#ifdef LYRAGAME_IActorIndicatorWidget_generated_h
#error "IActorIndicatorWidget.generated.h already included, missing '#pragma once' in IActorIndicatorWidget.h"
#endif
#define LYRAGAME_IActorIndicatorWidget_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UnbindIndicator_Implementation(const UIndicatorDescriptor* Indicator) {}; \
	virtual void BindIndicator_Implementation(UIndicatorDescriptor* Indicator) {}; \
	DECLARE_FUNCTION(execUnbindIndicator); \
	DECLARE_FUNCTION(execBindIndicator);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIndicatorWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIndicatorWidgetInterface(UIndicatorWidgetInterface&&); \
	UIndicatorWidgetInterface(const UIndicatorWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIndicatorWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIndicatorWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIndicatorWidgetInterface) \
	NO_API virtual ~UIndicatorWidgetInterface();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIndicatorWidgetInterface(); \
	friend struct Z_Construct_UClass_UIndicatorWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UIndicatorWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UIndicatorWidgetInterface)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_GENERATED_UINTERFACE_BODY() \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIndicatorWidgetInterface() {} \
public: \
	typedef UIndicatorWidgetInterface UClassType; \
	typedef IIndicatorWidgetInterface ThisClass; \
	static void Execute_BindIndicator(UObject* O, UIndicatorDescriptor* Indicator); \
	static void Execute_UnbindIndicator(UObject* O, const UIndicatorDescriptor* Indicator); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UIndicatorWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IActorIndicatorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
