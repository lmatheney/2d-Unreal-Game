// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/DlgParticipantName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgParticipantName() {}
// Cross Module References
	DLGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantName();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
// End Cross Module References
class UScriptStruct* FDlgParticipantName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DLGSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDlgParticipantName, Z_Construct_UPackage__Script_DlgSystem(), TEXT("DlgParticipantName"), sizeof(FDlgParticipantName), Get_Z_Construct_UScriptStruct_FDlgParticipantName_Hash());
	}
	return Singleton;
}
template<> DLGSYSTEM_API UScriptStruct* StaticStruct<FDlgParticipantName>()
{
	return FDlgParticipantName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDlgParticipantName(FDlgParticipantName::StaticStruct, TEXT("/Script/DlgSystem"), TEXT("DlgParticipantName"), false, nullptr, nullptr);
static struct FScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantName
{
	FScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantName()
	{
		UScriptStruct::DeferCppStructOps<FDlgParticipantName>(FName(TEXT("DlgParticipantName")));
	}
} ScriptStruct_DlgSystem_StaticRegisterNativesFDlgParticipantName;
	struct Z_Construct_UScriptStruct_FDlgParticipantName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Helper struct to provide a way to reference \"Participants\" in custom events and conditions\n// Custom UI picker is supported to set it, and the DlgContext has a helper function to get the participant from the name\n" },
		{ "ModuleRelativePath", "Public/DlgParticipantName.h" },
		{ "ToolTip", "Helper struct to provide a way to reference \"Participants\" in custom events and conditions\nCustom UI picker is supported to set it, and the DlgContext has a helper function to get the participant from the name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDlgParticipantName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DlgParticipantName.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDlgParticipantName, ParticipantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDlgParticipantName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDlgParticipantName_Statics::NewProp_ParticipantName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDlgParticipantName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
		nullptr,
		&NewStructOps,
		"DlgParticipantName",
		sizeof(FDlgParticipantName),
		alignof(FDlgParticipantName),
		Z_Construct_UScriptStruct_FDlgParticipantName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDlgParticipantName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDlgParticipantName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DlgParticipantName"), sizeof(FDlgParticipantName), Get_Z_Construct_UScriptStruct_FDlgParticipantName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDlgParticipantName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDlgParticipantName_Hash() { return 4280397747U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
