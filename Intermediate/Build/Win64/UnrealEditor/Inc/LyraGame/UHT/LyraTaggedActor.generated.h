// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/LyraTaggedActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraTaggedActor_generated_h
#error "LyraTaggedActor.generated.h already included, missing '#pragma once' in LyraTaggedActor.h"
#endif
#define LYRAGAME_LyraTaggedActor_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALyraTaggedActor(); \
	friend struct Z_Construct_UClass_ALyraTaggedActor_Statics; \
public: \
	DECLARE_CLASS(ALyraTaggedActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ALyraTaggedActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALyraTaggedActor*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALyraTaggedActor(ALyraTaggedActor&&); \
	ALyraTaggedActor(const ALyraTaggedActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALyraTaggedActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALyraTaggedActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALyraTaggedActor) \
	NO_API virtual ~ALyraTaggedActor();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_12_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ALyraTaggedActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_AbilitySystem_LyraTaggedActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
