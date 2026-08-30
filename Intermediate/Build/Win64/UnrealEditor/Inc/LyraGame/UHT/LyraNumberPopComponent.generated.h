// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/NumberPops/LyraNumberPopComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLyraNumberPopRequest;
#ifdef LYRAGAME_LyraNumberPopComponent_generated_h
#error "LyraNumberPopComponent.generated.h already included, missing '#pragma once' in LyraNumberPopComponent.h"
#endif
#define LYRAGAME_LyraNumberPopComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraNumberPopRequest_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraNumberPopRequest>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddNumberPop);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraNumberPopComponent(); \
	friend struct Z_Construct_UClass_ULyraNumberPopComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraNumberPopComponent, UControllerComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraNumberPopComponent)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraNumberPopComponent(ULyraNumberPopComponent&&); \
	ULyraNumberPopComponent(const ULyraNumberPopComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraNumberPopComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraNumberPopComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraNumberPopComponent) \
	NO_API virtual ~ULyraNumberPopComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_45_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraNumberPopComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraNumberPopComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
