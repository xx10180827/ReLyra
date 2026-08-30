// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/IPickupable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IPickupable;
class ULyraInventoryManagerComponent;
struct FInventoryPickup;
#ifdef LYRAGAME_IPickupable_generated_h
#error "IPickupable.generated.h already included, missing '#pragma once' in IPickupable.h"
#endif
#define LYRAGAME_IPickupable_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPickupTemplate_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FPickupTemplate>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPickupInstance_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FPickupInstance>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryPickup_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FInventoryPickup>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPickupInventory);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LYRAGAME_API UPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPickupable(UPickupable&&); \
	UPickupable(const UPickupable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LYRAGAME_API, UPickupable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupable) \
	LYRAGAME_API virtual ~UPickupable();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupable(); \
	friend struct Z_Construct_UClass_UPickupable_Statics; \
public: \
	DECLARE_CLASS(UPickupable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), LYRAGAME_API) \
	DECLARE_SERIALIZER(UPickupable)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_GENERATED_UINTERFACE_BODY() \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupable() {} \
public: \
	typedef UPickupable UClassType; \
	typedef IPickupable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_58_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_61_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UPickupable>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPickupToInventory); \
	DECLARE_FUNCTION(execGetFirstPickupableFromActor);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPickupableStatics(); \
	friend struct Z_Construct_UClass_UPickupableStatics_Statics; \
public: \
	DECLARE_CLASS(UPickupableStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(UPickupableStatics)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPickupableStatics(UPickupableStatics&&); \
	UPickupableStatics(const UPickupableStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupableStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupableStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPickupableStatics) \
	NO_API virtual ~UPickupableStatics();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_75_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class UPickupableStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
