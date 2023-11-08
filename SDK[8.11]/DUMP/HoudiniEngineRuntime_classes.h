// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x58 (Inherited: 0x28)
struct UHoudiniAsset : UObject {
	struct FString *a0b2ffa71b; // 0x28(0x10)
	struct U*9ce447c5cf* *9ce447c5cf; // 0x38(0x08)
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
	enum class *fdc64c1624 SessionType; // 0x28(0x01)
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
	enum class *8e1272711b ImportAxis; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	char bDoubleSidedGeometry : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x188(0x08)
	struct FBodyInstance *43c30a9fd5; // 0x190(0x230)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	int32 LightMapResolution; // 0x3c4(0x04)
	float LpvBiasMultiplier; // 0x3c8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3cc(0x04)
	struct F*630cf25516 WalkableSlopeOverride; // 0x3d0(0x10)
	int32 LightMapCoordinateIndex; // 0x3e0(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x3e4(0x01)
	char pad_3E4_1 : 7; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	float StreamingDistanceMultiplier; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UFoliageType_InstancedStaticMesh* *28877f3350; // 0x3f0(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x3f8(0x10)
	bool bUseFullPrecisionUVs; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32 SrcLightmapIndex; // 0x40c(0x04)
	int32 DstLightmapIndex; // 0x410(0x04)
	int32 MinLightmapResolution; // 0x414(0x04)
	bool bRemoveDegenerates; // 0x418(0x01)
	enum class *18222d9c8c GenerateLightmapUVsFlag; // 0x419(0x01)
	enum class *18222d9c8c RecomputeNormalsFlag; // 0x41a(0x01)
	enum class *18222d9c8c RecomputeTangentsFlag; // 0x41b(0x01)
	bool bUseMikkTSpace; // 0x41c(0x01)
	bool bBuildAdjacencyBuffer; // 0x41d(0x01)
	bool bUseCustomHoudiniLocation; // 0x41e(0x01)
	char pad_41F[0x1]; // 0x41f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x420(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct F*edb67ecb96> CustomHoudiniToolsLocation; // 0x438(0x10)
	int32 CookingThreadStackSize; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x450(0x10)
	struct FString OtlSearchPath; // 0x460(0x10)
	struct FString DsoSearchPath; // 0x470(0x10)
	struct FString ImageDsoSearchPath; // 0x480(0x10)
	struct FString AudioDsoSearchPath; // 0x490(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x1260 (Inherited: 0x990)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *dc67542aa7 : 1; // 0x990(0x01)
	char pad_990_1 : 7; // 0x990(0x01)
	char pad_991[0x7]; // 0x991(0x07)
	struct UPhysicalMaterial* *1ab2e12a57; // 0x998(0x08)
	struct FBodyInstance *43c30a9fd5; // 0x9a0(0x230)
	enum class ECollisionTraceFlag *2b737a2b6a; // 0xbd0(0x01)
	char pad_BD1[0x3]; // 0xbd1(0x03)
	int32 *32f561112a; // 0xbd4(0x04)
	float GeneratedLpvBiasMultiplier; // 0xbd8(0x04)
	float *f1bdc8c46c; // 0xbdc(0x04)
	struct F*630cf25516 *3cafead770; // 0xbe0(0x10)
	int32 *9e75667e0a; // 0xbf0(0x04)
	char *0a2ac72b64 : 1; // 0xbf4(0x01)
	char pad_BF4_1 : 7; // 0xbf4(0x01)
	char pad_BF5[0x3]; // 0xbf5(0x03)
	float *0df7e49436; // 0xbf8(0x04)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct UFoliageType_InstancedStaticMesh* *1f2158f21e; // 0xc00(0x08)
	struct TArray<struct UAssetUserData*> *dab70d92a6; // 0xc08(0x10)
	char pad_C18[0x478]; // 0xc18(0x478)
	struct FText BakeFolder; // 0x1090(0x18)
	struct FText *ccde7a89c6; // 0x10a8(0x18)
	char pad_10C0[0x1a0]; // 0x10c0(0x1a0)

