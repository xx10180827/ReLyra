// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraActorUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EBlueprintExposedNetMode : uint8;
#ifdef LYRAGAME_LyraActorUtilities_generated_h
#error "LyraActorUtilities.generated.h already included, missing '#pragma once' in LyraActorUtilities.h"
#endif
#define LYRAGAME_LyraActorUtilities_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchOnNetMode);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraActorUtilities(); \
	friend struct Z_Construct_UClass_ULyraActorUtilities_Statics; \
public: \
	DECLARE_CLASS(ULyraActorUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraActorUtilities)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraActorUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraActorUtilities(ULyraActorUtilities&&); \
	ULyraActorUtilities(const ULyraActorUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraActorUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraActorUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraActorUtilities) \
	NO_API virtual ~ULyraActorUtilities();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_32_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraActorUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraActorUtilities_h


#define FOREACH_ENUM_EBLUEPRINTEXPOSEDNETMODE(op) \
	op(EBlueprintExposedNetMode::Standalone) \
	op(EBlueprintExposedNetMode::DedicatedServer) \
	op(EBlueprintExposedNetMode::ListenServer) \
	op(EBlueprintExposedNetMode::Client) 

enum class EBlueprintExposedNetMode : uint8;
template<> struct TIsUEnumClass<EBlueprintExposedNetMode> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<EBlueprintExposedNetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
