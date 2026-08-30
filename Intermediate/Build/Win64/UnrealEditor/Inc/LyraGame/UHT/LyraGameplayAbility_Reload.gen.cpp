// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraGameplayAbility_Reload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_Reload() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Reload();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_Reload_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraGameplayAbility_Reload Function GetWeaponInstance
struct Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics
{
	struct LyraGameplayAbility_Reload_eventGetWeaponInstance_Parms
	{
		ULyraRangedWeaponInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_Reload.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_Reload_eventGetWeaponInstance_Parms, ReturnValue), Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Reload, nullptr, "GetWeaponInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::LyraGameplayAbility_Reload_eventGetWeaponInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::LyraGameplayAbility_Reload_eventGetWeaponInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Reload::execGetWeaponInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraRangedWeaponInstance**)Z_Param__Result=P_THIS->GetWeaponInstance();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Reload Function GetWeaponInstance

// Begin Class ULyraGameplayAbility_Reload Function OnReloadDelayFinished
struct Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the reload delay has elapsed.\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_Reload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the reload delay has elapsed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_Reload, nullptr, "OnReloadDelayFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_Reload::execOnReloadDelayFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReloadDelayFinished();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_Reload Function OnReloadDelayFinished

// Begin Class ULyraGameplayAbility_Reload
void ULyraGameplayAbility_Reload::StaticRegisterNativesULyraGameplayAbility_Reload()
{
	UClass* Class = ULyraGameplayAbility_Reload::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeaponInstance", &ULyraGameplayAbility_Reload::execGetWeaponInstance },
		{ "OnReloadDelayFinished", &ULyraGameplayAbility_Reload::execOnReloadDelayFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_Reload);
UClass* Z_Construct_UClass_ULyraGameplayAbility_Reload_NoRegister()
{
	return ULyraGameplayAbility_Reload::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_Reload\n *\n * An ability granted by a ranged weapon that reloads its magazine.\n * Plays a reload montage and, after the weapon's ReloadTime has elapsed,\n * transfers finite reserve ammo into the magazine after ReloadTime elapses.\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapons/LyraGameplayAbility_Reload.h" },
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_Reload.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_Reload\n\nAn ability granted by a ranged weapon that reloads its magazine.\nPlays a reload montage and, after the weapon's ReloadTime has elapsed,\ntransfers finite reserve ammo into the magazine after ReloadTime elapses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Reload" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montage to play while reloading. Its duration should roughly match the weapon's ReloadTime.\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_Reload.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage to play while reloading. Its duration should roughly match the weapon's ReloadTime." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Reload_GetWeaponInstance, "GetWeaponInstance" }, // 3548872873
		{ &Z_Construct_UFunction_ULyraGameplayAbility_Reload_OnReloadDelayFinished, "OnReloadDelayFinished" }, // 3117473305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_Reload>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraGameplayAbility_Reload, ReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::NewProp_ReloadMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::ClassParams = {
	&ULyraGameplayAbility_Reload::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_Reload()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_Reload.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_Reload.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_Reload_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_Reload.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_Reload>()
{
	return ULyraGameplayAbility_Reload::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_Reload);
ULyraGameplayAbility_Reload::~ULyraGameplayAbility_Reload() {}
// End Class ULyraGameplayAbility_Reload

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_Reload, ULyraGameplayAbility_Reload::StaticClass, TEXT("ULyraGameplayAbility_Reload"), &Z_Registration_Info_UClass_ULyraGameplayAbility_Reload, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_Reload), 1138671485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_3102255710(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_Reload_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
