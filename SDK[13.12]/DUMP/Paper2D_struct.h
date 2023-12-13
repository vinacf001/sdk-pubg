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

// Enum Paper2D.*99cb5b9958
enum class *99cb5b9958 : uint8 {
	*c7946eaf5d,
	*129d231ccb,
	*4d1435dfc0,
	*99cb5b9958_MAX,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal,
	IsometricDiamond,
	IsometricStaggered,
	HexagonalStaggered,
	ETileMapProjectionMode_MAX,
};

// ScriptStruct Paper2D.*e7210f226a
// Size: 0x10 (Inherited: 0x00)
struct F*e7210f226a {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	int32 *565a60a5fd; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*e0b96bd59d
// Size: 0x50 (Inherited: 0x00)
struct F*e0b96bd59d {
	struct FMatrix Transform; // 0x00(0x40)
	struct UPaperSprite* *34131e32df; // 0x40(0x08)
	struct FColor VertexColor; // 0x48(0x04)
	int32 MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.*4a9492ffcf
// Size: 0x40 (Inherited: 0x00)
struct F*4a9492ffcf {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *3c6d237afb; // 0x14(0x04)
	int32 *4d6a15ce78; // 0x18(0x04)
	bool *9fa78ee43f; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *1cfd51e1ae; // 0x20(0x04)
	float *b9ca21818d; // 0x24(0x04)
	float *45d4651fba; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> Vertices; // 0x08(0x10)
	struct FVector2D *a52ccb3693; // 0x18(0x08)
	struct FVector2D *b9a1b00de7; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool *cad7f8d947; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Paper2D.*7c91a9303f
// Size: 0x40 (Inherited: 0x00)
struct F*7c91a9303f {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Paper2D.*19df1588b4
// Size: 0x38 (Inherited: 0x00)
struct F*19df1588b4 {
	struct UPaperSprite* *9dfa3cd798; // 0x00(0x20)
	int32 *8c69b0c42b; // 0x20(0x04)
	int32 X; // 0x24(0x04)
	int32 Y; // 0x28(0x04)
	int32 Width; // 0x2c(0x04)
	int32 Height; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*265090c1ea
// Size: 0xd0 (Inherited: 0x00)
struct F*265090c1ea {
	struct FVector Destination; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* BaseTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x84]; // 0x4c(0x84)
};

// ScriptStruct Paper2D.*53798110a7
// Size: 0x38 (Inherited: 0x00)
struct F*53798110a7 {
	struct UPaperSprite* *2a0cd17a13; // 0x00(0x08)
	struct TArray<struct UPaperSprite*> Body; // 0x08(0x10)
	struct UPaperSprite* *4d149a4405; // 0x18(0x08)
	float *0ce99a8c2b; // 0x20(0x04)
	float *222c76d3b6; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *a36bdac7f9; // 0x2c(0x04)
	int32 DrawOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*bd8bd247f1
// Size: 0x10 (Inherited: 0x00)
struct F*bd8bd247f1 {
	struct UPaperTileSet* TileSet; // 0x00(0x08)
	int32 *b2e132a1da; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*d956ea8104
// Size: 0x10 (Inherited: 0x00)
struct F*d956ea8104 {
	int32 Left; // 0x00(0x04)
	int32 Top; // 0x04(0x04)
	int32 Right; // 0x08(0x04)
	int32 Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*36739a42d9
// Size: 0x18 (Inherited: 0x00)
struct F*36739a42d9 {
	struct FString *6e3d86c2a0; // 0x00(0x10)
	int32 *f1efe3e93b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Paper2D.*cc6140b829
// Size: 0x40 (Inherited: 0x00)
struct F*cc6140b829 {
	struct FName UserDataName; // 0x00(0x08)
	struct FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	bool *7a2902b287[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

