// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Weapons/LyraDamageLogDebuggerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraDamageLogDebuggerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamageLogDebuggerComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraDamageLogDebuggerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraDamageLogDebuggerComponent
void ULyraDamageLogDebuggerComponent::StaticRegisterNativesULyraDamageLogDebuggerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraDamageLogDebuggerComponent);
UClass* Z_Construct_UClass_ULyraDamageLogDebuggerComponent_NoRegister()
{
	return ULyraDamageLogDebuggerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/LyraDamageLogDebuggerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/LyraDamageLogDebuggerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsBetweenDamageBeforeLogging_MetaData[] = {
		{ "Category", "LyraDamageLogDebuggerComponent" },
		{ "ModuleRelativePath", "Weapons/LyraDamageLogDebuggerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SecondsBetweenDamageBeforeLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraDamageLogDebuggerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::NewProp_SecondsBetweenDamageBeforeLogging = { "SecondsBetweenDamageBeforeLogging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraDamageLogDebuggerComponent, SecondsBetweenDamageBeforeLogging), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsBetweenDamageBeforeLogging_MetaData), NewProp_SecondsBetweenDamageBeforeLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::NewProp_SecondsBetweenDamageBeforeLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::ClassParams = {
	&ULyraDamageLogDebuggerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraDamageLogDebuggerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraDamageLogDebuggerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraDamageLogDebuggerComponent.OuterSingleton, Z_Construct_UClass_ULyraDamageLogDebuggerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraDamageLogDebuggerComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraDamageLogDebuggerComponent>()
{
	return ULyraDamageLogDebuggerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraDamageLogDebuggerComponent);
ULyraDamageLogDebuggerComponent::~ULyraDamageLogDebuggerComponent() {}
// End Class ULyraDamageLogDebuggerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraDamageLogDebuggerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraDamageLogDebuggerComponent, ULyraDamageLogDebuggerComponent::StaticClass, TEXT("ULyraDamageLogDebuggerComponent"), &Z_Registration_Info_UClass_ULyraDamageLogDebuggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraDamageLogDebuggerComponent), 640374043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraDamageLogDebuggerComponent_h_1306523471(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraDamageLogDebuggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Weapons_LyraDamageLogDebuggerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
