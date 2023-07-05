// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraPlugin/Public/CaptureManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureManager() {}
// Cross Module References
	CAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderRequestStruct();
	UPackage* Z_Construct_UPackage__Script_CameraPlugin();
	CAMERAPLUGIN_API UClass* Z_Construct_UClass_ACaptureManager_NoRegister();
	CAMERAPLUGIN_API UClass* Z_Construct_UClass_ACaptureManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FRenderRequestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CAMERAPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderRequestStruct, Z_Construct_UPackage__Script_CameraPlugin(), TEXT("RenderRequestStruct"), sizeof(FRenderRequestStruct), Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash());
	}
	return Singleton;
}
template<> CAMERAPLUGIN_API UScriptStruct* StaticStruct<FRenderRequestStruct>()
{
	return FRenderRequestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderRequestStruct(FRenderRequestStruct::StaticStruct, TEXT("/Script/CameraPlugin"), TEXT("RenderRequestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_CameraPlugin_StaticRegisterNativesFRenderRequestStruct
{
	FScriptStruct_CameraPlugin_StaticRegisterNativesFRenderRequestStruct()
	{
		UScriptStruct::DeferCppStructOps<FRenderRequestStruct>(FName(TEXT("RenderRequestStruct")));
	}
} ScriptStruct_CameraPlugin_StaticRegisterNativesFRenderRequestStruct;
	struct Z_Construct_UScriptStruct_FRenderRequestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderRequestStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraPlugin,
		nullptr,
		&NewStructOps,
		"RenderRequestStruct",
		sizeof(FRenderRequestStruct),
		alignof(FRenderRequestStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderRequestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CameraPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderRequestStruct"), sizeof(FRenderRequestStruct), Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderRequestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderRequestStruct_Hash() { return 3167351770U; }
	DEFINE_FUNCTION(ACaptureManager::execCaptureNonBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureNonBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptureManager::execupdateResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newFrameW);
		P_GET_PROPERTY(FIntProperty,Z_Param_newFrameH);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->updateResolution(Z_Param_newFrameW,Z_Param_newFrameH);
		P_NATIVE_END;
	}
	void ACaptureManager::StaticRegisterNativesACaptureManager()
	{
		UClass* Class = ACaptureManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureNonBlocking", &ACaptureManager::execCaptureNonBlocking },
			{ "updateResolution", &ACaptureManager::execupdateResolution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageCapture" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptureManager, nullptr, "CaptureNonBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptureManager_updateResolution_Statics
	{
		struct CaptureManager_eventupdateResolution_Parms
		{
			int32 newFrameW;
			int32 newFrameH;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newFrameW;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newFrameH;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::NewProp_newFrameW = { "newFrameW", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureManager_eventupdateResolution_Parms, newFrameW), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::NewProp_newFrameH = { "newFrameH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureManager_eventupdateResolution_Parms, newFrameH), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::NewProp_newFrameW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::NewProp_newFrameH,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resolution" },
		{ "Comment", "// TSoftObjectPtr<ASceneCapture2D> CaptureComponent;\n" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
		{ "ToolTip", "TSoftObjectPtr<ASceneCapture2D> CaptureComponent;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptureManager, nullptr, "updateResolution", nullptr, nullptr, sizeof(CaptureManager_eventupdateResolution_Parms), Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptureManager_updateResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACaptureManager_updateResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACaptureManager_NoRegister()
	{
		return ACaptureManager::StaticClass();
	}
	struct Z_Construct_UClass_ACaptureManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubDirectoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubDirectoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsePNG_MetaData[];
#endif
		static void NewProp_UsePNG_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePNG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerboseLogging_MetaData[];
#endif
		static void NewProp_VerboseLogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VerboseLogging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptureManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaptureManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptureManager_CaptureNonBlocking, "CaptureNonBlocking" }, // 2220867848
		{ &Z_Construct_UFunction_ACaptureManager_updateResolution, "updateResolution" }, // 1271387569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CaptureManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_SubDirectoryName_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Captured Data Sub-Directory Name \n" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
		{ "ToolTip", "Captured Data Sub-Directory Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_SubDirectoryName = { "SubDirectoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureManager, SubDirectoryName), METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_SubDirectoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_SubDirectoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_NumDigits_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_NumDigits = { "NumDigits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureManager, NumDigits), METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_NumDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_NumDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameWidth_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameWidth = { "FrameWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureManager, FrameWidth), METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameHeight_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameHeight = { "FrameHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureManager, FrameHeight), METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// If not UsePNG, JPEG format is used (For Non-Color purposes PNG is necessary, elsewise compression will mess with labels!)\n" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
		{ "ToolTip", "If not UsePNG, JPEG format is used (For Non-Color purposes PNG is necessary, elsewise compression will mess with labels!)" },
	};
#endif
	void Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG_SetBit(void* Obj)
	{
		((ACaptureManager*)Obj)->UsePNG = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG = { "UsePNG", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACaptureManager), &Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Color Capture Components\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Capture\")\n" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
		{ "ToolTip", "Color Capture Components\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Capture\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureManager, CaptureComponent), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_PostProcessMaterial_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// PostProcessMaterial used for segmentation\n" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
		{ "ToolTip", "PostProcessMaterial used for segmentation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaptureManager, PostProcessMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_PostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_PostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging_MetaData[] = {
		{ "Category", "Logging" },
		{ "ModuleRelativePath", "Public/CaptureManager.h" },
	};
#endif
	void Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging_SetBit(void* Obj)
	{
		((ACaptureManager*)Obj)->VerboseLogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging = { "VerboseLogging", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACaptureManager), &Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptureManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_SubDirectoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_NumDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_FrameHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_UsePNG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_CaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_PostProcessMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptureManager_Statics::NewProp_VerboseLogging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptureManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptureManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaptureManager_Statics::ClassParams = {
		&ACaptureManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaptureManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaptureManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptureManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaptureManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaptureManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaptureManager, 367427658);
	template<> CAMERAPLUGIN_API UClass* StaticClass<ACaptureManager>()
	{
		return ACaptureManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaptureManager(Z_Construct_UClass_ACaptureManager, &ACaptureManager::StaticClass, TEXT("/Script/CameraPlugin"), TEXT("ACaptureManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptureManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
