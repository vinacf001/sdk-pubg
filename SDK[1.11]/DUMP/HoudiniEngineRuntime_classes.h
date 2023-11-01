// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x58 (Inherited: 0x28)
struct UHoudiniAsset : UObject {
	struct FString *446fdcf446; // 0x28(0x10)
	struct U*f0a07311c5* *f0a07311c5; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x3f8 (Inherited: 0x3e8)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3e8(0x08)
	char pad_3F0[0x8]; // 0x3f0(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4a0 (Inherited: 0x28)
struct UHoudiniRuntimeSettings : UObject {
	enum class *67cc437a88 SessionType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ServerHost; // 0x30(0x10)
	int32 ServerPort; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ServerPipeName; // 0x48(0x10)
	bool bStartAutomaticServer; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float AutomaticServerTimeout; // 0x5c(0x04)
	bool bShowMultiAssetDialog; // 0x60(0x01)
	bool bPauseCookingOnStart; // 0x61(0x01)
	bool bEnableCooking; // 0x62(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x63(0x01)
	bool bTransformChangeTriggersCooks; // 0x64(0x01)
	bool bDisplaySlateCookingNotifications; // 0x65(0x01)
	bool bCookCurvesOnMouseRelease; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
	struct FText TemporaryCookFolder; // 0x68(0x18)
	bool bTreatRampParametersAsMultiparms; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString CollisionGroupNamePrefix; // 0x88(0x10)
	struct FString RenderedCollisionGroupNamePrefix; // 0x98(0x10)
	struct FString UCXCollisionGroupNamePrefix; // 0xa8(0x10)
	struct FString UCXRenderedCollisionGroupNamePrefix; // 0xb8(0x10)
	struct FString SimpleCollisionGroupNamePrefix; // 0xc8(0x10)
	struct FString SimpleRenderedCollisionGroupNamePrefix; // 0xd8(0x10)
	struct FString MarshallingAttributeMaterial; // 0xe8(0x10)
	struct FString MarshallingAttributeMaterialHole; // 0xf8(0x10)
	struct FString MarshallingAttributeInstanceOverride; // 0x108(0x10)
	struct FString MarshallingAttributeFaceSmoothingMask; // 0x118(0x10)
	struct FString MarshallingAttributeLightmapResolution; // 0x128(0x10)
	struct FString MarshallingAttributeGeneratedMeshName; // 0x138(0x10)
	struct FString MarshallingAttributeInputMeshName; // 0x148(0x10)
	struct FString MarshallingAttributeInputSourceFile; // 0x158(0x10)
	float MarshallingSplineResolution; // 0x168(0x04)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x16c(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x16d(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x16e(0x01)
	char pad_16F[0x1]; // 0x16f(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x170(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x174(0x04)
	float GeneratedGeometryScaleFactor; // 0x178(0x04)
	float TransformScaleFactor; // 0x17c(0x04)
	enum class *a7d9a8e2a1 ImportAxis; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	char bDoubleSidedGeometry : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x188(0x08)
	struct FBodyInstance *0134eb6c71; // 0x190(0x230)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	int32 LightMapResolution; // 0x3c4(0x04)
	float LpvBiasMultiplier; // 0x3c8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3cc(0x04)
	struct F*a92203063d WalkableSlopeOverride; // 0x3d0(0x10)
	int32 LightMapCoordinateIndex; // 0x3e0(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x3e4(0x01)
	char pad_3E4_1 : 7; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	float StreamingDistanceMultiplier; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UFoliageType_InstancedStaticMesh* *10a51c00da; // 0x3f0(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x3f8(0x10)
	bool bUseFullPrecisionUVs; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32 SrcLightmapIndex; // 0x40c(0x04)
	int32 DstLightmapIndex; // 0x410(0x04)
	int32 MinLightmapResolution; // 0x414(0x04)
	bool bRemoveDegenerates; // 0x418(0x01)
	enum class *16417b9ec5 GenerateLightmapUVsFlag; // 0x419(0x01)
	enum class *16417b9ec5 RecomputeNormalsFlag; // 0x41a(0x01)
	enum class *16417b9ec5 RecomputeTangentsFlag; // 0x41b(0x01)
	bool bUseMikkTSpace; // 0x41c(0x01)
	bool bBuildAdjacencyBuffer; // 0x41d(0x01)
	bool bUseCustomHoudiniLocation; // 0x41e(0x01)
	char pad_41F[0x1]; // 0x41f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x420(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct F*9f2306d7c5> CustomHoudiniToolsLocation; // 0x438(0x10)
	int32 CookingThreadStackSize; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x450(0x10)
	struct FString OtlSearchPath; // 0x460(0x10)
	struct FString DsoSearchPath; // 0x470(0x10)
	struct FString ImageDsoSearchPath; // 0x480(0x10)
	struct FString AudioDsoSearchPath; // 0x490(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x12d0 (Inherited: 0xa00)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *34a6be6fef : 1; // 0xa00(0x01)
	char pad_A00_1 : 7; // 0xa00(0x01)
	char pad_A01[0x7]; // 0xa01(0x07)
	struct UPhysicalMaterial* *9af61bf936; // 0xa08(0x08)
	struct FBodyInstance *0134eb6c71; // 0xa10(0x230)
	enum class ECollisionTraceFlag *de7f303171; // 0xc40(0x01)
	char pad_C41[0x3]; // 0xc41(0x03)
	int32 *60566caead; // 0xc44(0x04)
	float GeneratedLpvBiasMultiplier; // 0xc48(0x04)
	float *ea8027872d; // 0xc4c(0x04)
	struct F*a92203063d *6e7b79d459; // 0xc50(0x10)
	int32 *dc91edb0c1; // 0xc60(0x04)
	char *5cfbb93b25 : 1; // 0xc64(0x01)
	char pad_C64_1 : 7; // 0xc64(0x01)
	char pad_C65[0x3]; // 0xc65(0x03)
	float *7bac08a753; // 0xc68(0x04)
	char pad_C6C[0x4]; // 0xc6c(0x04)
	struct UFoliageType_InstancedStaticMesh* *1cac115a4b; // 0xc70(0x08)
	struct TArray<struct UAssetUserData*> *55cc152614; // 0xc78(0x10)
	char pad_C88[0x478]; // 0xc88(0x478)
	struct FText BakeFolder; // 0x1100(0x18)
	struct FText *bbc1b50338; // 0x1118(0x18)
	char pad_1130[0x1a0]; // 0x1130(0x1a0)

