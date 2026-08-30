// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Inventory/LyraInventoryItemDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraInventoryItemDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraInventoryItemFragment
void ULyraInventoryItemFragment::StaticRegisterNativesULyraInventoryItemFragment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryItemFragment);
UClass* Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister()
{
	return ULyraInventoryItemFragment::StaticClass();
}
struct Z_Construct_UClass_ULyraInventoryItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a fragment of an item definition\n" },
#endif
		{ "IncludePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a fragment of an item definition" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryItemFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraInventoryItemFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryItemFragment_Statics::ClassParams = {
	&ULyraInventoryItemFragment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInventoryItemFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInventoryItemFragment()
{
	if (!Z_Registration_Info_UClass_ULyraInventoryItemFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryItemFragment.OuterSingleton, Z_Construct_UClass_ULyraInventoryItemFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInventoryItemFragment.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryItemFragment>()
{
	return ULyraInventoryItemFragment::StaticClass();
}
ULyraInventoryItemFragment::ULyraInventoryItemFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryItemFragment);
ULyraInventoryItemFragment::~ULyraInventoryItemFragment() {}
// End Class ULyraInventoryItemFragment

// Begin Class ULyraInventoryItemDefinition
void ULyraInventoryItemDefinition::StaticRegisterNativesULyraInventoryItemDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryItemDefinition);
UClass* Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister()
{
	return ULyraInventoryItemDefinition::StaticClass();
}
struct Z_Construct_UClass_ULyraInventoryItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraInventoryItemDefinition\n */" },
#endif
		{ "IncludePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraInventoryItemDefinition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryItemDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInventoryItemDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_Inner_MetaData), NewProp_Fragments_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraInventoryItemDefinition, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::NewProp_Fragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::ClassParams = {
	&ULyraInventoryItemDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::PropPointers),
	0,
	0x008100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInventoryItemDefinition()
{
	if (!Z_Registration_Info_UClass_ULyraInventoryItemDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryItemDefinition.OuterSingleton, Z_Construct_UClass_ULyraInventoryItemDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInventoryItemDefinition.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryItemDefinition>()
{
	return ULyraInventoryItemDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryItemDefinition);
ULyraInventoryItemDefinition::~ULyraInventoryItemDefinition() {}
// End Class ULyraInventoryItemDefinition

// Begin Class ULyraInventoryFunctionLibrary Function FindItemDefinitionFragment
struct Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics
{
	struct LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms
	{
		TSubclassOf<ULyraInventoryItemDefinition> ItemDef;
		TSubclassOf<ULyraInventoryItemFragment> FragmentClass;
		const ULyraInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraInventoryFunctionLibrary, nullptr, "FindItemDefinitionFragment", nullptr, nullptr, Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::LyraInventoryFunctionLibrary_eventFindItemDefinitionFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraInventoryFunctionLibrary::execFindItemDefinitionFragment)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const ULyraInventoryItemFragment**)Z_Param__Result=ULyraInventoryFunctionLibrary::FindItemDefinitionFragment(Z_Param_ItemDef,Z_Param_FragmentClass);
	P_NATIVE_END;
}
// End Class ULyraInventoryFunctionLibrary Function FindItemDefinitionFragment

// Begin Class ULyraInventoryFunctionLibrary
void ULyraInventoryFunctionLibrary::StaticRegisterNativesULyraInventoryFunctionLibrary()
{
	UClass* Class = ULyraInventoryFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindItemDefinitionFragment", &ULyraInventoryFunctionLibrary::execFindItemDefinitionFragment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraInventoryFunctionLibrary);
UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary_NoRegister()
{
	return ULyraInventoryFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@TODO: Make into a subsystem instead?\n" },
#endif
		{ "IncludePath", "Inventory/LyraInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/LyraInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@TODO: Make into a subsystem instead?" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraInventoryFunctionLibrary_FindItemDefinitionFragment, "FindItemDefinitionFragment" }, // 4202061973
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraInventoryFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::ClassParams = {
	&ULyraInventoryFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraInventoryFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULyraInventoryFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraInventoryFunctionLibrary>()
{
	return ULyraInventoryFunctionLibrary::StaticClass();
}
ULyraInventoryFunctionLibrary::ULyraInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraInventoryFunctionLibrary);
ULyraInventoryFunctionLibrary::~ULyraInventoryFunctionLibrary() {}
// End Class ULyraInventoryFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraInventoryItemFragment, ULyraInventoryItemFragment::StaticClass, TEXT("ULyraInventoryItemFragment"), &Z_Registration_Info_UClass_ULyraInventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryItemFragment), 937772045U) },
		{ Z_Construct_UClass_ULyraInventoryItemDefinition, ULyraInventoryItemDefinition::StaticClass, TEXT("ULyraInventoryItemDefinition"), &Z_Registration_Info_UClass_ULyraInventoryItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryItemDefinition), 2166324033U) },
		{ Z_Construct_UClass_ULyraInventoryFunctionLibrary, ULyraInventoryFunctionLibrary::StaticClass, TEXT("ULyraInventoryFunctionLibrary"), &Z_Registration_Info_UClass_ULyraInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraInventoryFunctionLibrary), 507560405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_2972630360(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Inventory_LyraInventoryItemDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
