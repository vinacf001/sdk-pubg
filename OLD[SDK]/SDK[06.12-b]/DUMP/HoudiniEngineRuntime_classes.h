// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x60 (Inherited: 0x30)
struct UHoudiniAsset : UObject {
	struct FString *2a58834ccb; // 0x30(0x10)
	struct U*ec5706cab5* *ec5706cab5; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x408 (Inherited: 0x3f8)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4c0 (Inherited: 0x30)
struct UHoudiniRuntimeSettings : UObject {
	enum class *ebe1250b57 SessionType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ServerHost; // 0x38(0x10)
	int32 ServerPort; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ServerPipeName; // 0x50(0x10)
	bool bStartAutomaticServer; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AutomaticServerTimeout; // 0x64(0x04)
	bool bShowMultiAssetDialog; // 0x68(0x01)
	bool bPauseCookingOnStart; // 0x69(0x01)
	bool bEnableCooking; // 0x6a(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x6b(0x01)
	bool bTransformChangeTriggersCooks; // 0x6c(0x01)
	bool bDisplaySlateCookingNotifications; // 0x6d(0x01)
	bool bCookCurvesOnMouseRelease; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	struct FText TemporaryCookFolder; // 0x70(0x18)
	bool bTreatRampParametersAsMultiparms; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString CollisionGroupNamePrefix; // 0x90(0x10)
	struct FString RenderedCollisionGroupNamePrefix; // 0xa0(0x10)
	struct FString UCXCollisionGroupNamePrefix; // 0xb0(0x10)
	struct FString UCXRenderedCollisionGroupNamePrefix; // 0xc0(0x10)
	struct FString SimpleCollisionGroupNamePrefix; // 0xd0(0x10)
	struct FString SimpleRenderedCollisionGroupNamePrefix; // 0xe0(0x10)
	struct FString MarshallingAttributeMaterial; // 0xf0(0x10)
	struct FString MarshallingAttributeMaterialHole; // 0x100(0x10)
	struct FString MarshallingAttributeInstanceOverride; // 0x110(0x10)
	struct FString MarshallingAttributeFaceSmoothingMask; // 0x120(0x10)
	struct FString MarshallingAttributeLightmapResolution; // 0x130(0x10)
	struct FString MarshallingAttributeGeneratedMeshName; // 0x140(0x10)
	struct FString MarshallingAttributeInputMeshName; // 0x150(0x10)
	struct FString MarshallingAttributeInputSourceFile; // 0x160(0x10)
	float MarshallingSplineResolution; // 0x170(0x04)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x174(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x175(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x176(0x01)
	char pad_177[0x1]; // 0x177(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x178(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x17c(0x04)
	float GeneratedGeometryScaleFactor; // 0x180(0x04)
	float TransformScaleFactor; // 0x184(0x04)
	enum class *7369bcaa26 ImportAxis; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bDoubleSidedGeometry : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct FBodyInstance *535a473cef; // 0x1a0(0x240)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	int32 LightMapResolution; // 0x3e4(0x04)
	float LpvBiasMultiplier; // 0x3e8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3ec(0x04)
	struct F*705bbdf923 WalkableSlopeOverride; // 0x3f0(0x10)
	int32 LightMapCoordinateIndex; // 0x400(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x404(0x01)
	char pad_404_1 : 7; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	float StreamingDistanceMultiplier; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UFoliageType_InstancedStaticMesh* *0f26870a30; // 0x410(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x418(0x10)
	bool bUseFullPrecisionUVs; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	int32 SrcLightmapIndex; // 0x42c(0x04)
	int32 DstLightmapIndex; // 0x430(0x04)
	int32 MinLightmapResolution; // 0x434(0x04)
	bool bRemoveDegenerates; // 0x438(0x01)
	enum class *3a458a588c GenerateLightmapUVsFlag; // 0x439(0x01)
	enum class *3a458a588c RecomputeNormalsFlag; // 0x43a(0x01)
	enum class *3a458a588c RecomputeTangentsFlag; // 0x43b(0x01)
	bool bUseMikkTSpace; // 0x43c(0x01)
	bool bBuildAdjacencyBuffer; // 0x43d(0x01)
	bool bUseCustomHoudiniLocation; // 0x43e(0x01)
	char pad_43F[0x1]; // 0x43f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x440(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct TArray<struct F*76d28c568d> CustomHoudiniToolsLocation; // 0x458(0x10)
	int32 CookingThreadStackSize; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x470(0x10)
	struct FString OtlSearchPath; // 0x480(0x10)
	struct FString DsoSearchPath; // 0x490(0x10)
	struct FString ImageDsoSearchPath; // 0x4a0(0x10)
	struct FString AudioDsoSearchPath; // 0x4b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x12a0 (Inherited: 0x9c0)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *280802cd79 : 1; // 0x9c0(0x01)
	char pad_9C0_1 : 7; // 0x9c0(0x01)
	char pad_9C1[0x7]; // 0x9c1(0x07)
	struct UPhysicalMaterial* *06c42735d9; // 0x9c8(0x08)
	struct FBodyInstance *535a473cef; // 0x9d0(0x240)
	enum class ECollisionTraceFlag *1b8383eea9; // 0xc10(0x01)
	char pad_C11[0x3]; // 0xc11(0x03)
	int32 *4ee1c412c0; // 0xc14(0x04)
	float GeneratedLpvBiasMultiplier; // 0xc18(0x04)
	float *becc1641cf; // 0xc1c(0x04)
	struct F*705bbdf923 *cc3ef0565d; // 0xc20(0x10)
	int32 *3220523b7c; // 0xc30(0x04)
	char *e696be4d69 : 1; // 0xc34(0x01)
	char pad_C34_1 : 7; // 0xc34(0x01)
	char pad_C35[0x3]; // 0xc35(0x03)
	float *3acb6f6af3; // 0xc38(0x04)
	char pad_C3C[0x4]; // 0xc3c(0x04)
	struct UFoliageType_InstancedStaticMesh* *47bb89344d; // 0xc40(0x08)
	struct TArray<struct UAssetUserData*> *6330c3e6b9; // 0xc48(0x10)
	char pad_C58[0x478]; // 0xc58(0x478)
	struct FText BakeFolder; // 0x10d0(0x18)
	struct FText *2b73702190; // 0x10e8(0x18)
	char pad_1100[0x1a0]; // 0x1100(0x1a0)

