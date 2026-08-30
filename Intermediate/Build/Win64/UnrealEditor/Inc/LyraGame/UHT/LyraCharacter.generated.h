// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALyraPlayerController;
class ALyraPlayerState;
class ULyraAbilitySystemComponent;
class UObject;
struct FGenericTeamId;
struct FSharedRepMovement;
#ifdef LYRAGAME_LyraCharacter_generated_h
#error "LyraCharacter.generated.h already included, missing '#pragma once' in LyraCharacter.h"
#endif
#define LYRAGAME_LyraCharacter_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraReplicatedAcceleration_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraReplicatedAcceleration>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedRepMovement_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FSharedRepMovement>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FastSharedReplication_Implementation(FSharedRepMovement const& SharedRepMovement); \
	DECLARE_FUNCTION(execOnRep_MyTeamID); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnDeathFinished); \
	DECLARE_FUNCTION(execOnDeathStarted); \
	DECLARE_FUNCTION(execFastSharedReplication); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState); \
	DECLARE_FUNCTION(execGetLyraPlayerController);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraCharacter(); \
	friend struct Z_Construct_UClass_ALyraCharacter_Statics; \
public: \
	DECLARE_CLASS(ALyraCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		MyTeamID, \
		NETFIELD_REP_END=MyTeamID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraCharacter(ALyraCharacter&&); \
	ALyraCharacter(const ALyraCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraCharacter) \
	NO_API virtual ~ALyraCharacter();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_95_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
