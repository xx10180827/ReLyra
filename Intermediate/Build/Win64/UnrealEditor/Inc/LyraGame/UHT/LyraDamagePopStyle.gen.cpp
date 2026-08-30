// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Feedback/NumberPops/LyraDamagePopStyle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDamagePopStyle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyle();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamagePopStyle_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraDamagePopStyle
void ULyraDamagePopStyle::StaticRegisterNativesULyraDamagePopStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDamagePopStyle);
UClass* Z_Construct_UClass_ULyraDamagePopStyle_NoRegister()
{
	return ULyraDamagePopStyle::StaticClass();
}
struct Z_Construct_UClass_ULyraDamagePopStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchPattern_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "EditCondition", "bOverrideColor" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalColor_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "EditCondition", "bOverrideColor" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextMesh_MetaData[] = {
		{ "Category", "DamagePop" },
		{ "EditCondition", "bOverrideMesh" },
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideColor_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMesh_MetaData[] = {
		{ "ModuleRelativePath", "Feedback/NumberPops/LyraDamagePopStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchPattern;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextMesh;
	static void NewProp_bOverrideColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideColor;
	static void NewProp_bOverrideMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDamagePopStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyle, DisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayText_MetaData), NewProp_DisplayText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_MatchPattern = { "MatchPattern", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyle, MatchPattern), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchPattern_MetaData), NewProp_MatchPattern_MetaData) }; // 572225232
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_CriticalColor = { "CriticalColor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyle, CriticalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalColor_MetaData), NewProp_CriticalColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_TextMesh = { "TextMesh", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamagePopStyle, TextMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextMesh_MetaData), NewProp_TextMesh_MetaData) };
void Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideColor_SetBit(void* Obj)
{
	((ULyraDamagePopStyle*)Obj)->bOverrideColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideColor = { "bOverrideColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDamagePopStyle), &Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideColor_MetaData), NewProp_bOverrideColor_MetaData) };
void Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideMesh_SetBit(void* Obj)
{
	((ULyraDamagePopStyle*)Obj)->bOverrideMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideMesh = { "bOverrideMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraDamagePopStyle), &Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMesh_MetaData), NewProp_bOverrideMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraDamagePopStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_DisplayText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_MatchPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_CriticalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_TextMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamagePopStyle_Statics::NewProp_bOverrideMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraDamagePopStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDamagePopStyle_Statics::ClassParams = {
	&ULyraDamagePopStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraDamagePopStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyle_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamagePopStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraDamagePopStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraDamagePopStyle()
{
	if (!Z_Registration_Info_UClass_ULyraDamagePopStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDamagePopStyle.OuterSingleton, Z_Construct_UClass_ULyraDamagePopStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraDamagePopStyle.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraDamagePopStyle>()
{
	return ULyraDamagePopStyle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDamagePopStyle);
ULyraDamagePopStyle::~ULyraDamagePopStyle() {}
// End Class ULyraDamagePopStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDamagePopStyle, ULyraDamagePopStyle::StaticClass, TEXT("ULyraDamagePopStyle"), &Z_Registration_Info_UClass_ULyraDamagePopStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDamagePopStyle), 3693153276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyle_h_3086197041(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Feedback_NumberPops_LyraDamagePopStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
