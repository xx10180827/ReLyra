// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraGameplayAbility_Jump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Jump() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Jump();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Jump_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameplayAbility_Jump Function CharacterJumpStart
struct Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Jump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Jump, nullptr, "CharacterJumpStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Jump::execCharacterJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterJumpStart();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Jump Function CharacterJumpStart

// Begin Class ULyraGameplayAbility_Jump Function CharacterJumpStop
struct Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Jump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Jump, nullptr, "CharacterJumpStop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Jump::execCharacterJumpStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterJumpStop();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Jump Function CharacterJumpStop

// Begin Class ULyraGameplayAbility_Jump
void ULyraGameplayAbility_Jump::StaticRegisterNativesULyraGameplayAbility_Jump()
{
	UClass* Class = ULyraGameplayAbility_Jump::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CharacterJumpStart", &ULyraGameplayAbility_Jump::execCharacterJumpStart },
		{ "CharacterJumpStop", &ULyraGameplayAbility_Jump::execCharacterJumpStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Jump);
UClass* Z_Construct_UClass_ULyraGameplayAbility_Jump_NoRegister()
{
	return ULyraGameplayAbility_Jump::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_Jump\n *\n *\x09Gameplay ability used for character jumping.\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraGameplayAbility_Jump.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraGameplayAbility_Jump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_Jump\n\n    Gameplay ability used for character jumping." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStart, "CharacterJumpStart" }, // 1545979615
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Jump_CharacterJumpStop, "CharacterJumpStop" }, // 3062632824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Jump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics::ClassParams = {
	&ULyraGameplayAbility_Jump::StaticClass,
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
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_Jump()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Jump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Jump.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Jump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_Jump.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Jump>()
{
	return ULyraGameplayAbility_Jump::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Jump);
ULyraGameplayAbility_Jump::~ULyraGameplayAbility_Jump() {}
// End Class ULyraGameplayAbility_Jump

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Jump, ULyraGameplayAbility_Jump::StaticClass, TEXT("ULyraGameplayAbility_Jump"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Jump), 1797528523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_1477920357(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraGameplayAbility_Jump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
