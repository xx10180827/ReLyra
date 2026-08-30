// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/LyraExperienceManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraExperienceManagerComponent_generated_h
#error "LyraExperienceManagerComponent.generated.h already included, missing '#pragma once' in LyraExperienceManagerComponent.h"
#endif
#define LYRAGAME_LyraExperienceManagerComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentExperience);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraExperienceManagerComponent(); \
	friend struct Z_Construct_UClass_ULyraExperienceManagerComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraExperienceManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraExperienceManagerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraExperienceManagerComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentExperience=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentExperience	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraExperienceManagerComponent(ULyraExperienceManagerComponent&&); \
	ULyraExperienceManagerComponent(const ULyraExperienceManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraExperienceManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraExperienceManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraExperienceManagerComponent) \
	NO_API virtual ~ULyraExperienceManagerComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_27_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraExperienceManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_GameModes_LyraExperienceManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
