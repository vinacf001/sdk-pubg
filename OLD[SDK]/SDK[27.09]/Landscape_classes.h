// Class Landscape.ControlPointMeshComponent
// Size: 0xba0 (Inherited: 0xba0)
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeComponent
// Size: 0xb60 (Inherited: 0xa00)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9f8(0x04)
	int32 SectionBaseY; // 0x9fc(0x04)
	int32 *7dcda9b4a3; // 0xa00(0x04)
	int32 *e08946e5a5; // 0xa04(0x04)
	int32 *5cd5fd738e; // 0xa08(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0xa10(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0xa18(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0xa20(0x10)
	struct TArray<struct F*23fe8b97ca> *fd89319904; // 0xa30(0x10)
	struct TArray<struct UTexture2D*> *665d1ed139; // 0xa40(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa50(0x08)
	struct FIntPoint *6659267aa2; // 0xa58(0x08)
	struct FVector4 *09d715b250; // 0xa60(0x10)
	float *fbe12384ef; // 0xa70(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa78(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa80(0x08)
	struct FBox *f8b8cc76e9; // 0xa88(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xaa4(0x1c)
	struct FGuid *db40c61005; // 0xac0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xad0(0x10)
	int32 CollisionMipLevel; // 0xae0(0x04)
	int32 *3431eed4b8; // 0xae4(0x04)
	float *a8da434a60; // 0xae8(0x04)
	float *b2b842a97e; // 0xaec(0x04)
	float StaticLightingResolution; // 0xaf0(0x04)
	int32 ForcedLOD; // 0xaf4(0x04)
	int32 LODBias; // 0xaf8(0x04)
	struct FGuid *f498029bb1; // 0xafc(0x10)
	struct FGuid *ef92c76489; // 0xb0c(0x10)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xb20(0x08)
	bool *721691317e; // 0xb28(0x01)
	bool *c09245034f; // 0xb29(0x01)
	char pad_B2A[0x6]; // 0xb2a(0x06)
	struct UMaterialInterface* *af0bbba471; // 0xb30(0x08)
	struct UTexture2D* *e85769d689; // 0xb38(0x08)
	char pad_B40[0x20]; // 0xb40(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x408 (Inherited: 0x408)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x458 (Inherited: 0x408)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_408[0x50]; // 0x408(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0xa00 (Inherited: 0xa00)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.*d374a71f52
