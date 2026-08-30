// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraGameEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraGameEngine_generated_h
#error "LyraGameEngine.generated.h already included, missing '#pragma once' in LyraGameEngine.h"
#endif
#define LYRAGAME_LyraGameEngine_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameEngine(); \
	friend struct Z_Construct_UClass_ULyraGameEngine_Statics; \
public: \
	DECLARE_CLASS(ULyraGameEngine, UGameEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameEngine)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameEngine(ULyraGameEngine&&); \
	ULyraGameEngine(const ULyraGameEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameEngine) \
	NO_API virtual ~ULyraGameEngine();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_13_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
