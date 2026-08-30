// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraGameplayAbility_RangedWeapon() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_FromEquipment();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ELyraAbilityTargetingSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraAbilityTargetingSource;
static UEnum* ELyraAbilityTargetingSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraAbilityTargetingSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraAbilityTargetingSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraAbilityTargetingSource"));
	}
	return Z_Registration_Info_UEnum_ELyraAbilityTargetingSource.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraAbilityTargetingSource>()
{
	return ELyraAbilityTargetingSource_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraTowardsFocus.Comment", "// From the player's camera towards camera focus\n" },
		{ "CameraTowardsFocus.Name", "ELyraAbilityTargetingSource::CameraTowardsFocus" },
		{ "CameraTowardsFocus.ToolTip", "From the player's camera towards camera focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines where an ability starts its trace from and where it should face */" },
#endif
		{ "Custom.Comment", "// Custom blueprint-specified source location\n" },
		{ "Custom.Name", "ELyraAbilityTargetingSource::Custom" },
		{ "Custom.ToolTip", "Custom blueprint-specified source location" },
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_RangedWeapon.h" },
		{ "PawnForward.Comment", "// From the pawn's center, in the pawn's orientation\n" },
		{ "PawnForward.Name", "ELyraAbilityTargetingSource::PawnForward" },
		{ "PawnForward.ToolTip", "From the pawn's center, in the pawn's orientation" },
		{ "PawnTowardsFocus.Comment", "// From the pawn's center, oriented towards camera focus\n" },
		{ "PawnTowardsFocus.Name", "ELyraAbilityTargetingSource::PawnTowardsFocus" },
		{ "PawnTowardsFocus.ToolTip", "From the pawn's center, oriented towards camera focus" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines where an ability starts its trace from and where it should face" },
#endif
		{ "WeaponForward.Comment", "// From the weapon's muzzle or location, in the pawn's orientation\n" },
		{ "WeaponForward.Name", "ELyraAbilityTargetingSource::WeaponForward" },
		{ "WeaponForward.ToolTip", "From the weapon's muzzle or location, in the pawn's orientation" },
		{ "WeaponTowardsFocus.Comment", "// From the weapon's muzzle or location, towards camera focus\n" },
		{ "WeaponTowardsFocus.Name", "ELyraAbilityTargetingSource::WeaponTowardsFocus" },
		{ "WeaponTowardsFocus.ToolTip", "From the weapon's muzzle or location, towards camera focus" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraAbilityTargetingSource::CameraTowardsFocus", (int64)ELyraAbilityTargetingSource::CameraTowardsFocus },
		{ "ELyraAbilityTargetingSource::PawnForward", (int64)ELyraAbilityTargetingSource::PawnForward },
		{ "ELyraAbilityTargetingSource::PawnTowardsFocus", (int64)ELyraAbilityTargetingSource::PawnTowardsFocus },
		{ "ELyraAbilityTargetingSource::WeaponForward", (int64)ELyraAbilityTargetingSource::WeaponForward },
		{ "ELyraAbilityTargetingSource::WeaponTowardsFocus", (int64)ELyraAbilityTargetingSource::WeaponTowardsFocus },
		{ "ELyraAbilityTargetingSource::Custom", (int64)ELyraAbilityTargetingSource::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraAbilityTargetingSource",
	"ELyraAbilityTargetingSource",
	Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource()
{
	if (!Z_Registration_Info_UEnum_ELyraAbilityTargetingSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraAbilityTargetingSource.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraAbilityTargetingSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraAbilityTargetingSource.InnerSingleton;
}
// End Enum ELyraAbilityTargetingSource

// Begin Class ULyraGameplayAbility_RangedWeapon Function GetWeaponInstance
struct Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics
{
	struct LyraGameplayAbility_RangedWeapon_eventGetWeaponInstance_Parms
	{
		ULyraRangedWeaponInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_RangedWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_RangedWeapon_eventGetWeaponInstance_Parms, ReturnValue), Z_Construct_UClass_ULyraRangedWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon, nullptr, "GetWeaponInstance", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::LyraGameplayAbility_RangedWeapon_eventGetWeaponInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::LyraGameplayAbility_RangedWeapon_eventGetWeaponInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_RangedWeapon::execGetWeaponInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULyraRangedWeaponInstance**)Z_Param__Result=P_THIS->GetWeaponInstance();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_RangedWeapon Function GetWeaponInstance

// Begin Class ULyraGameplayAbility_RangedWeapon Function OnRangedWeaponTargetDataReady
struct LyraGameplayAbility_RangedWeapon_eventOnRangedWeaponTargetDataReady_Parms
{
	FGameplayAbilityTargetDataHandle TargetData;
};
static FName NAME_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady = FName(TEXT("OnRangedWeaponTargetDataReady"));
void ULyraGameplayAbility_RangedWeapon::OnRangedWeaponTargetDataReady(FGameplayAbilityTargetDataHandle const& TargetData)
{
	LyraGameplayAbility_RangedWeapon_eventOnRangedWeaponTargetDataReady_Parms Parms;
	Parms.TargetData=TargetData;
	ProcessEvent(FindFunctionChecked(NAME_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady),&Parms);
}
struct Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when target data is ready\n" },
#endif
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_RangedWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when target data is ready" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraGameplayAbility_RangedWeapon_eventOnRangedWeaponTargetDataReady_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon, nullptr, "OnRangedWeaponTargetDataReady", nullptr, nullptr, Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::PropPointers), sizeof(LyraGameplayAbility_RangedWeapon_eventOnRangedWeaponTargetDataReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraGameplayAbility_RangedWeapon_eventOnRangedWeaponTargetDataReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraGameplayAbility_RangedWeapon Function OnRangedWeaponTargetDataReady

// Begin Class ULyraGameplayAbility_RangedWeapon Function StartRangedWeaponTargeting
struct Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_RangedWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon, nullptr, "StartRangedWeaponTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraGameplayAbility_RangedWeapon::execStartRangedWeaponTargeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRangedWeaponTargeting();
	P_NATIVE_END;
}
// End Class ULyraGameplayAbility_RangedWeapon Function StartRangedWeaponTargeting

// Begin Class ULyraGameplayAbility_RangedWeapon
void ULyraGameplayAbility_RangedWeapon::StaticRegisterNativesULyraGameplayAbility_RangedWeapon()
{
	UClass* Class = ULyraGameplayAbility_RangedWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeaponInstance", &ULyraGameplayAbility_RangedWeapon::execGetWeaponInstance },
		{ "StartRangedWeaponTargeting", &ULyraGameplayAbility_RangedWeapon::execStartRangedWeaponTargeting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraGameplayAbility_RangedWeapon);
UClass* Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_NoRegister()
{
	return ULyraGameplayAbility_RangedWeapon::StaticClass();
}
struct Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraGameplayAbility_RangedWeapon\n *\n * An ability granted by and associated with a ranged weapon instance\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "Weapons/LyraGameplayAbility_RangedWeapon.h" },
		{ "ModuleRelativePath", "Weapons/LyraGameplayAbility_RangedWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraGameplayAbility_RangedWeapon\n\nAn ability granted by and associated with a ranged weapon instance" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_GetWeaponInstance, "GetWeaponInstance" }, // 553260993
		{ &Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_OnRangedWeaponTargetDataReady, "OnRangedWeaponTargetDataReady" }, // 513777091
		{ &Z_Construct_UFunction_ULyraGameplayAbility_RangedWeapon_StartRangedWeaponTargeting, "StartRangedWeaponTargeting" }, // 2328979196
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraGameplayAbility_RangedWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraGameplayAbility_FromEquipment,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics::ClassParams = {
	&ULyraGameplayAbility_RangedWeapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon()
{
	if (!Z_Registration_Info_UClass_ULyraGameplayAbility_RangedWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraGameplayAbility_RangedWeapon.OuterSingleton, Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraGameplayAbility_RangedWeapon.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraGameplayAbility_RangedWeapon>()
{
	return ULyraGameplayAbility_RangedWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraGameplayAbility_RangedWeapon);
ULyraGameplayAbility_RangedWeapon::~ULyraGameplayAbility_RangedWeapon() {}
// End Class ULyraGameplayAbility_RangedWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELyraAbilityTargetingSource_StaticEnum, TEXT("ELyraAbilityTargetingSource"), &Z_Registration_Info_UEnum_ELyraAbilityTargetingSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 941686663U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraGameplayAbility_RangedWeapon, ULyraGameplayAbility_RangedWeapon::StaticClass, TEXT("ULyraGameplayAbility_RangedWeapon"), &Z_Registration_Info_UClass_ULyraGameplayAbility_RangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraGameplayAbility_RangedWeapon), 41014388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_3845088971(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraGameplayAbility_RangedWeapon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
