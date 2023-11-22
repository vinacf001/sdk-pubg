// Enum Landscape.*4b187fee29
enum class *4b187fee29 : uint8 {
	*82544317d4,
	*e9fa9d2c03,
	*28882383fe,
	*5c081b1717,
	*4b187fee29_MAX,
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform,
	Free,
	LockXY,
	EGrassScaling_MAX,
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear,
	SquareRoot,
	ELandscapeLODFalloff_MAX,
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default,
	Alphabetical,
	UserSpecific,
	ELandscapeLayerDisplayMode_MAX,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None,
	UseMaxLayers,
	ExistingOnly,
	UseComponentWhitelist,
	ELandscapeLayerPaintingRestriction_MAX,
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive,
	Layered,
	ELandscapeImportAlphamapType_MAX,
};

// Enum Landscape.*06b27b9536
enum class *06b27b9536 : uint8 {
	*68c5d43e9d,
	*23b6bdc88b,
	*4c41220206,
	*5f3721d4a5,
	*5d5f14c162,
	*06b27b9536_MAX,
};

// Enum Landscape.*c76e35dd61
enum class *c76e35dd61 : uint8 {
	*b8573e8966,
	*bda7aae2dc,
	*dd64a199d8,
	*c76e35dd61_MAX,
};

// Enum Landscape.*ab38e01d6b
enum class *ab38e01d6b : uint8 {
	*1a2c5b3bbc,
	*9a1b21f9b3,
	*9a296c83e8,
	*f52ad3121c,
	*ab38e01d6b_MAX,
};

// Enum Landscape.*43dabfad1d
enum class *43dabfad1d : uint8 {
	*e6ba7e753f,
	*e986a09048,
	*ff10755571,
	*5cc274e89f,
	*76b207c533,
	*fb53699475,
	*43dabfad1d_MAX,
};

// Enum Landscape.*16f2ea5793
enum class *16f2ea5793 : uint8 {
	*b74c642589,
	*976aa91d46,
	*a4402b4c97,
	*d1060606f4,
	*6f410c563b,
	*16f2ea5793_MAX,
};

// ScriptStruct Landscape.*4fee740a0d
// Size: 0x10 (Inherited: 0x00)
struct F*4fee740a0d {
	struct ULandscapeLayerInfoObject* *6ebf7acec9; // 0x00(0x08)
	bool *1cd1e1c21e; // 0x08(0x01)
	bool *c4871201e3; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.*8722bffdf2
// Size: 0x28 (Inherited: 0x00)
struct F*8722bffdf2 {
	struct UMaterialInterface* *ff3ec0878a; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32 *e09522d918; // 0x10(0x04)
	int32 *cccd2ce99c; // 0x14(0x04)
	int32 *34dcfa2878; // 0x18(0x04)
	int32 *681abfd88b; // 0x1c(0x04)
	struct UTexture2D* *2048814f5e; // 0x20(0x08)
};

// ScriptStruct Landscape.*2d278938ac
// Size: 0x50 (Inherited: 0x00)
struct F*2d278938ac {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.*470e577a1b
// Size: 0x48 (Inherited: 0x00)
struct F*470e577a1b {
	struct UStaticMesh* *4d23f3032a; // 0x00(0x08)
	float *0d7e98c49f; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *7403ab74b5; // 0x10(0x04)
	int32 *2b9710dbf4; // 0x14(0x04)
	int32 *31ebbc7a23; // 0x18(0x04)
	int32 MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	char *b65ba92568 : 1; // 0x3c(0x01)
	char *a2dcdf7082 : 1; // 0x3c(0x01)
	char *8212e49521 : 1; // 0x3c(0x01)
	char *d927c19d75 : 1; // 0x3c(0x01)
	char *bd65329126 : 1; // 0x3c(0x01)
	char pad_3C_5 : 3; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *775983f410 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class EDecalChannel DecalChannel; // 0x44(0x01)
	struct FLightingChannels LightingChannels; // 0x45(0x03)
};

// ScriptStruct Landscape.*1de56e43fb
// Size: 0x10 (Inherited: 0x00)
struct F*1de56e43fb {
	struct ULandscapeLayerInfoObject* *beed8e6ddd; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.*9f57d13ab0
// Size: 0x01 (Inherited: 0x00)
struct F*9f57d13ab0 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*409e825834
// Size: 0x08 (Inherited: 0x00)
struct F*409e825834 {
	struct ULandscapeLayerInfoObject* *beed8e6ddd; // 0x00(0x08)
};

// ScriptStruct Landscape.*ab259aa32e
// Size: 0x01 (Inherited: 0x00)
struct F*ab259aa32e {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*7a2591119b
// Size: 0x20 (Inherited: 0x00)
struct F*7a2591119b {
	struct ULandscapeComponent* *3866eb56ab[0x04]; // 0x00(0x20)
};

// ScriptStruct Landscape.*c99616758a
// Size: 0x01 (Inherited: 0x00)
struct F*c99616758a {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*55c0a14551
// Size: 0x01 (Inherited: 0x00)
struct F*55c0a14551 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*a7318ac700
// Size: 0x01 (Inherited: 0x00)
struct F*a7318ac700 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *3614c0bf6e; // 0x08(0x10)
	char *b3426a49f1 : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char *bc5daf53b9 : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class *c76e35dd61 Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis *040154a53e; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.*a63a17b3f5
// Size: 0x18 (Inherited: 0x00)
struct F*a63a17b3f5 {
	struct ULandscapeSplineControlPoint* *f647b7c7aa; // 0x00(0x08)
	float *35b3d133f0; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SocketName; // 0x10(0x08)
};

// ScriptStruct Landscape.*a4d9a5cab7
// Size: 0x40 (Inherited: 0x00)
struct F*a4d9a5cab7 {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector *a9af4296c5; // 0x24(0x0c)
	struct FVector *b844e67402; // 0x30(0x0c)
	float *66812a2786; // 0x3c(0x04)
};

// ScriptStruct Landscape.*930a482f5a
// Size: 0x10 (Inherited: 0x00)
struct F*930a482f5a {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.*6a1396b157
// Size: 0x10 (Inherited: 0x00)
struct F*6a1396b157 {
	struct FName Name; // 0x00(0x08)
	float *06fa26c45b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Landscape.*d053db420f
// Size: 0x48 (Inherited: 0x00)
struct F*d053db420f {
	struct FName Name; // 0x00(0x08)
	struct U*3f112a2a4a* *ca2b58c207; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Landscape.*eba2673b3d
// Size: 0x98 (Inherited: 0x00)
struct F*eba2673b3d {
	struct FName LayerName; // 0x00(0x08)
	enum class *ab38e01d6b *ff20aabe55; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FExpressionInput *52023e6499; // 0x10(0x38)
	struct FExpressionInput *da3740cbce; // 0x48(0x38)
	float *06fa26c45b; // 0x80(0x04)
	struct FVector *6f3fcc3e4f; // 0x84(0x0c)
	float *81dc70451b; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

