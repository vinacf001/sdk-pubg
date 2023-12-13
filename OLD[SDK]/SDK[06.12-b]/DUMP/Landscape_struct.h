// Enum Landscape.*6c6c88658f
enum class *6c6c88658f : uint8 {
	*d91086f1ff,
	*cb2701aa69,
	*7e8711c029,
	*4851a3bad8,
	*6c6c88658f_MAX,
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

// Enum Landscape.*3728ff8f5e
enum class *3728ff8f5e : uint8 {
	*b74d823701,
	*e20a11ce0d,
	*a7ccd92199,
	*3b99e721a0,
	*bdfac627e3,
	*3728ff8f5e_MAX,
};

// Enum Landscape.*a104c36d83
enum class *a104c36d83 : uint8 {
	*99310f3a22,
	*dae63c427e,
	*1a0f2aa61d,
	*a104c36d83_MAX,
};

// Enum Landscape.*93d7a73272
enum class *93d7a73272 : uint8 {
	*4ca8a5aace,
	*25032a3491,
	*471bc991e4,
	*997563b2fb,
	*93d7a73272_MAX,
};

// Enum Landscape.*403caef90c
enum class *403caef90c : uint8 {
	*979d29ed0a,
	*e146e29533,
	*756a079b38,
	*f3d1699aa5,
	*e4d3d80726,
	*4886a31459,
	*403caef90c_MAX,
};

// Enum Landscape.*7278ab9647
enum class *7278ab9647 : uint8 {
	*3e823951aa,
	*dd8e61ef79,
	*4486ce7dfa,
	*9f24a95fa8,
	*d4861423fc,
	*7278ab9647_MAX,
};

// ScriptStruct Landscape.*9c6bf22dfd
// Size: 0x10 (Inherited: 0x00)
struct F*9c6bf22dfd {
	struct ULandscapeLayerInfoObject* *6cb9572fc7; // 0x00(0x08)
	bool *250f5a0cc9; // 0x08(0x01)
	bool *09d36d376b; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.*a1264205e4
// Size: 0x28 (Inherited: 0x00)
struct F*a1264205e4 {
	struct UMaterialInterface* *9c46fcd375; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32 *9257076769; // 0x10(0x04)
	int32 *55642b2120; // 0x14(0x04)
	int32 *209ffb36d1; // 0x18(0x04)
	int32 *dbf7d64c2e; // 0x1c(0x04)
	struct UTexture2D* *b2046ad2df; // 0x20(0x08)
};

// ScriptStruct Landscape.*a937ea252e
// Size: 0x50 (Inherited: 0x00)
struct F*a937ea252e {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.*cfabf56edb
// Size: 0x48 (Inherited: 0x00)
struct F*cfabf56edb {
	struct UStaticMesh* *a3b3755d55; // 0x00(0x08)
	float *7fd42dc361; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *52eccca4db; // 0x10(0x04)
	int32 *e8620d6045; // 0x14(0x04)
	int32 *db45066745; // 0x18(0x04)
	int32 MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	char *bde6870074 : 1; // 0x3c(0x01)
	char *9b40bb4c44 : 1; // 0x3c(0x01)
	char *295b80fa90 : 1; // 0x3c(0x01)
	char *7ea77ae49c : 1; // 0x3c(0x01)
	char *d5b1d4efdd : 1; // 0x3c(0x01)
	char pad_3C_5 : 3; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *634898d6e3 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class EDecalChannel DecalChannel; // 0x44(0x01)
	struct FLightingChannels LightingChannels; // 0x45(0x03)
};

// ScriptStruct Landscape.*dca6178d15
// Size: 0x10 (Inherited: 0x00)
struct F*dca6178d15 {
	struct ULandscapeLayerInfoObject* *fd740a3cb3; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.*c6ccc9c559
// Size: 0x01 (Inherited: 0x00)
struct F*c6ccc9c559 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*3460962eeb
// Size: 0x08 (Inherited: 0x00)
struct F*3460962eeb {
	struct ULandscapeLayerInfoObject* *fd740a3cb3; // 0x00(0x08)
};

// ScriptStruct Landscape.*9a8cc37782
// Size: 0x01 (Inherited: 0x00)
struct F*9a8cc37782 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*b22dfe2b85
// Size: 0x20 (Inherited: 0x00)
struct F*b22dfe2b85 {
	struct ULandscapeComponent* *b3d546dc17[0x04]; // 0x00(0x20)
};

// ScriptStruct Landscape.*4998f94664
// Size: 0x01 (Inherited: 0x00)
struct F*4998f94664 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*dc02236a00
// Size: 0x01 (Inherited: 0x00)
struct F*dc02236a00 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*aef222d6ef
// Size: 0x01 (Inherited: 0x00)
struct F*aef222d6ef {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *0ad6594bd6; // 0x08(0x10)
	char *3ab4f42faf : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char *d182ce2167 : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class *a104c36d83 Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis *d03ab28708; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.*5550df6677
// Size: 0x18 (Inherited: 0x00)
struct F*5550df6677 {
	struct ULandscapeSplineControlPoint* *8e02d88593; // 0x00(0x08)
	float *66e2f6b53c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SocketName; // 0x10(0x08)
};

// ScriptStruct Landscape.*ab910f8a3a
// Size: 0x40 (Inherited: 0x00)
struct F*ab910f8a3a {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector *893bc30502; // 0x24(0x0c)
	struct FVector *31ac60a0c0; // 0x30(0x0c)
	float *5dac893e87; // 0x3c(0x04)
};

// ScriptStruct Landscape.*bc59d0e956
// Size: 0x10 (Inherited: 0x00)
struct F*bc59d0e956 {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.*fea2a015d0
// Size: 0x10 (Inherited: 0x00)
struct F*fea2a015d0 {
	struct FName Name; // 0x00(0x08)
	float *fc7d182679; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Landscape.*6afc48dff2
// Size: 0x48 (Inherited: 0x00)
struct F*6afc48dff2 {
	struct FName Name; // 0x00(0x08)
	struct U*6e0e7da5cb* *a8a7defbb7; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Landscape.*6ced1ac491
// Size: 0x98 (Inherited: 0x00)
struct F*6ced1ac491 {
	struct FName LayerName; // 0x00(0x08)
	enum class *93d7a73272 *5e96ef5e6b; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FExpressionInput *45337c206c; // 0x10(0x38)
	struct FExpressionInput *780a58d7e8; // 0x48(0x38)
	float *fc7d182679; // 0x80(0x04)
	struct FVector *3f981a99f5; // 0x84(0x0c)
	float *9f83634756; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

