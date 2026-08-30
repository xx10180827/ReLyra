// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraHeroComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULyraHeroComponent;
#ifdef LYRAGAME_LyraHeroComponent_generated_h
#error "LyraHeroComponent.generated.h already included, missing '#pragma once' in LyraHeroComponent.h"
#endif
#define LYRAGAME_LyraHeroComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindHeroComponent);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraHeroComponent(); \
	friend struct Z_Construct_UClass_ULyraHeroComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraHeroComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraHeroComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraHeroComponent*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraHeroComponent(ULyraHeroComponent&&); \
	ULyraHeroComponent(const ULyraHeroComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraHeroComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraHeroComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraHeroComponent) \
	NO_API virtual ~ULyraHeroComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_29_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraHeroComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraHeroComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
