// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraTeamDisplayAsset;
class UObject;
enum class ELyraTeamComparison : uint8;
struct FGameplayTag;
#ifdef LYRAGAME_LyraTeamSubsystem_generated_h
#error "LyraTeamSubsystem.generated.h already included, missing '#pragma once' in LyraTeamSubsystem.h"
#endif
#define LYRAGAME_LyraTeamSubsystem_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_19_DELEGATE \
LYRAGAME_API void FOnLyraTeamDisplayAssetChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLyraTeamDisplayAssetChangedDelegate, const ULyraTeamDisplayAsset* DisplayAsset);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraTeamTrackingInfo_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraTeamTrackingInfo>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTeamIDs); \
	DECLARE_FUNCTION(execGetEffectiveTeamDisplayAsset); \
	DECLARE_FUNCTION(execGetTeamDisplayAsset); \
	DECLARE_FUNCTION(execDoesTeamExist); \
	DECLARE_FUNCTION(execTeamHasTag); \
	DECLARE_FUNCTION(execGetTeamTagStackCount); \
	DECLARE_FUNCTION(execRemoveTeamTagStack); \
	DECLARE_FUNCTION(execAddTeamTagStack); \
	DECLARE_FUNCTION(execCompareTeams); \
	DECLARE_FUNCTION(execFindTeamFromActor);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTeamSubsystem(); \
	friend struct Z_Construct_UClass_ULyraTeamSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraTeamSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTeamSubsystem)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraTeamSubsystem(ULyraTeamSubsystem&&); \
	ULyraTeamSubsystem(const ULyraTeamSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTeamSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTeamSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraTeamSubsystem) \
	NO_API virtual ~ULyraTeamSubsystem();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_59_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTeamSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamSubsystem_h


#define FOREACH_ENUM_ELYRATEAMCOMPARISON(op) \
	op(ELyraTeamComparison::OnSameTeam) \
	op(ELyraTeamComparison::DifferentTeams) \
	op(ELyraTeamComparison::InvalidArgument) 

enum class ELyraTeamComparison : uint8;
template<> struct TIsUEnumClass<ELyraTeamComparison> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<ELyraTeamComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
