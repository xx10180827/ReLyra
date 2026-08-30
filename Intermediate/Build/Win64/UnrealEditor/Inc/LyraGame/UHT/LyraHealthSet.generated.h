// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attributes/LyraHealthSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef LYRAGAME_LyraHealthSet_generated_h
#error "LyraHealthSet.generated.h already included, missing '#pragma once' in LyraHealthSet.h"
#endif
#define LYRAGAME_LyraHealthSet_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraHealthSet(); \
	friend struct Z_Construct_UClass_ULyraHealthSet_Statics; \
public: \
	DECLARE_CLASS(ULyraHealthSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraHealthSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(ULyraHealthSet) \
public:


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraHealthSet(ULyraHealthSet&&); \
	ULyraHealthSet(const ULyraHealthSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraHealthSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraHealthSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraHealthSet) \
	NO_API virtual ~ULyraHealthSet();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_29_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraHealthSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_Attributes_LyraHealthSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