	void *9fb740918e(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*9fb740918e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69bfb88
};

// Class HoudiniEngineRuntime.*db812f11e8
// Size: 0xd0 (Inherited: 0x28)
struct U*db812f11e8 : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class HoudiniEngineRuntime.*67b0465888
// Size: 0xa0 (Inherited: 0x28)
struct U*67b0465888 : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class HoudiniEngineRuntime.*3bedbc211e
// Size: 0x180 (Inherited: 0xa0)
struct U*3bedbc211e : U*67b0465888 {
	char pad_A0[0xe0]; // 0xa0(0xe0)
};

// Class HoudiniEngineRuntime.*6e71f2dc8b
// Size: 0x1a0 (Inherited: 0x28)
struct U*6e71f2dc8b : UObject {
	char pad_28[0x178]; // 0x28(0x178)
};

// Class HoudiniEngineRuntime.*e79e01b7bf
// Size: 0x230 (Inherited: 0xa0)
struct U*e79e01b7bf : U*67b0465888 {
	char pad_A0[0x190]; // 0xa0(0x190)
};

// Class HoudiniEngineRuntime.*085d9ce2d7
// Size: 0xa0 (Inherited: 0xa0)
struct U*085d9ce2d7 : U*67b0465888 {
};

// Class HoudiniEngineRuntime.*6b229a01fc
// Size: 0xd8 (Inherited: 0xa0)
struct U*6b229a01fc : U*67b0465888 {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.*3cb0904510
// Size: 0xb0 (Inherited: 0xa0)
struct U*3cb0904510 : U*67b0465888 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*b228cf488d
// Size: 0xc8 (Inherited: 0xa0)
struct U*b228cf488d : U*67b0465888 {
	char pad_A0[0x28]; // 0xa0(0x28)
};

// Class HoudiniEngineRuntime.*a9019d3d1c
// Size: 0xd8 (Inherited: 0xa0)
struct U*a9019d3d1c : U*67b0465888 {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.*791986df7a
// Size: 0xa0 (Inherited: 0xa0)
struct U*791986df7a : U*67b0465888 {
};

// Class HoudiniEngineRuntime.*b351a6b088
// Size: 0xa0 (Inherited: 0xa0)
struct U*b351a6b088 : U*67b0465888 {
};

// Class HoudiniEngineRuntime.*58c0a73973
// Size: 0xd0 (Inherited: 0xa0)
struct U*58c0a73973 : U*67b0465888 {
	char pad_A0[0x30]; // 0xa0(0x30)
};

// Class HoudiniEngineRuntime.*d547a8ac62
// Size: 0xa0 (Inherited: 0xa0)
struct U*d547a8ac62 : U*67b0465888 {
};

// Class HoudiniEngineRuntime.*9487810194
// Size: 0xb0 (Inherited: 0xa0)
struct U*9487810194 : U*67b0465888 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*8d0004bb3e
// Size: 0xb0 (Inherited: 0xa8)
struct U*8d0004bb3e : UCurveFloat {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class HoudiniEngineRuntime.*9dcd56a7fb
// Size: 0x208 (Inherited: 0x1f0)
struct U*9dcd56a7fb : U*594e4d7ca9 {
	char pad_1F0[0x18]; // 0x1f0(0x18)
};

// Class HoudiniEngineRuntime.*106e0072a0
// Size: 0xc8 (Inherited: 0xb0)
struct U*106e0072a0 : U*9487810194 {
	char pad_B0[0x18]; // 0xb0(0x18)
};

// Class HoudiniEngineRuntime.*babc24389c
// Size: 0xa0 (Inherited: 0xa0)
struct U*babc24389c : U*67b0465888 {
};

// Class HoudiniEngineRuntime.*de381298e6
// Size: 0xb0 (Inherited: 0xa0)
struct U*de381298e6 : U*67b0465888 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*b694457ca2
// Size: 0xb0 (Inherited: 0xa0)
struct U*b694457ca2 : U*67b0465888 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*5302269103
// Size: 0x200 (Inherited: 0x1f0)
struct U*5302269103 : UActorComponent {
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniEngineConvertBgeoCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniEngineConvertBgeoDirCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.*600dce9ed1
// Size: 0x590 (Inherited: 0x4d0)
struct U*600dce9ed1 : USceneComponent {
	char pad_4D0[0xb0]; // 0x4d0(0xb0)
	enum class EHoudiniHandleType *422098b87e; // 0x580(0x01)
	char pad_581[0xf]; // 0x581(0x0f)
};

// Class HoudiniEngineRuntime.*a59e690045
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*a59e690045 : USceneComponent {
	struct UObject* *3ad714604d; // 0x4d0(0x08)
	struct TArray<struct AActor*> Instances; // 0x4d8(0x10)
	char pad_4E8[0x8]; // 0x4e8(0x08)
};

// Class HoudiniEngineRuntime.*e7f71cadcc
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*e7f71cadcc : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x4d0(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x4e0(0x08)
	struct UStaticMesh* InstancedMesh; // 0x4e8(0x08)
};

// Class HoudiniEngineRuntime.*1fd9525338
// Size: 0x5d0 (Inherited: 0x4d0)
struct U*1fd9525338 : USceneComponent {
	char pad_4D0[0x100]; // 0x4d0(0x100)
};

// Class HoudiniEngineRuntime.*14eb52d870
// Size: 0xc8 (Inherited: 0x28)
struct U*14eb52d870 : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