// Size: 0x60 (Inherited: 0x30)
struct U*d374a71f52 : UObject {
	struct TArray<struct F*8acfe3d510> *763370e7d5; // 0x30(0x10)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32 StartCullDistance; // 0x50(0x04)
	int32 EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0xb60 (Inherited: 0xa00)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *ab774c1a69; // 0x9f8(0x10)
	int32 *db4ec4ee4d; // 0xa08(0x04)
	int32 *82cda22089; // 0xa0c(0x04)
	int32 *088a0e97de; // 0xa10(0x04)
	float *e1945b8183; // 0xa14(0x04)
	int32 *cdc265c43b; // 0xa18(0x04)
	int32 *bc399488d0; // 0xa1c(0x04)
	struct TArray<bool> *96a237cc36; // 0xa20(0x10)
	struct FGuid *3bed5cc694; // 0xa30(0x10)
	struct FBox *f8b8cc76e9; // 0xa40(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa5c(0x1c)
	char pad_A80[0x78]; // 0xa80(0x78)
	struct TArray<struct UPhysicalMaterial*> *a0c84d3b0d; // 0xaf8(0x10)
	char pad_B08[0x58]; // 0xb08(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb80 (Inherited: 0xb60)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *4db96309e8; // 0xb60(0x10)
	char pad_B70[0x10]; // 0xb70(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x208 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x30(0x1c)
	struct FGuid *50b1b2bcf5; // 0x4c(0x10)
	int32 *7dcda9b4a3; // 0x5c(0x04)
	int32 *e08946e5a5; // 0x60(0x04)
	int32 *5ee64e2563; // 0x64(0x04)
	struct FVector *b304b2ccb8; // 0x68(0x0c)
	char pad_74[0x54]; // 0x74(0x54)
	SetProperty *f8b4640b92; // 0xc8(0x50)
	char pad_118[0xf0]; // 0x118(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x30)
struct ULandscapeInfoMap : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x58 (Inherited: 0x30)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x38(0x08)
	float Hardness; // 0x40(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1f0 (Inherited: 0x1e8)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char *32bf6ae483 : 1; // 0x1e8(0x01)
	char *2d07bab8a4 : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Landscape.*d381e13c73
// Size: 0x240 (Inherited: 0x1f0)
struct U*d381e13c73 : ULandscapeMaterialInstanceConstant {
	char pad_1F0[0x50]; // 0x1f0(0x50)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x410 (Inherited: 0x408)
struct ALandscapeMeshProxyActor : AActor {
	struct U*3109f0d891* LandscapeMeshProxyComponent; // 0x408(0x08)
};

// Class Landscape.*3109f0d891
// Size: 0xbd0 (Inherited: 0xba0)
struct U*3109f0d891 : UStaticMeshComponent {
	struct FGuid *50b1b2bcf5; // 0xba0(0x10)
	struct TArray<struct FIntPoint> *ee14f8a8f1; // 0xbb0(0x10)
	int8 *1322178fbc; // 0xbc0(0x01)
	char pad_BC1[0xf]; // 0xbc1(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x850 (Inherited: 0x408)
struct ALandscapeProxy : AActor {
	struct FGuid *50b1b2bcf5; // 0x408(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x418(0x08)
	int32 *7dcda9b4a3; // 0x420(0x04)
	int32 *e08946e5a5; // 0x424(0x04)
	int32 *5cd5fd738e; // 0x428(0x04)
	struct FIntPoint *a779aa0650; // 0x42c(0x08)
	int32 MaxLODLevel; // 0x434(0x04)
	float LODDistanceFactor; // 0x438(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	int32 *67b044c344; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x448(0x08)
	float StreamingDistanceMultiplier; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x458(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x460(0x08)
	float *a8da434a60; // 0x468(0x04)
	float *b2b842a97e; // 0x46c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x470(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *b0e468f16b; // 0x480(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *0c371843e9; // 0x490(0x10)
	char pad_4A0[0x60]; // 0x4a0(0x60)
	char *ef822a69ef : 1; // 0x500(0x01)
	char bCastStaticShadow : 1; // 0x500(0x01)
	char bCastShadowAsTwoSided : 1; // 0x500(0x01)
	char bCastFarShadow : 1; // 0x500(0x01)
	char *d7cb743792 : 1; // 0x500(0x01)
	char bRenderCustomDepth : 1; // 0x500(0x01)
	char bGenerateOverlapEvents : 1; // 0x500(0x01)
	char *165cddf3ab : 1; // 0x500(0x01)
	char *036977bfdf : 1; // 0x501(0x01)
	char *e3c1e4a69c : 1; // 0x501(0x01)
	char pad_501_2 : 6; // 0x501(0x01)
	char pad_502[0x2]; // 0x502(0x02)
	float StaticLightingResolution; // 0x504(0x04)
	struct FLightingChannels LightingChannels; // 0x508(0x03)
	char pad_50B[0x1]; // 0x50b(0x01)
	int32 CustomDepthStencilValue; // 0x50c(0x04)
	struct F*553842a41b LightmassSettings; // 0x510(0x18)
	int32 CollisionMipLevel; // 0x528(0x04)
	int32 *3431eed4b8; // 0x52c(0x04)
	float *f891ed25fe; // 0x530(0x04)
	char pad_534[0xc]; // 0x534(0x0c)
	struct FBodyInstance BodyInstance; // 0x540(0x230)
	enum class ENavDataGatheringMode *e2328b2504; // 0x770(0x01)
	char pad_771[0xdf]; // 0x771(0xdf)

	void *54123f40ad(); // Function Landscape.LandscapeProxy.*54123f40ad // Native|Public|BlueprintCallable // @ game+0x59bc584
	void *d761853308(); // Function Landscape.LandscapeProxy.*d761853308 // Final|Native|Public|BlueprintCallable // @ game+0x607eaa8
};

// Class Landscape.Landscape
// Size: 0x850 (Inherited: 0x850)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x870 (Inherited: 0x850)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x850(0x1c)
	char pad_86C[0x4]; // 0x86c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0xa30 (Inherited: 0xa00)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9f8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0xa08(0x10)
	struct TArray<struct UMeshComponent*> *f336e4865a; // 0xa18(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct F*ff3cf17aaa Connections[0x02]; // 0x30(0x30)
	struct FInterpCurveVector *f9cf80380d; // 0x60(0x18)
	struct TArray<struct F*aab78b57ff> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa0 (Inherited: 0x30)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float *88b343183c; // 0x4c(0x04)
	float *62da52f83d; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*12c2108e79> *d1346f6404; // 0x58(0x10)
	struct TArray<struct F*aab78b57ff> Points; // 0x68(0x10)
	struct FBox Bounds; // 0x78(0x1c)
	char pad_94[0x4]; // 0x94(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x98(0x08)
};

// Class Landscape.*588bec6323
// Size: 0x1b8 (Inherited: 0x68)
struct U*588bec6323 : U*699123f0e5 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput DiffuseTexture; // 0xa0(0x38)
	struct FExpressionInput NormalTexture; // 0xd8(0x38)
	struct FExpressionInput *f6b57af7ea; // 0x110(0x38)
	struct FExpressionInput *81913036a0; // 0x148(0x38)
	struct TArray<struct F*10f9d90122> Layers; // 0x180(0x10)
	uint32 *9d489d4a01; // 0x190(0x04)
	struct FGuid *eac668cb87; // 0x194(0x10)
	char pad_1A4[0x14]; // 0x1a4(0x14)
};

// Class Landscape.*9d9e797a5e
// Size: 0x78 (Inherited: 0x68)
struct U*9d9e797a5e : U*c9284c4e3d {
	struct TArray<struct F*6dc22a33b8> *dc537abae5; // 0x68(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*d753dc5f13> Layers; // 0x68(0x10)
	struct FGuid *eac668cb87; // 0x78(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x80 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *57a208675c *118377e594; // 0x68(0x01)
	enum class *61cb2cd339 *b8bc28864c; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float *3852e1ff95; // 0x6c(0x04)
	float *a9e3c79cb2; // 0x70(0x04)
	float *e2a463b92e; // 0x74(0x04)
	float *aa4029ef51; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.*9d8d53e578
// Size: 0x88 (Inherited: 0x68)
struct U*9d8d53e578 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	float *15508b18b6; // 0x70(0x04)
	struct FGuid *eac668cb87; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf8 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *b483fcd824; // 0x68(0x38)
	struct FExpressionInput *b1dcb595a1; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	char *d520e5faf7 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGuid *eac668cb87; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Layer; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	float *15508b18b6; // 0xe0(0x04)
	struct FVector *5f0ec7510f; // 0xe4(0x0c)
	struct FGuid *eac668cb87; // 0xf0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *eac668cb87; // 0x68(0x10)
};

