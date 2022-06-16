// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode_Proxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Proxy() {}
// Cross Module References
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Proxy_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Proxy();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
	void UDlgNode_Proxy::StaticRegisterNativesUDlgNode_Proxy()
	{
	}
	UClass* Z_Construct_UClass_UDlgNode_Proxy_NoRegister()
	{
		return UDlgNode_Proxy::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Proxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Proxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Proxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node without text. Execution auto-steps through it to the referenced node.\n * Can be used to reduce dialogue graph spaghetti.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Proxy.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Proxy.h" },
		{ "ToolTip", "Node without text. Execution auto-steps through it to the referenced node.\nCan be used to reduce dialogue graph spaghetti." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Index of the node the Proxy represents (in UDlgDialogue::Nodes)\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Proxy.h" },
		{ "ToolTip", "Index of the node the Proxy represents (in UDlgDialogue::Nodes)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Proxy, NodeIndex), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Proxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Proxy_Statics::NewProp_NodeIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Proxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Proxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Proxy_Statics::ClassParams = {
		&UDlgNode_Proxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDlgNode_Proxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Proxy_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Proxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Proxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Proxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_Proxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode_Proxy, 1623740369);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Proxy>()
	{
		return UDlgNode_Proxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode_Proxy(Z_Construct_UClass_UDlgNode_Proxy, &UDlgNode_Proxy::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode_Proxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Proxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
