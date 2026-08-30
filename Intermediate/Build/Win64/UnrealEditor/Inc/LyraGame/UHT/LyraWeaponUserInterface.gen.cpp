// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Weapons/LyraWeaponUserInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraWeaponUserInterface() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponInstance_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponUserInterface();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraWeaponUserInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraWeaponUserInterface Function OnWeaponChanged
struct LyraWeaponUserInterface_eventOnWeaponChanged_Parms
{
	ULyraWeaponInstance* OldWeapon;
	ULyraWeaponInstance* NewWeapon;
};
static FName NAME_ULyraWeaponUserInterface_OnWeaponChanged = FName(TEXT("OnWeaponChanged"));
void ULyraWeaponUserInterface::OnWeaponChanged(ULyraWeaponInstance* OldWeapon, ULyraWeaponInstance* NewWeapon)
{
	LyraWeaponUserInterface_eventOnWeaponChanged_Parms Parms;
	Parms.OldWeapon=OldWeapon;
	Parms.NewWeapon=NewWeapon;
	ProcessEvent(FindFunctionChecked(NAME_ULyraWeaponUserInterface_OnWeaponChanged),&Parms);
}
struct Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraWeaponUserInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponUserInterface_eventOnWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraWeaponUserInterface_eventOnWeaponChanged_Parms, NewWeapon), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraWeaponUserInterface, nullptr, "OnWeaponChanged", nullptr, nullptr, Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::PropPointers), sizeof(LyraWeaponUserInterface_eventOnWeaponChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(LyraWeaponUserInterface_eventOnWeaponChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULyraWeaponUserInterface Function OnWeaponChanged

// Begin Class ULyraWeaponUserInterface
void ULyraWeaponUserInterface::StaticRegisterNativesULyraWeaponUserInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraWeaponUserInterface);
UClass* Z_Construct_UClass_ULyraWeaponUserInterface_NoRegister()
{
	return ULyraWeaponUserInterface::StaticClass();
}
struct Z_Construct_UClass_ULyraWeaponUserInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/LyraWeaponUserInterface.h" },
		{ "ModuleRelativePath", "UI/Weapons/LyraWeaponUserInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[] = {
		{ "ModuleRelativePath", "UI/Weapons/LyraWeaponUserInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraWeaponUserInterface_OnWeaponChanged, "OnWeaponChanged" }, // 350170919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraWeaponUserInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraWeaponUserInterface, CurrentInstance), Z_Construct_UClass_ULyraWeaponInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstance_MetaData), NewProp_CurrentInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraWeaponUserInterface_Statics::NewProp_CurrentInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraWeaponUserInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraWeaponUserInterface_Statics::ClassParams = {
	&ULyraWeaponUserInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraWeaponUserInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraWeaponUserInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraWeaponUserInterface()
{
	if (!Z_Registration_Info_UClass_ULyraWeaponUserInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraWeaponUserInterface.OuterSingleton, Z_Construct_UClass_ULyraWeaponUserInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraWeaponUserInterface.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraWeaponUserInterface>()
{
	return ULyraWeaponUserInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraWeaponUserInterface);
ULyraWeaponUserInterface::~ULyraWeaponUserInterface() {}
// End Class ULyraWeaponUserInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraWeaponUserInterface, ULyraWeaponUserInterface::StaticClass, TEXT("ULyraWeaponUserInterface"), &Z_Registration_Info_UClass_ULyraWeaponUserInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraWeaponUserInterface), 3321546352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_3266589373(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Weapons_LyraWeaponUserInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
