// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teams/LyraTeamInfoBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraTeamInfoBase_generated_h
#error "LyraTeamInfoBase.generated.h already included, missing '#pragma once' in LyraTeamInfoBase.h"
#endif
#define LYRAGAME_LyraTeamInfoBase_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_TeamId);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraTeamInfoBase(); \
	friend struct Z_Construct_UClass_ALyraTeamInfoBase_Statics; \
public: \
	DECLARE_CLASS(ALyraTeamInfoBase, AInfo, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraTeamInfoBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamTags=NETFIELD_REP_START, \
		TeamId, \
		NETFIELD_REP_END=TeamId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraTeamInfoBase(ALyraTeamInfoBase&&); \
	ALyraTeamInfoBase(const ALyraTeamInfoBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraTeamInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraTeamInfoBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraTeamInfoBase) \
	NO_API virtual ~ALyraTeamInfoBase();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraTeamInfoBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamInfoBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