	void *ed8599e9a3(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*ed8599e9a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68df03c
};

// Class HoudiniEngineRuntime.*86b316fb3a
// Size: 0xd0 (Inherited: 0x28)
struct U*86b316fb3a : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class HoudiniEngineRuntime.*29d52f49b9
// Size: 0xa0 (Inherited: 0x28)
struct U*29d52f49b9 : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class HoudiniEngineRuntime.*750179b4c4
// Size: 0x180 (Inherited: 0xa0)
struct U*750179b4c4 : U*29d52f49b9 {
	char pad_A0[0xe0]; // 0xa0(0xe0)
};

// Class HoudiniEngineRuntime.*469db26921
// Size: 0x1a0 (Inherited: 0x28)
struct U*469db26921 : UObject {
	char pad_28[0x178]; // 0x28(0x178)
};

// Class HoudiniEngineRuntime.*a4e2f31c50
// Size: 0x230 (Inherited: 0xa0)
struct U*a4e2f31c50 : U*29d52f49b9 {
	char pad_A0[0x190]; // 0xa0(0x190)
};

// Class HoudiniEngineRuntime.*a505cadabf
// Size: 0xa0 (Inherited: 0xa0)
struct U*a505cadabf : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*f3102a0d76
// Size: 0xd8 (Inherited: 0xa0)
struct U*f3102a0d76 : U*29d52f49b9 {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.*1d01217c9a
// Size: 0xb0 (Inherited: 0xa0)
struct U*1d01217c9a : U*29d52f49b9 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*ef2f8a9bb4
// Size: 0xc8 (Inherited: 0xa0)
struct U*ef2f8a9bb4 : U*29d52f49b9 {
	char pad_A0[0x28]; // 0xa0(0x28)
};

// Class HoudiniEngineRuntime.*b005ed49b9
// Size: 0xd8 (Inherited: 0xa0)
struct U*b005ed49b9 : U*29d52f49b9 {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.*f6585ff4a4
// Size: 0xa0 (Inherited: 0xa0)
struct U*f6585ff4a4 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*c5eacc0b53
// Size: 0xa0 (Inherited: 0xa0)
struct U*c5eacc0b53 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*ca2682db54
// Size: 0xd0 (Inherited: 0xa0)
struct U*ca2682db54 : U*29d52f49b9 {
	char pad_A0[0x30]; // 0xa0(0x30)
};

// Class HoudiniEngineRuntime.*f1dd07a567
// Size: 0xa0 (Inherited: 0xa0)
struct U*f1dd07a567 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*30d46d52a9
// Size: 0xb0 (Inherited: 0xa0)
struct U*30d46d52a9 : U*29d52f49b9 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*33e216668c
// Size: 0xb0 (Inherited: 0xa8)
struct U*33e216668c : UCurveFloat {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class HoudiniEngineRuntime.*aa26a70ef5
// Size: 0x208 (Inherited: 0x1f0)
struct U*aa26a70ef5 : U*e9d5a49b26 {
	char pad_1F0[0x18]; // 0x1f0(0x18)
};

// Class HoudiniEngineRuntime.*0e30f15a0e
// Size: 0xc8 (Inherited: 0xb0)
struct U*0e30f15a0e : U*30d46d52a9 {
	char pad_B0[0x18]; // 0xb0(0x18)
};

// Class HoudiniEngineRuntime.*dfea948959
// Size: 0xa0 (Inherited: 0xa0)
struct U*dfea948959 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*8db5a65ba4
// Size: 0xb0 (Inherited: 0xa0)
struct U*8db5a65ba4 : U*29d52f49b9 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*28f72b6809
// Size: 0xb0 (Inherited: 0xa0)
struct U*28f72b6809 : U*29d52f49b9 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*aa3212724c
// Size: 0x200 (Inherited: 0x1f0)
struct U*aa3212724c : UActorComponent {
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

// Class HoudiniEngineRuntime.*1575bf57f2
// Size: 0x510 (Inherited: 0x460)
struct U*1575bf57f2 : USceneComponent {
	char pad_460[0xa8]; // 0x460(0xa8)
	enum class EHoudiniHandleType *cd861743bd; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
};

// Class HoudiniEngineRuntime.*73468efbc3
// Size: 0x470 (Inherited: 0x460)
struct U*73468efbc3 : USceneComponent {
	struct UObject* *c07cfa4782; // 0x458(0x08)
	struct TArray<struct AActor*> Instances; // 0x460(0x10)
};

// Class HoudiniEngineRuntime.*e50121d2dc
// Size: 0x480 (Inherited: 0x460)
struct U*e50121d2dc : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x458(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x468(0x08)
	struct UStaticMesh* InstancedMesh; // 0x470(0x08)
};

// Class HoudiniEngineRuntime.*dd0d4b4966
// Size: 0x560 (Inherited: 0x460)
struct U*dd0d4b4966 : USceneComponent {
	char pad_460[0x100]; // 0x460(0x100)
};

// Class HoudiniEngineRuntime.*c3431d55a3
// Size: 0xc8 (Inherited: 0x28)
struct U*c3431d55a3 : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

