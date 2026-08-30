// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/LyraCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLyraCharacterGroundInfo;
#ifdef LYRAGAME_LyraCharacterMovementComponent_generated_h
#error "LyraCharacterMovementComponent.generated.h already included, missing '#pragma once' in LyraCharacterMovementComponent.h"
#endif
#define LYRAGAME_LyraCharacterMovementComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraCharacterGroundInfo_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct();


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraCharacterGroundInfo>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGroundInfo);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_ULyraCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCharacterMovementComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCharacterMovementComponent(ULyraCharacterMovementComponent&&); \
	ULyraCharacterMovementComponent(const ULyraCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraCharacterMovementComponent) \
	NO_API virtual ~ULyraCharacterMovementComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_45_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Character_LyraCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
