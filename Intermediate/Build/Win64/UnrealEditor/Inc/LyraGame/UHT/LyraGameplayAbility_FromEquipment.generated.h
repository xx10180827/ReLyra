// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraGameplayAbility_FromEquipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraEquipmentInstance;
class ULyraInventoryItemInstance;
#ifdef LYRAGAME_LyraGameplayAbility_FromEquipment_generated_h
#error "LyraGameplayAbility_FromEquipment.generated.h already included, missing '#pragma once' in LyraGameplayAbility_FromEquipment.h"
#endif
#define LYRAGAME_LyraGameplayAbility_FromEquipment_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssociatedItem); \
	DECLARE_FUNCTION(execGetAssociatedEquipment);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameplayAbility_FromEquipment(); \
	friend struct Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics; \
public: \
	DECLARE_CLASS(ULyraGameplayAbility_FromEquipment, ULyraGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameplayAbility_FromEquipment)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameplayAbility_FromEquipment(ULyraGameplayAbility_FromEquipment&&); \
	ULyraGameplayAbility_FromEquipment(const ULyraGameplayAbility_FromEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameplayAbility_FromEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameplayAbility_FromEquipment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameplayAbility_FromEquipment) \
	NO_API virtual ~ULyraGameplayAbility_FromEquipment();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameplayAbility_FromEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
