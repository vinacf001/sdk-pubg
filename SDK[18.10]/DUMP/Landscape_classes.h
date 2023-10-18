// Class Landscape.ControlPointMeshComponent
// Size: 0xba0 (Inherited: 0xba0)
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeComponent
// Size: 0xb60 (Inherited: 0xa00)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9f8(0x04)
	int32 SectionBaseY; // 0x9fc(0x04)
	int32 *ae877a5ca7; // 0xa00(0x04)
	int32 *7cd27fee79; // 0xa04(0x04)
	int32 *f53aeea43c; // 0xa08(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0xa10(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0xa18(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0xa20(0x10)
	struct TArray<struct F*43cbdd6c74> *142b6ba148; // 0xa30(0x10)
	struct TArray<struct UTexture2D*> *e2dcadf472; // 0xa40(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa50(0x08)
	struct FIntPoint *b5170de595; // 0xa58(0x08)
	struct FVector4 *41cd37b126; // 0xa60(0x10)
	float *a5c960f89a; // 0xa70(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa78(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa80(0x08)
	struct FBox *70a61447e2; // 0xa88(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xaa4(0x1c)
	struct FGuid *74c3d5c08e; // 0xac0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xad0(0x10)
	int32 CollisionMipLevel; // 0xae0(0x04)
	int32 *8bb396e6d2; // 0xae4(0x04)
	float *4fb34d5583; // 0xae8(0x04)
	float *c154edc768; // 0xaec(0x04)
	float StaticLightingResolution; // 0xaf0(0x04)
	int32 ForcedLOD; // 0xaf4(0x04)
	int32 LODBias; // 0xaf8(0x04)
	struct FGuid *1089ccbf97; // 0xafc(0x10)
	struct FGuid *c396f42499; // 0xb0c(0x10)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xb20(0x08)
	bool *25b70db826; // 0xb28(0x01)
	bool *4e2c740a8d; // 0xb29(0x01)
	char pad_B2A[0x6]; // 0xb2a(0x06)
	struct UMaterialInterface* *ede4e55fdb; // 0xb30(0x08)
	struct UTexture2D* *52a311f29a; // 0xb38(0x08)
	char pad_B40[0x20]; // 0xb40(0x20)
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
// Size: 0xa00 (Inherited: 0xa00)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.*36c3e95555
// Size: 0x60 (Inherited: 0x30)
struct U*36c3e95555 : UObject {
	struct TArray<struct F*4aaf79b99f> *6873070d3f; // 0x30(0x10)
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
	struct TArray<struct ULandscapeLayerInfoObject*> *87d2cc2790; // 0x9f8(0x10)
	int32 *4ac326c37f; // 0xa08(0x04)
	int32 *be4e6b8996; // 0xa0c(0x04)
	int32 *64c0672163; // 0xa10(0x04)
	float *b17cccdb80; // 0xa14(0x04)
	int32 *268e0c01e5; // 0xa18(0x04)
	int32 *1badd2d387; // 0xa1c(0x04)
	struct TArray<bool> *97621b70d5; // 0xa20(0x10)
	struct FGuid *a18ad97c9c; // 0xa30(0x10)
	struct FBox *70a61447e2; // 0xa40(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa5c(0x1c)
	char pad_A80[0x78]; // 0xa80(0x78)
	struct TArray<struct UPhysicalMaterial*> *b7ba9231c5; // 0xaf8(0x10)
	char pad_B08[0x58]; // 0xb08(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb80 (Inherited: 0xb60)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *15f8f23f22; // 0xb60(0x10)
	char pad_B70[0x10]; // 0xb70(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x208 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x30(0x1c)
	struct FGuid *6cb6909a1b; // 0x4c(0x10)
	int32 *ae877a5ca7; // 0x5c(0x04)
	int32 *7cd27fee79; // 0x60(0x04)
	int32 *e033e3f9de; // 0x64(0x04)
	struct FVector *a21c6990fc; // 0x68(0x0c)
	char pad_74[0x54]; // 0x74(0x54)
	SetProperty *77641bec8d; // 0xc8(0x50)
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
	char *662714cc0e : 1; // 0x1e8(0x01)
	char *9fb9f116a3 : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Landscape.*de58d47b0b
// Size: 0x240 (Inherited: 0x1f0)
struct U*de58d47b0b : ULandscapeMaterialInstanceConstant {
	char pad_1F0[0x50]; // 0x1f0(0x50)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ALandscapeMeshProxyActor : AActor {
	struct U*7f12d8f510* LandscapeMeshProxyComponent; // 0x3f0(0x08)
};

// Class Landscape.*7f12d8f510
// Size: 0xbd0 (Inherited: 0xba0)
struct U*7f12d8f510 : UStaticMeshComponent {
	struct FGuid *6cb6909a1b; // 0xba0(0x10)
	struct TArray<struct FIntPoint> *2aa51457e1; // 0xbb0(0x10)
	int8 *0eaa8a2b79; // 0xbc0(0x01)
	char pad_BC1[0xf]; // 0xbc1(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x830 (Inherited: 0x3f0)
struct ALandscapeProxy : AActor {
	struct FGuid *6cb6909a1b; // 0x3f0(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x400(0x08)
	int32 *ae877a5ca7; // 0x408(0x04)
	int32 *7cd27fee79; // 0x40c(0x04)
	int32 *f53aeea43c; // 0x410(0x04)
	struct FIntPoint *f753b943ed; // 0x414(0x08)
	int32 MaxLODLevel; // 0x41c(0x04)
	float LODDistanceFactor; // 0x420(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	int32 *950494be07; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x430(0x08)
	float StreamingDistanceMultiplier; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x440(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	float *4fb34d5583; // 0x450(0x04)
	float *c154edc768; // 0x454(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x458(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *985691eccd; // 0x468(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *7d9b02b42d; // 0x478(0x10)
	char pad_488[0x60]; // 0x488(0x60)
	char *b994e949a0 : 1; // 0x4e8(0x01)
	char bCastStaticShadow : 1; // 0x4e8(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e8(0x01)
	char bCastFarShadow : 1; // 0x4e8(0x01)
	char *573ac800ea : 1; // 0x4e8(0x01)
	char bRenderCustomDepth : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char *afbddb3b02 : 1; // 0x4e8(0x01)
	char *963d959668 : 1; // 0x4e9(0x01)
	char *0326a86e14 : 1; // 0x4e9(0x01)
	char pad_4E9_2 : 6; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float StaticLightingResolution; // 0x4ec(0x04)
	struct FLightingChannels LightingChannels; // 0x4f0(0x03)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	int32 CustomDepthStencilValue; // 0x4f4(0x04)
	struct F*25888ccc71 LightmassSettings; // 0x4f8(0x18)
	int32 CollisionMipLevel; // 0x510(0x04)
	int32 *8bb396e6d2; // 0x514(0x04)
	float *0874902f89; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class ENavDataGatheringMode *470c9f1b83; // 0x750(0x01)
	char pad_751[0xdf]; // 0x751(0xdf)

	struct ULandscapeLayerInfoObject* *6125e7c73e(); // Function Landscape.LandscapeProxy.*6125e7c73e // Final|Native|Public|BlueprintCallable // @ game+0x5cda648
	float *9c918124eb(); // Function Landscape.LandscapeProxy.*9c918124eb // Native|Public|BlueprintCallable // @ game+0x56444a0
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
// Size: 0xa30 (Inherited: 0xa00)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9f8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0xa08(0x10)
	struct TArray<struct UMeshComponent*> *40354ae9b4; // 0xa18(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct F*38bae448f8 Connections[0x02]; // 0x30(0x30)
	struct FInterpCurveVector *7fbc8dae1b; // 0x60(0x18)
	struct TArray<struct F*41b77fad4b> Points; // 0x78(0x10)
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
	float *420e52b73b; // 0x4c(0x04)
	float *28aa6413f3; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*76654afa35> *8f6acb6a5b; // 0x58(0x10)
	struct TArray<struct F*41b77fad4b> Points; // 0x68(0x10)
	struct FBox Bounds; // 0x78(0x1c)
	char pad_94[0x4]; // 0x94(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x98(0x08)
};

// Class Landscape.*57d6832fc3
// Size: 0x1b8 (Inherited: 0x68)
struct U*57d6832fc3 : U*9cae02a0c8 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput DiffuseTexture; // 0xa0(0x38)
	struct FExpressionInput NormalTexture; // 0xd8(0x38)
	struct FExpressionInput *4d5db406b1; // 0x110(0x38)
	struct FExpressionInput *5e5da3349b; // 0x148(0x38)
	struct TArray<struct F*bcb04eef45> Layers; // 0x180(0x10)
	uint32 *b76d4888c5; // 0x190(0x04)
	struct FGuid *8f84b5e332; // 0x194(0x10)
	char pad_1A4[0x14]; // 0x1a4(0x14)
};

// Class Landscape.*48ace594aa
// Size: 0x78 (Inherited: 0x68)
struct U*48ace594aa : U*6a03f15cb4 {
	struct TArray<struct F*a8cc136970> *a1c78ed6e9; // 0x68(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*62eed615ea> Layers; // 0x68(0x10)
	struct FGuid *8f84b5e332; // 0x78(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x80 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *c723cd0bc4 *fcf73934ef; // 0x68(0x01)
	enum class *7bf82b71dd *e36e23c810; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float *5bcba46db5; // 0x6c(0x04)
	float *5ae25e3928; // 0x70(0x04)
	float *5c1c259cdf; // 0x74(0x04)
	float *8d3a894c90; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.*bbf9bf094f
// Size: 0x88 (Inherited: 0x68)
struct U*bbf9bf094f : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	float *df24f95344; // 0x70(0x04)
	struct FGuid *8f84b5e332; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf8 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *1463af9b79; // 0x68(0x38)
	struct FExpressionInput *62103cfb7e; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	char *a3821fd24f : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGuid *8f84b5e332; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Layer; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	float *df24f95344; // 0xe0(0x04)
	struct FVector *61c1ca53a0; // 0xe4(0x0c)
	struct FGuid *8f84b5e332; // 0xf0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *8f84b5e332; // 0x68(0x10)
};

