// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/LyraTeamCheats.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamCheats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCheats();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCheats_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTeamCheats Function CycleTeam
struct Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Moves this player to the next available team, wrapping around to the\n// first team if at the end of the list of teams\n" },
#endif
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves this player to the next available team, wrapping around to the\nfirst team if at the end of the list of teams" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamCheats, nullptr, "CycleTeam", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraTeamCheats_CycleTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamCheats_CycleTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamCheats::execCycleTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CycleTeam();
	P_NATIVE_END;
}
// End Class ULyraTeamCheats Function CycleTeam

// Begin Class ULyraTeamCheats Function ListTeams
struct Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prints a list of all of the teams\n" },
#endif
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prints a list of all of the teams" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamCheats, nullptr, "ListTeams", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraTeamCheats_ListTeams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamCheats_ListTeams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamCheats::execListTeams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListTeams();
	P_NATIVE_END;
}
// End Class ULyraTeamCheats Function ListTeams

// Begin Class ULyraTeamCheats Function SetTeam
struct Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics
{
	struct LyraTeamCheats_eventSetTeam_Parms
	{
		int32 TeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Moves this player to the specified team\n" },
#endif
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves this player to the specified team" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraTeamCheats_eventSetTeam_Parms, TeamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraTeamCheats, nullptr, "SetTeam", nullptr, nullptr, Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::LyraTeamCheats_eventSetTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020604, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::LyraTeamCheats_eventSetTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraTeamCheats_SetTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraTeamCheats_SetTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraTeamCheats::execSetTeam)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeam(Z_Param_TeamID);
	P_NATIVE_END;
}
// End Class ULyraTeamCheats Function SetTeam

// Begin Class ULyraTeamCheats
void ULyraTeamCheats::StaticRegisterNativesULyraTeamCheats()
{
	UClass* Class = ULyraTeamCheats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CycleTeam", &ULyraTeamCheats::execCycleTeam },
		{ "ListTeams", &ULyraTeamCheats::execListTeams },
		{ "SetTeam", &ULyraTeamCheats::execSetTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamCheats);
UClass* Z_Construct_UClass_ULyraTeamCheats_NoRegister()
{
	return ULyraTeamCheats::StaticClass();
}
struct Z_Construct_UClass_ULyraTeamCheats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cheats related to teams */" },
#endif
		{ "IncludePath", "Teams/LyraTeamCheats.h" },
		{ "ModuleRelativePath", "Teams/LyraTeamCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cheats related to teams" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraTeamCheats_CycleTeam, "CycleTeam" }, // 4054398703
		{ &Z_Construct_UFunction_ULyraTeamCheats_ListTeams, "ListTeams" }, // 2746897867
		{ &Z_Construct_UFunction_ULyraTeamCheats_SetTeam, "SetTeam" }, // 1213663495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamCheats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraTeamCheats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCheats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamCheats_Statics::ClassParams = {
	&ULyraTeamCheats::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCheats_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTeamCheats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTeamCheats()
{
	if (!Z_Registration_Info_UClass_ULyraTeamCheats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamCheats.OuterSingleton, Z_Construct_UClass_ULyraTeamCheats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTeamCheats.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTeamCheats>()
{
	return ULyraTeamCheats::StaticClass();
}
ULyraTeamCheats::ULyraTeamCheats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamCheats);
ULyraTeamCheats::~ULyraTeamCheats() {}
// End Class ULyraTeamCheats

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamCheats, ULyraTeamCheats::StaticClass, TEXT("ULyraTeamCheats"), &Z_Registration_Info_UClass_ULyraTeamCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamCheats), 4258689395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_2043156129(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCheats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
