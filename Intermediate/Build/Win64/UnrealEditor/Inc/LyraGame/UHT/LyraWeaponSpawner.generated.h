// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/LyraWeaponSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class ULyraInventoryItemDefinition;
class UPrimitiveComponent;
struct FGameplayTag;
struct FHitResult;
#ifdef LYRAGAME_LyraWeaponSpawner_generated_h
#error "LyraWeaponSpawner.generated.h already included, missing '#pragma once' in LyraWeaponSpawner.h"
#endif
#define LYRAGAME_LyraWeaponSpawner_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayRespawnEffects_Implementation(); \
	virtual void PlayPickupEffects_Implementation(); \
	virtual void AttemptPickUpWeapon_Implementation(APawn* Pawn); \
	DECLARE_FUNCTION(execGetDefaultStatFromItemDef); \
	DECLARE_FUNCTION(execOnRep_WeaponAvailability); \
	DECLARE_FUNCTION(execPlayRespawnEffects); \
	DECLARE_FUNCTION(execPlayPickupEffects); \
	DECLARE_FUNCTION(execOnCoolDownTimerComplete); \
	DECLARE_FUNCTION(execResetCoolDown); \
	DECLARE_FUNCTION(execAttemptPickUpWeapon); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraWeaponSpawner(); \
	friend struct Z_Construct_UClass_ALyraWeaponSpawner_Statics; \
public: \
	DECLARE_CLASS(ALyraWeaponSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraWeaponSpawner) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsWeaponAvailable=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsWeaponAvailable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraWeaponSpawner(ALyraWeaponSpawner&&); \
	ALyraWeaponSpawner(const ALyraWeaponSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraWeaponSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraWeaponSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALyraWeaponSpawner) \
	NO_API virtual ~ALyraWeaponSpawner();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_22_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraWeaponSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
