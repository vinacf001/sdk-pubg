// Enum Landscape.*13214d47b5
enum class *13214d47b5 : uint8 {
	*ab2cd68e04,
	*6016a07742,
	*e8c70093c8,
	*c8d47ac6e6,
	*13214d47b5_MAX,
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

// Enum Landscape.*96416d3633
enum class *96416d3633 : uint8 {
	*49c723aed7,
	*ed6d5adc6f,
	*4dedd23c39,
	*105145553a,
	*6d4cdfa334,
	*96416d3633_MAX,
};

// Enum Landscape.*065aed1709
enum class *065aed1709 : uint8 {
	*0aa1e5917b,
	*61f8df5e8c,
	*b315b3a0ca,
	*065aed1709_MAX,
};

// Enum Landscape.*9714c79160
enum class *9714c79160 : uint8 {
	*ee27e03a14,
	*f0fd9c66f1,
	*8a6f7d5dd1,
	*4fdd2a19bc,
	*9714c79160_MAX,
};

// Enum Landscape.*61cb2cd339
enum class *61cb2cd339 : uint8 {
	*61542737c0,
	*7052e4503e,
	*28d38633ff,
	*2195fa87fb,
	*344b49e936,
	*9b2d584dcf,
	*61cb2cd339_MAX,
};

// Enum Landscape.*57a208675c
enum class *57a208675c : uint8 {
	*da63177a62,
	*bc94400f10,
	*3b8c18a8a8,
	*e1091c18f3,
	*0364dc6d32,
	*57a208675c_MAX,
};

// ScriptStruct Landscape.*23fe8b97ca
// Size: 0x10 (Inherited: 0x00)
struct F*23fe8b97ca {
	struct ULandscapeLayerInfoObject* *1e8cf978b7; // 0x00(0x08)
	bool *b1bfa04128; // 0x08(0x01)
	bool *54c57f713a; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.*92a2b75db3
// Size: 0x28 (Inherited: 0x00)
struct F*92a2b75db3 {
	struct UMaterialInterface* *897a0c3740; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32 *0371124b81; // 0x10(0x04)
	int32 *3b360774a1; // 0x14(0x04)
	int32 *4894847794; // 0x18(0x04)
	int32 *63be64b7a2; // 0x1c(0x04)
	struct UTexture2D* *15dc5d5403; // 0x20(0x08)
};

// ScriptStruct Landscape.*928c264ed1
// Size: 0x50 (Inherited: 0x00)
struct F*928c264ed1 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.*8acfe3d510
// Size: 0x48 (Inherited: 0x00)
struct F*8acfe3d510 {
	struct UStaticMesh* *c1de91fd6e; // 0x00(0x08)
	float *35516a4995; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *cbc0d000a1; // 0x10(0x04)
	int32 *da9c9a7039; // 0x14(0x04)
	int32 *76ee38ce08; // 0x18(0x04)
	int32 MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	char *b069b8f76a : 1; // 0x3c(0x01)
	char *321142df28 : 1; // 0x3c(0x01)
	char *818d7e456b : 1; // 0x3c(0x01)
	char *668636af81 : 1; // 0x3c(0x01)
	char *b3a3eee86b : 1; // 0x3c(0x01)
	char pad_3C_5 : 3; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *07830a14a6 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class EDecalChannel DecalChannel; // 0x44(0x01)
	struct FLightingChannels LightingChannels; // 0x45(0x03)
};

// ScriptStruct Landscape.*b5d9eec7f5
// Size: 0x10 (Inherited: 0x00)
struct F*b5d9eec7f5 {
	struct ULandscapeLayerInfoObject* *35c4030bca; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.*e17496b0ab
// Size: 0x01 (Inherited: 0x00)
struct F*e17496b0ab {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*ceda6fbec2
// Size: 0x08 (Inherited: 0x00)
struct F*ceda6fbec2 {
	struct ULandscapeLayerInfoObject* *35c4030bca; // 0x00(0x08)
};

// ScriptStruct Landscape.*f1699aff44
// Size: 0x01 (Inherited: 0x00)
struct F*f1699aff44 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*8863d853d4
// Size: 0x20 (Inherited: 0x00)
struct F*8863d853d4 {
	struct ULandscapeComponent* *5021b48b9c[0x04]; // 0x00(0x20)
};

// ScriptStruct Landscape.*edaa87629d
// Size: 0x01 (Inherited: 0x00)
struct F*edaa87629d {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*2ec2c13702
// Size: 0x01 (Inherited: 0x00)
struct F*2ec2c13702 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*6c2c3ff38f
// Size: 0x01 (Inherited: 0x00)
struct F*6c2c3ff38f {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *aaa1ce8566; // 0x08(0x10)
	char *c433019968 : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char *443b43b233 : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class *065aed1709 Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis *95ac533207; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.*ff3cf17aaa
// Size: 0x18 (Inherited: 0x00)
struct F*ff3cf17aaa {
	struct ULandscapeSplineControlPoint* *896fe00c5d; // 0x00(0x08)
	float *6b7afe69c9; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SocketName; // 0x10(0x08)
};

// ScriptStruct Landscape.*aab78b57ff
// Size: 0x40 (Inherited: 0x00)
struct F*aab78b57ff {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector *ec04d5e62e; // 0x24(0x0c)
	struct FVector *c12ee34253; // 0x30(0x0c)
	float *2081b700f4; // 0x3c(0x04)
};

// ScriptStruct Landscape.*12c2108e79
// Size: 0x10 (Inherited: 0x00)
struct F*12c2108e79 {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.*10f9d90122
// Size: 0x10 (Inherited: 0x00)
struct F*10f9d90122 {
	struct FName Name; // 0x00(0x08)
	float *15508b18b6; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Landscape.*6dc22a33b8
// Size: 0x48 (Inherited: 0x00)
struct F*6dc22a33b8 {
	struct FName Name; // 0x00(0x08)
	struct U*d374a71f52* *23ae44ca56; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Landscape.*d753dc5f13
// Size: 0x98 (Inherited: 0x00)
struct F*d753dc5f13 {
	struct FName LayerName; // 0x00(0x08)
	enum class *9714c79160 *c5d4fee8f5; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FExpressionInput *1f1a9987ad; // 0x10(0x38)
	struct FExpressionInput *dbd0190892; // 0x48(0x38)
	float *15508b18b6; // 0x80(0x04)
	struct FVector *e8c339bea1; // 0x84(0x0c)
	float *7d0367af1c; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

