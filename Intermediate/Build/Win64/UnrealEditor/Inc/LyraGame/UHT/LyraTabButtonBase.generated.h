// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Common/LyraTabButtonBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLyraTabDescriptor;
#ifdef LYRAGAME_LyraTabButtonBase_generated_h
#error "LyraTabButtonBase.generated.h already included, missing '#pragma once' in LyraTabButtonBase.h"
#endif
#define LYRAGAME_LyraTabButtonBase_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTabLabelInfo_Implementation);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraTabButtonBase(); \
	friend struct Z_Construct_UClass_ULyraTabButtonBase_Statics; \
public: \
	DECLARE_CLASS(ULyraTabButtonBase, ULyraButtonBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraTabButtonBase) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraTabButtonBase*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraTabButtonBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraTabButtonBase(ULyraTabButtonBase&&); \
	ULyraTabButtonBase(const ULyraTabButtonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraTabButtonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraTabButtonBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraTabButtonBase) \
	NO_API virtual ~ULyraTabButtonBase();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_15_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraTabButtonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraTabButtonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
