// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/LyraInventoryManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
#ifdef LYRAGAME_LyraInventoryManagerComponent_generated_h
#error "LyraInventoryManagerComponent.generated.h already included, missing '#pragma once' in LyraInventoryManagerComponent.h"
#endif
#define LYRAGAME_LyraInventoryManagerComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInventoryChangeMessage_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraInventoryChangeMessage>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInventoryEntry_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraInventoryEntry>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraInventoryList_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLyraInventoryList, Entries, LYRAGAME_API );


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraInventoryList>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindFirstItemStackByDefinition); \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execRemoveItemInstance); \
	DECLARE_FUNCTION(execAddItemInstance); \
	DECLARE_FUNCTION(execAddItemDefinition); \
	DECLARE_FUNCTION(execCanAddItemDefinition);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraInventoryManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryList=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventoryList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraInventoryManagerComponent(ULyraInventoryManagerComponent&&); \
	ULyraInventoryManagerComponent(const ULyraInventoryManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraInventoryManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraInventoryManagerComponent) \
	NO_API virtual ~ULyraInventoryManagerComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_132_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraInventoryManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
