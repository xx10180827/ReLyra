// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/LyraCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraCameraMode_generated_h
#error "LyraCameraMode.generated.h already included, missing '#pragma once' in LyraCameraMode.h"
#endif
#define LYRAGAME_LyraCameraMode_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCameraMode(); \
	friend struct Z_Construct_UClass_ULyraCameraMode_Statics; \
public: \
	DECLARE_CLASS(ULyraCameraMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCameraMode)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCameraMode(ULyraCameraMode&&); \
	ULyraCameraMode(const ULyraCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCameraMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULyraCameraMode) \
	NO_API virtual ~ULyraCameraMode();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_65_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_68_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCameraMode>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCameraModeStack(); \
	friend struct Z_Construct_UClass_ULyraCameraModeStack_Statics; \
public: \
	DECLARE_CLASS(ULyraCameraModeStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCameraModeStack)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCameraModeStack(ULyraCameraModeStack&&); \
	ULyraCameraModeStack(const ULyraCameraModeStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCameraModeStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCameraModeStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraCameraModeStack) \
	NO_API virtual ~ULyraCameraModeStack();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_160_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_163_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCameraModeStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraMode_h


#define FOREACH_ENUM_ELYRACAMERAMODEBLENDFUNCTION(op) \
	op(ELyraCameraModeBlendFunction::Linear) \
	op(ELyraCameraModeBlendFunction::EaseIn) \
	op(ELyraCameraModeBlendFunction::EaseOut) \
	op(ELyraCameraModeBlendFunction::EaseInOut) \
	op(ELyraCameraModeBlendFunction::COUNT) 

enum class ELyraCameraModeBlendFunction : uint8;
template<> struct TIsUEnumClass<ELyraCameraModeBlendFunction> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraCameraModeBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
