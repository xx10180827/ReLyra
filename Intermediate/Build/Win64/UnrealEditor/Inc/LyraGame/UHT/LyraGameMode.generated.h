// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/LyraGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UCommonUserInfo;
class ULyraPawnData;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef LYRAGAME_LyraGameMode_generated_h
#error "LyraGameMode.generated.h already included, missing '#pragma once' in LyraGameMode.h"
#endif
#define LYRAGAME_LyraGameMode_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUserInitializedForDedicatedServer); \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame); \
	DECLARE_FUNCTION(execGetPawnDataForController);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraGameMode(); \
	friend struct Z_Construct_UClass_ALyraGameMode_Statics; \
public: \
	DECLARE_CLASS(ALyraGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraGameMode)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraGameMode(ALyraGameMode&&); \
	ALyraGameMode(const ALyraGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraGameMode) \
	NO_API virtual ~ALyraGameMode();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_34_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
