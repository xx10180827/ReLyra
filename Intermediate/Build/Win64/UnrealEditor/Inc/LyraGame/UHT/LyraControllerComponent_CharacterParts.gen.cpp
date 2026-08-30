// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LyraGame/Cosmetics/LyraControllerComponent_CharacterParts.h"
#include "LyraGame/Cosmetics/LyraCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraControllerComponent_CharacterParts() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraControllerComponent_CharacterParts();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraControllerComponent_CharacterParts_NoRegister();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraCharacterPart();
LYRAGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
UPackage* Z_Construct_UPackage__Script_LyraGame();
// End Cross Module References

// Begin ScriptStruct FLyraControllerCharacterPartEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry;
class UScriptStruct* FLyraControllerCharacterPartEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry, (UObject*)Z_Construct_UPackage__Script_LyraGame(), TEXT("LyraControllerCharacterPartEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry.OuterSingleton;
}
template<> LYRAGAME_API UScriptStruct* StaticStruct<FLyraControllerCharacterPartEntry>()
{
	return FLyraControllerCharacterPartEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A character part requested on a controller component\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A character part requested on a controller component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Part_MetaData[] = {
		{ "Category", "LyraControllerCharacterPartEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The character part being represented\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The character part being represented" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Part;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraControllerCharacterPartEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraControllerCharacterPartEntry, Part), Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Part_MetaData), NewProp_Part_MetaData) }; // 2027995414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::NewProp_Part,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
	nullptr,
	&NewStructOps,
	"LyraControllerCharacterPartEntry",
	Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::PropPointers),
	sizeof(FLyraControllerCharacterPartEntry),
	alignof(FLyraControllerCharacterPartEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry.InnerSingleton, Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry.InnerSingleton;
}
// End ScriptStruct FLyraControllerCharacterPartEntry

