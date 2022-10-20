// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTaskProject/TestTaskProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTaskProjectGameMode() {}
// Cross Module References
	TESTTASKPROJECT_API UClass* Z_Construct_UClass_ATestTaskProjectGameMode_NoRegister();
	TESTTASKPROJECT_API UClass* Z_Construct_UClass_ATestTaskProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestTaskProject();
// End Cross Module References
	void ATestTaskProjectGameMode::StaticRegisterNativesATestTaskProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestTaskProjectGameMode_NoRegister()
	{
		return ATestTaskProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATestTaskProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTaskProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTaskProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTaskProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TestTaskProjectGameMode.h" },
		{ "ModuleRelativePath", "TestTaskProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTaskProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTaskProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestTaskProjectGameMode_Statics::ClassParams = {
		&ATestTaskProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestTaskProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestTaskProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestTaskProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestTaskProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestTaskProjectGameMode, 1319741687);
	template<> TESTTASKPROJECT_API UClass* StaticClass<ATestTaskProjectGameMode>()
	{
		return ATestTaskProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestTaskProjectGameMode(Z_Construct_UClass_ATestTaskProjectGameMode, &ATestTaskProjectGameMode::StaticClass, TEXT("/Script/TestTaskProject"), TEXT("ATestTaskProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTaskProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
