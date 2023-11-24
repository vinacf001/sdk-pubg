// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x60 (Inherited: 0x30)
struct UHoudiniAsset : UObject {
	struct FString *93807a220f; // 0x30(0x10)
	struct U*31e2af0749* *31e2af0749; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x418 (Inherited: 0x408)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x408(0x08)
	char pad_410[0x8]; // 0x410(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4b0 (Inherited: 0x30)
struct UHoudiniRuntimeSettings : UObject {
	enum class *50bc741638 SessionType; // 0x30(0x01)
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
	enum class *94bd113afd ImportAxis; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bDoubleSidedGeometry : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct FBodyInstance *2f12898ea3; // 0x1a0(0x230)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32 LightMapResolution; // 0x3d4(0x04)
	float LpvBiasMultiplier; // 0x3d8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3dc(0x04)
	struct F*de38513b35 WalkableSlopeOverride; // 0x3e0(0x10)
	int32 LightMapCoordinateIndex; // 0x3f0(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x3f4(0x01)
	char pad_3F4_1 : 7; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float StreamingDistanceMultiplier; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UFoliageType_InstancedStaticMesh* *43243c2540; // 0x400(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x408(0x10)
	bool bUseFullPrecisionUVs; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32 SrcLightmapIndex; // 0x41c(0x04)
	int32 DstLightmapIndex; // 0x420(0x04)
	int32 MinLightmapResolution; // 0x424(0x04)
	bool bRemoveDegenerates; // 0x428(0x01)
	enum class *0ad53bb409 GenerateLightmapUVsFlag; // 0x429(0x01)
	enum class *0ad53bb409 RecomputeNormalsFlag; // 0x42a(0x01)
	enum class *0ad53bb409 RecomputeTangentsFlag; // 0x42b(0x01)
	bool bUseMikkTSpace; // 0x42c(0x01)
	bool bBuildAdjacencyBuffer; // 0x42d(0x01)
	bool bUseCustomHoudiniLocation; // 0x42e(0x01)
	char pad_42F[0x1]; // 0x42f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x430(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct F*394bf1e9ca> CustomHoudiniToolsLocation; // 0x448(0x10)
	int32 CookingThreadStackSize; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x460(0x10)
	struct FString OtlSearchPath; // 0x470(0x10)
	struct FString DsoSearchPath; // 0x480(0x10)
	struct FString ImageDsoSearchPath; // 0x490(0x10)
	struct FString AudioDsoSearchPath; // 0x4a0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x12d0 (Inherited: 0xa00)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *8839fb2ddc : 1; // 0xa00(0x01)
	char pad_A00_1 : 7; // 0xa00(0x01)
	char pad_A01[0x7]; // 0xa01(0x07)
	struct UPhysicalMaterial* *204232cd47; // 0xa08(0x08)
	struct FBodyInstance *2f12898ea3; // 0xa10(0x230)
	enum class ECollisionTraceFlag *be8e09a3cd; // 0xc40(0x01)
	char pad_C41[0x3]; // 0xc41(0x03)
	int32 *9322652be1; // 0xc44(0x04)
	float GeneratedLpvBiasMultiplier; // 0xc48(0x04)
	float *bf4d9b30af; // 0xc4c(0x04)
	struct F*de38513b35 *1a6b38b284; // 0xc50(0x10)
	int32 *22723916d9; // 0xc60(0x04)
	char *0ce4ece21f : 1; // 0xc64(0x01)
	char pad_C64_1 : 7; // 0xc64(0x01)
	char pad_C65[0x3]; // 0xc65(0x03)
	float *3d19e21e6d; // 0xc68(0x04)
	char pad_C6C[0x4]; // 0xc6c(0x04)
	struct UFoliageType_InstancedStaticMesh* *cd4a4ecb96; // 0xc70(0x08)
	struct TArray<struct UAssetUserData*> *84b4b3b9b1; // 0xc78(0x10)
	char pad_C88[0x478]; // 0xc88(0x478)
	struct FText BakeFolder; // 0x1100(0x18)
	struct FText *e3dc78b1b5; // 0x1118(0x18)
	char pad_1130[0x1a0]; // 0x1130(0x1a0)

