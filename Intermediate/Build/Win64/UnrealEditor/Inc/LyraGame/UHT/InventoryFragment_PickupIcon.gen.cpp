// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/InventoryFragment_PickupIcon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_PickupIcon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon();
LYRAGAME_API UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UInventoryFragment_PickupIcon
void UInventoryFragment_PickupIcon::StaticRegisterNativesUInventoryFragment_PickupIcon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryFragment_PickupIcon);
UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon_NoRegister()
{
	return UInventoryFragment_PickupIcon::StaticClass();
}
struct Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryFragment_PickupIcon.h" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PadColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Inventory/InventoryFragment_PickupIcon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PadColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryFragment_PickupIcon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_PickupIcon, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_PickupIcon, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor = { "PadColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryFragment_PickupIcon, PadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PadColor_MetaData), NewProp_PadColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::NewProp_PadColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::ClassParams = {
	&UInventoryFragment_PickupIcon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryFragment_PickupIcon()
{
	if (!Z_Registration_Info_UClass_UInventoryFragment_PickupIcon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryFragment_PickupIcon.OuterSingleton, Z_Construct_UClass_UInventoryFragment_PickupIcon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryFragment_PickupIcon.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UInventoryFragment_PickupIcon>()
{
	return UInventoryFragment_PickupIcon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryFragment_PickupIcon);
UInventoryFragment_PickupIcon::~UInventoryFragment_PickupIcon() {}
// End Class UInventoryFragment_PickupIcon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryFragment_PickupIcon, UInventoryFragment_PickupIcon::StaticClass, TEXT("UInventoryFragment_PickupIcon"), &Z_Registration_Info_UClass_UInventoryFragment_PickupIcon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryFragment_PickupIcon), 973779185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_306961599(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_InventoryFragment_PickupIcon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
