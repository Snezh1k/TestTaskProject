// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTTASKPROJECT_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define TESTTASKPROJECT_Target_generated_h

#define TestTaskProject_Source_TestTaskProject_Target_h_12_SPARSE_DATA
#define TestTaskProject_Source_TestTaskProject_Target_h_12_RPC_WRAPPERS
#define TestTaskProject_Source_TestTaskProject_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestTaskProject_Source_TestTaskProject_Target_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define TestTaskProject_Source_TestTaskProject_Target_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestTaskProject"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define TestTaskProject_Source_TestTaskProject_Target_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define TestTaskProject_Source_TestTaskProject_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define TestTaskProject_Source_TestTaskProject_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ATarget, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__ImpactMaterial() { return STRUCT_OFFSET(ATarget, ImpactMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterial() { return STRUCT_OFFSET(ATarget, DefaultMaterial); }


#define TestTaskProject_Source_TestTaskProject_Target_h_9_PROLOG
#define TestTaskProject_Source_TestTaskProject_Target_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_Target_h_12_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_Target_h_12_RPC_WRAPPERS \
	TestTaskProject_Source_TestTaskProject_Target_h_12_INCLASS \
	TestTaskProject_Source_TestTaskProject_Target_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestTaskProject_Source_TestTaskProject_Target_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestTaskProject_Source_TestTaskProject_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	TestTaskProject_Source_TestTaskProject_Target_h_12_SPARSE_DATA \
	TestTaskProject_Source_TestTaskProject_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_Target_h_12_INCLASS_NO_PURE_DECLS \
	TestTaskProject_Source_TestTaskProject_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTTASKPROJECT_API UClass* StaticClass<class ATarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestTaskProject_Source_TestTaskProject_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
