// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x60 (Inherited: 0x30)
struct UHoudiniAsset : UObject {
	struct FString *a0b2ffa71b; // 0x30(0x10)
	struct U*9ce447c5cf* *9ce447c5cf; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x408 (Inherited: 0x3f8)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4b0 (Inherited: 0x30)
struct UHoudiniRuntimeSettings : UObject {
	enum class *fdc64c1624 SessionType; // 0x30(0x01)
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
	enum class *8e1272711b ImportAxis; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bDoubleSidedGeometry : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct FBodyInstance *43c30a9fd5; // 0x1a0(0x230)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32 LightMapResolution; // 0x3d4(0x04)
	float LpvBiasMultiplier; // 0x3d8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3dc(0x04)
	struct F*630cf25516 WalkableSlopeOverride; // 0x3e0(0x10)
	int32 LightMapCoordinateIndex; // 0x3f0(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x3f4(0x01)
	char pad_3F4_1 : 7; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float StreamingDistanceMultiplier; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UFoliageType_InstancedStaticMesh* *28877f3350; // 0x400(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x408(0x10)
	bool bUseFullPrecisionUVs; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32 SrcLightmapIndex; // 0x41c(0x04)
	int32 DstLightmapIndex; // 0x420(0x04)
	int32 MinLightmapResolution; // 0x424(0x04)
	bool bRemoveDegenerates; // 0x428(0x01)
	enum class *18222d9c8c GenerateLightmapUVsFlag; // 0x429(0x01)
	enum class *18222d9c8c RecomputeNormalsFlag; // 0x42a(0x01)
	enum class *18222d9c8c RecomputeTangentsFlag; // 0x42b(0x01)
	bool bUseMikkTSpace; // 0x42c(0x01)
	bool bBuildAdjacencyBuffer; // 0x42d(0x01)
	bool bUseCustomHoudiniLocation; // 0x42e(0x01)
	char pad_42F[0x1]; // 0x42f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x430(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct F*edb67ecb96> CustomHoudiniToolsLocation; // 0x448(0x10)
	int32 CookingThreadStackSize; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x460(0x10)
	struct FString OtlSearchPath; // 0x470(0x10)
	struct FString DsoSearchPath; // 0x480(0x10)
	struct FString ImageDsoSearchPath; // 0x490(0x10)
	struct FString AudioDsoSearchPath; // 0x4a0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x1270 (Inherited: 0x9a0)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *dc67542aa7 : 1; // 0x9a0(0x01)
	char pad_9A0_1 : 7; // 0x9a0(0x01)
	char pad_9A1[0x7]; // 0x9a1(0x07)
	struct UPhysicalMaterial* *1ab2e12a57; // 0x9a8(0x08)
	struct FBodyInstance *43c30a9fd5; // 0x9b0(0x230)
	enum class ECollisionTraceFlag *2b737a2b6a; // 0xbe0(0x01)
	char pad_BE1[0x3]; // 0xbe1(0x03)
	int32 *32f561112a; // 0xbe4(0x04)
	float GeneratedLpvBiasMultiplier; // 0xbe8(0x04)
	float *f1bdc8c46c; // 0xbec(0x04)
	struct F*630cf25516 *3cafead770; // 0xbf0(0x10)
	int32 *9e75667e0a; // 0xc00(0x04)
	char *0a2ac72b64 : 1; // 0xc04(0x01)
	char pad_C04_1 : 7; // 0xc04(0x01)
	char pad_C05[0x3]; // 0xc05(0x03)
	float *0df7e49436; // 0xc08(0x04)
	char pad_C0C[0x4]; // 0xc0c(0x04)
	struct UFoliageType_InstancedStaticMesh* *1f2158f21e; // 0xc10(0x08)
	struct TArray<struct UAssetUserData*> *dab70d92a6; // 0xc18(0x10)
	char pad_C28[0x478]; // 0xc28(0x478)
	struct FText BakeFolder; // 0x10a0(0x18)
	struct FText *ccde7a89c6; // 0x10b8(0x18)
	char pad_10D0[0x1a0]; // 0x10d0(0x1a0)

