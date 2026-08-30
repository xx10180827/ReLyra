// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cosmetics/LyraControllerComponent_CharacterParts.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FLyraCharacterPart;
#ifdef LYRAGAME_LyraControllerComponent_CharacterParts_generated_h
#error "LyraControllerComponent_CharacterParts.generated.h already included, missing '#pragma once' in LyraControllerComponent_CharacterParts.h"
#endif
#define LYRAGAME_LyraControllerComponent_CharacterParts_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraControllerCharacterPartEntry>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execRemoveAllCharacterParts); \
	DECLARE_FUNCTION(execRemoveCharacterPart); \
	DECLARE_FUNCTION(execAddCharacterPart);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraControllerComponent_CharacterParts(); \
	friend struct Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics; \
public: \
	DECLARE_CLASS(ULyraControllerComponent_CharacterParts, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraControllerComponent_CharacterParts)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraControllerComponent_CharacterParts(ULyraControllerComponent_CharacterParts&&); \
	ULyraControllerComponent_CharacterParts(const ULyraControllerComponent_CharacterParts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraControllerComponent_CharacterParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraControllerComponent_CharacterParts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraControllerComponent_CharacterParts) \
	NO_API virtual ~ULyraControllerComponent_CharacterParts();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_52_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraControllerComponent_CharacterParts>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
