// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGenericTeamId;
#ifdef LYRAGAME_LyraPawn_generated_h
#error "LyraPawn.generated.h already included, missing '#pragma once' in LyraPawn.h"
#endif
#define LYRAGAME_LyraPawn_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnControllerChangedTeam);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraPawn(); \
	friend struct Z_Construct_UClass_ALyraPawn_Statics; \
public: \
	DECLARE_CLASS(ALyraPawn, AModularPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPawn*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MyTeamID=NETFIELD_REP_START, \
		NETFIELD_REP_END=MyTeamID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraPawn(ALyraPawn&&); \
	ALyraPawn(const ALyraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPawn) \
	NO_API virtual ~ALyraPawn();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
