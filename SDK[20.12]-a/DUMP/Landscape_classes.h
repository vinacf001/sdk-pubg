// Class Landscape.ControlPointMeshComponent
// Size: 0xb50 (Inherited: 0xb50)
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeComponent
// Size: 0xb10 (Inherited: 0x9b0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9a8(0x04)
	int32 SectionBaseY; // 0x9ac(0x04)
	int32 *d055000974; // 0x9b0(0x04)
	int32 *68e76b8922; // 0x9b4(0x04)
	int32 *19b1916189; // 0x9b8(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x9c0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x9c8(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x9d0(0x10)
	struct TArray<struct F*9c6bf22dfd> *f936063513; // 0x9e0(0x10)
	struct TArray<struct UTexture2D*> *7561b02403; // 0x9f0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa00(0x08)
	struct FIntPoint *fe9ce290d3; // 0xa08(0x08)
	struct FVector4 *ebfd171426; // 0xa10(0x10)
	float *59b0f2a591; // 0xa20(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa28(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa30(0x08)
	struct FBox *7f7379b79b; // 0xa38(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xa54(0x1c)
	struct FGuid *e3f41cb182; // 0xa70(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xa80(0x10)
	int32 CollisionMipLevel; // 0xa90(0x04)
	int32 *8ec627c2df; // 0xa94(0x04)
	float *4dfcc5462a; // 0xa98(0x04)
	float *b0b96a2019; // 0xa9c(0x04)
	float StaticLightingResolution; // 0xaa0(0x04)
	int32 ForcedLOD; // 0xaa4(0x04)
	int32 LODBias; // 0xaa8(0x04)
	struct FGuid *22e2843827; // 0xaac(0x10)
	struct FGuid *8f2091355b; // 0xabc(0x10)
	char pad_ACC[0x4]; // 0xacc(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xad0(0x08)
	bool *22f2998e1c; // 0xad8(0x01)
	bool *210689fbd8; // 0xad9(0x01)
	char pad_ADA[0x6]; // 0xada(0x06)
	struct UMaterialInterface* *4b2a409967; // 0xae0(0x08)
	struct UTexture2D* *384751e576; // 0xae8(0x08)
	char pad_AF0[0x20]; // 0xaf0(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3e8 (Inherited: 0x3e8)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x438 (Inherited: 0x3e8)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_3E8[0x50]; // 0x3e8(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x9b0 (Inherited: 0x9b0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.*6e0e7da5cb