	int32 *2c228a11cd(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*2c228a11cd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ac715c
};

// Class HoudiniEngineRuntime.*a158847e50
// Size: 0xd8 (Inherited: 0x30)
struct U*a158847e50 : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class HoudiniEngineRuntime.*e5a8ae97a6
// Size: 0xa8 (Inherited: 0x30)
struct U*e5a8ae97a6 : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class HoudiniEngineRuntime.*2f92fea044
// Size: 0x190 (Inherited: 0xa8)
struct U*2f92fea044 : U*e5a8ae97a6 {
	char pad_A8[0xe8]; // 0xa8(0xe8)
};

// Class HoudiniEngineRuntime.*fc350292f7
// Size: 0x1b0 (Inherited: 0x30)
struct U*fc350292f7 : UObject {
	char pad_30[0x180]; // 0x30(0x180)
};

// Class HoudiniEngineRuntime.*58212c0807
// Size: 0x240 (Inherited: 0xa8)
struct U*58212c0807 : U*e5a8ae97a6 {
	char pad_A8[0x198]; // 0xa8(0x198)
};

// Class HoudiniEngineRuntime.*079b15df98
// Size: 0xa8 (Inherited: 0xa8)
struct U*079b15df98 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*0600bcbfa0
// Size: 0xe0 (Inherited: 0xa8)
struct U*0600bcbfa0 : U*e5a8ae97a6 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*8546d214d6
// Size: 0xb8 (Inherited: 0xa8)
struct U*8546d214d6 : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*106046733d
// Size: 0xd0 (Inherited: 0xa8)
struct U*106046733d : U*e5a8ae97a6 {
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class HoudiniEngineRuntime.*9d76c3c61d
// Size: 0xe0 (Inherited: 0xa8)
struct U*9d76c3c61d : U*e5a8ae97a6 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*3836f20dc6
// Size: 0xa8 (Inherited: 0xa8)
struct U*3836f20dc6 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*67bcab0bdb
// Size: 0xa8 (Inherited: 0xa8)
struct U*67bcab0bdb : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*b4819aad00
// Size: 0xd8 (Inherited: 0xa8)
struct U*b4819aad00 : U*e5a8ae97a6 {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class HoudiniEngineRuntime.*597fe490c7
// Size: 0xa8 (Inherited: 0xa8)
struct U*597fe490c7 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*329f7f31e8
// Size: 0xb8 (Inherited: 0xa8)
struct U*329f7f31e8 : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*f78481bb1c
// Size: 0xb8 (Inherited: 0xb0)
struct U*f78481bb1c : UCurveFloat {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class HoudiniEngineRuntime.*0ab0077549
// Size: 0x210 (Inherited: 0x1f8)
struct U*0ab0077549 : U*22e8771771 {
	char pad_1F8[0x18]; // 0x1f8(0x18)
};

// Class HoudiniEngineRuntime.*0f83beabbc
// Size: 0xd0 (Inherited: 0xb8)
struct U*0f83beabbc : U*329f7f31e8 {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class HoudiniEngineRuntime.*6105637337
// Size: 0xa8 (Inherited: 0xa8)
struct U*6105637337 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*7096e81dac
// Size: 0xb8 (Inherited: 0xa8)
struct U*7096e81dac : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*e93c4dadd8
// Size: 0xb8 (Inherited: 0xa8)
struct U*e93c4dadd8 : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*efdc0ca135
// Size: 0x210 (Inherited: 0x200)
struct U*efdc0ca135 : UActorComponent {
	char pad_200[0x10]; // 0x200(0x10)
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniEngineConvertBgeoCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniEngineConvertBgeoDirCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.*d2a8fc0d18
// Size: 0x530 (Inherited: 0x480)
struct U*d2a8fc0d18 : USceneComponent {
	char pad_480[0xa8]; // 0x480(0xa8)
	enum class EHoudiniHandleType *6611dacee8; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
};

// Class HoudiniEngineRuntime.*fd3e8065b0
// Size: 0x490 (Inherited: 0x480)
struct U*fd3e8065b0 : USceneComponent {
	struct UObject* *9535e818e4; // 0x478(0x08)
	struct TArray<struct AActor*> Instances; // 0x480(0x10)
};

// Class HoudiniEngineRuntime.*2c09f19639
// Size: 0x4a0 (Inherited: 0x480)
struct U*2c09f19639 : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x478(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x488(0x08)
	struct UStaticMesh* InstancedMesh; // 0x490(0x08)
};

// Class HoudiniEngineRuntime.*b972adde1c
// Size: 0x580 (Inherited: 0x480)
struct U*b972adde1c : USceneComponent {
	char pad_480[0x100]; // 0x480(0x100)
};

// Class HoudiniEngineRuntime.*019cd8baad
// Size: 0xd0 (Inherited: 0x30)
struct U*019cd8baad : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

