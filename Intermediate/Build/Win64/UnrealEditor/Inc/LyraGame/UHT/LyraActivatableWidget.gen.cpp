// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/UI/LyraActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraActivatableWidget();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraActivatableWidget_NoRegister();
LYRAGAME_API UEnum* Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin Enum ELyraWidgetInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELyraWidgetInputMode;
static UEnum* ELyraWidgetInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELyraWidgetInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELyraWidgetInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("ELyraWidgetInputMode"));
	}
	return Z_Registration_Info_UEnum_ELyraWidgetInputMode.OuterSingleton;
}
template<> LYRAGAME_API UEnum* StaticEnum<ELyraWidgetInputMode>()
{
	return ELyraWidgetInputMode_StaticEnum();
}
struct Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ELyraWidgetInputMode::Default" },
		{ "Game.Name", "ELyraWidgetInputMode::Game" },
		{ "GameAndMenu.Name", "ELyraWidgetInputMode::GameAndMenu" },
		{ "Menu.Name", "ELyraWidgetInputMode::Menu" },
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELyraWidgetInputMode::Default", (int64)ELyraWidgetInputMode::Default },
		{ "ELyraWidgetInputMode::GameAndMenu", (int64)ELyraWidgetInputMode::GameAndMenu },
		{ "ELyraWidgetInputMode::Game", (int64)ELyraWidgetInputMode::Game },
		{ "ELyraWidgetInputMode::Menu", (int64)ELyraWidgetInputMode::Menu },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	"ELyraWidgetInputMode",
	"ELyraWidgetInputMode",
	Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode()
{
	if (!Z_Registration_Info_UEnum_ELyraWidgetInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELyraWidgetInputMode.InnerSingleton, Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELyraWidgetInputMode.InnerSingleton;
}
// End Enum ELyraWidgetInputMode

// Begin Class ULyraActivatableWidget
void ULyraActivatableWidget::StaticRegisterNativesULyraActivatableWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraActivatableWidget);
UClass* Z_Construct_UClass_ULyraActivatableWidget_NoRegister()
{
	return ULyraActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_ULyraActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An activatable widget that automatically drives the desired input config when activated\n" },
#endif
		{ "IncludePath", "UI/LyraActivatableWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An activatable widget that automatically drives the desired input config when activated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller? */" },
#endif
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMouseCaptureMode_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The desired mouse behavior when the game gets input. */" },
#endif
		{ "ModuleRelativePath", "UI/LyraActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired mouse behavior when the game gets input." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameMouseCaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameMouseCaptureMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraActivatableWidget, InputConfig), Z_Construct_UEnum_LyraGame_ELyraWidgetInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) }; // 429253751
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode = { "GameMouseCaptureMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraActivatableWidget, GameMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMouseCaptureMode_MetaData), NewProp_GameMouseCaptureMode_MetaData) }; // 2576598572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraActivatableWidget_Statics::NewProp_GameMouseCaptureMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraActivatableWidget_Statics::ClassParams = {
	&ULyraActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraActivatableWidget()
{
	if (!Z_Registration_Info_UClass_ULyraActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraActivatableWidget.OuterSingleton, Z_Construct_UClass_ULyraActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraActivatableWidget.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraActivatableWidget>()
{
	return ULyraActivatableWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraActivatableWidget);
ULyraActivatableWidget::~ULyraActivatableWidget() {}
// End Class ULyraActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELyraWidgetInputMode_StaticEnum, TEXT("ELyraWidgetInputMode"), &Z_Registration_Info_UEnum_ELyraWidgetInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 429253751U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraActivatableWidget, ULyraActivatableWidget::StaticClass, TEXT("ULyraActivatableWidget"), &Z_Registration_Info_UClass_ULyraActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraActivatableWidget), 3829828715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_3395867226(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_LyraActivatableWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
