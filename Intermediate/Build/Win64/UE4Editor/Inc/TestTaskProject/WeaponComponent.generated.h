// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTASKPROJECT_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define TESTTASKPROJECT_WeaponComponent_generated_h

#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_SPARSE_DATA
#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_RPC_WRAPPERS
#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public:


#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent)


#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(UWeaponComponent, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(UWeaponComponent, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachPointName() { return STRUCT_OFFSET(UWeaponComponent, WeaponAttachPointName); } \
	FORCEINLINE static uint32 __PPO__TimeToReload() { return STRUCT_OFFSET(UWeaponComponent, TimeToReload); }


#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_12_PROLOG
#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_RPC_WRAPPERS \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_INCLASS \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_WeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASKPROJECT_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTaskProject_Source_TestTaskProject_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
