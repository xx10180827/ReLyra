// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/System/LyraDevelopmentStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDevelopmentStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDevelopmentStatics();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDevelopmentStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraDevelopmentStatics Function CanPlayerBotsAttack
struct Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics
{
	struct LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should game logic load cosmetic backgrounds in the editor?\n// Will always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true\n" },
#endif
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should game logic load cosmetic backgrounds in the editor?\nWill always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms), &Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraDevelopmentStatics, nullptr, "CanPlayerBotsAttack", nullptr, nullptr, Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::LyraDevelopmentStatics_eventCanPlayerBotsAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraDevelopmentStatics::execCanPlayerBotsAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULyraDevelopmentStatics::CanPlayerBotsAttack();
	P_NATIVE_END;
}
// End Class ULyraDevelopmentStatics Function CanPlayerBotsAttack

// Begin Class ULyraDevelopmentStatics Function ShouldLoadCosmeticBackgrounds
struct Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics
{
	struct LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should game logic load cosmetic backgrounds in the editor?\n// Will always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true\n" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should game logic load cosmetic backgrounds in the editor?\nWill always return true except when playing in the editor and bSkipLoadingCosmeticBackgroundsInPIE (in Lyra Developer Settings) is true" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms), &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraDevelopmentStatics, nullptr, "ShouldLoadCosmeticBackgrounds", nullptr, nullptr, Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::LyraDevelopmentStatics_eventShouldLoadCosmeticBackgrounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraDevelopmentStatics::execShouldLoadCosmeticBackgrounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULyraDevelopmentStatics::ShouldLoadCosmeticBackgrounds();
	P_NATIVE_END;
}
// End Class ULyraDevelopmentStatics Function ShouldLoadCosmeticBackgrounds

// Begin Class ULyraDevelopmentStatics Function ShouldSkipDirectlyToGameplay
struct Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics
{
	struct LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should game logic skip directly to gameplay (skipping any match warmup / waiting for players / etc... aspects)\n// Will always return false except when playing in the editor and bTestFullGameFlowInPIE (in Lyra Developer Settings) is false\n" },
#endif
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should game logic skip directly to gameplay (skipping any match warmup / waiting for players / etc... aspects)\nWill always return false except when playing in the editor and bTestFullGameFlowInPIE (in Lyra Developer Settings) is false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms), &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraDevelopmentStatics, nullptr, "ShouldSkipDirectlyToGameplay", nullptr, nullptr, Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::LyraDevelopmentStatics_eventShouldSkipDirectlyToGameplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraDevelopmentStatics::execShouldSkipDirectlyToGameplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULyraDevelopmentStatics::ShouldSkipDirectlyToGameplay();
	P_NATIVE_END;
}
// End Class ULyraDevelopmentStatics Function ShouldSkipDirectlyToGameplay

// Begin Class ULyraDevelopmentStatics
void ULyraDevelopmentStatics::StaticRegisterNativesULyraDevelopmentStatics()
{
	UClass* Class = ULyraDevelopmentStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanPlayerBotsAttack", &ULyraDevelopmentStatics::execCanPlayerBotsAttack },
		{ "ShouldLoadCosmeticBackgrounds", &ULyraDevelopmentStatics::execShouldLoadCosmeticBackgrounds },
		{ "ShouldSkipDirectlyToGameplay", &ULyraDevelopmentStatics::execShouldSkipDirectlyToGameplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDevelopmentStatics);
UClass* Z_Construct_UClass_ULyraDevelopmentStatics_NoRegister()
{
	return ULyraDevelopmentStatics::StaticClass();
}
struct Z_Construct_UClass_ULyraDevelopmentStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/LyraDevelopmentStatics.h" },
		{ "ModuleRelativePath", "System/LyraDevelopmentStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraDevelopmentStatics_CanPlayerBotsAttack, "CanPlayerBotsAttack" }, // 4103685777
		{ &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldLoadCosmeticBackgrounds, "ShouldLoadCosmeticBackgrounds" }, // 3933123727
		{ &Z_Construct_UFunction_ULyraDevelopmentStatics_ShouldSkipDirectlyToGameplay, "ShouldSkipDirectlyToGameplay" }, // 748154050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDevelopmentStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraDevelopmentStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDevelopmentStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDevelopmentStatics_Statics::ClassParams = {
	&ULyraDevelopmentStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDevelopmentStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraDevelopmentStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraDevelopmentStatics()
{
	if (!Z_Registration_Info_UClass_ULyraDevelopmentStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDevelopmentStatics.OuterSingleton, Z_Construct_UClass_ULyraDevelopmentStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraDevelopmentStatics.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraDevelopmentStatics>()
{
	return ULyraDevelopmentStatics::StaticClass();
}
ULyraDevelopmentStatics::ULyraDevelopmentStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDevelopmentStatics);
ULyraDevelopmentStatics::~ULyraDevelopmentStatics() {}
// End Class ULyraDevelopmentStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDevelopmentStatics, ULyraDevelopmentStatics::StaticClass, TEXT("ULyraDevelopmentStatics"), &Z_Registration_Info_UClass_ULyraDevelopmentStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDevelopmentStatics), 2600899717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_4060184328(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraDevelopmentStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
