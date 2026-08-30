// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Camera/LyraUICameraManagerComponent.h"
#include "LyraGame/Camera/LyraPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraUICameraManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUICameraManagerComponent();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraUICameraManagerComponent
void ULyraUICameraManagerComponent::StaticRegisterNativesULyraUICameraManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraUICameraManagerComponent);
UClass* Z_Construct_UClass_ULyraUICameraManagerComponent_NoRegister()
{
	return ULyraUICameraManagerComponent::StaticClass();
}
struct Z_Construct_UClass_ULyraUICameraManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/LyraUICameraManagerComponent.h" },
		{ "ModuleRelativePath", "Camera/LyraUICameraManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraUICameraManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatingViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/LyraUICameraManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static void NewProp_bUpdatingViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatingViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraUICameraManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraUICameraManagerComponent, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTarget_MetaData), NewProp_ViewTarget_MetaData) };
void Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit(void* Obj)
{
	((ULyraUICameraManagerComponent*)Obj)->bUpdatingViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget = { "bUpdatingViewTarget", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULyraUICameraManagerComponent), &Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatingViewTarget_MetaData), NewProp_bUpdatingViewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_ViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::ClassParams = {
	&ULyraUICameraManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::PropPointers),
	0,
	0x00A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraUICameraManagerComponent()
{
	if (!Z_Registration_Info_UClass_ULyraUICameraManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraUICameraManagerComponent.OuterSingleton, Z_Construct_UClass_ULyraUICameraManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraUICameraManagerComponent.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraUICameraManagerComponent>()
{
	return ULyraUICameraManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraUICameraManagerComponent);
ULyraUICameraManagerComponent::~ULyraUICameraManagerComponent() {}
// End Class ULyraUICameraManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraUICameraManagerComponent, ULyraUICameraManagerComponent::StaticClass, TEXT("ULyraUICameraManagerComponent"), &Z_Registration_Info_UClass_ULyraUICameraManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraUICameraManagerComponent), 4140123009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_1420536436(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraUICameraManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
