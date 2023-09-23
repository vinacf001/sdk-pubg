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

// Enum Paper2D.*cfc3bf175a
enum class *cfc3bf175a : uint8 {
	*a807a5c37a,
	*1c53277fc6,
	*8c9a861817,
	*cfc3bf175a_MAX,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal,
	IsometricDiamond,
	IsometricStaggered,
	HexagonalStaggered,
	ETileMapProjectionMode_MAX,
};

// ScriptStruct Paper2D.*8845075921
// Size: 0x10 (Inherited: 0x00)
struct F*8845075921 {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	int32 *ca7675d43b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*b7da4b8313
// Size: 0x50 (Inherited: 0x00)
struct F*b7da4b8313 {
	struct FMatrix Transform; // 0x00(0x40)
	struct UPaperSprite* *5324f096a1; // 0x40(0x08)
	struct FColor VertexColor; // 0x48(0x04)
	int32 MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.*eb646a5c73
// Size: 0x40 (Inherited: 0x00)
struct F*eb646a5c73 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *ece652016e; // 0x14(0x04)
	int32 *b85120f77a; // 0x18(0x04)
	bool *85000a0ea3; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *19e728fde4; // 0x20(0x04)
	float *1895f2191d; // 0x24(0x04)
	float *e59baa6084; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> Vertices; // 0x08(0x10)
	struct FVector2D *e4cac5ea8f; // 0x18(0x08)
	struct FVector2D *0185a71c1b; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool *f22194e015; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Paper2D.*1e30987aa9
// Size: 0x40 (Inherited: 0x00)
struct F*1e30987aa9 {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Paper2D.*b7f67e37b9
// Size: 0x38 (Inherited: 0x00)
struct F*b7f67e37b9 {
	struct UPaperSprite* *13fb64889c; // 0x00(0x20)
	int32 *4f28dbc9cc; // 0x20(0x04)
	int32 X; // 0x24(0x04)
	int32 Y; // 0x28(0x04)
	int32 Width; // 0x2c(0x04)
	int32 Height; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*0dee9a85e6
// Size: 0xd0 (Inherited: 0x00)
struct F*0dee9a85e6 {
	struct FVector Destination; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* BaseTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x84]; // 0x4c(0x84)
};

// ScriptStruct Paper2D.*77c32e4b7a
// Size: 0x38 (Inherited: 0x00)
struct F*77c32e4b7a {
	struct UPaperSprite* *1a65a8a501; // 0x00(0x08)
	struct TArray<struct UPaperSprite*> Body; // 0x08(0x10)
	struct UPaperSprite* *8e52076bf5; // 0x18(0x08)
	float *d92ff0bf3b; // 0x20(0x04)
	float *cc3bbe4fb4; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *d842fc714f; // 0x2c(0x04)
	int32 DrawOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*a51a01c50a
// Size: 0x10 (Inherited: 0x00)
struct F*a51a01c50a {
	struct UPaperTileSet* TileSet; // 0x00(0x08)
	int32 *68fbd374bf; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*1b3579c3f8
// Size: 0x10 (Inherited: 0x00)
struct F*1b3579c3f8 {
	int32 Left; // 0x00(0x04)
	int32 Top; // 0x04(0x04)
	int32 Right; // 0x08(0x04)
	int32 Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*adc681947c
// Size: 0x18 (Inherited: 0x00)
struct F*adc681947c {
	struct FString *2cbe763278; // 0x00(0x10)
	int32 *83a9877d41; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Paper2D.*08b3c71ebb
// Size: 0x40 (Inherited: 0x00)
struct F*08b3c71ebb {
	struct FName UserDataName; // 0x00(0x08)
	struct FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	bool *4add11ce79[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

