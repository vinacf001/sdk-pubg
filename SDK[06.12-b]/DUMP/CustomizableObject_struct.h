// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8 {
	Planar,
	Cylindrical,
	Wrapping,
	ECustomizableObjectProjectorType_MAX,
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8 {
	Full,
	Local,
	LocalAndChildren,
	AddWorkingSetNoChildren,
	AddWorkingSetAndChildren,
	EMutableCompileMeshType_MAX,
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	COGT_TOGGLE,
	COGT_ALL,
	COGT_ONE,
	COGT_ONE_OR_NONE,
	COGT_MAX,
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8 {
	None,
	Bool,
	Int,
	Float,
	Color,
	Projector,
	Texture,
	EMutableParameterType_MAX,
};

// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8 {
	All,
	ClientOnly,
	ECustomizableObjectRelevancy_MAX,
};

// ScriptStruct CustomizableObject.*b808435aa2
// Size: 0x20 (Inherited: 0x00)
struct F*b808435aa2 {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString *49dcb283d1; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*51dbd3ab4e
// Size: 0x68 (Inherited: 0x00)
struct F*51dbd3ab4e {
	struct FString ParameterName; // 0x00(0x10)
	struct F*048acf8d7d Value; // 0x10(0x38)
	struct FString UID; // 0x48(0x10)
	struct TArray<struct F*048acf8d7d> *4be46cbcca; // 0x58(0x10)
};

// ScriptStruct CustomizableObject.*048acf8d7d
// Size: 0x38 (Inherited: 0x00)
struct F*048acf8d7d {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
};

// ScriptStruct CustomizableObject.*0db63c8cfd
// Size: 0x30 (Inherited: 0x00)
struct F*0db63c8cfd {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*04ca878293
// Size: 0x28 (Inherited: 0x00)
struct F*04ca878293 {
	struct FString ParameterName; // 0x00(0x10)
	uint64 ParameterValue; // 0x10(0x08)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*cc9a69d266
// Size: 0x38 (Inherited: 0x00)
struct F*cc9a69d266 {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UID; // 0x18(0x10)
	struct TArray<float> *171de7d51b; // 0x28(0x10)
};

// ScriptStruct CustomizableObject.*7c726e0f51
// Size: 0x40 (Inherited: 0x00)
struct F*7c726e0f51 {
	struct FString ParameterName; // 0x00(0x10)
	struct FString *1ca351ff1f; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	struct TArray<struct FString> *0d9d6565be; // 0x30(0x10)
};

// ScriptStruct CustomizableObject.*69023b25c5
// Size: 0x28 (Inherited: 0x00)
struct F*69023b25c5 {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*411563e551
// Size: 0x118 (Inherited: 0x00)
struct F*411563e551 {
	struct FString Name; // 0x00(0x10)
	struct F*b45c2d92a7 ParamUIMetadata; // 0x10(0xe8)
	enum class EMutableParameterType Type; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct F*5953db9350> ArrayIntegerParameterOption; // 0x100(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x110(0x01)
	bool bDontCompressRuntimeTextures; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct CustomizableObject.*5953db9350
// Size: 0xf8 (Inherited: 0x00)
struct F*5953db9350 {
	struct FString Name; // 0x00(0x10)
	struct F*b45c2d92a7 ParamUIMetadata; // 0x10(0xe8)
};

// ScriptStruct CustomizableObject.*b45c2d92a7
// Size: 0xe8 (Inherited: 0x00)
struct F*b45c2d92a7 {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32 UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* UIThumbnail; // 0x28(0x20)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x48(0x50)
	struct TMap<struct FString, struct UObject*> ExtraAssets; // 0x98(0x50)
};

// ScriptStruct CustomizableObject.*1d8f698c83
// Size: 0x10 (Inherited: 0x00)
struct F*1d8f698c83 {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Texture; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*ef3f9c7b03
// Size: 0x10 (Inherited: 0x00)
struct F*ef3f9c7b03 {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*c5f93f9764
// Size: 0x10 (Inherited: 0x00)
struct F*c5f93f9764 {
	struct TArray<struct F*1e04cb4073> Textures; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*1e04cb4073
// Size: 0x20 (Inherited: 0x00)
struct F*1e04cb4073 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct CustomizableObject.*6830312c62
// Size: 0x10 (Inherited: 0x00)
struct F*6830312c62 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*65a276b196
// Size: 0x14 (Inherited: 0x00)
struct F*65a276b196 {
	struct FGuid *cd21ed1bfe; // 0x00(0x10)
	int32 *d1ef2decab; // 0x10(0x04)
};

// ScriptStruct CustomizableObject.*e72b48d7d7
// Size: 0x20 (Inherited: 0x00)
struct F*e72b48d7d7 {
	struct UCustomizableObject* *7996e29836; // 0x00(0x20)
};

// ScriptStruct CustomizableObject.*c48cd3638c
// Size: 0x08 (Inherited: 0x00)
struct F*c48cd3638c {
	int32 *07e1dc70bd; // 0x00(0x04)
	int32 VertexIndex; // 0x04(0x04)
};

// ScriptStruct CustomizableObject.*995768d2c9
// Size: 0x18 (Inherited: 0x00)
struct F*995768d2c9 {
	int32 SizeX; // 0x00(0x04)
	int32 SizeY; // 0x04(0x04)
	struct TArray<uint32> Data; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*4b71e70d32
// Size: 0x118 (Inherited: 0x00)
struct F*4b71e70d32 {
	struct FString Name; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *389f871e96; // 0x14(0x04)
	struct TArray<struct F*d59d81d4dd> *222316f3f7; // 0x18(0x10)
	struct F*b45c2d92a7 *7247ef7c0e; // 0x28(0xe8)
	bool *2d118e85fd; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct CustomizableObject.*d59d81d4dd
// Size: 0x18 (Inherited: 0x00)
struct F*d59d81d4dd {
	struct FString Name; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.*57ca87e627
// Size: 0x20 (Inherited: 0x00)
struct F*57ca87e627 {
	struct FString *c54d75c15a; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32 LODBias; // 0x18(0x04)
	enum class *f13c8e8821 AddressX; // 0x1c(0x01)
	enum class *f13c8e8821 AddressY; // 0x1d(0x01)
	enum class TextureGroup LODGroup; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct CustomizableObject.*161a916371
// Size: 0x18 (Inherited: 0x00)
struct F*161a916371 {
	bool *41602b9ead; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TargetPlatform; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*549a7ba777
// Size: 0x20 (Inherited: 0x00)
struct F*549a7ba777 {
	bool *41602b9ead; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *b9a0f0e704; // 0x04(0x04)
	bool *680c92a124; // 0x08(0x01)
	bool *1c449a13d9; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
};

// ScriptStruct CustomizableObject.*4e84a6225e
// Size: 0x70 (Inherited: 0x00)
struct F*4e84a6225e {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct F*69023b25c5> *3b84f9a284; // 0x10(0x10)
	struct TArray<struct F*7c726e0f51> *1851c7d0e5; // 0x20(0x10)
	struct TArray<struct F*cc9a69d266> *f1f1b8b69d; // 0x30(0x10)
	struct TArray<struct F*04ca878293> *b657fcda0f; // 0x40(0x10)
	struct TArray<struct F*0db63c8cfd> *2ad6093b9c; // 0x50(0x10)
	struct TArray<struct F*51dbd3ab4e> *f145bdf4d7; // 0x60(0x10)
};

// ScriptStruct CustomizableObject.*8c31f61d66
// Size: 0x20 (Inherited: 0x00)
struct F*8c31f61d66 {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TArray<struct USkinnedMeshComponent*> Components; // 0x08(0x10)
	double Timestamp; // 0x18(0x08)
};

