// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraPawnExtensionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULyraAbilitySystemComponent;
class ULyraPawnExtensionComponent;
#ifdef LYRAGAME_LyraPawnExtensionComponent_generated_h
#error "LyraPawnExtensionComponent.generated.h already included, missing '#pragma once' in LyraPawnExtensionComponent.h"
#endif
#define LYRAGAME_LyraPawnExtensionComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execGetLyraAbilitySystemComponent); \
	DECLARE_FUNCTION(execFindPawnExtensionComponent);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPawnExtensionComponent(); \
	friend struct Z_Construct_UClass_ULyraPawnExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraPawnExtensionComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPawnExtensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraPawnExtensionComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		NETFIELD_REP_END=PawnData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraPawnExtensionComponent(ULyraPawnExtensionComponent&&); \
	ULyraPawnExtensionComponent(const ULyraPawnExtensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPawnExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraPawnExtensionComponent) \
	NO_API virtual ~ULyraPawnExtensionComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_24_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPawnExtensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraPawnExtensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
