// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamPublicInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraTeamPublicInfo_generated_h
#error "LyraTeamPublicInfo.generated.h already included, missing '#pragma once' in LyraTeamPublicInfo.h"
#endif
#define LYRAGAME_LyraTeamPublicInfo_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_TeamDisplayAsset);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraTeamPublicInfo(); \
	friend struct Z_Construct_UClass_ALyraTeamPublicInfo_Statics; \
public: \
	DECLARE_CLASS(ALyraTeamPublicInfo, ALyraTeamInfoBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraTeamPublicInfo) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamDisplayAsset=NETFIELD_REP_START, \
		NETFIELD_REP_END=TeamDisplayAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraTeamPublicInfo(ALyraTeamPublicInfo&&); \
	ALyraTeamPublicInfo(const ALyraTeamPublicInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraTeamPublicInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraTeamPublicInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraTeamPublicInfo) \
	NO_API virtual ~ALyraTeamPublicInfo();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraTeamPublicInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
