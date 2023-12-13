// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	NoCollision,
	FirstFrameCollision,
	EachFrameCollision,
	EFlipbookCollisionMode_MAX,
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	Top_Left,
	Top_Center,
	Top_Right,
	Center_Left,
	Center_Center,
	Center_Right,
	Bottom_Left,
	Bottom_Center,
	Bottom_Right,
	Custom,
	ESpritePivotMode_MAX,
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	SourceBoundingBox,
	TightBoundingBox,
	ShrinkWrapped,
	FullyCustom,
	Diced,
	ESpritePolygonMode_MAX,
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	Box,
	Circle,
	Polygon,
	ESpriteShapeType_MAX,
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	None,
	Use2DPhysics,
	Use3DPhysics,
	ESpriteCollisionMode_MAX,
};

// Enum Paper2D.*173bc4084e
enum class *173bc4084e : uint8 {
	*cf0a89d739,
	*78bad19f1f,
	*e476b9abf5,
	*173bc4084e_MAX,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal,
	IsometricDiamond,
	IsometricStaggered,
	HexagonalStaggered,
	ETileMapProjectionMode_MAX,
};

// ScriptStruct Paper2D.*15ec5843d3
// Size: 0x10 (Inherited: 0x00)
struct F*15ec5843d3 {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	int32 *44fc2e35e1; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*d073adfbac
// Size: 0x50 (Inherited: 0x00)
struct F*d073adfbac {
	struct FMatrix Transform; // 0x00(0x40)
	struct UPaperSprite* *a7ffa34e3b; // 0x40(0x08)
	struct FColor VertexColor; // 0x48(0x04)
	int32 MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.*70f954546e
// Size: 0x40 (Inherited: 0x00)
struct F*70f954546e {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *61a104cfb5; // 0x14(0x04)
	int32 *55aa459e22; // 0x18(0x04)
	bool *5e5997aa57; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *cc624d2189; // 0x20(0x04)
	float *8232007fae; // 0x24(0x04)
	float *ac275ed76d; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> Vertices; // 0x08(0x10)
	struct FVector2D *11545da907; // 0x18(0x08)
	struct FVector2D *17402a4994; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool *331ab10f07; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Paper2D.*7f100e4858
// Size: 0x40 (Inherited: 0x00)
struct F*7f100e4858 {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Paper2D.*23d28591e3
// Size: 0x38 (Inherited: 0x00)
struct F*23d28591e3 {
	struct UPaperSprite* *6d27a9c349; // 0x00(0x20)
	int32 *33c9432c87; // 0x20(0x04)
	int32 X; // 0x24(0x04)
	int32 Y; // 0x28(0x04)
	int32 Width; // 0x2c(0x04)
	int32 Height; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*e9d42c160b
// Size: 0xd0 (Inherited: 0x00)
struct F*e9d42c160b {
	struct FVector Destination; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* BaseTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x84]; // 0x4c(0x84)
};

// ScriptStruct Paper2D.*fd2037aff1
// Size: 0x38 (Inherited: 0x00)
struct F*fd2037aff1 {
	struct UPaperSprite* *f7f5dac2ad; // 0x00(0x08)
	struct TArray<struct UPaperSprite*> Body; // 0x08(0x10)
	struct UPaperSprite* *67eebbc632; // 0x18(0x08)
	float *b62090ed22; // 0x20(0x04)
	float *e64fa85cc5; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *fe67d36d3f; // 0x2c(0x04)
	int32 DrawOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*9e658ab52c
// Size: 0x10 (Inherited: 0x00)
struct F*9e658ab52c {
	struct UPaperTileSet* TileSet; // 0x00(0x08)
	int32 *ddbc1b1b16; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*738db5e91a
// Size: 0x10 (Inherited: 0x00)
struct F*738db5e91a {
	int32 Left; // 0x00(0x04)
	int32 Top; // 0x04(0x04)
	int32 Right; // 0x08(0x04)
	int32 Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*72d51bb8aa
// Size: 0x18 (Inherited: 0x00)
struct F*72d51bb8aa {
	struct FString *9390630858; // 0x00(0x10)
	int32 *580ab5b72e; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Paper2D.*b5a220c0b9
// Size: 0x40 (Inherited: 0x00)
struct F*b5a220c0b9 {
	struct FName UserDataName; // 0x00(0x08)
	struct FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	bool *40a1effabd[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

