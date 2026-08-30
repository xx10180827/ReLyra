// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IInteractableTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_IInteractableTarget_generated_h
#error "IInteractableTarget.generated.h already included, missing '#pragma once' in IInteractableTarget.h"
#endif
#define LYRAGAME_IInteractableTarget_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LYRAGAME_API UInteractableTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractableTarget(UInteractableTarget&&); \
	UInteractableTarget(const UInteractableTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, UInteractableTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableTarget) \
	LYRAGAME_API virtual ~UInteractableTarget();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableTarget(); \
	friend struct Z_Construct_UClass_UInteractableTarget_Statics; \
public: \
	DECLARE_CLASS(UInteractableTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(UInteractableTarget)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_GENERATED_UINTERFACE_BODY() \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableTarget() {} \
public: \
	typedef UInteractableTarget UClassType; \
	typedef IInteractableTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_34_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UInteractableTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractableTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
