// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALyraHUD;
class ALyraPlayerState;
class APawn;
class APlayerState;
class ULyraAbilitySystemComponent;
class UObject;
#ifdef LYRAGAME_LyraPlayerController_generated_h
#error "LyraPlayerController.generated.h already included, missing '#pragma once' in LyraPlayerController.h"
#endif
#define LYRAGAME_LyraPlayerController_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCheatAll_Validate(const FString& ); \
	virtual void ServerCheatAll_Implementation(const FString& Msg); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
	DECLARE_FUNCTION(execOnPlayerStateChangedTeam); \
	DECLARE_FUNCTION(execGetIsAutoRunning); \
	DECLARE_FUNCTION(execSetIsAutoRunning); \
	DECLARE_FUNCTION(execServerCheatAll); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execTryToRecordClientReplay); \
	DECLARE_FUNCTION(execGetLyraHUD); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetLyraPlayerState);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraPlayerController(); \
	friend struct Z_Construct_UClass_ALyraPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALyraPlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraPlayerController*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraPlayerController(ALyraPlayerController&&); \
	ALyraPlayerController(const ALyraPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraPlayerController) \
	NO_API virtual ~ALyraPlayerController();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_30_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraPlayerController>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerStatePawnSet);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraReplayPlayerController(); \
	friend struct Z_Construct_UClass_ALyraReplayPlayerController_Statics; \
public: \
	DECLARE_CLASS(ALyraReplayPlayerController, ALyraPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraReplayPlayerController)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALyraReplayPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraReplayPlayerController(ALyraReplayPlayerController&&); \
	ALyraReplayPlayerController(const ALyraReplayPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraReplayPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraReplayPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraReplayPlayerController) \
	NO_API virtual ~ALyraReplayPlayerController();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_145_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraReplayPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
