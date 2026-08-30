// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/LyraWeaponStateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraWeaponStateComponent_generated_h
#error "LyraWeaponStateComponent.generated.h already included, missing '#pragma once' in LyraWeaponStateComponent.h"
#endif
#define LYRAGAME_LyraWeaponStateComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientConfirmTargetData_Implementation(uint16 UniqueId, bool bSuccess, TArray<uint8> const& HitReplaces); \
	DECLARE_FUNCTION(execClientConfirmTargetData);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraWeaponStateComponent(); \
	friend struct Z_Construct_UClass_ULyraWeaponStateComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraWeaponStateComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraWeaponStateComponent)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraWeaponStateComponent(ULyraWeaponStateComponent&&); \
	ULyraWeaponStateComponent(const ULyraWeaponStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraWeaponStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraWeaponStateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraWeaponStateComponent) \
	NO_API virtual ~ULyraWeaponStateComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_40_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraWeaponStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
