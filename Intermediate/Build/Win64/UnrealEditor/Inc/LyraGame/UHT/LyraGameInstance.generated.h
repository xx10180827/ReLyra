// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/LyraGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraGameInstance_generated_h
#error "LyraGameInstance.generated.h already included, missing '#pragma once' in LyraGameInstance.h"
#endif
#define LYRAGAME_LyraGameInstance_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraGameInstance(); \
	friend struct Z_Construct_UClass_ULyraGameInstance_Statics; \
public: \
	DECLARE_CLASS(ULyraGameInstance, UCommonGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraGameInstance)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraGameInstance(ULyraGameInstance&&); \
	ULyraGameInstance(const ULyraGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraGameInstance) \
	NO_API virtual ~ULyraGameInstance();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_12_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_System_LyraGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
