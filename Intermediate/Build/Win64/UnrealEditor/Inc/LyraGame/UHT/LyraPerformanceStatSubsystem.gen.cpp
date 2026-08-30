// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Performance/LyraPerformanceStatSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPerformanceStatSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerformanceStatSubsystem();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPerformanceStatSubsystem_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraPerformanceStatSubsystem Function GetCachedStat
struct Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics
{
	struct LyraPerformanceStatSubsystem_eventGetCachedStat_Parms
	{
		ELyraDisplayablePerformanceStat Stat;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Performance/LyraPerformanceStatSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPerformanceStatSubsystem_eventGetCachedStat_Parms, Stat), Z_Construct_UEnum_LyraGame_ELyraDisplayablePerformanceStat, METADATA_PARAMS(0, nullptr) }; // 3286822108
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPerformanceStatSubsystem_eventGetCachedStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::NewProp_Stat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraPerformanceStatSubsystem, nullptr, "GetCachedStat", nullptr, nullptr, Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::LyraPerformanceStatSubsystem_eventGetCachedStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::LyraPerformanceStatSubsystem_eventGetCachedStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraPerformanceStatSubsystem::execGetCachedStat)
{
	P_GET_ENUM(ELyraDisplayablePerformanceStat,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetCachedStat(ELyraDisplayablePerformanceStat(Z_Param_Stat));
	P_NATIVE_END;
}
// End Class ULyraPerformanceStatSubsystem Function GetCachedStat

// Begin Class ULyraPerformanceStatSubsystem
void ULyraPerformanceStatSubsystem::StaticRegisterNativesULyraPerformanceStatSubsystem()
{
	UClass* Class = ULyraPerformanceStatSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCachedStat", &ULyraPerformanceStatSubsystem::execGetCachedStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraPerformanceStatSubsystem);
UClass* Z_Construct_UClass_ULyraPerformanceStatSubsystem_NoRegister()
{
	return ULyraPerformanceStatSubsystem::StaticClass();
}
struct Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Subsystem to allow access to performance stats for display purposes\n" },
#endif
		{ "IncludePath", "Performance/LyraPerformanceStatSubsystem.h" },
		{ "ModuleRelativePath", "Performance/LyraPerformanceStatSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem to allow access to performance stats for display purposes" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraPerformanceStatSubsystem_GetCachedStat, "GetCachedStat" }, // 2755960125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraPerformanceStatSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics::ClassParams = {
	&ULyraPerformanceStatSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraPerformanceStatSubsystem()
{
	if (!Z_Registration_Info_UClass_ULyraPerformanceStatSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraPerformanceStatSubsystem.OuterSingleton, Z_Construct_UClass_ULyraPerformanceStatSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraPerformanceStatSubsystem.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraPerformanceStatSubsystem>()
{
	return ULyraPerformanceStatSubsystem::StaticClass();
}
ULyraPerformanceStatSubsystem::ULyraPerformanceStatSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraPerformanceStatSubsystem);
ULyraPerformanceStatSubsystem::~ULyraPerformanceStatSubsystem() {}
// End Class ULyraPerformanceStatSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraPerformanceStatSubsystem, ULyraPerformanceStatSubsystem::StaticClass, TEXT("ULyraPerformanceStatSubsystem"), &Z_Registration_Info_UClass_ULyraPerformanceStatSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraPerformanceStatSubsystem), 38366342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_67258682(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Performance_LyraPerformanceStatSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
