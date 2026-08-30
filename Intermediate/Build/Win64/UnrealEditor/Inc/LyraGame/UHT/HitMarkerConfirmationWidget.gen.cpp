// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Weapons/HitMarkerConfirmationWidget.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitMarkerConfirmationWidget() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget();
LYRAGAME_API UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UHitMarkerConfirmationWidget
void UHitMarkerConfirmationWidget::StaticRegisterNativesUHitMarkerConfirmationWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitMarkerConfirmationWidget);
UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget_NoRegister()
{
	return UHitMarkerConfirmationWidget::StaticClass();
}
struct Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNotifyDuration_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The duration (in seconds) to display hit notifies (they fade to transparent over this time)  */" },
#endif
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration (in seconds) to display hit notifies (they fade to transparent over this time)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerHitMarkerImage_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The marker image to draw for individual hit markers. */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker image to draw for individual hit markers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerHitMarkerZoneOverrideImages_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map from zone tag (e.g., weak spot) to override marker images for individual location hits. */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map from zone tag (e.g., weak spot) to override marker images for individual location hits." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnyHitsMarkerImage_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The marker image to draw if there are any hits at all. */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/HitMarkerConfirmationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The marker image to draw if there are any hits at all." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitNotifyDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerHitMarkerImage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerHitMarkerZoneOverrideImages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerHitMarkerZoneOverrideImages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerHitMarkerZoneOverrideImages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnyHitsMarkerImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitMarkerConfirmationWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration = { "HitNotifyDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitMarkerConfirmationWidget, HitNotifyDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNotifyDuration_MetaData), NewProp_HitNotifyDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage = { "PerHitMarkerImage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitMarkerConfirmationWidget, PerHitMarkerImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerHitMarkerImage_MetaData), NewProp_PerHitMarkerImage_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_ValueProp = { "PerHitMarkerZoneOverrideImages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_Key_KeyProp = { "PerHitMarkerZoneOverrideImages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages = { "PerHitMarkerZoneOverrideImages", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitMarkerConfirmationWidget, PerHitMarkerZoneOverrideImages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerHitMarkerZoneOverrideImages_MetaData), NewProp_PerHitMarkerZoneOverrideImages_MetaData) }; // 1298103297 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage = { "AnyHitsMarkerImage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitMarkerConfirmationWidget, AnyHitsMarkerImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnyHitsMarkerImage_MetaData), NewProp_AnyHitsMarkerImage_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_HitNotifyDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_PerHitMarkerZoneOverrideImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::NewProp_AnyHitsMarkerImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::ClassParams = {
	&UHitMarkerConfirmationWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitMarkerConfirmationWidget()
{
	if (!Z_Registration_Info_UClass_UHitMarkerConfirmationWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitMarkerConfirmationWidget.OuterSingleton, Z_Construct_UClass_UHitMarkerConfirmationWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitMarkerConfirmationWidget.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UHitMarkerConfirmationWidget>()
{
	return UHitMarkerConfirmationWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitMarkerConfirmationWidget);
UHitMarkerConfirmationWidget::~UHitMarkerConfirmationWidget() {}
// End Class UHitMarkerConfirmationWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitMarkerConfirmationWidget, UHitMarkerConfirmationWidget::StaticClass, TEXT("UHitMarkerConfirmationWidget"), &Z_Registration_Info_UClass_UHitMarkerConfirmationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitMarkerConfirmationWidget), 3957150459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_2793417215(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_HitMarkerConfirmationWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
