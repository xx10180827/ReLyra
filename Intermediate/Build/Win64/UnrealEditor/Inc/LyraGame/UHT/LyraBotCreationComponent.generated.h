// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/LyraBotCreationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraBotCreationComponent_generated_h
#error "LyraBotCreationComponent.generated.h already included, missing '#pragma once' in LyraBotCreationComponent.h"
#endif
#define LYRAGAME_LyraBotCreationComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerCreateBots_Implementation(); \
	DECLARE_FUNCTION(execServerCreateBots); \
	DECLARE_FUNCTION(execRemoveOneBot); \
	DECLARE_FUNCTION(execSpawnOneBot);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraBotCreationComponent(); \
	friend struct Z_Construct_UClass_ULyraBotCreationComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraBotCreationComponent, UGameStateComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraBotCreationComponent)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraBotCreationComponent(ULyraBotCreationComponent&&); \
	ULyraBotCreationComponent(const ULyraBotCreationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraBotCreationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraBotCreationComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraBotCreationComponent) \
	NO_API virtual ~ULyraBotCreationComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_13_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraBotCreationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraBotCreationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
