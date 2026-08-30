// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/ContextEffects/LyraContextEffectsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraActiveContextEffects;
class UNiagaraSystem;
class USoundBase;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef LYRAGAME_LyraContextEffectsLibrary_generated_h
#error "LyraContextEffectsLibrary.generated.h already included, missing '#pragma once' in LyraContextEffectsLibrary.h"
#endif
#define LYRAGAME_LyraContextEffectsLibrary_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraContextEffects_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraContextEffects>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraActiveContextEffects(); \
	friend struct Z_Construct_UClass_ULyraActiveContextEffects_Statics; \
public: \
	DECLARE_CLASS(ULyraActiveContextEffects, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraActiveContextEffects)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraActiveContextEffects(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraActiveContextEffects(ULyraActiveContextEffects&&); \
	ULyraActiveContextEffects(const ULyraActiveContextEffects&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraActiveContextEffects); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraActiveContextEffects); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraActiveContextEffects) \
	NO_API virtual ~ULyraActiveContextEffects();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_47_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraActiveContextEffects>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_66_DELEGATE \
LYRAGAME_API void FLyraContextEffectLibraryLoadingComplete_DelegateWrapper(const FScriptDelegate& LyraContextEffectLibraryLoadingComplete, const TArray<ULyraActiveContextEffects*>& LyraActiveContextEffects);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadEffects); \
	DECLARE_FUNCTION(execGetEffects);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraContextEffectsLibrary(); \
	friend struct Z_Construct_UClass_ULyraContextEffectsLibrary_Statics; \
public: \
	DECLARE_CLASS(ULyraContextEffectsLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraContextEffectsLibrary)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraContextEffectsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraContextEffectsLibrary(ULyraContextEffectsLibrary&&); \
	ULyraContextEffectsLibrary(const ULyraContextEffectsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraContextEffectsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraContextEffectsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraContextEffectsLibrary) \
	NO_API virtual ~ULyraContextEffectsLibrary();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_71_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraContextEffectsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_ContextEffects_LyraContextEffectsLibrary_h


#define FOREACH_ENUM_ECONTEXTEFFECTSLIBRARYLOADSTATE(op) \
	op(EContextEffectsLibraryLoadState::Unloaded) \
	op(EContextEffectsLibraryLoadState::Loading) \
	op(EContextEffectsLibraryLoadState::Loaded) 

enum class EContextEffectsLibraryLoadState : uint8;
template<> struct TIsUEnumClass<EContextEffectsLibraryLoadState> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<EContextEffectsLibraryLoadState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
