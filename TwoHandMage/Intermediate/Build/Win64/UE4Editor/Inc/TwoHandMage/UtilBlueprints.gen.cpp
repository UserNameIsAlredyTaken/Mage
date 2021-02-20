// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwoHandMage/UtilBlueprints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilBlueprints() {}
// Cross Module References
	TWOHANDMAGE_API UClass* Z_Construct_UClass_UUtilBlueprints_NoRegister();
	TWOHANDMAGE_API UClass* Z_Construct_UClass_UUtilBlueprints();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TwoHandMage();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UUtilBlueprints::execCalculateAdvancedShootTarget)
	{
		P_GET_OBJECT(APawn,Z_Param_shootingTarget);
		P_GET_STRUCT(FVector,Z_Param_shootingPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_buletSpeed);
		P_GET_UBOOL(Z_Param_predictZAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UUtilBlueprints::CalculateAdvancedShootTarget(Z_Param_shootingTarget,Z_Param_shootingPosition,Z_Param_buletSpeed,Z_Param_predictZAxis);
		P_NATIVE_END;
	}
	void UUtilBlueprints::StaticRegisterNativesUUtilBlueprints()
	{
		UClass* Class = UUtilBlueprints::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAdvancedShootTarget", &UUtilBlueprints::execCalculateAdvancedShootTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics
	{
		struct UtilBlueprints_eventCalculateAdvancedShootTarget_Parms
		{
			APawn* shootingTarget;
			FVector shootingPosition;
			float buletSpeed;
			bool predictZAxis;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shootingTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shootingPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_buletSpeed;
		static void NewProp_predictZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_predictZAxis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_shootingTarget = { "shootingTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilBlueprints_eventCalculateAdvancedShootTarget_Parms, shootingTarget), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_shootingPosition = { "shootingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilBlueprints_eventCalculateAdvancedShootTarget_Parms, shootingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_buletSpeed = { "buletSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilBlueprints_eventCalculateAdvancedShootTarget_Parms, buletSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_predictZAxis_SetBit(void* Obj)
	{
		((UtilBlueprints_eventCalculateAdvancedShootTarget_Parms*)Obj)->predictZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_predictZAxis = { "predictZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilBlueprints_eventCalculateAdvancedShootTarget_Parms), &Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_predictZAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilBlueprints_eventCalculateAdvancedShootTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_shootingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_shootingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_buletSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_predictZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UtilFunctions" },
		{ "ModuleRelativePath", "UtilBlueprints.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilBlueprints, nullptr, "CalculateAdvancedShootTarget", nullptr, nullptr, sizeof(UtilBlueprints_eventCalculateAdvancedShootTarget_Parms), Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtilBlueprints_NoRegister()
	{
		return UUtilBlueprints::StaticClass();
	}
	struct Z_Construct_UClass_UUtilBlueprints_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtilBlueprints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TwoHandMage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtilBlueprints_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtilBlueprints_CalculateAdvancedShootTarget, "CalculateAdvancedShootTarget" }, // 3230199386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtilBlueprints_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UtilBlueprints.h" },
		{ "ModuleRelativePath", "UtilBlueprints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtilBlueprints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtilBlueprints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUtilBlueprints_Statics::ClassParams = {
		&UUtilBlueprints::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUtilBlueprints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtilBlueprints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtilBlueprints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUtilBlueprints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtilBlueprints, 1932008962);
	template<> TWOHANDMAGE_API UClass* StaticClass<UUtilBlueprints>()
	{
		return UUtilBlueprints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtilBlueprints(Z_Construct_UClass_UUtilBlueprints, &UUtilBlueprints::StaticClass, TEXT("/Script/TwoHandMage"), TEXT("UUtilBlueprints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilBlueprints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
