// Enum Landscape.*6cdc8d67bf
enum class *6cdc8d67bf : uint8 {
	*7eac6bd062,
	*9e0d7658cf,
	*9a5ec824ce,
	*d2687dccb2,
	*6cdc8d67bf_MAX,
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

// Enum Landscape.*3e4663bf34
enum class *3e4663bf34 : uint8 {
	*47b07b7700,
	*638382ff9c,
	*36728bb7cc,
	*faca3d9caa,
	*1474407466,
	*3e4663bf34_MAX,
};

// Enum Landscape.*cc0c3ce0d6
enum class *cc0c3ce0d6 : uint8 {
	*41ee9168e3,
	*b7966df174,
	*bea9220d9f,
	*cc0c3ce0d6_MAX,
};

// Enum Landscape.*c04633b5cb
enum class *c04633b5cb : uint8 {
	*3ccf0b8786,
	*883e853e78,
	*374ea28848,
	*43dde19a56,
	*c04633b5cb_MAX,
};

// Enum Landscape.*7bf82b71dd
enum class *7bf82b71dd : uint8 {
	*88cb35079a,
	*d27dce9b09,
	*888077a1ca,
	*566e32f7ff,
	*5f89a46d87,
	*36e5f7deb7,
	*7bf82b71dd_MAX,
};

// Enum Landscape.*c723cd0bc4
enum class *c723cd0bc4 : uint8 {
	*4161d1d742,
	*570c2c697a,
	*b16985c735,
	*6e6dd88763,
	*fd0c83b6db,
	*c723cd0bc4_MAX,
};

// ScriptStruct Landscape.*43cbdd6c74
// Size: 0x10 (Inherited: 0x00)
struct F*43cbdd6c74 {
	struct ULandscapeLayerInfoObject* *848903fac9; // 0x00(0x08)
	bool *90ec726f24; // 0x08(0x01)
	bool *6ca60fe796; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.*2b7127952a
// Size: 0x28 (Inherited: 0x00)
struct F*2b7127952a {
	struct UMaterialInterface* *e1d28d836f; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32 *8ab0cc0e86; // 0x10(0x04)
	int32 *6248211ceb; // 0x14(0x04)
	int32 *d3a98f21da; // 0x18(0x04)
	int32 *bea313ffa6; // 0x1c(0x04)
	struct UTexture2D* *23b3861216; // 0x20(0x08)
};

// ScriptStruct Landscape.*fd043168d8
// Size: 0x50 (Inherited: 0x00)
struct F*fd043168d8 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.*4aaf79b99f
// Size: 0x48 (Inherited: 0x00)
struct F*4aaf79b99f {
	struct UStaticMesh* *151c48240e; // 0x00(0x08)
	float *f5f6c60aac; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *c58882392b; // 0x10(0x04)
	int32 *639ceb23e3; // 0x14(0x04)
	int32 *9d45a935a4; // 0x18(0x04)
	int32 MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	char *ca629fb8f6 : 1; // 0x3c(0x01)
	char *423d6a08df : 1; // 0x3c(0x01)
	char *723a84814d : 1; // 0x3c(0x01)
	char *f0ec410b1c : 1; // 0x3c(0x01)
	char *e465b784ab : 1; // 0x3c(0x01)
	char pad_3C_5 : 3; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *0566bc7293 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class EDecalChannel DecalChannel; // 0x44(0x01)
	struct FLightingChannels LightingChannels; // 0x45(0x03)
};

// ScriptStruct Landscape.*a74d34943f
// Size: 0x10 (Inherited: 0x00)
struct F*a74d34943f {
	struct ULandscapeLayerInfoObject* *5cdd34f6b0; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.*8d6f494e5a
// Size: 0x01 (Inherited: 0x00)
struct F*8d6f494e5a {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*ffa4030e5f
// Size: 0x08 (Inherited: 0x00)
struct F*ffa4030e5f {
	struct ULandscapeLayerInfoObject* *5cdd34f6b0; // 0x00(0x08)
};

// ScriptStruct Landscape.*8d427ecba9
// Size: 0x01 (Inherited: 0x00)
struct F*8d427ecba9 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*4ace383c73
// Size: 0x20 (Inherited: 0x00)
struct F*4ace383c73 {
	struct ULandscapeComponent* *1e9755d4fb[0x04]; // 0x00(0x20)
};

// ScriptStruct Landscape.*0aa290a2ba
// Size: 0x01 (Inherited: 0x00)
struct F*0aa290a2ba {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*afb39fb682
// Size: 0x01 (Inherited: 0x00)
struct F*afb39fb682 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*71f9de6d95
// Size: 0x01 (Inherited: 0x00)
struct F*71f9de6d95 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *feafc6784b; // 0x08(0x10)
	char *9d79898c0b : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char *acf77ecc89 : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class *cc0c3ce0d6 Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis *4b56af8107; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.*38bae448f8
// Size: 0x18 (Inherited: 0x00)
struct F*38bae448f8 {
	struct ULandscapeSplineControlPoint* *fd04d5becb; // 0x00(0x08)
	float *3ad479648a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SocketName; // 0x10(0x08)
};

// ScriptStruct Landscape.*41b77fad4b
// Size: 0x40 (Inherited: 0x00)
struct F*41b77fad4b {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector *50959ecb5d; // 0x24(0x0c)
	struct FVector *76757567ab; // 0x30(0x0c)
	float *6010e5a3ff; // 0x3c(0x04)
};

// ScriptStruct Landscape.*76654afa35
// Size: 0x10 (Inherited: 0x00)
struct F*76654afa35 {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.*bcb04eef45
// Size: 0x10 (Inherited: 0x00)
struct F*bcb04eef45 {
	struct FName Name; // 0x00(0x08)
	float *df24f95344; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Landscape.*a8cc136970
// Size: 0x48 (Inherited: 0x00)
struct F*a8cc136970 {
	struct FName Name; // 0x00(0x08)
	struct U*36c3e95555* *4c342dcea5; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Landscape.*62eed615ea
// Size: 0x98 (Inherited: 0x00)
struct F*62eed615ea {
	struct FName LayerName; // 0x00(0x08)
	enum class *c04633b5cb *fa6f7d23df; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FExpressionInput *f661a4ccd5; // 0x10(0x38)
	struct FExpressionInput *04483283b9; // 0x48(0x38)
	float *df24f95344; // 0x80(0x04)
	struct FVector *3edabc5793; // 0x84(0x0c)
	float *c780a525b3; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

