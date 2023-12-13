// Class Landscape.ControlPointMeshComponent
// Size: 0xb50 (Inherited: 0xb50)
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeComponent
// Size: 0xb10 (Inherited: 0x9b0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9a8(0x04)
	int32 SectionBaseY; // 0x9ac(0x04)
	int32 *54a300c73c; // 0x9b0(0x04)
	int32 *0ac6c17a96; // 0x9b4(0x04)
	int32 *05ea8d542a; // 0x9b8(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x9c0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x9c8(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x9d0(0x10)
	struct TArray<struct F*4fee740a0d> *1f3b7254ae; // 0x9e0(0x10)
	struct TArray<struct UTexture2D*> *4c9232b568; // 0x9f0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa00(0x08)
	struct FIntPoint *338e1bb7a0; // 0xa08(0x08)
	struct FVector4 *5ff691d859; // 0xa10(0x10)
	float *0da2b6f976; // 0xa20(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa28(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa30(0x08)
	struct FBox *8d62646241; // 0xa38(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xa54(0x1c)
	struct FGuid *f0a9768bcf; // 0xa70(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xa80(0x10)
	int32 CollisionMipLevel; // 0xa90(0x04)
	int32 *dcd63fdeac; // 0xa94(0x04)
	float *6dc77033e2; // 0xa98(0x04)
	float *ba25840801; // 0xa9c(0x04)
	float StaticLightingResolution; // 0xaa0(0x04)
	int32 ForcedLOD; // 0xaa4(0x04)
	int32 LODBias; // 0xaa8(0x04)
	struct FGuid *0ce71e6b22; // 0xaac(0x10)
	struct FGuid *3b8f06b235; // 0xabc(0x10)
	char pad_ACC[0x4]; // 0xacc(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xad0(0x08)
	bool *6f4162ec76; // 0xad8(0x01)
	bool *43a67787b6; // 0xad9(0x01)
	char pad_ADA[0x6]; // 0xada(0x06)
	struct UMaterialInterface* *1be858469e; // 0xae0(0x08)
	struct UTexture2D* *348709cf49; // 0xae8(0x08)
	char pad_AF0[0x20]; // 0xaf0(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3f0 (Inherited: 0x3f0)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x440 (Inherited: 0x3f0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_3F0[0x50]; // 0x3f0(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x9b0 (Inherited: 0x9b0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.*3f112a2a4a
