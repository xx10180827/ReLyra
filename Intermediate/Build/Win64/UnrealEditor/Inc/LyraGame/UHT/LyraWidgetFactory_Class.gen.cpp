// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Common/LyraWidgetFactory_Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWidgetFactory_Class() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory_Class();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWidgetFactory_Class_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraWidgetFactory_Class
void ULyraWidgetFactory_Class::StaticRegisterNativesULyraWidgetFactory_Class()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWidgetFactory_Class);
UClass* Z_Construct_UClass_ULyraWidgetFactory_Class_NoRegister()
{
	return ULyraWidgetFactory_Class::StaticClass();
}
struct Z_Construct_UClass_ULyraWidgetFactory_Class_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Common/LyraWidgetFactory_Class.h" },
		{ "ModuleRelativePath", "UI/Common/LyraWidgetFactory_Class.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetForClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "ListEntries" },
		{ "ModuleRelativePath", "UI/Common/LyraWidgetFactory_Class.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetForClass_ValueProp;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_EntryWidgetForClass_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EntryWidgetForClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWidgetFactory_Class>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::NewProp_EntryWidgetForClass_ValueProp = { "EntryWidgetForClass", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::NewProp_EntryWidgetForClass_Key_KeyProp = { "EntryWidgetForClass_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::NewProp_EntryWidgetForClass = { "EntryWidgetForClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWidgetFactory_Class, EntryWidgetForClass), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgetForClass_MetaData), NewProp_EntryWidgetForClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::NewProp_EntryWidgetForClass_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::NewProp_EntryWidgetForClass_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::NewProp_EntryWidgetForClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraWidgetFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::ClassParams = {
	&ULyraWidgetFactory_Class::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWidgetFactory_Class()
{
	if (!Z_Registration_Info_UClass_ULyraWidgetFactory_Class.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWidgetFactory_Class.OuterSingleton, Z_Construct_UClass_ULyraWidgetFactory_Class_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWidgetFactory_Class.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWidgetFactory_Class>()
{
	return ULyraWidgetFactory_Class::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWidgetFactory_Class);
ULyraWidgetFactory_Class::~ULyraWidgetFactory_Class() {}
// End Class ULyraWidgetFactory_Class

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_Class_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWidgetFactory_Class, ULyraWidgetFactory_Class::StaticClass, TEXT("ULyraWidgetFactory_Class"), &Z_Registration_Info_UClass_ULyraWidgetFactory_Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWidgetFactory_Class), 108606085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_Class_h_3809490253(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_Class_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Common_LyraWidgetFactory_Class_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
