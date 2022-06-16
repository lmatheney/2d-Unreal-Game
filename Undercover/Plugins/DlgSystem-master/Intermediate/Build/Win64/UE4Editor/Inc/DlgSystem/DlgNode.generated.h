// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDlgNodeData;
class UObject;
class UDialogueWave;
class USoundBase;
class USoundWave;
struct FDlgTextArgument;
struct FDlgEdge;
struct FDlgEvent;
struct FDlgCondition;
struct FGuid;
#ifdef DLGSYSTEM_DlgNode_generated_h
#error "DlgNode.generated.h already included, missing '#pragma once' in DlgNode.h"
#endif
#define DLGSYSTEM_DlgNode_generated_h

#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_SPARSE_DATA
#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNodeData); \
	DECLARE_FUNCTION(execGetNodeGenericData); \
	DECLARE_FUNCTION(execGetSpeakerState); \
	DECLARE_FUNCTION(execGetNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetNodeUnformattedText); \
	DECLARE_FUNCTION(execGetCheckChildrenOnEvaluation); \
	DECLARE_FUNCTION(execGetNodeText); \
	DECLARE_FUNCTION(execGetTextArguments); \
	DECLARE_FUNCTION(execGetNodeChildAt); \
	DECLARE_FUNCTION(execGetNumNodeChildren); \
	DECLARE_FUNCTION(execGetNodeChildren); \
	DECLARE_FUNCTION(execGetNodeEnterEvents); \
	DECLARE_FUNCTION(execHasAnyEnterEvents); \
	DECLARE_FUNCTION(execGetNodeEnterConditions); \
	DECLARE_FUNCTION(execHasAnyEnterConditions); \
	DECLARE_FUNCTION(execGetNodeParticipantName); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID);


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNodeData); \
	DECLARE_FUNCTION(execGetNodeGenericData); \
	DECLARE_FUNCTION(execGetSpeakerState); \
	DECLARE_FUNCTION(execGetNodeVoiceDialogueWave); \
	DECLARE_FUNCTION(execGetNodeVoiceSoundBase); \
	DECLARE_FUNCTION(execGetNodeVoiceSoundWave); \
	DECLARE_FUNCTION(execGetNodeUnformattedText); \
	DECLARE_FUNCTION(execGetCheckChildrenOnEvaluation); \
	DECLARE_FUNCTION(execGetNodeText); \
	DECLARE_FUNCTION(execGetTextArguments); \
	DECLARE_FUNCTION(execGetNodeChildAt); \
	DECLARE_FUNCTION(execGetNumNodeChildren); \
	DECLARE_FUNCTION(execGetNodeChildren); \
	DECLARE_FUNCTION(execGetNodeEnterEvents); \
	DECLARE_FUNCTION(execHasAnyEnterEvents); \
	DECLARE_FUNCTION(execGetNodeEnterConditions); \
	DECLARE_FUNCTION(execHasAnyEnterConditions); \
	DECLARE_FUNCTION(execGetNodeParticipantName); \
	DECLARE_FUNCTION(execHasGUID); \
	DECLARE_FUNCTION(execGetGUID);


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDlgNode, NO_API)


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDlgNode(); \
	friend struct Z_Construct_UClass_UDlgNode_Statics; \
public: \
	DECLARE_CLASS(UDlgNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgNode) \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_ARCHIVESERIALIZER


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUDlgNode(); \
	friend struct Z_Construct_UClass_UDlgNode_Statics; \
public: \
	DECLARE_CLASS(UDlgNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DlgSystem"), NO_API) \
	DECLARE_SERIALIZER(UDlgNode) \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_ARCHIVESERIALIZER


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgNode(UDlgNode&&); \
	NO_API UDlgNode(const UDlgNode&); \
public:


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDlgNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDlgNode(UDlgNode&&); \
	NO_API UDlgNode(const UDlgNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDlgNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDlgNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDlgNode)


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerName() { return STRUCT_OFFSET(UDlgNode, OwnerName); } \
	FORCEINLINE static uint32 __PPO__bCheckChildrenOnEvaluation() { return STRUCT_OFFSET(UDlgNode, bCheckChildrenOnEvaluation); } \
	FORCEINLINE static uint32 __PPO__EnterConditions() { return STRUCT_OFFSET(UDlgNode, EnterConditions); } \
	FORCEINLINE static uint32 __PPO__EnterRestriction() { return STRUCT_OFFSET(UDlgNode, EnterRestriction); } \
	FORCEINLINE static uint32 __PPO__EnterEvents() { return STRUCT_OFFSET(UDlgNode, EnterEvents); } \
	FORCEINLINE static uint32 __PPO__NodeGUID() { return STRUCT_OFFSET(UDlgNode, NodeGUID); } \
	FORCEINLINE static uint32 __PPO__Children() { return STRUCT_OFFSET(UDlgNode, Children); }


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_49_PROLOG
#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_PRIVATE_PROPERTY_OFFSET \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_SPARSE_DATA \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_RPC_WRAPPERS \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_INCLASS \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_PRIVATE_PROPERTY_OFFSET \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_SPARSE_DATA \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_INCLASS_NO_PURE_DECLS \
	Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLGSYSTEM_API UClass* StaticClass<class UDlgNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Undercover_Plugins_DlgSystem_master_Source_DlgSystem_Public_Nodes_DlgNode_h


#define FOREACH_ENUM_EDLGENTRYRESTRICTION(op) \
	op(EDlgEntryRestriction::None) \
	op(EDlgEntryRestriction::OncePerContext) \
	op(EDlgEntryRestriction::Once) 

enum class EDlgEntryRestriction : uint8;
template<> DLGSYSTEM_API UEnum* StaticEnum<EDlgEntryRestriction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
