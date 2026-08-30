// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Character/LyraCharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCharacterMovementComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraCharacterMovementComponent_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterGroundInfo();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraCharacterGroundInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo;
class UScriptStruct* FLyraCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraCharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraCharacterGroundInfo>()
{
	return FLyraCharacterGroundInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FLyraCharacterGroundInfo\n *\n *\x09Information about the ground under the character.  It only gets updated as needed.\n */" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLyraCharacterGroundInfo\n\n    Information about the ground under the character.  It only gets updated as needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "LyraCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "LyraCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraCharacterGroundInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundHitResult_MetaData), NewProp_GroundHitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraCharacterGroundInfo, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewProp_GroundDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraCharacterGroundInfo",
	Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::PropPointers),
	sizeof(FLyraCharacterGroundInfo),
	alignof(FLyraCharacterGroundInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterGroundInfo()
{
	if (!Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo.InnerSingleton;
}
// End ScriptStruct FLyraCharacterGroundInfo

// Begin Class ULyraCharacterMovementComponent Function GetGroundInfo
struct Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics
{
	struct LyraCharacterMovementComponent_eventGetGroundInfo_Parms
	{
		FLyraCharacterGroundInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|CharacterMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current ground info.  Calling this will update the ground info if it's out of date.\n" },
#endif
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current ground info.  Calling this will update the ground info if it's out of date." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraCharacterMovementComponent_eventGetGroundInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLyraCharacterGroundInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1955041393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraCharacterMovementComponent, nullptr, "GetGroundInfo", nullptr, nullptr, Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::LyraCharacterMovementComponent_eventGetGroundInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::LyraCharacterMovementComponent_eventGetGroundInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraCharacterMovementComponent::execGetGroundInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLyraCharacterGroundInfo*)Z_Param__Result=P_THIS->GetGroundInfo();
	P_NATIVE_END;
}
// End Class ULyraCharacterMovementComponent Function GetGroundInfo

// Begin Class ULyraCharacterMovementComponent
void ULyraCharacterMovementComponent::StaticRegisterNativesULyraCharacterMovementComponent()
{
	UClass* Class = ULyraCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGroundInfo", &ULyraCharacterMovementComponent::execGetGroundInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCharacterMovementComponent);
UClass* Z_Construct_UClass_ULyraCharacterMovementComponent_NoRegister()
{
	return ULyraCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ULyraCharacterMovementComponent\n *\n *\x09The base character movement component class used by this project.\n */" },
#endif
		{ "IncludePath", "Character/LyraCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULyraCharacterMovementComponent\n\n    The base character movement component class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/LyraCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasReplicatedAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReplicatedAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraCharacterMovementComponent_GetGroundInfo, "GetGroundInfo" }, // 3443260485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit(void* Obj)
{
	((ULyraCharacterMovementComponent*)Obj)->bHasReplicatedAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration = { "bHasReplicatedAcceleration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraCharacterMovementComponent), &Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReplicatedAcceleration_MetaData), NewProp_bHasReplicatedAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::ClassParams = {
	&ULyraCharacterMovementComponent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_ULyraCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_ULyraCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraCharacterMovementComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraCharacterMovementComponent>()
{
	return ULyraCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCharacterMovementComponent);
ULyraCharacterMovementComponent::~ULyraCharacterMovementComponent() {}
// End Class ULyraCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics::NewStructOps, TEXT("LyraCharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_LyraCharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraCharacterGroundInfo), 1955041393U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCharacterMovementComponent, ULyraCharacterMovementComponent::StaticClass, TEXT("ULyraCharacterMovementComponent"), &Z_Registration_Info_UClass_ULyraCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCharacterMovementComponent), 3648382164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_3577989930(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
