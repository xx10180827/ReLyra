// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Messages/LyraVerbMessageHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
class UObject;
struct FGameplayCueParameters;
struct FLyraVerbMessage;
#ifdef LYRAGAME_LyraVerbMessageHelpers_generated_h
#error "LyraVerbMessageHelpers.generated.h already included, missing '#pragma once' in LyraVerbMessageHelpers.h"
#endif
#define LYRAGAME_LyraVerbMessageHelpers_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCueParametersToVerbMessage); \
	DECLARE_FUNCTION(execVerbMessageToCueParameters); \
	DECLARE_FUNCTION(execGetPlayerControllerFromObject); \
	DECLARE_FUNCTION(execGetPlayerStateFromObject);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraVerbMessageHelpers(); \
	friend struct Z_Construct_UClass_ULyraVerbMessageHelpers_Statics; \
public: \
	DECLARE_CLASS(ULyraVerbMessageHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraVerbMessageHelpers)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraVerbMessageHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraVerbMessageHelpers(ULyraVerbMessageHelpers&&); \
	ULyraVerbMessageHelpers(const ULyraVerbMessageHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraVerbMessageHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraVerbMessageHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraVerbMessageHelpers) \
	NO_API virtual ~ULyraVerbMessageHelpers();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_18_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraVerbMessageHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_LyraVerbMessageHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
