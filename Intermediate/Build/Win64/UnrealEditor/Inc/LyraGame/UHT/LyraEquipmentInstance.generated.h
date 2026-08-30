// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraEquipmentInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UObject;
#ifdef LYRAGAME_LyraEquipmentInstance_generated_h
#error "LyraEquipmentInstance.generated.h already included, missing '#pragma once' in LyraEquipmentInstance.h"
#endif
#define LYRAGAME_LyraEquipmentInstance_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Instigator); \
	DECLARE_FUNCTION(execGetSpawnedActors); \
	DECLARE_FUNCTION(execGetTypedPawn); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execGetInstigator);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_CALLBACK_WRAPPERS
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraEquipmentInstance(); \
	friend struct Z_Construct_UClass_ULyraEquipmentInstance_Statics; \
public: \
	DECLARE_CLASS(ULyraEquipmentInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraEquipmentInstance) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Instigator=NETFIELD_REP_START, \
		SpawnedActors, \
		NETFIELD_REP_END=SpawnedActors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULyraEquipmentInstance) \
public:


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraEquipmentInstance(ULyraEquipmentInstance&&); \
	ULyraEquipmentInstance(const ULyraEquipmentInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraEquipmentInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraEquipmentInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraEquipmentInstance) \
	NO_API virtual ~ULyraEquipmentInstance();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_19_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_CALLBACK_WRAPPERS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraEquipmentInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
