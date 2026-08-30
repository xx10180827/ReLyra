// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cosmetics/LyraPawnComponent_CharacterParts.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULyraPawnComponent_CharacterParts;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FLyraCharacterPart;
struct FLyraCharacterPartHandle;
#ifdef LYRAGAME_LyraPawnComponent_CharacterParts_generated_h
#error "LyraPawnComponent_CharacterParts.generated.h already included, missing '#pragma once' in LyraPawnComponent_CharacterParts.h"
#endif
#define LYRAGAME_LyraPawnComponent_CharacterParts_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_25_DELEGATE \
LYRAGAME_API void FLyraSpawnedCharacterPartsChanged_DelegateWrapper(const FMulticastScriptDelegate& LyraSpawnedCharacterPartsChanged, ULyraPawnComponent_CharacterParts* ComponentWithChangedParts);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraAppliedCharacterPartEntry_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraAppliedCharacterPartEntry>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLyraCharacterPartList_Statics; \
	LYRAGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLyraCharacterPartList, Entries, LYRAGAME_API );


template<> LYRAGAME_API UScriptStruct* StaticStruct<struct FLyraCharacterPartList>();

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCombinedTags); \
	DECLARE_FUNCTION(execGetCharacterPartActors); \
	DECLARE_FUNCTION(execRemoveAllCharacterParts); \
	DECLARE_FUNCTION(execRemoveCharacterPart); \
	DECLARE_FUNCTION(execAddCharacterPart);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraPawnComponent_CharacterParts(); \
	friend struct Z_Construct_UClass_ULyraPawnComponent_CharacterParts_Statics; \
public: \
	DECLARE_CLASS(ULyraPawnComponent_CharacterParts, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraPawnComponent_CharacterParts) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterPartList=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterPartList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraPawnComponent_CharacterParts(ULyraPawnComponent_CharacterParts&&); \
	ULyraPawnComponent_CharacterParts(const ULyraPawnComponent_CharacterParts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraPawnComponent_CharacterParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraPawnComponent_CharacterParts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraPawnComponent_CharacterParts) \
	NO_API virtual ~ULyraPawnComponent_CharacterParts();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_122_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraPawnComponent_CharacterParts>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Cosmetics_LyraPawnComponent_CharacterParts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
