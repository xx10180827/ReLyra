// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Teams/LyraTeamCreationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraTeamCreationComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCreationComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamCreationComponent_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraTeamCreationComponent
void ULyraTeamCreationComponent::StaticRegisterNativesULyraTeamCreationComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraTeamCreationComponent);
UClass* Z_Construct_UClass_ULyraTeamCreationComponent_NoRegister()
{
	return ULyraTeamCreationComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraTeamCreationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Teams/LyraTeamCreationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamsToCreate_MetaData[] = {
		{ "Category", "Teams" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of teams to create (id to display asset mapping, the display asset can be left unset if desired)\n" },
#endif
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of teams to create (id to display asset mapping, the display asset can be left unset if desired)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublicTeamInfoClass_MetaData[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateTeamInfoClass_MetaData[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Teams/LyraTeamCreationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamsToCreate_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamsToCreate_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TeamsToCreate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PublicTeamInfoClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PrivateTeamInfoClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraTeamCreationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_ValueProp = { "TeamsToCreate", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULyraTeamDisplayAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_Key_KeyProp = { "TeamsToCreate_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate = { "TeamsToCreate", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamCreationComponent, TeamsToCreate), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamsToCreate_MetaData), NewProp_TeamsToCreate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass = { "PublicTeamInfoClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamCreationComponent, PublicTeamInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALyraTeamPublicInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublicTeamInfoClass_MetaData), NewProp_PublicTeamInfoClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass = { "PrivateTeamInfoClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraTeamCreationComponent, PrivateTeamInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALyraTeamPrivateInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateTeamInfoClass_MetaData), NewProp_PrivateTeamInfoClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_TeamsToCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PublicTeamInfoClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraTeamCreationComponent_Statics::NewProp_PrivateTeamInfoClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraTeamCreationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraTeamCreationComponent_Statics::ClassParams = {
	&ULyraTeamCreationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraTeamCreationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraTeamCreationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraTeamCreationComponent()
{
	if (!Z_Registration_Info_UClass_ULyraTeamCreationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraTeamCreationComponent.OuterSingleton, Z_Construct_UClass_ULyraTeamCreationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraTeamCreationComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraTeamCreationComponent>()
{
	return ULyraTeamCreationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraTeamCreationComponent);
ULyraTeamCreationComponent::~ULyraTeamCreationComponent() {}
// End Class ULyraTeamCreationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraTeamCreationComponent, ULyraTeamCreationComponent::StaticClass, TEXT("ULyraTeamCreationComponent"), &Z_Registration_Info_UClass_ULyraTeamCreationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraTeamCreationComponent), 3255109266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_3748714875(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Teams_LyraTeamCreationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
