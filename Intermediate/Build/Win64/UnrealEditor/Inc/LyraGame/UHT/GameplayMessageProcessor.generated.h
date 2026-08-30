// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Messages/GameplayMessageProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_GameplayMessageProcessor_generated_h
#error "GameplayMessageProcessor.generated.h already included, missing '#pragma once' in GameplayMessageProcessor.h"
#endif
#define LYRAGAME_GameplayMessageProcessor_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayMessageProcessor(); \
	friend struct Z_Construct_UClass_UGameplayMessageProcessor_Statics; \
public: \
	DECLARE_CLASS(UGameplayMessageProcessor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UGameplayMessageProcessor)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayMessageProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayMessageProcessor(UGameplayMessageProcessor&&); \
	UGameplayMessageProcessor(const UGameplayMessageProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayMessageProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayMessageProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayMessageProcessor) \
	NO_API virtual ~UGameplayMessageProcessor();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_23_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_26_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UGameplayMessageProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Messages_GameplayMessageProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
