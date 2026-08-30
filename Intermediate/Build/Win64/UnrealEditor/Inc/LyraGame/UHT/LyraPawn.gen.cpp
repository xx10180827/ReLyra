// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraPawn.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPawn() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPawn();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPawn_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister();
LYRAGAME_API UFunction* Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPawn();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraPawn Function OnControllerChangedTeam
struct Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics
{
	struct LyraPawn_eventOnControllerChangedTeam_Parms
	{
		UObject* TeamAgent;
		int32 OldTeam;
		int32 NewTeam;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamAgent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldTeam;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTeam;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::NewProp_TeamAgent = { "TeamAgent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawn_eventOnControllerChangedTeam_Parms, TeamAgent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::NewProp_OldTeam = { "OldTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawn_eventOnControllerChangedTeam_Parms, OldTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::NewProp_NewTeam = { "NewTeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawn_eventOnControllerChangedTeam_Parms, NewTeam), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::NewProp_TeamAgent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::NewProp_OldTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::NewProp_NewTeam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPawn, nullptr, "OnControllerChangedTeam", nullptr, nullptr, Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::LyraPawn_eventOnControllerChangedTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::LyraPawn_eventOnControllerChangedTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPawn::execOnControllerChangedTeam)
{
	P_GET_OBJECT(UObject,Z_Param_TeamAgent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OldTeam);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewTeam);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerChangedTeam(Z_Param_TeamAgent,Z_Param_OldTeam,Z_Param_NewTeam);
	P_NATIVE_END;
}
// End Class ALyraPawn Function OnControllerChangedTeam

// Begin Class ALyraPawn Function OnRep_MyTeamID
struct Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics
{
	struct LyraPawn_eventOnRep_MyTeamID_Parms
	{
		FGenericTeamId OldTeamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LyraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldTeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::NewProp_OldTeamID = { "OldTeamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraPawn_eventOnRep_MyTeamID_Parms, OldTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(0, nullptr) }; // 3379033268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::NewProp_OldTeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALyraPawn, nullptr, "OnRep_MyTeamID", nullptr, nullptr, Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::LyraPawn_eventOnRep_MyTeamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::LyraPawn_eventOnRep_MyTeamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALyraPawn::execOnRep_MyTeamID)
{
	P_GET_STRUCT(FGenericTeamId,Z_Param_OldTeamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MyTeamID(Z_Param_OldTeamID);
	P_NATIVE_END;
}
// End Class ALyraPawn Function OnRep_MyTeamID

// Begin Class ALyraPawn
void ALyraPawn::StaticRegisterNativesALyraPawn()
{
	UClass* Class = ALyraPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnControllerChangedTeam", &ALyraPawn::execOnControllerChangedTeam },
		{ "OnRep_MyTeamID", &ALyraPawn::execOnRep_MyTeamID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPawn);
UClass* Z_Construct_UClass_ALyraPawn_NoRegister()
{
	return ALyraPawn::StaticClass();
}
struct Z_Construct_UClass_ALyraPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraPawn\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LyraPawn.h" },
		{ "ModuleRelativePath", "Character/LyraPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraPawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyTeamID_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyTeamID;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamChangedDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALyraPawn_OnControllerChangedTeam, "OnControllerChangedTeam" }, // 3185344502
		{ &Z_Construct_UFunction_ALyraPawn_OnRep_MyTeamID, "OnRep_MyTeamID" }, // 1608443107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPawn_Statics::NewProp_MyTeamID = { "MyTeamID", "OnRep_MyTeamID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPawn, MyTeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyTeamID_MetaData), NewProp_MyTeamID_MetaData) }; // 3379033268
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALyraPawn_Statics::NewProp_OnTeamChangedDelegate = { "OnTeamChangedDelegate", nullptr, (EPropertyFlags)0x0040000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPawn, OnTeamChangedDelegate), Z_Construct_UDelegateFunction_LyraGame_OnLyraTeamIndexChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamChangedDelegate_MetaData), NewProp_OnTeamChangedDelegate_MetaData) }; // 1518443978
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPawn_Statics::NewProp_MyTeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPawn_Statics::NewProp_OnTeamChangedDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALyraPawn_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULyraTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ALyraPawn, ILyraTeamAgentInterface), false },  // 361203859
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPawn_Statics::ClassParams = {
	&ALyraPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALyraPawn_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPawn_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraPawn()
{
	if (!Z_Registration_Info_UClass_ALyraPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPawn.OuterSingleton, Z_Construct_UClass_ALyraPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraPawn.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraPawn>()
{
	return ALyraPawn::StaticClass();
}
void ALyraPawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MyTeamID(TEXT("MyTeamID"));
	const bool bIsValid = true
		&& Name_MyTeamID == ClassReps[(int32)ENetFields_Private::MyTeamID].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALyraPawn"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPawn);
ALyraPawn::~ALyraPawn() {}
// End Class ALyraPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPawn, ALyraPawn::StaticClass, TEXT("ALyraPawn"), &Z_Registration_Info_UClass_ALyraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPawn), 1723668163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_2452853419(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
