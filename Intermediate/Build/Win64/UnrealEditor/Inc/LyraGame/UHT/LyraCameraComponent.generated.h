// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/LyraCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULyraCameraComponent;
#ifdef LYRAGAME_LyraCameraComponent_generated_h
#error "LyraCameraComponent.generated.h already included, missing '#pragma once' in LyraCameraComponent.h"
#endif
#define LYRAGAME_LyraCameraComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindCameraComponent);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCameraComponent(); \
	friend struct Z_Construct_UClass_ULyraCameraComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCameraComponent)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCameraComponent(ULyraCameraComponent&&); \
	ULyraCameraComponent(const ULyraCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraCameraComponent) \
	NO_API virtual ~ULyraCameraComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_27_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