// Size: 0x60 (Inherited: 0x30)
struct U*6e0e7da5cb : UObject {
	struct TArray<struct F*cfabf56edb> *6c0db10ba0; // 0x30(0x10)
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
// Size: 0xb10 (Inherited: 0x9b0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *00923c66f0; // 0x9a8(0x10)
	int32 *853fb5af27; // 0x9b8(0x04)
	int32 *55a90fcc51; // 0x9bc(0x04)
	int32 *42777cca9e; // 0x9c0(0x04)
	float *a1aaa7d3ee; // 0x9c4(0x04)
	int32 *06e312b842; // 0x9c8(0x04)
	int32 *00245dd1ff; // 0x9cc(0x04)
	struct TArray<bool> *df1c7a6f44; // 0x9d0(0x10)
	struct FGuid *564764486c; // 0x9e0(0x10)
	struct FBox *7f7379b79b; // 0x9f0(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa0c(0x1c)
	char pad_A30[0x78]; // 0xa30(0x78)
	struct TArray<struct UPhysicalMaterial*> *b6a490c36e; // 0xaa8(0x10)
	char pad_AB8[0x58]; // 0xab8(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb30 (Inherited: 0xb10)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *9d1beee753; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x208 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x30(0x1c)
	struct FGuid *092efd01cf; // 0x4c(0x10)
	int32 *d055000974; // 0x5c(0x04)
	int32 *68e76b8922; // 0x60(0x04)
	int32 *b553abda4a; // 0x64(0x04)
	struct FVector *c617125585; // 0x68(0x0c)
	char pad_74[0x54]; // 0x74(0x54)
	SetProperty *8f1c552131; // 0xc8(0x50)
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
	char *38f0bd28e7 : 1; // 0x1e8(0x01)
	char *79a8acf0ce : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Landscape.*10fa88636b
// Size: 0x240 (Inherited: 0x1f0)
struct U*10fa88636b : ULandscapeMaterialInstanceConstant {
	char pad_1F0[0x50]; // 0x1f0(0x50)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALandscapeMeshProxyActor : AActor {
	struct U*d893ef6d59* LandscapeMeshProxyComponent; // 0x3e8(0x08)
};

// Class Landscape.*d893ef6d59
// Size: 0xb80 (Inherited: 0xb50)
struct U*d893ef6d59 : UStaticMeshComponent {
	struct FGuid *092efd01cf; // 0xb50(0x10)
	struct TArray<struct FIntPoint> *c284784497; // 0xb60(0x10)
	int8 *0455a4dc72; // 0xb70(0x01)
	char pad_B71[0xf]; // 0xb71(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x840 (Inherited: 0x3e8)
struct ALandscapeProxy : AActor {
	struct FGuid *092efd01cf; // 0x3e8(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x3f8(0x08)
	int32 *d055000974; // 0x400(0x04)
	int32 *68e76b8922; // 0x404(0x04)
	int32 *19b1916189; // 0x408(0x04)
	struct FIntPoint *e5c0825f6f; // 0x40c(0x08)
	int32 MaxLODLevel; // 0x414(0x04)
	float LODDistanceFactor; // 0x418(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	int32 *893095ad1a; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x428(0x08)
	float StreamingDistanceMultiplier; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x438(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x440(0x08)
	float *4dfcc5462a; // 0x448(0x04)
	float *b0b96a2019; // 0x44c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x450(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *77e13aa9d5; // 0x460(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *b4b54b8bb1; // 0x470(0x10)
	char pad_480[0x60]; // 0x480(0x60)
	char *4ab3bbd3c9 : 1; // 0x4e0(0x01)
	char bCastStaticShadow : 1; // 0x4e0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e0(0x01)
	char bCastFarShadow : 1; // 0x4e0(0x01)
	char *a82f837c9a : 1; // 0x4e0(0x01)
	char bRenderCustomDepth : 1; // 0x4e0(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e0(0x01)
	char *4e46c43eb9 : 1; // 0x4e0(0x01)
	char *1e953ca764 : 1; // 0x4e1(0x01)
	char *62265d5b98 : 1; // 0x4e1(0x01)
	char pad_4E1_2 : 6; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float StaticLightingResolution; // 0x4e4(0x04)
	struct FLightingChannels LightingChannels; // 0x4e8(0x03)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	int32 CustomDepthStencilValue; // 0x4ec(0x04)
	struct F*2ca2c467d8 LightmassSettings; // 0x4f0(0x18)
	int32 CollisionMipLevel; // 0x508(0x04)
	int32 *8ec627c2df; // 0x50c(0x04)
	float *5a7063e57a; // 0x510(0x04)
	char pad_514[0xc]; // 0x514(0x0c)
	struct FBodyInstance BodyInstance; // 0x520(0x240)
	enum class ENavDataGatheringMode *44a20f5dab; // 0x760(0x01)
	char pad_761[0xdf]; // 0x761(0xdf)

	void *1baf4ecef9(); // Function Landscape.LandscapeProxy.*1baf4ecef9 // Final|Native|Public|BlueprintCallable // @ game+0x645d208
	void *92781a162c(); // Function Landscape.LandscapeProxy.*92781a162c // Native|Public|BlueprintCallable // @ game+0x5dae2e8
};

// Class Landscape.Landscape
// Size: 0x840 (Inherited: 0x840)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x860 (Inherited: 0x840)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x840(0x1c)
	char pad_85C[0x4]; // 0x85c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x9e0 (Inherited: 0x9b0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9a8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x9b8(0x10)
	struct TArray<struct UMeshComponent*> *4e22c3e529; // 0x9c8(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct F*5550df6677 Connections[0x02]; // 0x30(0x30)
	struct FInterpCurveVector *54b9075731; // 0x60(0x18)
	struct TArray<struct F*ab910f8a3a> Points; // 0x78(0x10)
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
	float *ae77f36b15; // 0x4c(0x04)
	float *c93c986e18; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*bc59d0e956> *fa33a03449; // 0x58(0x10)
	struct TArray<struct F*ab910f8a3a> Points; // 0x68(0x10)
	struct FBox Bounds; // 0x78(0x1c)
	char pad_94[0x4]; // 0x94(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x98(0x08)
};

// Class Landscape.*3cadeb0b69
// Size: 0x1b8 (Inherited: 0x68)
struct U*3cadeb0b69 : U*4eb614635f {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput DiffuseTexture; // 0xa0(0x38)
	struct FExpressionInput NormalTexture; // 0xd8(0x38)
	struct FExpressionInput *ccc573c058; // 0x110(0x38)
	struct FExpressionInput *ff0a567e29; // 0x148(0x38)
	struct TArray<struct F*fea2a015d0> Layers; // 0x180(0x10)
	uint32 *f1a2401f68; // 0x190(0x04)
	struct FGuid *c328c6d3dd; // 0x194(0x10)
	char pad_1A4[0x14]; // 0x1a4(0x14)
};

// Class Landscape.*8834d12fb4
// Size: 0x78 (Inherited: 0x68)
struct U*8834d12fb4 : U*20b0f316ee {
	struct TArray<struct F*6afc48dff2> *5c9de64aba; // 0x68(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*6ced1ac491> Layers; // 0x68(0x10)
	struct FGuid *c328c6d3dd; // 0x78(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x80 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *7278ab9647 *d18540ef26; // 0x68(0x01)
	enum class *403caef90c *638203995d; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float *7078d1193f; // 0x6c(0x04)
	float *ddaaf801c1; // 0x70(0x04)
	float *0d2033a7e4; // 0x74(0x04)
	float *aeb480c6bc; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.*ef3355b528
// Size: 0x88 (Inherited: 0x68)
struct U*ef3355b528 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	float *fc7d182679; // 0x70(0x04)
	struct FGuid *c328c6d3dd; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf8 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *feeee00e3d; // 0x68(0x38)
	struct FExpressionInput *e96b55ea41; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	char *39a9230fc8 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGuid *c328c6d3dd; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Layer; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	float *fc7d182679; // 0xe0(0x04)
	struct FVector *6fb73d65ef; // 0xe4(0x0c)
	struct FGuid *c328c6d3dd; // 0xf0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *c328c6d3dd; // 0x68(0x10)
};

