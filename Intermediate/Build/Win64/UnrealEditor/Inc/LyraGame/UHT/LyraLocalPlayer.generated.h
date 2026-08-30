// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/LyraLocalPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraSettingsLocal;
class ULyraSettingsShared;
class UObject;
struct FSwapAudioOutputResult;
#ifdef LYRAGAME_LyraLocalPlayer_generated_h
#error "LyraLocalPlayer.generated.h already included, missing '#pragma once' in LyraLocalPlayer.h"
#endif
#define LYRAGAME_LyraLocalPlayer_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnControllerChangedTeam); \
	DECLARE_FUNCTION(execOnCompletedAudioDeviceSwap); \
	DECLARE_FUNCTION(execGetSharedSettings); \
	DECLARE_FUNCTION(execGetLocalSettings);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraLocalPlayer(); \
	friend struct Z_Construct_UClass_ULyraLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULyraLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraLocalPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraLocalPlayer*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraLocalPlayer(ULyraLocalPlayer&&); \
	ULyraLocalPlayer(const ULyraLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraLocalPlayer) \
	NO_API virtual ~ULyraLocalPlayer();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_24_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
