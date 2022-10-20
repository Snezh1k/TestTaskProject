// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmmoData;
#ifdef TESTTASKPROJECT_PlayerHUDWidget_generated_h
#error "PlayerHUDWidget.generated.h already included, missing '#pragma once' in PlayerHUDWidget.h"
#endif
#define TESTTASKPROJECT_PlayerHUDWidget_generated_h

#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_SPARSE_DATA
#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReloadPercent); \
	DECLARE_FUNCTION(execGetWeaponAmmoData);


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReloadPercent); \
	DECLARE_FUNCTION(execGetWeaponAmmoData);


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUDWidget(UPlayerHUDWidget&&); \
	NO_API UPlayerHUDWidget(const UPlayerHUDWidget&); \
public:


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUDWidget(UPlayerHUDWidget&&); \
	NO_API UPlayerHUDWidget(const UPlayerHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUDWidget)


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_PRIVATE_PROPERTY_OFFSET
#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_14_PROLOG
#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_RPC_WRAPPERS \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_INCLASS \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_INCLASS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASKPROJECT_API UClass* StaticClass<class UPlayerHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTaskProject_Source_TestTaskProject_PlayerHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
