// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/Subsystem/LyraUIMessaging.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUIMessaging() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog_NoRegister();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonMessagingSubsystem();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUIMessaging();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUIMessaging_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraUIMessaging
void ULyraUIMessaging::StaticRegisterNativesULyraUIMessaging()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUIMessaging);
UClass* Z_Construct_UClass_ULyraUIMessaging_NoRegister()
{
	return ULyraUIMessaging::StaticClass();
}
struct Z_Construct_UClass_ULyraUIMessaging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Subsystem/LyraUIMessaging.h" },
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationDialogClassPtr_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDialogClassPtr_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationDialogClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDialogClass_MetaData[] = {
		{ "ModuleRelativePath", "UI/Subsystem/LyraUIMessaging.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConfirmationDialogClassPtr;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ErrorDialogClassPtr;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ConfirmationDialogClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ErrorDialogClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUIMessaging>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr = { "ConfirmationDialogClassPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUIMessaging, ConfirmationDialogClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmationDialogClassPtr_MetaData), NewProp_ConfirmationDialogClassPtr_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr = { "ErrorDialogClassPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUIMessaging, ErrorDialogClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorDialogClassPtr_MetaData), NewProp_ErrorDialogClassPtr_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass = { "ConfirmationDialogClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUIMessaging, ConfirmationDialogClass), Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmationDialogClass_MetaData), NewProp_ConfirmationDialogClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass = { "ErrorDialogClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUIMessaging, ErrorDialogClass), Z_Construct_UClass_UCommonGameDialog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorDialogClass_MetaData), NewProp_ErrorDialogClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClassPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClassPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ConfirmationDialogClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUIMessaging_Statics::NewProp_ErrorDialogClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraUIMessaging_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonMessagingSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUIMessaging_Statics::ClassParams = {
	&ULyraUIMessaging::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUIMessaging_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraUIMessaging_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraUIMessaging()
{
	if (!Z_Registration_Info_UClass_ULyraUIMessaging.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUIMessaging.OuterSingleton, Z_Construct_UClass_ULyraUIMessaging_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraUIMessaging.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraUIMessaging>()
{
	return ULyraUIMessaging::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUIMessaging);
ULyraUIMessaging::~ULyraUIMessaging() {}
// End Class ULyraUIMessaging

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUIMessaging, ULyraUIMessaging::StaticClass, TEXT("ULyraUIMessaging"), &Z_Registration_Info_UClass_ULyraUIMessaging, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUIMessaging), 4114452427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_2866203306(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Subsystem_LyraUIMessaging_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
