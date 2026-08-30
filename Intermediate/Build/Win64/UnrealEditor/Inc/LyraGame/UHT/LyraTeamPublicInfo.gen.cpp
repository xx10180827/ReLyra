// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/LyraTeamPublicInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamPublicInfo() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamInfoBase();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPublicInfo();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraTeamPublicInfo Function OnRep_TeamDisplayAsset
struct Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamPublicInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraTeamPublicInfo, nullptr, "OnRep_TeamDisplayAsset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraTeamPublicInfo::execOnRep_TeamDisplayAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamDisplayAsset();
	P_NATIVE_END;
}
// End Class ALyraTeamPublicInfo Function OnRep_TeamDisplayAsset

// Begin Class ALyraTeamPublicInfo
void ALyraTeamPublicInfo::StaticRegisterNativesALyraTeamPublicInfo()
{
	UClass* Class = ALyraTeamPublicInfo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_TeamDisplayAsset", &ALyraTeamPublicInfo::execOnRep_TeamDisplayAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraTeamPublicInfo);
UClass* Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister()
{
	return ALyraTeamPublicInfo::StaticClass();
}
struct Z_Construct_UClass_ALyraTeamPublicInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Teams/LyraTeamPublicInfo.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamPublicInfo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamDisplayAsset_MetaData[] = {
		{ "ModuleRelativePath", "Teams/LyraTeamPublicInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamDisplayAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraTeamPublicInfo_OnRep_TeamDisplayAsset, "OnRep_TeamDisplayAsset" }, // 3476173635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraTeamPublicInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraTeamPublicInfo_Statics::NewProp_TeamDisplayAsset = { "TeamDisplayAsset", "OnRep_TeamDisplayAsset", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraTeamPublicInfo, TeamDisplayAsset), Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamDisplayAsset_MetaData), NewProp_TeamDisplayAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraTeamPublicInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraTeamPublicInfo_Statics::NewProp_TeamDisplayAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamPublicInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraTeamPublicInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALyraTeamInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamPublicInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraTeamPublicInfo_Statics::ClassParams = {
	&ALyraTeamPublicInfo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraTeamPublicInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamPublicInfo_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraTeamPublicInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraTeamPublicInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraTeamPublicInfo()
{
	if (!Z_Registration_Info_UClass_ALyraTeamPublicInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraTeamPublicInfo.OuterSingleton, Z_Construct_UClass_ALyraTeamPublicInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraTeamPublicInfo.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraTeamPublicInfo>()
{
	return ALyraTeamPublicInfo::StaticClass();
}
void ALyraTeamPublicInfo::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TeamDisplayAsset(TEXT("TeamDisplayAsset"));
	const bool bIsValid = true
		&& Name_TeamDisplayAsset == ClassReps[(int32)ENetFields_Private::TeamDisplayAsset].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraTeamPublicInfo"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraTeamPublicInfo);
ALyraTeamPublicInfo::~ALyraTeamPublicInfo() {}
// End Class ALyraTeamPublicInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraTeamPublicInfo, ALyraTeamPublicInfo::StaticClass, TEXT("ALyraTeamPublicInfo"), &Z_Registration_Info_UClass_ALyraTeamPublicInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraTeamPublicInfo), 1770309866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_1895483249(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamPublicInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
