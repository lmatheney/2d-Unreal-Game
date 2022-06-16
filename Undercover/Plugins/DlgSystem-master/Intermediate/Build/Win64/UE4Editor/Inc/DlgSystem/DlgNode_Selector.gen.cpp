// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DlgSystem/Public/Nodes/DlgNode_Selector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDlgNode_Selector() {}
// Cross Module References
	DLGSYSTEM_API UEnum* Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType();
	UPackage* Z_Construct_UPackage__Script_DlgSystem();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Selector_NoRegister();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode_Selector();
	DLGSYSTEM_API UClass* Z_Construct_UClass_UDlgNode();
// End Cross Module References
	static UEnum* EDlgNodeSelectorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, Z_Construct_UPackage__Script_DlgSystem(), TEXT("EDlgNodeSelectorType"));
		}
		return Singleton;
	}
	template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgNodeSelectorType>()
	{
		return EDlgNodeSelectorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDlgNodeSelectorType(EDlgNodeSelectorType_StaticEnum, TEXT("/Script/DlgSystem"), TEXT("EDlgNodeSelectorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Hash() { return 2640559092U; }
	UEnum* Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DlgSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDlgNodeSelectorType"), 0, Get_Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDlgNodeSelectorType::First", (int64)EDlgNodeSelectorType::First },
				{ "EDlgNodeSelectorType::Random", (int64)EDlgNodeSelectorType::Random },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "First.Comment", "// As soon as it is entered it selects its first satisfied child.\n" },
				{ "First.DisplayName", "First" },
				{ "First.Name", "EDlgNodeSelectorType::First" },
				{ "First.ToolTip", "As soon as it is entered it selects its first satisfied child." },
				{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
				{ "Random.Comment", "// As soon as it is entered it selects a satisfied child randomly.\n" },
				{ "Random.DisplayName", "Random" },
				{ "Random.Name", "EDlgNodeSelectorType::Random" },
				{ "Random.ToolTip", "As soon as it is entered it selects a satisfied child randomly." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DlgSystem,
				nullptr,
				"EDlgNodeSelectorType",
				"EDlgNodeSelectorType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UDlgNode_Selector::execGetSelectorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDlgNodeSelectorType*)Z_Param__Result=P_THIS->GetSelectorType();
		P_NATIVE_END;
	}
	void UDlgNode_Selector::StaticRegisterNativesUDlgNode_Selector()
	{
		UClass* Class = UDlgNode_Selector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectorType", &UDlgNode_Selector::execGetSelectorType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics
	{
		struct DlgNode_Selector_eventGetSelectorType_Parms
		{
			EDlgNodeSelectorType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DlgNode_Selector_eventGetSelectorType_Parms, ReturnValue), Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Gets the Selector Type\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Gets the Selector Type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDlgNode_Selector, nullptr, "GetSelectorType", nullptr, nullptr, sizeof(DlgNode_Selector_eventGetSelectorType_Parms), Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDlgNode_Selector_NoRegister()
	{
		return UDlgNode_Selector::StaticClass();
	}
	struct Z_Construct_UClass_UDlgNode_Selector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData[];
#endif
		static void NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvoidPickingSameOptionTwiceInARow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData[];
#endif
		static void NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DynamicDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDlgNode_Selector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDlgNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DlgSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDlgNode_Selector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDlgNode_Selector_GetSelectorType, "GetSelectorType" }, // 2323944393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Dialogue" },
		{ "Comment", "/**\n * Node without text. Selector of child depends on the type.\n * It should have at least one (satisfied child), HandleNodeEnter returns false and the Dialogue is terminated otherwise.\n */" },
		{ "IncludePath", "Nodes/DlgNode_Selector.h" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Node without text. Selector of child depends on the type.\nIt should have at least one (satisfied child), HandleNodeEnter returns false and the Dialogue is terminated otherwise." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Defines the type of selector this node represents\n" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Defines the type of selector this node represents" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType = { "SelectorType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Selector, SelectorType), Z_Construct_UEnum_DlgSystem_EDlgNodeSelectorType, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Modifies the way EDlgNodeSelectorType::Random works.\n// Ensures that an option is not picked twice before any other option is,\n// unless it is not possible because of the node setup/conditions\n" },
		{ "EditCondition", "SelectorType == EDlgNodeSelectorType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Modifies the way EDlgNodeSelectorType::Random works.\nEnsures that an option is not picked twice before any other option is,\nunless it is not possible because of the node setup/conditions" },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit(void* Obj)
	{
		((UDlgNode_Selector*)Obj)->bAvoidPickingSameOptionTwiceInARow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow = { "bAvoidPickingSameOptionTwiceInARow", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgNode_Selector), &Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData[] = {
		{ "Category", "Dialogue|Node" },
		{ "Comment", "// Only after each satisfied option is picked once can an option be picked again\n// Still allows repetition if bAvoidPickingSameOptionTwiceInARow is not set to true,\n// e.g. for options {A, B, C} A-B-C-C-A-B-B... is a valid series of choices\n" },
		{ "EditCondition", "SelectorType == EDlgNodeSelectorType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
		{ "ToolTip", "Only after each satisfied option is picked once can an option be picked again\nStill allows repetition if bAvoidPickingSameOptionTwiceInARow is not set to true,\ne.g. for options {A, B, C} A-B-C-C-A-B-B... is a valid series of choices" },
	};
#endif
	void Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit(void* Obj)
	{
		((UDlgNode_Selector*)Obj)->bCycleThroughSatisfiedOptionsWithoutRepetition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition = { "bCycleThroughSatisfiedOptionsWithoutRepetition", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDlgNode_Selector), &Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/DlgNode_Selector.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText = { "DynamicDisplayText", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDlgNode_Selector, DynamicDisplayText), METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDlgNode_Selector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_SelectorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bAvoidPickingSameOptionTwiceInARow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_bCycleThroughSatisfiedOptionsWithoutRepetition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDlgNode_Selector_Statics::NewProp_DynamicDisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDlgNode_Selector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDlgNode_Selector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDlgNode_Selector_Statics::ClassParams = {
		&UDlgNode_Selector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDlgNode_Selector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDlgNode_Selector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDlgNode_Selector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDlgNode_Selector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDlgNode_Selector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDlgNode_Selector, 62516250);
	template<> DLGSYSTEM_API UClass* StaticClass<UDlgNode_Selector>()
	{
		return UDlgNode_Selector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDlgNode_Selector(Z_Construct_UClass_UDlgNode_Selector, &UDlgNode_Selector::StaticClass, TEXT("/Script/DlgSystem"), TEXT("UDlgNode_Selector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDlgNode_Selector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
