// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/LyraEquipmentManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraEquipmentDefinition;
class ULyraEquipmentInstance;
#ifdef LYRAGAME_LyraEquipmentManagerComponent_generated_h
#error "LyraEquipmentManagerComponent.generated.h already included, missing '#pragma once' in LyraEquipmentManagerComponent.h"
#endif
#define LYRAGAME_LyraEquipmentManagerComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraAppliedEquipmentEntry_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraAppliedEquipmentEntry>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraEquipmentList_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLyraEquipmentList, Entries, LYRAGAME_API );


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraEquipmentList>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquipmentInstancesOfType); \
	DECLARE_FUNCTION(execGetFirstInstanceOfType); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItem);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraEquipmentManagerComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraEquipmentManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquipmentList=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquipmentList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraEquipmentManagerComponent(ULyraEquipmentManagerComponent&&); \
	ULyraEquipmentManagerComponent(const ULyraEquipmentManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraEquipmentManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraEquipmentManagerComponent) \
	NO_API virtual ~ULyraEquipmentManagerComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_112_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraEquipmentManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraEquipmentManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
