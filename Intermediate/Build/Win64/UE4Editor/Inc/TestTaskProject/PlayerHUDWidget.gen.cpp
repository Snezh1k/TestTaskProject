// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTaskProject/PlayerHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}
// Cross Module References
	TESTTASKPROJECT_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	TESTTASKPROJECT_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TestTaskProject();
	TESTTASKPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHUDWidget::execGetReloadPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReloadPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUDWidget::execGetWeaponAmmoData)
	{
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_AmmoData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponAmmoData(Z_Param_Out_AmmoData);
		P_NATIVE_END;
	}
	void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
	{
		UClass* Class = UPlayerHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReloadPercent", &UPlayerHUDWidget::execGetReloadPercent },
			{ "GetWeaponAmmoData", &UPlayerHUDWidget::execGetWeaponAmmoData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics
	{
		struct PlayerHUDWidget_eventGetReloadPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventGetReloadPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "GetReloadPercent", nullptr, nullptr, sizeof(PlayerHUDWidget_eventGetReloadPercent_Parms), Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics
	{
		struct PlayerHUDWidget_eventGetWeaponAmmoData_Parms
		{
			FAmmoData AmmoData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventGetWeaponAmmoData_Parms, AmmoData), Z_Construct_UScriptStruct_FAmmoData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerHUDWidget_eventGetWeaponAmmoData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerHUDWidget_eventGetWeaponAmmoData_Parms), &Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::NewProp_AmmoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "GetWeaponAmmoData", nullptr, nullptr, sizeof(PlayerHUDWidget_eventGetWeaponAmmoData_Parms), Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTaskProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUDWidget_GetReloadPercent, "GetReloadPercent" }, // 3714996501
		{ &Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponAmmoData, "GetWeaponAmmoData" }, // 1458885690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "PlayerHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
		&UPlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerHUDWidget, 929092650);
	template<> TESTTASKPROJECT_API UClass* StaticClass<UPlayerHUDWidget>()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerHUDWidget(Z_Construct_UClass_UPlayerHUDWidget, &UPlayerHUDWidget::StaticClass, TEXT("/Script/TestTaskProject"), TEXT("UPlayerHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
