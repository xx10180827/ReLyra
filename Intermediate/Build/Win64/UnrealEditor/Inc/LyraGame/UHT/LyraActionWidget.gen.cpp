// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Foundation/LyraActionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraActionWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraActionWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraActionWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraActionWidget
void ULyraActionWidget::StaticRegisterNativesULyraActionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraActionWidget);
UClass* Z_Construct_UClass_ULyraActionWidget_NoRegister()
{
	return ULyraActionWidget::StaticClass();
}
struct Z_Construct_UClass_ULyraActionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An action widget that will get the icon of key that is currently assigned to the common input action on this widget */" },
#endif
		{ "IncludePath", "UI/Foundation/LyraActionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/Foundation/LyraActionWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An action widget that will get the icon of key that is currently assigned to the common input action on this widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedInputAction_MetaData[] = {
		{ "Category", "LyraActionWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Enhanced Input Action that is associated with this Common Input action. */" },
#endif
		{ "ModuleRelativePath", "UI/Foundation/LyraActionWidget.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Enhanced Input Action that is associated with this Common Input action." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraActionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction = { "AssociatedInputAction", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraActionWidget, AssociatedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedInputAction_MetaData), NewProp_AssociatedInputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActionWidget_Statics::NewProp_AssociatedInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraActionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActionWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraActionWidget_Statics::ClassParams = {
	&ULyraActionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraActionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraActionWidget()
{
	if (!Z_Registration_Info_UClass_ULyraActionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraActionWidget.OuterSingleton, Z_Construct_UClass_ULyraActionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraActionWidget.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraActionWidget>()
{
	return ULyraActionWidget::StaticClass();
}
ULyraActionWidget::ULyraActionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraActionWidget);
ULyraActionWidget::~ULyraActionWidget() {}
// End Class ULyraActionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraActionWidget, ULyraActionWidget::StaticClass, TEXT("ULyraActionWidget"), &Z_Registration_Info_UClass_ULyraActionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraActionWidget), 2704240007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_2734478886(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Foundation_LyraActionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
