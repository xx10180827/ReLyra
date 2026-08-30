// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Development/LyraBotCheats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraBotCheats_generated_h
#error "LyraBotCheats.generated.h already included, missing '#pragma once' in LyraBotCheats.h"
#endif
#define LYRAGAME_LyraBotCheats_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemovePlayerBot); \
	DECLARE_FUNCTION(execAddPlayerBot);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraBotCheats(); \
	friend struct Z_Construct_UClass_ULyraBotCheats_Statics; \
public: \
	DECLARE_CLASS(ULyraBotCheats, UCheatManagerExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraBotCheats)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraBotCheats(ULyraBotCheats&&); \
	ULyraBotCheats(const ULyraBotCheats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraBotCheats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraBotCheats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULyraBotCheats) \
	NO_API virtual ~ULyraBotCheats();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_14_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraBotCheats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Development_LyraBotCheats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