	void *ed8599e9a3(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*ed8599e9a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6af6d34
};

// Class HoudiniEngineRuntime.*86b316fb3a
// Size: 0xd8 (Inherited: 0x30)
struct U*86b316fb3a : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class HoudiniEngineRuntime.*29d52f49b9
// Size: 0xa8 (Inherited: 0x30)
struct U*29d52f49b9 : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class HoudiniEngineRuntime.*750179b4c4
// Size: 0x190 (Inherited: 0xa8)
struct U*750179b4c4 : U*29d52f49b9 {
	char pad_A8[0xe8]; // 0xa8(0xe8)
};

// Class HoudiniEngineRuntime.*469db26921
// Size: 0x1b0 (Inherited: 0x30)
struct U*469db26921 : UObject {
	char pad_30[0x180]; // 0x30(0x180)
};

// Class HoudiniEngineRuntime.*a4e2f31c50
// Size: 0x240 (Inherited: 0xa8)
struct U*a4e2f31c50 : U*29d52f49b9 {
	char pad_A8[0x198]; // 0xa8(0x198)
};

// Class HoudiniEngineRuntime.*a505cadabf
// Size: 0xa8 (Inherited: 0xa8)
struct U*a505cadabf : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*f3102a0d76
// Size: 0xe0 (Inherited: 0xa8)
struct U*f3102a0d76 : U*29d52f49b9 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*1d01217c9a
// Size: 0xb8 (Inherited: 0xa8)
struct U*1d01217c9a : U*29d52f49b9 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*ef2f8a9bb4
// Size: 0xd0 (Inherited: 0xa8)
struct U*ef2f8a9bb4 : U*29d52f49b9 {
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class HoudiniEngineRuntime.*b005ed49b9
// Size: 0xe0 (Inherited: 0xa8)
struct U*b005ed49b9 : U*29d52f49b9 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*f6585ff4a4
// Size: 0xa8 (Inherited: 0xa8)
struct U*f6585ff4a4 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*c5eacc0b53
// Size: 0xa8 (Inherited: 0xa8)
struct U*c5eacc0b53 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*ca2682db54
// Size: 0xd8 (Inherited: 0xa8)
struct U*ca2682db54 : U*29d52f49b9 {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class HoudiniEngineRuntime.*f1dd07a567
// Size: 0xa8 (Inherited: 0xa8)
struct U*f1dd07a567 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*30d46d52a9
// Size: 0xb8 (Inherited: 0xa8)
struct U*30d46d52a9 : U*29d52f49b9 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*33e216668c
// Size: 0xb8 (Inherited: 0xb0)
struct U*33e216668c : UCurveFloat {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class HoudiniEngineRuntime.*aa26a70ef5
// Size: 0x210 (Inherited: 0x1f8)
struct U*aa26a70ef5 : U*e9d5a49b26 {
	char pad_1F8[0x18]; // 0x1f8(0x18)
};

// Class HoudiniEngineRuntime.*0e30f15a0e
// Size: 0xd0 (Inherited: 0xb8)
struct U*0e30f15a0e : U*30d46d52a9 {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class HoudiniEngineRuntime.*dfea948959
// Size: 0xa8 (Inherited: 0xa8)
struct U*dfea948959 : U*29d52f49b9 {
};

// Class HoudiniEngineRuntime.*8db5a65ba4
// Size: 0xb8 (Inherited: 0xa8)
struct U*8db5a65ba4 : U*29d52f49b9 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*28f72b6809
// Size: 0xb8 (Inherited: 0xa8)
struct U*28f72b6809 : U*29d52f49b9 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*aa3212724c
// Size: 0x210 (Inherited: 0x200)
struct U*aa3212724c : UActorComponent {
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

// Class HoudiniEngineRuntime.*1575bf57f2
// Size: 0x520 (Inherited: 0x470)
struct U*1575bf57f2 : USceneComponent {
	char pad_470[0xa8]; // 0x470(0xa8)
	enum class EHoudiniHandleType *cd861743bd; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
};

// Class HoudiniEngineRuntime.*73468efbc3
// Size: 0x480 (Inherited: 0x470)
struct U*73468efbc3 : USceneComponent {
	struct UObject* *c07cfa4782; // 0x468(0x08)
	struct TArray<struct AActor*> Instances; // 0x470(0x10)
};

// Class HoudiniEngineRuntime.*e50121d2dc
// Size: 0x490 (Inherited: 0x470)
struct U*e50121d2dc : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x468(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x478(0x08)
	struct UStaticMesh* InstancedMesh; // 0x480(0x08)
};

// Class HoudiniEngineRuntime.*dd0d4b4966
// Size: 0x570 (Inherited: 0x470)
struct U*dd0d4b4966 : USceneComponent {
	char pad_470[0x100]; // 0x470(0x100)
};

// Class HoudiniEngineRuntime.*c3431d55a3
// Size: 0xd0 (Inherited: 0x30)
struct U*c3431d55a3 : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

