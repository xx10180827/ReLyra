// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/LyraAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraAnimInstance_generated_h
#error "LyraAnimInstance.generated.h already included, missing '#pragma once' in LyraAnimInstance.h"
#endif
#define LYRAGAME_LyraAnimInstance_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraAnimInstance(); \
	friend struct Z_Construct_UClass_ULyraAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULyraAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraAnimInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraAnimInstance(ULyraAnimInstance&&); \
	ULyraAnimInstance(const ULyraAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAnimInstance) \
	NO_API virtual ~ULyraAnimInstance();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_17_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Animation_LyraAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
