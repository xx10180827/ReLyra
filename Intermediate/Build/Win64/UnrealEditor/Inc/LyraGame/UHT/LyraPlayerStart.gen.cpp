// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Player/LyraPlayerStart.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraPlayerStart() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerStart();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerStart_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ALyraPlayerStart
void ALyraPlayerStart::StaticRegisterNativesALyraPlayerStart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALyraPlayerStart);
UClass* Z_Construct_UClass_ALyraPlayerStart_NoRegister()
{
	return ALyraPlayerStart::StaticClass();
}
struct Z_Construct_UClass_ALyraPlayerStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ALyraPlayerStart\n * \n * Base player starts that can be used by a lot of modes.\n */" },
#endif
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Player/LyraPlayerStart.h" },
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALyraPlayerStart\n\nBase player starts that can be used by a lot of modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaimingController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The controller that claimed this PlayerStart */" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The controller that claimed this PlayerStart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationCheckInterval_MetaData[] = {
		{ "Category", "Player Start Claiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interval in which we'll check if this player start is not colliding with anyone anymore */" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interval in which we'll check if this player start is not colliding with anyone anymore" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPointTags_MetaData[] = {
		{ "Category", "LyraPlayerStart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags to identify this player start */" },
#endif
		{ "ModuleRelativePath", "Player/LyraPlayerStart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags to identify this player start" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClaimingController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpirationCheckInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPointTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALyraPlayerStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController = { "ClaimingController", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerStart, ClaimingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaimingController_MetaData), NewProp_ClaimingController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval = { "ExpirationCheckInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerStart, ExpirationCheckInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationCheckInterval_MetaData), NewProp_ExpirationCheckInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags = { "StartPointTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALyraPlayerStart, StartPointTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPointTags_MetaData), NewProp_StartPointTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ClaimingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_ExpirationCheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALyraPlayerStart_Statics::NewProp_StartPointTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALyraPlayerStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALyraPlayerStart_Statics::ClassParams = {
	&ALyraPlayerStart::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALyraPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_ALyraPlayerStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALyraPlayerStart()
{
	if (!Z_Registration_Info_UClass_ALyraPlayerStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALyraPlayerStart.OuterSingleton, Z_Construct_UClass_ALyraPlayerStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALyraPlayerStart.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ALyraPlayerStart>()
{
	return ALyraPlayerStart::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALyraPlayerStart);
ALyraPlayerStart::~ALyraPlayerStart() {}
// End Class ALyraPlayerStart

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALyraPlayerStart, ALyraPlayerStart::StaticClass, TEXT("ALyraPlayerStart"), &Z_Registration_Info_UClass_ALyraPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALyraPlayerStart), 3994934270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_3884125371(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Player_LyraPlayerStart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
