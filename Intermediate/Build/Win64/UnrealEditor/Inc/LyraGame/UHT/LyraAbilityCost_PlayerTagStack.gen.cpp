// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAbilityCost_PlayerTagStack() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraAbilityCost_PlayerTagStack
void ULyraAbilityCost_PlayerTagStack::StaticRegisterNativesULyraAbilityCost_PlayerTagStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAbilityCost_PlayerTagStack);
UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_NoRegister()
{
	return ULyraAbilityCost_PlayerTagStack::StaticClass();
}
struct Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of a tag stack on the player state\n */" },
#endif
		{ "DisplayName", "Player Tag Stack" },
		{ "IncludePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a cost that requires expending a quantity of a tag stack on the player state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much of the tag to spend (keyed on ability level) */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much of the tag to spend (keyed on ability level)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Which tag to spend some of */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/LyraAbilityCost_PlayerTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which tag to spend some of" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAbilityCost_PlayerTagStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilityCost_PlayerTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraAbilityCost_PlayerTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraAbilityCost,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::ClassParams = {
	&ULyraAbilityCost_PlayerTagStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack()
{
	if (!Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack.OuterSingleton, Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraAbilityCost_PlayerTagStack>()
{
	return ULyraAbilityCost_PlayerTagStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAbilityCost_PlayerTagStack);
ULyraAbilityCost_PlayerTagStack::~ULyraAbilityCost_PlayerTagStack() {}
// End Class ULyraAbilityCost_PlayerTagStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAbilityCost_PlayerTagStack, ULyraAbilityCost_PlayerTagStack::StaticClass, TEXT("ULyraAbilityCost_PlayerTagStack"), &Z_Registration_Info_UClass_ULyraAbilityCost_PlayerTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAbilityCost_PlayerTagStack), 1985272582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_3605655177(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Abilities_LyraAbilityCost_PlayerTagStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
