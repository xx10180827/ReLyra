// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/IndicatorSystem/IndicatorDescriptor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USceneComponent;
class UUserWidget;
enum class EActorCanvasProjectionMode : uint8;
#ifdef LYRAGAME_IndicatorDescriptor_generated_h
#error "IndicatorDescriptor.generated.h already included, missing '#pragma once' in IndicatorDescriptor.h"
#endif
#define LYRAGAME_IndicatorDescriptor_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterIndicator); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetBoundingBoxAnchor); \
	DECLARE_FUNCTION(execGetBoundingBoxAnchor); \
	DECLARE_FUNCTION(execSetScreenSpaceOffset); \
	DECLARE_FUNCTION(execGetScreenSpaceOffset); \
	DECLARE_FUNCTION(execSetWorldPositionOffset); \
	DECLARE_FUNCTION(execGetWorldPositionOffset); \
	DECLARE_FUNCTION(execSetShowClampToScreenArrow); \
	DECLARE_FUNCTION(execGetShowClampToScreenArrow); \
	DECLARE_FUNCTION(execSetClampToScreen); \
	DECLARE_FUNCTION(execGetClampToScreen); \
	DECLARE_FUNCTION(execSetVAlign); \
	DECLARE_FUNCTION(execGetVAlign); \
	DECLARE_FUNCTION(execSetHAlign); \
	DECLARE_FUNCTION(execGetHAlign); \
	DECLARE_FUNCTION(execSetProjectionMode); \
	DECLARE_FUNCTION(execGetProjectionMode); \
	DECLARE_FUNCTION(execSetDesiredVisibility); \
	DECLARE_FUNCTION(execGetIsVisible); \
	DECLARE_FUNCTION(execGetAutoRemoveWhenIndicatorComponentIsNull); \
	DECLARE_FUNCTION(execSetAutoRemoveWhenIndicatorComponentIsNull); \
	DECLARE_FUNCTION(execSetIndicatorClass); \
	DECLARE_FUNCTION(execGetIndicatorClass); \
	DECLARE_FUNCTION(execSetComponentSocketName); \
	DECLARE_FUNCTION(execGetComponentSocketName); \
	DECLARE_FUNCTION(execSetSceneComponent); \
	DECLARE_FUNCTION(execGetSceneComponent); \
	DECLARE_FUNCTION(execSetDataObject); \
	DECLARE_FUNCTION(execGetDataObject);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIndicatorDescriptor(); \
	friend struct Z_Construct_UClass_UIndicatorDescriptor_Statics; \
public: \
	DECLARE_CLASS(UIndicatorDescriptor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UIndicatorDescriptor)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIndicatorDescriptor(UIndicatorDescriptor&&); \
	UIndicatorDescriptor(const UIndicatorDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIndicatorDescriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIndicatorDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIndicatorDescriptor) \
	NO_API virtual ~UIndicatorDescriptor();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_36_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UIndicatorDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorDescriptor_h


#define FOREACH_ENUM_EACTORCANVASPROJECTIONMODE(op) \
	op(EActorCanvasProjectionMode::ComponentPoint) \
	op(EActorCanvasProjectionMode::ComponentBoundingBox) \
	op(EActorCanvasProjectionMode::ComponentScreenBoundingBox) \
	op(EActorCanvasProjectionMode::ActorBoundingBox) \
	op(EActorCanvasProjectionMode::ActorScreenBoundingBox) 

enum class EActorCanvasProjectionMode : uint8;
template<> struct TIsUEnumClass<EActorCanvasProjectionMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<EActorCanvasProjectionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
