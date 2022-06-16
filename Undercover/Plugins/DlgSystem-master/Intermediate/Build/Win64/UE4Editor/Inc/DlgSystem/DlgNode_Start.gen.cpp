// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode_Start.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Start() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Start_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Start();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_Start::StaticRegisterNativesUDlgNode_Start()
	{
	}
	UClass* Z_Construct_UClass_UDlgNode_Start_NoRegister()
	{
		return UDlgNode_Start::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Start_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Start_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Start_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Possible entry point of the Dialogue.\n * Does not have text, the first satisfied child is picked if there is any.\n * Start nodes are evaluated from left to right.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Start.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Start.h" },
		{ "ToolTip", "Possible entry point of the Dialogue.\nDoes not have text, the first satisfied child is picked if there is any.\nStart nodes are evaluated from left to right." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Start_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Start>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Start_Statics::ClassParams = {
		&UDlgNode_Start::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Start_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Start_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Start()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_Start_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode_Start, 967139827);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Start>()
	{
		return UDlgNode_Start::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode_Start(Z_Construct_UClass_UDlgNode_Start, &UDlgNode_Start::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode_Start"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Start);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
