// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraGameSession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraGameSession_generated_h
#error "LyraGameSession.generated.h already included, missing '#pragma once' in LyraGameSession.h"
#endif
#define LYRAGAME_LyraGameSession_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraGameSession(); \
	friend struct Z_Construct_UClass_ALyraGameSession_Statics; \
public: \
	DECLARE_CLASS(ALyraGameSession, AGameSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraGameSession)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraGameSession(ALyraGameSession&&); \
	ALyraGameSession(const ALyraGameSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraGameSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraGameSession) \
	NO_API virtual ~ALyraGameSession();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_12_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraGameSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
