// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Cosmetics/LyraCosmeticCheats.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCosmeticCheats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticCheats();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCosmeticCheats_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraCosmeticCheats Function AddCharacterPart
struct Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics
{
	struct LyraCosmeticCheats_eventAddCharacterPart_Parms
	{
		FString AssetName;
		bool bSuppressNaturalParts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a character part\n" },
#endif
		{ "CPP_Default_bSuppressNaturalParts", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a character part" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static void NewProp_bSuppressNaturalParts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressNaturalParts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCosmeticCheats_eventAddCharacterPart_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
void Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit(void* Obj)
{
	((LyraCosmeticCheats_eventAddCharacterPart_Parms*)Obj)->bSuppressNaturalParts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts = { "bSuppressNaturalParts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraCosmeticCheats_eventAddCharacterPart_Parms), &Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::NewProp_bSuppressNaturalParts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCosmeticCheats, nullptr, "AddCharacterPart", nullptr, nullptr, Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::LyraCosmeticCheats_eventAddCharacterPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::LyraCosmeticCheats_eventAddCharacterPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCosmeticCheats::execAddCharacterPart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_UBOOL(Z_Param_bSuppressNaturalParts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharacterPart(Z_Param_AssetName,Z_Param_bSuppressNaturalParts);
	P_NATIVE_END;
}
// End Class ULyraCosmeticCheats Function AddCharacterPart

// Begin Class ULyraCosmeticCheats Function ClearCharacterPartOverrides
struct Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears any existing cheats\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears any existing cheats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCosmeticCheats, nullptr, "ClearCharacterPartOverrides", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCosmeticCheats::execClearCharacterPartOverrides)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCharacterPartOverrides();
	P_NATIVE_END;
}
// End Class ULyraCosmeticCheats Function ClearCharacterPartOverrides

// Begin Class ULyraCosmeticCheats Function ReplaceCharacterPart
struct Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics
{
	struct LyraCosmeticCheats_eventReplaceCharacterPart_Parms
	{
		FString AssetName;
		bool bSuppressNaturalParts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replaces previous cheat parts with a new one\n" },
#endif
		{ "CPP_Default_bSuppressNaturalParts", "true" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replaces previous cheat parts with a new one" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static void NewProp_bSuppressNaturalParts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressNaturalParts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCosmeticCheats_eventReplaceCharacterPart_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
void Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit(void* Obj)
{
	((LyraCosmeticCheats_eventReplaceCharacterPart_Parms*)Obj)->bSuppressNaturalParts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts = { "bSuppressNaturalParts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraCosmeticCheats_eventReplaceCharacterPart_Parms), &Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::NewProp_bSuppressNaturalParts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCosmeticCheats, nullptr, "ReplaceCharacterPart", nullptr, nullptr, Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::LyraCosmeticCheats_eventReplaceCharacterPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::LyraCosmeticCheats_eventReplaceCharacterPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCosmeticCheats::execReplaceCharacterPart)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_GET_UBOOL(Z_Param_bSuppressNaturalParts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReplaceCharacterPart(Z_Param_AssetName,Z_Param_bSuppressNaturalParts);
	P_NATIVE_END;
}
// End Class ULyraCosmeticCheats Function ReplaceCharacterPart

// Begin Class ULyraCosmeticCheats
void ULyraCosmeticCheats::StaticRegisterNativesULyraCosmeticCheats()
{
	UClass* Class = ULyraCosmeticCheats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacterPart", &ULyraCosmeticCheats::execAddCharacterPart },
		{ "ClearCharacterPartOverrides", &ULyraCosmeticCheats::execClearCharacterPartOverrides },
		{ "ReplaceCharacterPart", &ULyraCosmeticCheats::execReplaceCharacterPart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCosmeticCheats);
UClass* Z_Construct_UClass_ULyraCosmeticCheats_NoRegister()
{
	return ULyraCosmeticCheats::StaticClass();
}
struct Z_Construct_UClass_ULyraCosmeticCheats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cheats related to bots */" },
#endif
		{ "IncludePath", "Cosmetics/LyraCosmeticCheats.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Cosmetics/LyraCosmeticCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cheats related to bots" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCosmeticCheats_AddCharacterPart, "AddCharacterPart" }, // 1878283905
		{ &Z_Construct_UFunction_ULyraCosmeticCheats_ClearCharacterPartOverrides, "ClearCharacterPartOverrides" }, // 3738419877
		{ &Z_Construct_UFunction_ULyraCosmeticCheats_ReplaceCharacterPart, "ReplaceCharacterPart" }, // 3408776827
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCosmeticCheats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraCosmeticCheats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticCheats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCosmeticCheats_Statics::ClassParams = {
	&ULyraCosmeticCheats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCosmeticCheats_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCosmeticCheats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCosmeticCheats()
{
	if (!Z_Registration_Info_UClass_ULyraCosmeticCheats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCosmeticCheats.OuterSingleton, Z_Construct_UClass_ULyraCosmeticCheats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCosmeticCheats.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCosmeticCheats>()
{
	return ULyraCosmeticCheats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCosmeticCheats);
ULyraCosmeticCheats::~ULyraCosmeticCheats() {}
// End Class ULyraCosmeticCheats

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCosmeticCheats, ULyraCosmeticCheats::StaticClass, TEXT("ULyraCosmeticCheats"), &Z_Registration_Info_UClass_ULyraCosmeticCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCosmeticCheats), 1407295015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_3650814609(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraCosmeticCheats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
