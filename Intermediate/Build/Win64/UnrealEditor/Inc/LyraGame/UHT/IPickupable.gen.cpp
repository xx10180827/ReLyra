// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/IPickupable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPickupable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UPickupable();
LYRAGAME_API UClass* Z_Construct_UClass_UPickupable_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UPickupableStatics();
LYRAGAME_API UClass* Z_Construct_UClass_UPickupableStatics_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryPickup();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPickupInstance();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPickupTemplate();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FPickupTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PickupTemplate;
class UScriptStruct* FPickupTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PickupTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PickupTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickupTemplate, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("PickupTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_PickupTemplate.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FPickupTemplate>()
{
	return FPickupTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPickupTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "Category", "PickupTemplate" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[] = {
		{ "Category", "PickupTemplate" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickupTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPickupTemplate, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPickupTemplate, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDef_MetaData), NewProp_ItemDef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_StackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewProp_ItemDef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickupTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"PickupTemplate",
	Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::PropPointers),
	sizeof(FPickupTemplate),
	alignof(FPickupTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPickupTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPickupTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_PickupTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PickupTemplate.InnerSingleton, Z_Construct_UScriptStruct_FPickupTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PickupTemplate.InnerSingleton;
}
// End ScriptStruct FPickupTemplate

// Begin ScriptStruct FPickupInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PickupInstance;
class UScriptStruct* FPickupInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PickupInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PickupInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickupInstance, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("PickupInstance"));
	}
	return Z_Registration_Info_UScriptStruct_PickupInstance.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FPickupInstance>()
{
	return FPickupInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPickupInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "PickupInstance" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickupInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPickupInstance, Item), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupInstance_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickupInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"PickupInstance",
	Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupInstance_Statics::PropPointers),
	sizeof(FPickupInstance),
	alignof(FPickupInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPickupInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPickupInstance()
{
	if (!Z_Registration_Info_UScriptStruct_PickupInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PickupInstance.InnerSingleton, Z_Construct_UScriptStruct_FPickupInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PickupInstance.InnerSingleton;
}
// End ScriptStruct FPickupInstance

// Begin ScriptStruct FInventoryPickup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryPickup;
class UScriptStruct* FInventoryPickup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryPickup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryPickup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryPickup, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("InventoryPickup"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryPickup.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FInventoryPickup>()
{
	return FInventoryPickup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "Category", "InventoryPickup" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Templates_MetaData[] = {
		{ "Category", "InventoryPickup" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Templates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Templates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryPickup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPickupInstance, METADATA_PARAMS(0, nullptr) }; // 4021539528
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryPickup, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) }; // 4021539528
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_Inner = { "Templates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPickupTemplate, METADATA_PARAMS(0, nullptr) }; // 3868139398
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates = { "Templates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryPickup, Templates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Templates_MetaData), NewProp_Templates_MetaData) }; // 3868139398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Instances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewProp_Templates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryPickup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"InventoryPickup",
	Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::PropPointers),
	sizeof(FInventoryPickup),
	alignof(FInventoryPickup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryPickup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryPickup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryPickup()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryPickup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryPickup.InnerSingleton, Z_Construct_UScriptStruct_FInventoryPickup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryPickup.InnerSingleton;
}
// End ScriptStruct FInventoryPickup

// Begin Interface UPickupable Function GetPickupInventory
struct Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics
{
	struct Pickupable_eventGetPickupInventory_Parms
	{
		FInventoryPickup ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickupable_eventGetPickupInventory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryPickup, METADATA_PARAMS(0, nullptr) }; // 3290137148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupable, nullptr, "GetPickupInventory", nullptr, nullptr, Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Pickupable_eventGetPickupInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::Pickupable_eventGetPickupInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPickupable_GetPickupInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupable_GetPickupInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPickupable::execGetPickupInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryPickup*)Z_Param__Result=P_THIS->GetPickupInventory();
	P_NATIVE_END;
}
// End Interface UPickupable Function GetPickupInventory

// Begin Interface UPickupable
void UPickupable::StaticRegisterNativesUPickupable()
{
	UClass* Class = UPickupable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPickupInventory", &IPickupable::execGetPickupInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupable);
UClass* Z_Construct_UClass_UPickupable_NoRegister()
{
	return UPickupable::StaticClass();
}
struct Z_Construct_UClass_UPickupable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupable_GetPickupInventory, "GetPickupInventory" }, // 2150523224
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPickupable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupable_Statics::ClassParams = {
	&UPickupable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupable_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickupable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickupable()
{
	if (!Z_Registration_Info_UClass_UPickupable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupable.OuterSingleton, Z_Construct_UClass_UPickupable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickupable.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UPickupable>()
{
	return UPickupable::StaticClass();
}
UPickupable::UPickupable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupable);
UPickupable::~UPickupable() {}
// End Interface UPickupable

// Begin Class UPickupableStatics Function AddPickupToInventory
struct Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics
{
	struct PickupableStatics_eventAddPickupToInventory_Parms
	{
		ULyraInventoryManagerComponent* InventoryComponent;
		TScriptInterface<IPickupable> Pickup;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
		{ "WorldContext", "Ability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Pickup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableStatics_eventAddPickupToInventory_Parms, InventoryComponent), Z_Construct_UClass_ULyraInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_Pickup = { "Pickup", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableStatics_eventAddPickupToInventory_Parms, Pickup), Z_Construct_UClass_UPickupable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::NewProp_Pickup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupableStatics, nullptr, "AddPickupToInventory", nullptr, nullptr, Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PickupableStatics_eventAddPickupToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::PickupableStatics_eventAddPickupToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPickupableStatics::execAddPickupToInventory)
{
	P_GET_OBJECT(ULyraInventoryManagerComponent,Z_Param_InventoryComponent);
	P_GET_TINTERFACE(IPickupable,Z_Param_Pickup);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPickupableStatics::AddPickupToInventory(Z_Param_InventoryComponent,Z_Param_Pickup);
	P_NATIVE_END;
}
// End Class UPickupableStatics Function AddPickupToInventory

// Begin Class UPickupableStatics Function GetFirstPickupableFromActor
struct Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics
{
	struct PickupableStatics_eventGetFirstPickupableFromActor_Parms
	{
		AActor* Actor;
		TScriptInterface<IPickupable> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableStatics_eventGetFirstPickupableFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableStatics_eventGetFirstPickupableFromActor_Parms, ReturnValue), Z_Construct_UClass_UPickupable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupableStatics, nullptr, "GetFirstPickupableFromActor", nullptr, nullptr, Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PickupableStatics_eventGetFirstPickupableFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::PickupableStatics_eventGetFirstPickupableFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPickupableStatics::execGetFirstPickupableFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IPickupable>*)Z_Param__Result=UPickupableStatics::GetFirstPickupableFromActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UPickupableStatics Function GetFirstPickupableFromActor

// Begin Class UPickupableStatics
void UPickupableStatics::StaticRegisterNativesUPickupableStatics()
{
	UClass* Class = UPickupableStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPickupToInventory", &UPickupableStatics::execAddPickupToInventory },
		{ "GetFirstPickupableFromActor", &UPickupableStatics::execGetFirstPickupableFromActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupableStatics);
UClass* Z_Construct_UClass_UPickupableStatics_NoRegister()
{
	return UPickupableStatics::StaticClass();
}
struct Z_Construct_UClass_UPickupableStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "IncludePath", "Inventory/IPickupable.h" },
		{ "ModuleRelativePath", "Inventory/IPickupable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupableStatics_AddPickupToInventory, "AddPickupToInventory" }, // 3625979158
		{ &Z_Construct_UFunction_UPickupableStatics_GetFirstPickupableFromActor, "GetFirstPickupableFromActor" }, // 398689282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupableStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPickupableStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupableStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupableStatics_Statics::ClassParams = {
	&UPickupableStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupableStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickupableStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickupableStatics()
{
	if (!Z_Registration_Info_UClass_UPickupableStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupableStatics.OuterSingleton, Z_Construct_UClass_UPickupableStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickupableStatics.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UPickupableStatics>()
{
	return UPickupableStatics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupableStatics);
UPickupableStatics::~UPickupableStatics() {}
// End Class UPickupableStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPickupTemplate::StaticStruct, Z_Construct_UScriptStruct_FPickupTemplate_Statics::NewStructOps, TEXT("PickupTemplate"), &Z_Registration_Info_UScriptStruct_PickupTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPickupTemplate), 3868139398U) },
		{ FPickupInstance::StaticStruct, Z_Construct_UScriptStruct_FPickupInstance_Statics::NewStructOps, TEXT("PickupInstance"), &Z_Registration_Info_UScriptStruct_PickupInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPickupInstance), 4021539528U) },
		{ FInventoryPickup::StaticStruct, Z_Construct_UScriptStruct_FInventoryPickup_Statics::NewStructOps, TEXT("InventoryPickup"), &Z_Registration_Info_UScriptStruct_InventoryPickup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryPickup), 3290137148U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPickupable, UPickupable::StaticClass, TEXT("UPickupable"), &Z_Registration_Info_UClass_UPickupable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupable), 1088473728U) },
		{ Z_Construct_UClass_UPickupableStatics, UPickupableStatics::StaticClass, TEXT("UPickupableStatics"), &Z_Registration_Info_UClass_UPickupableStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupableStatics), 4087650878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_1392840785(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_IPickupable_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
