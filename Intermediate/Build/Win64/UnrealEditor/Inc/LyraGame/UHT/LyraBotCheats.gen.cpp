// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Development/LyraBotCheats.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraBotCheats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCheats();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraBotCheats_NoRegister();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Class ULyraBotCheats Function AddPlayerBot
struct Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a bot player\n" },
#endif
		{ "ModuleRelativePath", "Development/LyraBotCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a bot player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCheats, nullptr, "AddPlayerBot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBotCheats::execAddPlayerBot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerBot();
	P_NATIVE_END;
}
// End Class ULyraBotCheats Function AddPlayerBot

// Begin Class ULyraBotCheats Function RemovePlayerBot
struct Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes a random bot player\n" },
#endif
		{ "ModuleRelativePath", "Development/LyraBotCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a random bot player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraBotCheats, nullptr, "RemovePlayerBot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020605, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraBotCheats::execRemovePlayerBot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayerBot();
	P_NATIVE_END;
}
// End Class ULyraBotCheats Function RemovePlayerBot

// Begin Class ULyraBotCheats
void ULyraBotCheats::StaticRegisterNativesULyraBotCheats()
{
	UClass* Class = ULyraBotCheats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayerBot", &ULyraBotCheats::execAddPlayerBot },
		{ "RemovePlayerBot", &ULyraBotCheats::execRemovePlayerBot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraBotCheats);
UClass* Z_Construct_UClass_ULyraBotCheats_NoRegister()
{
	return ULyraBotCheats::StaticClass();
}
struct Z_Construct_UClass_ULyraBotCheats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cheats related to bots */" },
#endif
		{ "IncludePath", "Development/LyraBotCheats.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Development/LyraBotCheats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cheats related to bots" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraBotCheats_AddPlayerBot, "AddPlayerBot" }, // 3734653617
		{ &Z_Construct_UFunction_ULyraBotCheats_RemovePlayerBot, "RemovePlayerBot" }, // 397959546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraBotCheats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULyraBotCheats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCheatManagerExtension,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCheats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraBotCheats_Statics::ClassParams = {
	&ULyraBotCheats::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraBotCheats_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraBotCheats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraBotCheats()
{
	if (!Z_Registration_Info_UClass_ULyraBotCheats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraBotCheats.OuterSingleton, Z_Construct_UClass_ULyraBotCheats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraBotCheats.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraBotCheats>()
{
	return ULyraBotCheats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraBotCheats);
ULyraBotCheats::~ULyraBotCheats() {}
// End Class ULyraBotCheats

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraBotCheats, ULyraBotCheats::StaticClass, TEXT("ULyraBotCheats"), &Z_Registration_Info_UClass_ULyraBotCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraBotCheats), 4073402433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_540700765(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
