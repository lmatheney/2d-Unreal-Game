// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystemEditor/Private/Factories/DlgConditionCustomFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgConditionCustomFactory() {}
// Cross Module References
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgConditionCustomFactory_NoRegister();
	DLGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDlgConditionCustomFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DlgSystemEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgConditionCustom_NoRegister();
// End Cross Module References
	void UDlgConditionCustomFactory::StaticRegisterNativesUDlgConditionCustomFactory()
	{
	}
	UClass* Z_Construct_UClass_UDlgConditionCustomFactory_NoRegister()
	{
		return UDlgConditionCustomFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDlgConditionCustomFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgConditionCustomFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystemEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustomFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/DlgConditionCustomFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DlgConditionCustomFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// Holds the template of the class we are building\n" },
		{ "ModuleRelativePath", "Private/Factories/DlgConditionCustomFactory.h" },
		{ "ToolTip", "Holds the template of the class we are building" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgConditionCustomFactory, ParentClass), Z_Construct_UClass_UDlgConditionCustom_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgConditionCustomFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgConditionCustomFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgConditionCustomFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgConditionCustomFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgConditionCustomFactory_Statics::ClassParams = {
		&UDlgConditionCustomFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgConditionCustomFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgConditionCustomFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgConditionCustomFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgConditionCustomFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgConditionCustomFactory, 3293264915);
	template<> DLGSYSTEMEDITOR_API UClass* StaticClass<UDlgConditionCustomFactory>()
	{
		return UDlgConditionCustomFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgConditionCustomFactory(Z_Construct_UClass_UDlgConditionCustomFactory, &UDlgConditionCustomFactory::StaticClass, TEXT("/Script/DlgSystemEditor"), TEXT("UDlgConditionCustomFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgConditionCustomFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
