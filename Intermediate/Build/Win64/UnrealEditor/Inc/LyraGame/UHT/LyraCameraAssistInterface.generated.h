// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/LyraCameraAssistInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LYRAGAME_LyraCameraAssistInterface_generated_h
#error "LyraCameraAssistInterface.generated.h already included, missing '#pragma once' in LyraCameraAssistInterface.h"
#endif
#define LYRAGAME_LyraCameraAssistInterface_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraCameraAssistInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraCameraAssistInterface(ULyraCameraAssistInterface&&); \
	ULyraCameraAssistInterface(const ULyraCameraAssistInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraCameraAssistInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraCameraAssistInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraCameraAssistInterface) \
	NO_API virtual ~ULyraCameraAssistInterface();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULyraCameraAssistInterface(); \
	friend struct Z_Construct_UClass_ULyraCameraAssistInterface_Statics; \
public: \
	DECLARE_CLASS(ULyraCameraAssistInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraCameraAssistInterface)


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILyraCameraAssistInterface() {} \
public: \
	typedef ULyraCameraAssistInterface UClassType; \
	typedef ILyraCameraAssistInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_11_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraCameraAssistInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_Camera_LyraCameraAssistInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
