// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cosmetics/LyraCharacterPartTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraCharacterPartTypes_generated_h
#error "LyraCharacterPartTypes.generated.h already included, missing '#pragma once' in LyraCharacterPartTypes.h"
#endif
#define LYRAGAME_LyraCharacterPartTypes_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraCharacterPartHandle_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraCharacterPartHandle>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraCharacterPart_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraCharacterPart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCharacterPartTypes_h


#define FOREACH_ENUM_ECHARACTERCUSTOMIZATIONCOLLISIONMODE(op) \
	op(ECharacterCustomizationCollisionMode::NoCollision) \
	op(ECharacterCustomizationCollisionMode::UseCollisionFromCharacterPart) 

enum class ECharacterCustomizationCollisionMode : uint8;
template<> struct TIsUEnumClass<ECharacterCustomizationCollisionMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ECharacterCustomizationCollisionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
