// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/GameplayTagStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_GameplayTagStack_generated_h
#error "GameplayTagStack.generated.h already included, missing '#pragma once' in GameplayTagStack.h"
#endif
#define LYRAGAME_GameplayTagStack_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_GameplayTagStack_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagStack_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FGameplayTagStack>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_GameplayTagStack_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FGameplayTagStackContainer, Stacks, LYRAGAME_API );


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FGameplayTagStackContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_GameplayTagStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
