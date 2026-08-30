// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Frontend/LyraFrontendStateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef LYRAGAME_LyraFrontendStateComponent_generated_h
#error "LyraFrontendStateComponent.generated.h already included, missing '#pragma once' in LyraFrontendStateComponent.h"
#endif
#define LYRAGAME_LyraFrontendStateComponent_generated_h

#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUserInitialized);


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraFrontendStateComponent(); \
	friend struct Z_Construct_UClass_ULyraFrontendStateComponent_Statics; \
public: \
	DECLARE_CLASS(ULyraFrontendStateComponent, UGameStateComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LyraGame"), NO_API) \
	DECLARE_SERIALIZER(ULyraFrontendStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULyraFrontendStateComponent*>(this); }


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULyraFrontendStateComponent(ULyraFrontendStateComponent&&); \
	ULyraFrontendStateComponent(const ULyraFrontendStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraFrontendStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraFrontendStateComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraFrontendStateComponent) \
	NO_API virtual ~ULyraFrontendStateComponent();


#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_23_PROLOG
#define FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LYRAGAME_API UClass* StaticClass<class ULyraFrontendStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_My_Project_LyraStarterGame_Source_LyraGame_UI_Frontend_LyraFrontendStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