// Begin Class ULyraControllerComponent_CharacterParts Function AddCharacterPart
struct Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics
{
	struct LyraControllerComponent_CharacterParts_eventAddCharacterPart_Parms
	{
		FLyraCharacterPart NewPart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a character part to the actor that owns this customization component, should be called on the authority only\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a character part to the actor that owns this customization component, should be called on the authority only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart = { "NewPart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraControllerComponent_CharacterParts_eventAddCharacterPart_Parms, NewPart), Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPart_MetaData), NewProp_NewPart_MetaData) }; // 2027995414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraControllerComponent_CharacterParts, nullptr, "AddCharacterPart", nullptr, nullptr, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::LyraControllerComponent_CharacterParts_eventAddCharacterPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::LyraControllerComponent_CharacterParts_eventAddCharacterPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraControllerComponent_CharacterParts::execAddCharacterPart)
{
	P_GET_STRUCT_REF(FLyraCharacterPart,Z_Param_Out_NewPart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharacterPart(Z_Param_Out_NewPart);
	P_NATIVE_END;
}
// End Class ULyraControllerComponent_CharacterParts Function AddCharacterPart

// Begin Class ULyraControllerComponent_CharacterParts Function OnPossessedPawnChanged
struct Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics
{
	struct LyraControllerComponent_CharacterParts_eventOnPossessedPawnChanged_Parms
	{
		APawn* OldPawn;
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraControllerComponent_CharacterParts_eventOnPossessedPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraControllerComponent_CharacterParts_eventOnPossessedPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraControllerComponent_CharacterParts, nullptr, "OnPossessedPawnChanged", nullptr, nullptr, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::LyraControllerComponent_CharacterParts_eventOnPossessedPawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::LyraControllerComponent_CharacterParts_eventOnPossessedPawnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraControllerComponent_CharacterParts::execOnPossessedPawnChanged)
{
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPossessedPawnChanged(Z_Param_OldPawn,Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class ULyraControllerComponent_CharacterParts Function OnPossessedPawnChanged

// Begin Class ULyraControllerComponent_CharacterParts Function RemoveAllCharacterParts
struct Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes all added character parts, should be called on the authority only\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all added character parts, should be called on the authority only" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraControllerComponent_CharacterParts, nullptr, "RemoveAllCharacterParts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraControllerComponent_CharacterParts::execRemoveAllCharacterParts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllCharacterParts();
	P_NATIVE_END;
}
// End Class ULyraControllerComponent_CharacterParts Function RemoveAllCharacterParts

// Begin Class ULyraControllerComponent_CharacterParts Function RemoveCharacterPart
struct Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics
{
	struct LyraControllerComponent_CharacterParts_eventRemoveCharacterPart_Parms
	{
		FLyraCharacterPart PartToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes a previously added character part from the actor that owns this customization component, should be called on the authority only\n" },
#endif
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a previously added character part from the actor that owns this customization component, should be called on the authority only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::NewProp_PartToRemove = { "PartToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LyraControllerComponent_CharacterParts_eventRemoveCharacterPart_Parms, PartToRemove), Z_Construct_UScriptStruct_FLyraCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartToRemove_MetaData), NewProp_PartToRemove_MetaData) }; // 2027995414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::NewProp_PartToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraControllerComponent_CharacterParts, nullptr, "RemoveCharacterPart", nullptr, nullptr, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::LyraControllerComponent_CharacterParts_eventRemoveCharacterPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::LyraControllerComponent_CharacterParts_eventRemoveCharacterPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULyraControllerComponent_CharacterParts::execRemoveCharacterPart)
{
	P_GET_STRUCT_REF(FLyraCharacterPart,Z_Param_Out_PartToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCharacterPart(Z_Param_Out_PartToRemove);
	P_NATIVE_END;
}
// End Class ULyraControllerComponent_CharacterParts Function RemoveCharacterPart

// Begin Class ULyraControllerComponent_CharacterParts
void ULyraControllerComponent_CharacterParts::StaticRegisterNativesULyraControllerComponent_CharacterParts()
{
	UClass* Class = ULyraControllerComponent_CharacterParts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacterPart", &ULyraControllerComponent_CharacterParts::execAddCharacterPart },
		{ "OnPossessedPawnChanged", &ULyraControllerComponent_CharacterParts::execOnPossessedPawnChanged },
		{ "RemoveAllCharacterParts", &ULyraControllerComponent_CharacterParts::execRemoveAllCharacterParts },
		{ "RemoveCharacterPart", &ULyraControllerComponent_CharacterParts::execRemoveCharacterPart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraControllerComponent_CharacterParts);
UClass* Z_Construct_UClass_ULyraControllerComponent_CharacterParts_NoRegister()
{
	return ULyraControllerComponent_CharacterParts::StaticClass();
}
struct Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A component that configure what cosmetic actors to spawn for the owning controller when it possesses a pawn\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component that configure what cosmetic actors to spawn for the owning controller when it possesses a pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterParts_MetaData[] = {
		{ "Category", "Cosmetics" },
		{ "ModuleRelativePath", "Cosmetics/LyraControllerComponent_CharacterParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterParts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_AddCharacterPart, "AddCharacterPart" }, // 2651924071
		{ &Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_OnPossessedPawnChanged, "OnPossessedPawnChanged" }, // 2452039108
		{ &Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveAllCharacterParts, "RemoveAllCharacterParts" }, // 2269004447
		{ &Z_Construct_UFunction_ULyraControllerComponent_CharacterParts_RemoveCharacterPart, "RemoveCharacterPart" }, // 2814330132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraControllerComponent_CharacterParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::NewProp_CharacterParts_Inner = { "CharacterParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry, METADATA_PARAMS(0, nullptr) }; // 3833958016
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::NewProp_CharacterParts = { "CharacterParts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULyraControllerComponent_CharacterParts, CharacterParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterParts_MetaData), NewProp_CharacterParts_MetaData) }; // 3833958016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::NewProp_CharacterParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::NewProp_CharacterParts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LyraGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::ClassParams = {
	&ULyraControllerComponent_CharacterParts::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::Class_MetaDataParams), Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULyraControllerComponent_CharacterParts()
{
	if (!Z_Registration_Info_UClass_ULyraControllerComponent_CharacterParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraControllerComponent_CharacterParts.OuterSingleton, Z_Construct_UClass_ULyraControllerComponent_CharacterParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULyraControllerComponent_CharacterParts.OuterSingleton;
}
template<> LYRAGAME_API UClass* StaticClass<ULyraControllerComponent_CharacterParts>()
{
	return ULyraControllerComponent_CharacterParts::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraControllerComponent_CharacterParts);
ULyraControllerComponent_CharacterParts::~ULyraControllerComponent_CharacterParts() {}
// End Class ULyraControllerComponent_CharacterParts

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraControllerCharacterPartEntry::StaticStruct, Z_Construct_UScriptStruct_FLyraControllerCharacterPartEntry_Statics::NewStructOps, TEXT("LyraControllerCharacterPartEntry"), &Z_Registration_Info_UScriptStruct_LyraControllerCharacterPartEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraControllerCharacterPartEntry), 3833958016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULyraControllerComponent_CharacterParts, ULyraControllerComponent_CharacterParts::StaticClass, TEXT("ULyraControllerComponent_CharacterParts"), &Z_Registration_Info_UClass_ULyraControllerComponent_CharacterParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraControllerComponent_CharacterParts), 4235688293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_2793586341(TEXT("/Script/LyraGame"),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraControllerComponent_CharacterParts_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
