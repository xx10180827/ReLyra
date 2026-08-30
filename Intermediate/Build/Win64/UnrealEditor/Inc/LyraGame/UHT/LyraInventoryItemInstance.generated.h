// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/LyraInventoryItemInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraInventoryItemFragment;
struct FGameplayTag;
#ifdef LYRAGAME_LyraInventoryItemInstance_generated_h
#error "LyraInventoryItemInstance.generated.h already included, missing '#pragma once' in LyraInventoryItemInstance.h"
#endif
#define LYRAGAME_LyraInventoryItemInstance_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindFragmentByClass); \
	DECLARE_FUNCTION(execHasStatTag); \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraInventoryItemInstance(); \
	friend struct Z_Construct_UClass_ULyraInventoryItemInstance_Statics; \
public: \
	DECLARE_CLASS(ULyraInventoryItemInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraInventoryItemInstance) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StatTags=NETFIELD_REP_START, \
		ItemDef, \
		NETFIELD_REP_END=ItemDef	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULyraInventoryItemInstance) \
public:


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraInventoryItemInstance(ULyraInventoryItemInstance&&); \
	ULyraInventoryItemInstance(const ULyraInventoryItemInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraInventoryItemInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraInventoryItemInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraInventoryItemInstance) \
	NO_API virtual ~ULyraInventoryItemInstance();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_20_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraInventoryItemInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
