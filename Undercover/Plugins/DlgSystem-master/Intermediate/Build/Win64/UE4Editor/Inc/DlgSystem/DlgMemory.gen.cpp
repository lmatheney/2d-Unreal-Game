// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgMemory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgMemory() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgMemory();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSavedData();
// End Cross Module References
class UScriptStruct* FDlgMemory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgMemory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgMemory, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgMemory"), sizeof(FDlgMemory), Get_Z_Construct_UScriptStruct_FDlgMemory_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgMemory>()
{
	return FDlgMemory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgMemory(FDlgMemory::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgMemory"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgMemory
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgMemory()
	{
		UScriptStruct::DeferCppStructOps<FDlgMemory>(FName(TEXT("DlgMemory")));
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgMemory;
	struct Z_Construct_UScriptStruct_FDlgMemory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HistoryMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HistoryMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HistoryMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgMemory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Singleton to store Dialogue history\n// TODO: investigate if this is multiplayer friendly, it does not seem so as there exists only a single global dialogue memory\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "Singleton to store Dialogue history\nTODO: investigate if this is multiplayer friendly, it does not seem so as there exists only a single global dialogue memory" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgMemory>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_ValueProp = { "HistoryMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDlgHistory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_Key_KeyProp = { "HistoryMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_MetaData[] = {
		{ "Comment", "// Key: Dialogue unique identifier GUID\n// Value: set of already visited nodes\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "Key: Dialogue unique identifier GUID\nValue: set of already visited nodes" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap = { "HistoryMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgMemory, HistoryMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgMemory_Statics::NewProp_HistoryMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgMemory",
		sizeof(FDlgMemory),
		alignof(FDlgMemory),
		Z_Construct_UScriptStruct_FDlgMemory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgMemory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgMemory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgMemory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgMemory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgMemory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgMemory"), sizeof(FDlgMemory), Get_Z_Construct_UScriptStruct_FDlgMemory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgMemory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgMemory_Hash() { return 2290796667U; }
class UScriptStruct* FDlgHistory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgHistory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgHistory, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgHistory"), sizeof(FDlgHistory), Get_Z_Construct_UScriptStruct_FDlgHistory_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgHistory>()
{
	return FDlgHistory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgHistory(FDlgHistory::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgHistory"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgHistory
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgHistory()
	{
		UScriptStruct::DeferCppStructOps<FDlgHistory>(FName(TEXT("DlgHistory")));
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgHistory;
	struct Z_Construct_UScriptStruct_FDlgHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisitedNodeIndices_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisitedNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_VisitedNodeIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisitedNodeGUIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisitedNodeGUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_VisitedNodeGUIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgHistory>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_ElementProp = { "VisitedNodeIndices", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_MetaData[] = {
		{ "Category", "Dialogue|History" },
		{ "Comment", "// Sed of already visited Node indices\n// NOTE: if you serialize this but then later change the dialogue node positions this will have the wrong indices\n// NOTE: You should use VisitedNodeGUIDs\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "Sed of already visited Node indices\nNOTE: if you serialize this but then later change the dialogue node positions this will have the wrong indices\nNOTE: You should use VisitedNodeGUIDs" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices = { "VisitedNodeIndices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgHistory, VisitedNodeIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_ElementProp = { "VisitedNodeGUIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_MetaData[] = {
		{ "Category", "Dialogue|History" },
		{ "Comment", "// Set of already visited node GUIDs\n// This was added to fix Issue 30 (https://gitlab.com/NotYetGames/DlgSystem/-/issues/30)\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "Set of already visited node GUIDs\nThis was added to fix Issue 30 (https:gitlab.com/NotYetGames/DlgSystem/-/issues/30)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs = { "VisitedNodeGUIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgHistory, VisitedNodeGUIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_ValueProp = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDlgNodeSavedData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_Key_KeyProp = { "NodeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_MetaData[] = {
		{ "Comment", "// Key: Dialogue node identifier GUID\n// Value: data used by the node\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "Key: Dialogue node identifier GUID\nValue: data used by the node" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgHistory, NodeData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_VisitedNodeGUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgHistory_Statics::NewProp_NodeData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgHistory",
		sizeof(FDlgHistory),
		alignof(FDlgHistory),
		Z_Construct_UScriptStruct_FDlgHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgHistory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgHistory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgHistory"), sizeof(FDlgHistory), Get_Z_Construct_UScriptStruct_FDlgHistory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgHistory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgHistory_Hash() { return 2087887794U; }
class UScriptStruct* FDlgNodeSavedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSavedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgNodeSavedData, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgNodeSavedData"), sizeof(FDlgNodeSavedData), Get_Z_Construct_UScriptStruct_FDlgNodeSavedData_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgNodeSavedData>()
{
	return FDlgNodeSavedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgNodeSavedData(FDlgNodeSavedData::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgNodeSavedData"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgNodeSavedData
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgNodeSavedData()
	{
		UScriptStruct::DeferCppStructOps<FDlgNodeSavedData>(FName(TEXT("DlgNodeSavedData")));
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgNodeSavedData;
	struct Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GUIDList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GUIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GUIDList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct to store any data a node might want to read/write\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "Struct to store any data a node might want to read/write" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgNodeSavedData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_Inner = { "GUIDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_MetaData[] = {
		{ "Comment", "// used by random selector node to avoid repetition\n" },
		{ "ModuleRelativePath", "Public/DlgMemory.h" },
		{ "ToolTip", "used by random selector node to avoid repetition" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList = { "GUIDList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgNodeSavedData, GUIDList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::NewProp_GUIDList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgNodeSavedData",
		sizeof(FDlgNodeSavedData),
		alignof(FDlgNodeSavedData),
		Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgNodeSavedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSavedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgNodeSavedData"), sizeof(FDlgNodeSavedData), Get_Z_Construct_UScriptStruct_FDlgNodeSavedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgNodeSavedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgNodeSavedData_Hash() { return 250862926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
