// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/IndicatorSystem/IndicatorLayer.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicatorLayer() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLayer();
LYRAGAME_API UClass* Z_Construct_UClass_UIndicatorLayer_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class UIndicatorLayer
void UIndicatorLayer::StaticRegisterNativesUIndicatorLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIndicatorLayer);
UClass* Z_Construct_UClass_UIndicatorLayer_NoRegister()
{
	return UIndicatorLayer::StaticClass();
}
struct Z_Construct_UClass_UIndicatorLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/IndicatorSystem/IndicatorLayer.h" },
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowBrush_MetaData[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default arrow brush to use if UI is clamped to the screen and needs to show an arrow. */" },
#endif
		{ "ModuleRelativePath", "UI/IndicatorSystem/IndicatorLayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default arrow brush to use if UI is clamped to the screen and needs to show an arrow." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicatorLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush = { "ArrowBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIndicatorLayer, ArrowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowBrush_MetaData), NewProp_ArrowBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicatorLayer_Statics::NewProp_ArrowBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIndicatorLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIndicatorLayer_Statics::ClassParams = {
	&UIndicatorLayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIndicatorLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIndicatorLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIndicatorLayer()
{
	if (!Z_Registration_Info_UClass_UIndicatorLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIndicatorLayer.OuterSingleton, Z_Construct_UClass_UIndicatorLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIndicatorLayer.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<UIndicatorLayer>()
{
	return UIndicatorLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicatorLayer);
UIndicatorLayer::~UIndicatorLayer() {}
// End Class UIndicatorLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIndicatorLayer, UIndicatorLayer::StaticClass, TEXT("UIndicatorLayer"), &Z_Registration_Info_UClass_UIndicatorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIndicatorLayer), 2072002888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_1539747719(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_IndicatorSystem_IndicatorLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
