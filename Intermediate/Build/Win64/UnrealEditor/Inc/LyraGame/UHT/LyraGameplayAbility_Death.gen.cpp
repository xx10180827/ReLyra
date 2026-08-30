// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraGameplayAbility_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Death() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Death();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Death_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameplayAbility_Death Function FinishDeath
struct Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finishes the death sequence.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finishes the death sequence." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Death, nullptr, "FinishDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Death::execFinishDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDeath();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Death Function FinishDeath

// Begin Class ULyraGameplayAbility_Death Function StartDeath
struct Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Starts the death sequence.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the death sequence." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Death, nullptr, "StartDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Death::execStartDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDeath();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Death Function StartDeath

// Begin Class ULyraGameplayAbility_Death
void ULyraGameplayAbility_Death::StaticRegisterNativesULyraGameplayAbility_Death()
{
	UClass* Class = ULyraGameplayAbility_Death::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishDeath", &ULyraGameplayAbility_Death::execFinishDeath },
		{ "StartDeath", &ULyraGameplayAbility_Death::execStartDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Death);
UClass* Z_Construct_UClass_ULyraGameplayAbility_Death_NoRegister()
{
	return ULyraGameplayAbility_Death::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_Death\n *\n *\x09Gameplay ability used for handling death.\n *\x09""Ability is activated automatically via the \"GameplayEvent.Death\" ability trigger tag.\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_Death\n\n    Gameplay ability used for handling death.\n    Ability is activated automatically via the \"GameplayEvent.Death\" ability trigger tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartDeath_MetaData[] = {
		{ "Category", "Lyra|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the ability will automatically call StartDeath.  FinishDeath is always called when the ability ends if the death was started.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Death.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the ability will automatically call StartDeath.  FinishDeath is always called when the ability ends if the death was started." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoStartDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Death_FinishDeath, "FinishDeath" }, // 802332818
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Death_StartDeath, "StartDeath" }, // 2637820104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Death>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_SetBit(void* Obj)
{
	((ULyraGameplayAbility_Death*)Obj)->bAutoStartDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath = { "bAutoStartDeath", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraGameplayAbility_Death), &Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartDeath_MetaData), NewProp_bAutoStartDeath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::NewProp_bAutoStartDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::ClassParams = {
	&ULyraGameplayAbility_Death::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::PropPointers),
	0,
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_Death()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Death.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Death.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Death_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_Death.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Death>()
{
	return ULyraGameplayAbility_Death::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Death);
ULyraGameplayAbility_Death::~ULyraGameplayAbility_Death() {}
// End Class ULyraGameplayAbility_Death

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Death, ULyraGameplayAbility_Death::StaticClass, TEXT("ULyraGameplayAbility_Death"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Death), 717648808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_273787215(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Death_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