// Size: 0x60 (Inherited: 0x30)
struct U*3f112a2a4a : UObject {
	struct TArray<struct F*470e577a1b> *f1f05cedb9; // 0x30(0x10)
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
	struct TArray<struct ULandscapeLayerInfoObject*> *4651115958; // 0x9a8(0x10)
	int32 *69a0ad9f89; // 0x9b8(0x04)
	int32 *7b9896e8d4; // 0x9bc(0x04)
	int32 *79567fcf21; // 0x9c0(0x04)
	float *5f88168dea; // 0x9c4(0x04)
	int32 *f2521a8ad4; // 0x9c8(0x04)
	int32 *596a69ae94; // 0x9cc(0x04)
	struct TArray<bool> *ff29e1ddbf; // 0x9d0(0x10)
	struct FGuid *1cb000e4af; // 0x9e0(0x10)
	struct FBox *8d62646241; // 0x9f0(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa0c(0x1c)
	char pad_A30[0x78]; // 0xa30(0x78)
	struct TArray<struct UPhysicalMaterial*> *8fae1bb6aa; // 0xaa8(0x10)
	char pad_AB8[0x58]; // 0xab8(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb30 (Inherited: 0xb10)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *3fe167b539; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x208 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x30(0x1c)
	struct FGuid *a377647193; // 0x4c(0x10)
	int32 *54a300c73c; // 0x5c(0x04)
	int32 *0ac6c17a96; // 0x60(0x04)
	int32 *1e61d4f3bd; // 0x64(0x04)
	struct FVector *3a440c2823; // 0x68(0x0c)
	char pad_74[0x54]; // 0x74(0x54)
	SetProperty *67fb669d8c; // 0xc8(0x50)
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
	char *57ec65843c : 1; // 0x1e8(0x01)
	char *23c7655535 : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Landscape.*4a326939f5
// Size: 0x240 (Inherited: 0x1f0)
struct U*4a326939f5 : ULandscapeMaterialInstanceConstant {
	char pad_1F0[0x50]; // 0x1f0(0x50)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ALandscapeMeshProxyActor : AActor {
	struct U*b5c217f432* LandscapeMeshProxyComponent; // 0x3f0(0x08)
};

// Class Landscape.*b5c217f432
// Size: 0xb80 (Inherited: 0xb50)
struct U*b5c217f432 : UStaticMeshComponent {
	struct FGuid *a377647193; // 0xb50(0x10)
	struct TArray<struct FIntPoint> *faa5075fd7; // 0xb60(0x10)
	int8 *11b2d6bbfc; // 0xb70(0x01)
	char pad_B71[0xf]; // 0xb71(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x830 (Inherited: 0x3f0)
struct ALandscapeProxy : AActor {
	struct FGuid *a377647193; // 0x3f0(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x400(0x08)
	int32 *54a300c73c; // 0x408(0x04)
	int32 *0ac6c17a96; // 0x40c(0x04)
	int32 *05ea8d542a; // 0x410(0x04)
	struct FIntPoint *7c8732156f; // 0x414(0x08)
	int32 MaxLODLevel; // 0x41c(0x04)
	float LODDistanceFactor; // 0x420(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	int32 *c7a42801e0; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x430(0x08)
	float StreamingDistanceMultiplier; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x440(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	float *6dc77033e2; // 0x450(0x04)
	float *ba25840801; // 0x454(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x458(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *3c9dc87539; // 0x468(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *684d466ca0; // 0x478(0x10)
	char pad_488[0x60]; // 0x488(0x60)
	char *c54d3d7caa : 1; // 0x4e8(0x01)
	char bCastStaticShadow : 1; // 0x4e8(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e8(0x01)
	char bCastFarShadow : 1; // 0x4e8(0x01)
	char *8674a790fb : 1; // 0x4e8(0x01)
	char bRenderCustomDepth : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char *78d4b525b3 : 1; // 0x4e8(0x01)
	char *2e30b51a7f : 1; // 0x4e9(0x01)
	char *badd1b31e9 : 1; // 0x4e9(0x01)
	char pad_4E9_2 : 6; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float StaticLightingResolution; // 0x4ec(0x04)
	struct FLightingChannels LightingChannels; // 0x4f0(0x03)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	int32 CustomDepthStencilValue; // 0x4f4(0x04)
	struct F*886b75ca22 LightmassSettings; // 0x4f8(0x18)
	int32 CollisionMipLevel; // 0x510(0x04)
	int32 *dcd63fdeac; // 0x514(0x04)
	float *ff57d72168; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class ENavDataGatheringMode *c609dcac1c; // 0x750(0x01)
	char pad_751[0xdf]; // 0x751(0xdf)

	struct ULandscapeLayerInfoObject* *8e60c8a685(); // Function Landscape.LandscapeProxy.*8e60c8a685 // Final|Native|Public|BlueprintCallable // @ game+0x5dd17a8
	float *85b6178615(); // Function Landscape.LandscapeProxy.*85b6178615 // Native|Public|BlueprintCallable // @ game+0x571770c
};

// Class Landscape.Landscape
// Size: 0x830 (Inherited: 0x830)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x850 (Inherited: 0x830)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x830(0x1c)
	char pad_84C[0x4]; // 0x84c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x9e0 (Inherited: 0x9b0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9a8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x9b8(0x10)
	struct TArray<struct UMeshComponent*> *8c6b6d1d8f; // 0x9c8(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct F*a63a17b3f5 Connections[0x02]; // 0x30(0x30)
	struct FInterpCurveVector *5a751077c8; // 0x60(0x18)
	struct TArray<struct F*a4d9a5cab7> Points; // 0x78(0x10)
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
	float *f91325efb7; // 0x4c(0x04)
	float *7e24cc72c7; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*930a482f5a> *bf0c2772c0; // 0x58(0x10)
	struct TArray<struct F*a4d9a5cab7> Points; // 0x68(0x10)
	struct FBox Bounds; // 0x78(0x1c)
	char pad_94[0x4]; // 0x94(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x98(0x08)
};

// Class Landscape.*474089e4e8
// Size: 0x1b8 (Inherited: 0x68)
struct U*474089e4e8 : U*2f7623087a {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput DiffuseTexture; // 0xa0(0x38)
	struct FExpressionInput NormalTexture; // 0xd8(0x38)
	struct FExpressionInput *348bb2435f; // 0x110(0x38)
	struct FExpressionInput *2c4e3104a0; // 0x148(0x38)
	struct TArray<struct F*6a1396b157> Layers; // 0x180(0x10)
	uint32 *2c3844493a; // 0x190(0x04)
	struct FGuid *4dd4dd7063; // 0x194(0x10)
	char pad_1A4[0x14]; // 0x1a4(0x14)
};

// Class Landscape.*93eed0c1b9
// Size: 0x78 (Inherited: 0x68)
struct U*93eed0c1b9 : U*f8e25a8f91 {
	struct TArray<struct F*d053db420f> *ac76cc1fea; // 0x68(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*eba2673b3d> Layers; // 0x68(0x10)
	struct FGuid *4dd4dd7063; // 0x78(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x80 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *16f2ea5793 *f1410106d5; // 0x68(0x01)
	enum class *43dabfad1d *ded03f4517; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float *6f268af525; // 0x6c(0x04)
	float *dc0390995d; // 0x70(0x04)
	float *f56b6f98b5; // 0x74(0x04)
	float *47c16159c9; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.*4f4884f135
// Size: 0x88 (Inherited: 0x68)
struct U*4f4884f135 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	float *06fa26c45b; // 0x70(0x04)
	struct FGuid *4dd4dd7063; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf8 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *a17520abbb; // 0x68(0x38)
	struct FExpressionInput *96c190da47; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	char *c273704b5e : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGuid *4dd4dd7063; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Layer; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	float *06fa26c45b; // 0xe0(0x04)
	struct FVector *342912e00a; // 0xe4(0x0c)
	struct FGuid *4dd4dd7063; // 0xf0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *4dd4dd7063; // 0x68(0x10)
};

