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

// ScriptStruct CustomizableObject.*54424d3e0d
// Size: 0x20 (Inherited: 0x00)
struct F*54424d3e0d {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString *7f1a85c44d; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*e357ce8580
// Size: 0x68 (Inherited: 0x00)
struct F*e357ce8580 {
	struct FString ParameterName; // 0x00(0x10)
	struct F*ce7b2c0605 Value; // 0x10(0x38)
	struct FString UID; // 0x48(0x10)
	struct TArray<struct F*ce7b2c0605> *4dc669ba4a; // 0x58(0x10)
};

// ScriptStruct CustomizableObject.*ce7b2c0605
// Size: 0x38 (Inherited: 0x00)
struct F*ce7b2c0605 {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
};

// ScriptStruct CustomizableObject.*48c3c84a0f
// Size: 0x30 (Inherited: 0x00)
struct F*48c3c84a0f {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*b63a11dea5
// Size: 0x28 (Inherited: 0x00)
struct F*b63a11dea5 {
	struct FString ParameterName; // 0x00(0x10)
	uint64 ParameterValue; // 0x10(0x08)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*9c105b932b
// Size: 0x38 (Inherited: 0x00)
struct F*9c105b932b {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UID; // 0x18(0x10)
	struct TArray<float> *4db1816f40; // 0x28(0x10)
};

// ScriptStruct CustomizableObject.*e82b45fc9c
// Size: 0x40 (Inherited: 0x00)
struct F*e82b45fc9c {
	struct FString ParameterName; // 0x00(0x10)
	struct FString *1081a71a45; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	struct TArray<struct FString> *e87bd81000; // 0x30(0x10)
};

// ScriptStruct CustomizableObject.*50337b7e4f
// Size: 0x28 (Inherited: 0x00)
struct F*50337b7e4f {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*c4331059b1
// Size: 0x118 (Inherited: 0x00)
struct F*c4331059b1 {
	struct FString Name; // 0x00(0x10)
	struct F*60c058ec5f ParamUIMetadata; // 0x10(0xe8)
	enum class EMutableParameterType Type; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct F*a89309646f> ArrayIntegerParameterOption; // 0x100(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x110(0x01)
	bool bDontCompressRuntimeTextures; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct CustomizableObject.*a89309646f
// Size: 0xf8 (Inherited: 0x00)
struct F*a89309646f {
	struct FString Name; // 0x00(0x10)
	struct F*60c058ec5f ParamUIMetadata; // 0x10(0xe8)
};

// ScriptStruct CustomizableObject.*60c058ec5f
// Size: 0xe8 (Inherited: 0x00)
struct F*60c058ec5f {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32 UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* UIThumbnail; // 0x28(0x20)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x48(0x50)
	struct TMap<struct FString, struct UObject*> ExtraAssets; // 0x98(0x50)
};

// ScriptStruct CustomizableObject.*2dcd8fdb76
// Size: 0x10 (Inherited: 0x00)
struct F*2dcd8fdb76 {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Texture; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*bfd4aa08bb
// Size: 0x10 (Inherited: 0x00)
struct F*bfd4aa08bb {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*f0d78aa66b
// Size: 0x10 (Inherited: 0x00)
struct F*f0d78aa66b {
	struct TArray<struct F*89b0dafd96> Textures; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*89b0dafd96
// Size: 0x20 (Inherited: 0x00)
struct F*89b0dafd96 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct CustomizableObject.*36eb595a74
// Size: 0x10 (Inherited: 0x00)
struct F*36eb595a74 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*9d7d50dcb4
// Size: 0x14 (Inherited: 0x00)
struct F*9d7d50dcb4 {
	struct FGuid *982d89518d; // 0x00(0x10)
	int32 *f9d30fab27; // 0x10(0x04)
};

// ScriptStruct CustomizableObject.*847a494e59
// Size: 0x20 (Inherited: 0x00)
struct F*847a494e59 {
	struct UCustomizableObject* *b318c8afdc; // 0x00(0x20)
};

// ScriptStruct CustomizableObject.*294c46bd80
// Size: 0x08 (Inherited: 0x00)
struct F*294c46bd80 {
	int32 *dfd3928f70; // 0x00(0x04)
	int32 VertexIndex; // 0x04(0x04)
};

// ScriptStruct CustomizableObject.*5be47f90d9
// Size: 0x18 (Inherited: 0x00)
struct F*5be47f90d9 {
	int32 SizeX; // 0x00(0x04)
	int32 SizeY; // 0x04(0x04)
	struct TArray<uint32> Data; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*8eb896974a
// Size: 0x118 (Inherited: 0x00)
struct F*8eb896974a {
	struct FString Name; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *c71dfa184b; // 0x14(0x04)
	struct TArray<struct F*f0be520b15> *4b443e8e55; // 0x18(0x10)
	struct F*60c058ec5f *31948afffe; // 0x28(0xe8)
	bool *0abccff06e; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct CustomizableObject.*f0be520b15
// Size: 0x18 (Inherited: 0x00)
struct F*f0be520b15 {
	struct FString Name; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.*c8168d8edd
// Size: 0x20 (Inherited: 0x00)
struct F*c8168d8edd {
	struct FString *138e17d39c; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32 LODBias; // 0x18(0x04)
	enum class *8e17248832 AddressX; // 0x1c(0x01)
	enum class *8e17248832 AddressY; // 0x1d(0x01)
	enum class TextureGroup LODGroup; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct CustomizableObject.*cedd7f4e57
// Size: 0x18 (Inherited: 0x00)
struct F*cedd7f4e57 {
	bool *2ef77fd5ab; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TargetPlatform; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*01714c2c02
// Size: 0x20 (Inherited: 0x00)
struct F*01714c2c02 {
	bool *2ef77fd5ab; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *2cecb3e3cd; // 0x04(0x04)
	bool *5096ce35ce; // 0x08(0x01)
	bool *f610970d5f; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
};

// ScriptStruct CustomizableObject.*edb9dfb1b7
// Size: 0x70 (Inherited: 0x00)
struct F*edb9dfb1b7 {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct F*50337b7e4f> *7e9a6feeb6; // 0x10(0x10)
	struct TArray<struct F*e82b45fc9c> *3107593f55; // 0x20(0x10)
	struct TArray<struct F*9c105b932b> *ca8a4280c7; // 0x30(0x10)
	struct TArray<struct F*b63a11dea5> *beb946aeb4; // 0x40(0x10)
	struct TArray<struct F*48c3c84a0f> *f5b6331d28; // 0x50(0x10)
	struct TArray<struct F*e357ce8580> *80f62bf23f; // 0x60(0x10)
};

// ScriptStruct CustomizableObject.*2cc416b752
// Size: 0x20 (Inherited: 0x00)
struct F*2cc416b752 {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TArray<struct USkinnedMeshComponent*> Components; // 0x08(0x10)
	double Timestamp; // 0x18(0x08)
};

