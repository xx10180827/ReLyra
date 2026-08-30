// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Equipment/LyraGameplayAbility_FromEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_FromEquipment() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraEquipmentInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameplayAbility_FromEquipment Function GetAssociatedEquipment
struct Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics
{
	struct LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms
	{
		ULyraEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms, ReturnValue), Z_Construct_UClass_ULyraEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment, nullptr, "GetAssociatedEquipment", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::LyraGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_FromEquipment::execGetAssociatedEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraEquipmentInstance**)Z_Param__Result=P_THIS->GetAssociatedEquipment();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_FromEquipment Function GetAssociatedEquipment

// Begin Class ULyraGameplayAbility_FromEquipment Function GetAssociatedItem
struct Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics
{
	struct LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms
	{
		ULyraInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms, ReturnValue), Z_Construct_UClass_ULyraInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment, nullptr, "GetAssociatedItem", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::LyraGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_FromEquipment::execGetAssociatedItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraInventoryItemInstance**)Z_Param__Result=P_THIS->GetAssociatedItem();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_FromEquipment Function GetAssociatedItem

// Begin Class ULyraGameplayAbility_FromEquipment
void ULyraGameplayAbility_FromEquipment::StaticRegisterNativesULyraGameplayAbility_FromEquipment()
{
	UClass* Class = ULyraGameplayAbility_FromEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssociatedEquipment", &ULyraGameplayAbility_FromEquipment::execGetAssociatedEquipment },
		{ "GetAssociatedItem", &ULyraGameplayAbility_FromEquipment::execGetAssociatedItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_FromEquipment);
UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_NoRegister()
{
	return ULyraGameplayAbility_FromEquipment::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_FromEquipment\n *\n * An ability granted by and associated with an equipment instance\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
		{ "ModuleRelativePath", "Equipment/LyraGameplayAbility_FromEquipment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_FromEquipment\n\nAn ability granted by and associated with an equipment instance" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedEquipment, "GetAssociatedEquipment" }, // 1561147770
		{ &Z_Construct_UFunction_ULyraGameplayAbility_FromEquipment_GetAssociatedItem, "GetAssociatedItem" }, // 3213721993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_FromEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::ClassParams = {
	&ULyraGameplayAbility_FromEquipment::StaticClass,
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
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_FromEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_FromEquipment>()
{
	return ULyraGameplayAbility_FromEquipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_FromEquipment);
ULyraGameplayAbility_FromEquipment::~ULyraGameplayAbility_FromEquipment() {}
// End Class ULyraGameplayAbility_FromEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_FromEquipment, ULyraGameplayAbility_FromEquipment::StaticClass, TEXT("ULyraGameplayAbility_FromEquipment"), &Z_Registration_Info_UClass_ULyraGameplayAbility_FromEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_FromEquipment), 2981143801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_1235987288(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Equipment_LyraGameplayAbility_FromEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
