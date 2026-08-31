// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/InventoryFragment_EquippableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_EquippableItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UInventoryFragment_EquippableItem
void UInventoryFragment_EquippableItem::StaticRegisterNativesUInventoryFragment_EquippableItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_EquippableItem);
UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem_NoRegister()
{
	return UInventoryFragment_EquippableItem::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/InventoryFragment_EquippableItem.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_EquippableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[] = {
		{ "Category", "Lyra" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_EquippableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_EquippableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_EquippableItem, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraEquipmentDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentDefinition_MetaData), NewProp_EquipmentDefinition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::ClassParams = {
	&UInventoryFragment_EquippableItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_EquippableItem()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_EquippableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_EquippableItem.OuterSingleton, Z_Construct_UClass_UInventoryFragment_EquippableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_EquippableItem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_EquippableItem>()
{
	return UInventoryFragment_EquippableItem::StaticClass();
}
UInventoryFragment_EquippableItem::UInventoryFragment_EquippableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_EquippableItem);
UInventoryFragment_EquippableItem::~UInventoryFragment_EquippableItem() {}
// End Class UInventoryFragment_EquippableItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_EquippableItem, UInventoryFragment_EquippableItem::StaticClass, TEXT("UInventoryFragment_EquippableItem"), &Z_Registration_Info_UClass_UInventoryFragment_EquippableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_EquippableItem), 1102381635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_1444232434(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_EquippableItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
