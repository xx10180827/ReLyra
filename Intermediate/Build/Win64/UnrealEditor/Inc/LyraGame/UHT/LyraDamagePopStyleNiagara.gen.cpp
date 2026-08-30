// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/NumberPops/LyraDamagePopStyleNiagara.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDamagePopStyleNiagara() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraDamagePopStyleNiagara
void ULyraDamagePopStyleNiagara::StaticRegisterNativesULyraDamagePopStyleNiagara()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDamagePopStyleNiagara);
UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara_NoRegister()
{
	return ULyraDamagePopStyleNiagara::StaticClass();
}
struct Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*PopStyle is used to define what Niagara asset should be used for the Damage System representation*/" },
#endif
		{ "IncludePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PopStyle is used to define what Niagara asset should be used for the Damage System representation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraArrayName_MetaData[] = {
		{ "Category", "DamagePop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Name of the Niagra Array to set the Damage informations\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Niagra Array to set the Damage informations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextNiagara_MetaData[] = {
		{ "Category", "DamagePop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Niagara System used to display the damages\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyleNiagara.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara System used to display the damages" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NiagaraArrayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextNiagara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDamagePopStyleNiagara>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName = { "NiagaraArrayName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyleNiagara, NiagaraArrayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraArrayName_MetaData), NewProp_NiagaraArrayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara = { "TextNiagara", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyleNiagara, TextNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextNiagara_MetaData), NewProp_TextNiagara_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_NiagaraArrayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::NewProp_TextNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::ClassParams = {
	&ULyraDamagePopStyleNiagara::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraDamagePopStyleNiagara()
{
	if (!Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara.OuterSingleton, Z_Construct_UClass_ULyraDamagePopStyleNiagara_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraDamagePopStyleNiagara>()
{
	return ULyraDamagePopStyleNiagara::StaticClass();
}
ULyraDamagePopStyleNiagara::ULyraDamagePopStyleNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDamagePopStyleNiagara);
ULyraDamagePopStyleNiagara::~ULyraDamagePopStyleNiagara() {}
// End Class ULyraDamagePopStyleNiagara

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDamagePopStyleNiagara, ULyraDamagePopStyleNiagara::StaticClass, TEXT("ULyraDamagePopStyleNiagara"), &Z_Registration_Info_UClass_ULyraDamagePopStyleNiagara, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDamagePopStyleNiagara), 3108807808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_2506536618(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyleNiagara_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
