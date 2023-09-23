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

// ScriptStruct CustomizableObject.*6ecb21ef8f
// Size: 0x20 (Inherited: 0x00)
struct F*6ecb21ef8f {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString *0a307a6231; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*7306cedc1e
// Size: 0x68 (Inherited: 0x00)
struct F*7306cedc1e {
	struct FString ParameterName; // 0x00(0x10)
	struct F*a534019b7d Value; // 0x10(0x38)
	struct FString Uid; // 0x48(0x10)
	struct TArray<struct F*a534019b7d> *431fea9934; // 0x58(0x10)
};

// ScriptStruct CustomizableObject.*a534019b7d
// Size: 0x38 (Inherited: 0x00)
struct F*a534019b7d {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
};

// ScriptStruct CustomizableObject.*0d3bceeef5
// Size: 0x30 (Inherited: 0x00)
struct F*0d3bceeef5 {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString Uid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*1328ff06c7
// Size: 0x28 (Inherited: 0x00)
struct F*1328ff06c7 {
	struct FString ParameterName; // 0x00(0x10)
	uint64 ParameterValue; // 0x10(0x08)
	struct FString Uid; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*70ca018483
// Size: 0x38 (Inherited: 0x00)
struct F*70ca018483 {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Uid; // 0x18(0x10)
	struct TArray<float> *f30b2b405a; // 0x28(0x10)
};

// ScriptStruct CustomizableObject.*a309894d19
// Size: 0x40 (Inherited: 0x00)
struct F*a309894d19 {
	struct FString ParameterName; // 0x00(0x10)
	struct FString *a9e8ed88bf; // 0x10(0x10)
	struct FString Uid; // 0x20(0x10)
	struct TArray<struct FString> *271b89f7a6; // 0x30(0x10)
};

// ScriptStruct CustomizableObject.*72bd199497
// Size: 0x28 (Inherited: 0x00)
struct F*72bd199497 {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Uid; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*f56167d8e1
// Size: 0x118 (Inherited: 0x00)
struct F*f56167d8e1 {
	struct FString Name; // 0x00(0x10)
	struct F*a52e54e5bb ParamUIMetadata; // 0x10(0xe8)
	enum class EMutableParameterType Type; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct F*899c541037> ArrayIntegerParameterOption; // 0x100(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x110(0x01)
	bool bDontCompressRuntimeTextures; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct CustomizableObject.*899c541037
// Size: 0xf8 (Inherited: 0x00)
struct F*899c541037 {
	struct FString Name; // 0x00(0x10)
	struct F*a52e54e5bb ParamUIMetadata; // 0x10(0xe8)
};

// ScriptStruct CustomizableObject.*a52e54e5bb
// Size: 0xe8 (Inherited: 0x00)
struct F*a52e54e5bb {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32 UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* UIThumbnail; // 0x28(0x20)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x48(0x50)
	struct TMap<struct FString, struct UObject*> ExtraAssets; // 0x98(0x50)
};

// ScriptStruct CustomizableObject.*6c9da4ef87
// Size: 0x10 (Inherited: 0x00)
struct F*6c9da4ef87 {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Texture; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*1f00d6ef03
// Size: 0x10 (Inherited: 0x00)
struct F*1f00d6ef03 {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*0111c3b7be
// Size: 0x10 (Inherited: 0x00)
struct F*0111c3b7be {
	struct TArray<struct F*9b4e9948c4> Textures; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*9b4e9948c4
// Size: 0x20 (Inherited: 0x00)
struct F*9b4e9948c4 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct CustomizableObject.*ec90ad1a5c
// Size: 0x10 (Inherited: 0x00)
struct F*ec90ad1a5c {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*e73c4b7ed0
// Size: 0x14 (Inherited: 0x00)
struct F*e73c4b7ed0 {
	struct FGuid *9bb78890f7; // 0x00(0x10)
	int32 *5617d0e5c4; // 0x10(0x04)
};

// ScriptStruct CustomizableObject.*4b3014c02e
// Size: 0x20 (Inherited: 0x00)
struct F*4b3014c02e {
	struct UCustomizableObject* *b4b2733673; // 0x00(0x20)
};

// ScriptStruct CustomizableObject.*923b93a2fe
// Size: 0x08 (Inherited: 0x00)
struct F*923b93a2fe {
	int32 *56386890a4; // 0x00(0x04)
	int32 VertexIndex; // 0x04(0x04)
};

// ScriptStruct CustomizableObject.*a03c76164b
// Size: 0x18 (Inherited: 0x00)
struct F*a03c76164b {
	int32 SizeX; // 0x00(0x04)
	int32 SizeY; // 0x04(0x04)
	struct TArray<uint32> Data; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*b9fa063e3a
// Size: 0x118 (Inherited: 0x00)
struct F*b9fa063e3a {
	struct FString Name; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *d01de94389; // 0x14(0x04)
	struct TArray<struct F*cc77f45114> *9b77d40c35; // 0x18(0x10)
	struct F*a52e54e5bb *54da6b581e; // 0x28(0xe8)
	bool *6662d2f621; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct CustomizableObject.*cc77f45114
// Size: 0x18 (Inherited: 0x00)
struct F*cc77f45114 {
	struct FString Name; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.*f16dcaea5a
// Size: 0x20 (Inherited: 0x00)
struct F*f16dcaea5a {
	struct FString *4242b22264; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32 LODBias; // 0x18(0x04)
	enum class *6486b70fc0 AddressX; // 0x1c(0x01)
	enum class *6486b70fc0 AddressY; // 0x1d(0x01)
	enum class TextureGroup LODGroup; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct CustomizableObject.*0638d7566a
// Size: 0x18 (Inherited: 0x00)
struct F*0638d7566a {
	bool *19ab287e10; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TargetPlatform; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*7d988ad616
// Size: 0x20 (Inherited: 0x00)
struct F*7d988ad616 {
	bool *19ab287e10; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *5b1d520ff8; // 0x04(0x04)
	bool *33c786a6fa; // 0x08(0x01)
	bool *b9c82681ae; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
};

// ScriptStruct CustomizableObject.*c92f7c016d
// Size: 0x70 (Inherited: 0x00)
struct F*c92f7c016d {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct F*72bd199497> *30acdf673a; // 0x10(0x10)
	struct TArray<struct F*a309894d19> *90785e1d1d; // 0x20(0x10)
	struct TArray<struct F*70ca018483> *740dee2b0a; // 0x30(0x10)
	struct TArray<struct F*1328ff06c7> *aa36e1c370; // 0x40(0x10)
	struct TArray<struct F*0d3bceeef5> *a7f4a9d12b; // 0x50(0x10)
	struct TArray<struct F*7306cedc1e> *54d0aa097f; // 0x60(0x10)
};

// ScriptStruct CustomizableObject.*7d73b971fa
// Size: 0x20 (Inherited: 0x00)
struct F*7d73b971fa {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TArray<struct USkinnedMeshComponent*> Components; // 0x08(0x10)
	double Timestamp; // 0x18(0x08)
};

