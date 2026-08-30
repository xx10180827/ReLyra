// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraReplicationGraphTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraReplicationGraphTypes_generated_h
#error "LyraReplicationGraphTypes.generated.h already included, missing '#pragma once' in LyraReplicationGraphTypes.h"
#endif
#define LYRAGAME_LyraReplicationGraphTypes_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepGraphActorClassSettings_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FRepGraphActorClassSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraReplicationGraphTypes_h


#define FOREACH_ENUM_ECLASSREPNODEMAPPING(op) \
	op(EClassRepNodeMapping::NotRouted) \
	op(EClassRepNodeMapping::RelevantAllConnections) \
	op(EClassRepNodeMapping::Spatialize_Static) \
	op(EClassRepNodeMapping::Spatialize_Dynamic) \
	op(EClassRepNodeMapping::Spatialize_Dormancy) 

enum class EClassRepNodeMapping : uint32;
template<> struct TIsUEnumClass<EClassRepNodeMapping> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<EClassRepNodeMapping>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
