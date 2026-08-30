// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Common/LyraListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraListView() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonListView();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraListView();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraListView_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraListView
void ULyraListView::StaticRegisterNativesULyraListView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraListView);
UClass* Z_Construct_UClass_ULyraListView_NoRegister()
{
	return ULyraListView::StaticClass();
}
struct Z_Construct_UClass_ULyraListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/Common/LyraListView.h" },
		{ "ModuleRelativePath", "UI/Common/LyraListView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryRules_Inner_MetaData[] = {
		{ "Category", "Entry Creation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraListView.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryRules_MetaData[] = {
		{ "Category", "Entry Creation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Common/LyraListView.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactoryRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FactoryRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner = { "FactoryRules", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraWidgetFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryRules_Inner_MetaData), NewProp_FactoryRules_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules = { "FactoryRules", nullptr, (EPropertyFlags)0x0124088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraListView, FactoryRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryRules_MetaData), NewProp_FactoryRules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraListView_Statics::NewProp_FactoryRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonListView,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraListView_Statics::ClassParams = {
	&ULyraListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraListView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraListView_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraListView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraListView()
{
	if (!Z_Registration_Info_UClass_ULyraListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraListView.OuterSingleton, Z_Construct_UClass_ULyraListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraListView.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraListView>()
{
	return ULyraListView::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraListView);
ULyraListView::~ULyraListView() {}
// End Class ULyraListView

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraListView, ULyraListView::StaticClass, TEXT("ULyraListView"), &Z_Registration_Info_UClass_ULyraListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraListView), 1936476564U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_1334936526(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraListView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
