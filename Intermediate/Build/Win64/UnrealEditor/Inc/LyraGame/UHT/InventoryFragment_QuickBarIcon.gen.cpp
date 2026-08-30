// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/InventoryFragment_QuickBarIcon.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_QuickBarIcon() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UInventoryFragment_QuickBarIcon
void UInventoryFragment_QuickBarIcon::StaticRegisterNativesUInventoryFragment_QuickBarIcon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_QuickBarIcon);
UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon_NoRegister()
{
	return UInventoryFragment_QuickBarIcon::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameWhenEquipped_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_QuickBarIcon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoBrush;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameWhenEquipped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_QuickBarIcon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_QuickBarIcon, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush = { "AmmoBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_QuickBarIcon, AmmoBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoBrush_MetaData), NewProp_AmmoBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped = { "DisplayNameWhenEquipped", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_QuickBarIcon, DisplayNameWhenEquipped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameWhenEquipped_MetaData), NewProp_DisplayNameWhenEquipped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_AmmoBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::NewProp_DisplayNameWhenEquipped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::ClassParams = {
	&UInventoryFragment_QuickBarIcon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_QuickBarIcon()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon.OuterSingleton, Z_Construct_UClass_UInventoryFragment_QuickBarIcon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_QuickBarIcon>()
{
	return UInventoryFragment_QuickBarIcon::StaticClass();
}
UInventoryFragment_QuickBarIcon::UInventoryFragment_QuickBarIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_QuickBarIcon);
UInventoryFragment_QuickBarIcon::~UInventoryFragment_QuickBarIcon() {}
// End Class UInventoryFragment_QuickBarIcon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_QuickBarIcon, UInventoryFragment_QuickBarIcon::StaticClass, TEXT("UInventoryFragment_QuickBarIcon"), &Z_Registration_Info_UClass_UInventoryFragment_QuickBarIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_QuickBarIcon), 3006770697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_1057506062(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_QuickBarIcon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
