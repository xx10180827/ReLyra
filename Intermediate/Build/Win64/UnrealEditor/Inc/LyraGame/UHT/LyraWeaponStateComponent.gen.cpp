// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraWeaponStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponStateComponent() {}

// Begin Cross Module References
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponStateComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponStateComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraWeaponStateComponent Function ClientConfirmTargetData
struct LyraWeaponStateComponent_eventClientConfirmTargetData_Parms
{
	uint16 UniqueId;
	bool bSuccess;
	TArray<uint8> HitReplaces;
};
static FName NAME_ULyraWeaponStateComponent_ClientConfirmTargetData = FName(TEXT("ClientConfirmTargetData"));
void ULyraWeaponStateComponent::ClientConfirmTargetData(uint16 UniqueId, bool bSuccess, TArray<uint8> const& HitReplaces)
{
	LyraWeaponStateComponent_eventClientConfirmTargetData_Parms Parms;
	Parms.UniqueId=UniqueId;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.HitReplaces=HitReplaces;
	ProcessEvent(FindFunctionChecked(NAME_ULyraWeaponStateComponent_ClientConfirmTargetData),&Parms);
}
struct Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/LyraWeaponStateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReplaces_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_UniqueId;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HitReplaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitReplaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms, UniqueId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((LyraWeaponStateComponent_eventClientConfirmTargetData_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms), &Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_Inner = { "HitReplaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces = { "HitReplaces", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms, HitReplaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReplaces_MetaData), NewProp_HitReplaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::NewProp_HitReplaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponStateComponent, nullptr, "ClientConfirmTargetData", nullptr, nullptr, Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::PropPointers), sizeof(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraWeaponStateComponent_eventClientConfirmTargetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraWeaponStateComponent::execClientConfirmTargetData)
{
	P_GET_PROPERTY(FUInt16Property,Z_Param_UniqueId);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_TARRAY(uint8,Z_Param_HitReplaces);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientConfirmTargetData_Implementation(Z_Param_UniqueId,Z_Param_bSuccess,Z_Param_HitReplaces);
	P_NATIVE_END;
}
// End Class ULyraWeaponStateComponent Function ClientConfirmTargetData

// Begin Class ULyraWeaponStateComponent
void ULyraWeaponStateComponent::StaticRegisterNativesULyraWeaponStateComponent()
{
	UClass* Class = ULyraWeaponStateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientConfirmTargetData", &ULyraWeaponStateComponent::execClientConfirmTargetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponStateComponent);
UClass* Z_Construct_UClass_ULyraWeaponStateComponent_NoRegister()
{
	return ULyraWeaponStateComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraWeaponStateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tracks weapon state and recent confirmed hit markers to display on screen\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Weapons/LyraWeaponStateComponent.h" },
		{ "ModuleRelativePath", "Weapons/LyraWeaponStateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracks weapon state and recent confirmed hit markers to display on screen" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWeaponStateComponent_ClientConfirmTargetData, "ClientConfirmTargetData" }, // 3615133866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponStateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraWeaponStateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponStateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponStateComponent_Statics::ClassParams = {
	&ULyraWeaponStateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponStateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWeaponStateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWeaponStateComponent()
{
	if (!Z_Registration_Info_UClass_ULyraWeaponStateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponStateComponent.OuterSingleton, Z_Construct_UClass_ULyraWeaponStateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWeaponStateComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponStateComponent>()
{
	return ULyraWeaponStateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponStateComponent);
ULyraWeaponStateComponent::~ULyraWeaponStateComponent() {}
// End Class ULyraWeaponStateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponStateComponent, ULyraWeaponStateComponent::StaticClass, TEXT("ULyraWeaponStateComponent"), &Z_Registration_Info_UClass_ULyraWeaponStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponStateComponent), 2417141837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_2183981549(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraWeaponStateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
