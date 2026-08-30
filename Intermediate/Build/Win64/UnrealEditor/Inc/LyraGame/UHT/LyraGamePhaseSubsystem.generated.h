// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Phases/LyraGamePhaseSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraGamePhaseAbility;
enum class EPhaseTagMatchType : uint8;
struct FGameplayTag;
#ifdef LYRAGAME_LyraGamePhaseSubsystem_generated_h
#error "LyraGamePhaseSubsystem.generated.h already included, missing '#pragma once' in LyraGamePhaseSubsystem.h"
#endif
#define LYRAGAME_LyraGamePhaseSubsystem_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_18_DELEGATE \
LYRAGAME_API void FLyraGamePhaseDynamicDelegate_DelegateWrapper(const FScriptDelegate& LyraGamePhaseDynamicDelegate, const ULyraGamePhaseAbility* Phase);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_21_DELEGATE \
LYRAGAME_API void FLyraGamePhaseTagDynamicDelegate_DelegateWrapper(const FScriptDelegate& LyraGamePhaseTagDynamicDelegate, FGameplayTag const& PhaseTag);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_WhenPhaseEnds); \
	DECLARE_FUNCTION(execK2_WhenPhaseStartsOrIsActive); \
	DECLARE_FUNCTION(execK2_StartPhase); \
	DECLARE_FUNCTION(execIsPhaseActive);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGamePhaseSubsystem(); \
	friend struct Z_Construct_UClass_ULyraGamePhaseSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULyraGamePhaseSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGamePhaseSubsystem)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGamePhaseSubsystem(ULyraGamePhaseSubsystem&&); \
	ULyraGamePhaseSubsystem(const ULyraGamePhaseSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGamePhaseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGamePhaseSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraGamePhaseSubsystem) \
	NO_API virtual ~ULyraGamePhaseSubsystem();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_45_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGamePhaseSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Phases_LyraGamePhaseSubsystem_h


#define FOREACH_ENUM_EPHASETAGMATCHTYPE(op) \
	op(EPhaseTagMatchType::ExactMatch) \
	op(EPhaseTagMatchType::PartialMatch) 

enum class EPhaseTagMatchType : uint8;
template<> struct TIsUEnumClass<EPhaseTagMatchType> { enum { Value = true }; };
template<> LYRAGAME_API UEnum* StaticEnum<EPhaseTagMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
