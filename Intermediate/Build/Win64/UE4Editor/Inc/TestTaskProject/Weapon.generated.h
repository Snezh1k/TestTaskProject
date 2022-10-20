// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTASKPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define TESTTASKPROJECT_Weapon_generated_h

#define TestTaskProject_Source_TestTaskProject_Weapon_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAmmoData_Statics; \
	TESTTASKPROJECT_API static class UScriptStruct* StaticStruct();


template<> TESTTASKPROJECT_API UScriptStruct* StaticStruct<struct FAmmoData>();

#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_SPARSE_DATA
#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_RPC_WRAPPERS
#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AWeapon, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TraceMaxDistance() { return STRUCT_OFFSET(AWeapon, TraceMaxDistance); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenShots() { return STRUCT_OFFSET(AWeapon, TimeBetweenShots); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(AWeapon, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__TimeToReload() { return STRUCT_OFFSET(AWeapon, TimeToReload); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlash() { return STRUCT_OFFSET(AWeapon, MuzzleFlash); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(AWeapon, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultAmmo() { return STRUCT_OFFSET(AWeapon, DefaultAmmo); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AWeapon, Damage); }


#define TestTaskProject_Source_TestTaskProject_Weapon_h_21_PROLOG
#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_RPC_WRAPPERS \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_INCLASS \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTaskProject_Source_TestTaskProject_Weapon_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_INCLASS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_Weapon_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASKPROJECT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTaskProject_Source_TestTaskProject_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
