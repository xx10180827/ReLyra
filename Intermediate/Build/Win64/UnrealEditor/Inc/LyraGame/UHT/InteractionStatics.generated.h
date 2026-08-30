// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/InteractionStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IInteractableTarget;
#ifdef LYRAGAME_InteractionStatics_generated_h
#error "InteractionStatics.generated.h already included, missing '#pragma once' in InteractionStatics.h"
#endif
#define LYRAGAME_InteractionStatics_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractableTargetsFromActor); \
	DECLARE_FUNCTION(execGetActorFromInteractableTarget);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionStatics(); \
	friend struct Z_Construct_UClass_UInteractionStatics_Statics; \
public: \
	DECLARE_CLASS(UInteractionStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UInteractionStatics)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionStatics(UInteractionStatics&&); \
	UInteractionStatics(const UInteractionStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionStatics) \
	NO_API virtual ~UInteractionStatics();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_19_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UInteractionStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_InteractionStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
