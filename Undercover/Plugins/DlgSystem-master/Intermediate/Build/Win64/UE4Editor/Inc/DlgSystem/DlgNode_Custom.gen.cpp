// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode_Custom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Custom() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Custom_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Custom();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_Custom::StaticRegisterNativesUDlgNode_Custom()
	{
	}
	UClass* Z_Construct_UClass_UDlgNode_Custom_NoRegister()
	{
		return UDlgNode_Custom::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Custom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Custom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Custom_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Abstract dialogue node, can be extended outside of the plugin to add custom data and implement custom behavior\n */" },
		{ "IncludePath", "Nodes/DlgNode_Custom.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Custom.h" },
		{ "ToolTip", "Abstract dialogue node, can be extended outside of the plugin to add custom data and implement custom behavior" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Custom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Custom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Custom_Statics::ClassParams = {
		&UDlgNode_Custom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Custom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Custom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Custom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_Custom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode_Custom, 555024207);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Custom>()
	{
		return UDlgNode_Custom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode_Custom(Z_Construct_UClass_UDlgNode_Custom, &UDlgNode_Custom::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode_Custom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Custom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
