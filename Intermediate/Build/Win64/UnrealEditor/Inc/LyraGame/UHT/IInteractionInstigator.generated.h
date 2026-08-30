// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IInteractionInstigator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_IInteractionInstigator_generated_h
#error "IInteractionInstigator.generated.h already included, missing '#pragma once' in IInteractionInstigator.h"
#endif
#define LYRAGAME_IInteractionInstigator_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LYRAGAME_API UInteractionInstigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionInstigator(UInteractionInstigator&&); \
	UInteractionInstigator(const UInteractionInstigator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, UInteractionInstigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInstigator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInstigator) \
	LYRAGAME_API virtual ~UInteractionInstigator();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInstigator(); \
	friend struct Z_Construct_UClass_UInteractionInstigator_Statics; \
public: \
	DECLARE_CLASS(UInteractionInstigator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(UInteractionInstigator)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_GENERATED_UINTERFACE_BODY() \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInstigator() {} \
public: \
	typedef UInteractionInstigator UClassType; \
	typedef IInteractionInstigator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_13_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UInteractionInstigator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Interaction_IInteractionInstigator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