	void *6549d698f1(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*6549d698f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ba0de8
};

// Class HoudiniEngineRuntime.*49d0847695
// Size: 0xd8 (Inherited: 0x30)
struct U*49d0847695 : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class HoudiniEngineRuntime.*7ca87db113
// Size: 0xa8 (Inherited: 0x30)
struct U*7ca87db113 : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class HoudiniEngineRuntime.*5710129a72
// Size: 0x190 (Inherited: 0xa8)
struct U*5710129a72 : U*7ca87db113 {
	char pad_A8[0xe8]; // 0xa8(0xe8)
};

// Class HoudiniEngineRuntime.*1b1b00a0d7
// Size: 0x1b0 (Inherited: 0x30)
struct U*1b1b00a0d7 : UObject {
	char pad_30[0x180]; // 0x30(0x180)
};

// Class HoudiniEngineRuntime.*656b7997f1
// Size: 0x240 (Inherited: 0xa8)
struct U*656b7997f1 : U*7ca87db113 {
	char pad_A8[0x198]; // 0xa8(0x198)
};

// Class HoudiniEngineRuntime.*22b51864b4
// Size: 0xa8 (Inherited: 0xa8)
struct U*22b51864b4 : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*2d17d3981f
// Size: 0xe0 (Inherited: 0xa8)
struct U*2d17d3981f : U*7ca87db113 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*a992589925
// Size: 0xb8 (Inherited: 0xa8)
struct U*a992589925 : U*7ca87db113 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*6d09dd239e
// Size: 0xd0 (Inherited: 0xa8)
struct U*6d09dd239e : U*7ca87db113 {
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class HoudiniEngineRuntime.*343082fe94
// Size: 0xe0 (Inherited: 0xa8)
struct U*343082fe94 : U*7ca87db113 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*a0dabf2822
// Size: 0xa8 (Inherited: 0xa8)
struct U*a0dabf2822 : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*f64b6b7fea
// Size: 0xa8 (Inherited: 0xa8)
struct U*f64b6b7fea : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*cb5659bb90
// Size: 0xd8 (Inherited: 0xa8)
struct U*cb5659bb90 : U*7ca87db113 {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class HoudiniEngineRuntime.*20f8dc9b4c
// Size: 0xa8 (Inherited: 0xa8)
struct U*20f8dc9b4c : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*7e4574ec29
// Size: 0xb8 (Inherited: 0xa8)
struct U*7e4574ec29 : U*7ca87db113 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*1d31d2af17
// Size: 0xb8 (Inherited: 0xb0)
struct U*1d31d2af17 : UCurveFloat {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class HoudiniEngineRuntime.*0ef274f4ec
// Size: 0x210 (Inherited: 0x1f8)
struct U*0ef274f4ec : U*1fa4fa0482 {
	char pad_1F8[0x18]; // 0x1f8(0x18)
};

// Class HoudiniEngineRuntime.*6d4b1184a2
// Size: 0xd0 (Inherited: 0xb8)
struct U*6d4b1184a2 : U*7e4574ec29 {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class HoudiniEngineRuntime.*35830b6ccf
// Size: 0xa8 (Inherited: 0xa8)
struct U*35830b6ccf : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*ea42fc3194
// Size: 0xb8 (Inherited: 0xa8)
struct U*ea42fc3194 : U*7ca87db113 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*d25a644b64
// Size: 0xb8 (Inherited: 0xa8)
struct U*d25a644b64 : U*7ca87db113 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*e2b4d0409b
// Size: 0x210 (Inherited: 0x200)
struct U*e2b4d0409b : UActorComponent {
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

// Class HoudiniEngineRuntime.*757d92f217
// Size: 0x590 (Inherited: 0x4d0)
struct U*757d92f217 : USceneComponent {
	char pad_4D0[0xb0]; // 0x4d0(0xb0)
	enum class EHoudiniHandleType *6350cb5a66; // 0x580(0x01)
	char pad_581[0xf]; // 0x581(0x0f)
};

// Class HoudiniEngineRuntime.*c03f511763
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*c03f511763 : USceneComponent {
	struct UObject* *7898a8d882; // 0x4d0(0x08)
	struct TArray<struct AActor*> Instances; // 0x4d8(0x10)
	char pad_4E8[0x8]; // 0x4e8(0x08)
};

// Class HoudiniEngineRuntime.*177b28cef9
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*177b28cef9 : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x4d0(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x4e0(0x08)
	struct UStaticMesh* InstancedMesh; // 0x4e8(0x08)
};

// Class HoudiniEngineRuntime.*40ebb285b6
// Size: 0x5d0 (Inherited: 0x4d0)
struct U*40ebb285b6 : USceneComponent {
	char pad_4D0[0x100]; // 0x4d0(0x100)
};

// Class HoudiniEngineRuntime.*055562dd89
// Size: 0xd0 (Inherited: 0x30)
struct U*055562dd89 : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

