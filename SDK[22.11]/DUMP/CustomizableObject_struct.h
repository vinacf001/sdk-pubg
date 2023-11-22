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

// ScriptStruct CustomizableObject.*42c0484a8b
// Size: 0x20 (Inherited: 0x00)
struct F*42c0484a8b {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString *a8736d7c7e; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*57128bd1a0
// Size: 0x68 (Inherited: 0x00)
struct F*57128bd1a0 {
	struct FString ParameterName; // 0x00(0x10)
	struct F*e5878254f4 Value; // 0x10(0x38)
	struct FString UID; // 0x48(0x10)
	struct TArray<struct F*e5878254f4> *2b6659df91; // 0x58(0x10)
};

// ScriptStruct CustomizableObject.*e5878254f4
// Size: 0x38 (Inherited: 0x00)
struct F*e5878254f4 {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
};

// ScriptStruct CustomizableObject.*0210d02652
// Size: 0x30 (Inherited: 0x00)
struct F*0210d02652 {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*7797a85727
// Size: 0x28 (Inherited: 0x00)
struct F*7797a85727 {
	struct FString ParameterName; // 0x00(0x10)
	uint64 ParameterValue; // 0x10(0x08)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*660dd47cd5
// Size: 0x38 (Inherited: 0x00)
struct F*660dd47cd5 {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UID; // 0x18(0x10)
	struct TArray<float> *d61af981ed; // 0x28(0x10)
};

// ScriptStruct CustomizableObject.*931db3194b
// Size: 0x40 (Inherited: 0x00)
struct F*931db3194b {
	struct FString ParameterName; // 0x00(0x10)
	struct FString *7f194dcadc; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	struct TArray<struct FString> *2434c16968; // 0x30(0x10)
};

// ScriptStruct CustomizableObject.*31be403f50
// Size: 0x28 (Inherited: 0x00)
struct F*31be403f50 {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*7dc3e73bff
// Size: 0x118 (Inherited: 0x00)
struct F*7dc3e73bff {
	struct FString Name; // 0x00(0x10)
	struct F*825469a545 ParamUIMetadata; // 0x10(0xe8)
	enum class EMutableParameterType Type; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct F*5d3af7ac5d> ArrayIntegerParameterOption; // 0x100(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x110(0x01)
	bool bDontCompressRuntimeTextures; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct CustomizableObject.*5d3af7ac5d
// Size: 0xf8 (Inherited: 0x00)
struct F*5d3af7ac5d {
	struct FString Name; // 0x00(0x10)
	struct F*825469a545 ParamUIMetadata; // 0x10(0xe8)
};

// ScriptStruct CustomizableObject.*825469a545
// Size: 0xe8 (Inherited: 0x00)
struct F*825469a545 {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32 UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* UIThumbnail; // 0x28(0x20)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x48(0x50)
	struct TMap<struct FString, struct UObject*> ExtraAssets; // 0x98(0x50)
};

// ScriptStruct CustomizableObject.*73454af81f
// Size: 0x10 (Inherited: 0x00)
struct F*73454af81f {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Texture; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*9f1c4b0938
// Size: 0x10 (Inherited: 0x00)
struct F*9f1c4b0938 {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*23c73845b1
// Size: 0x10 (Inherited: 0x00)
struct F*23c73845b1 {
	struct TArray<struct F*a07abee8ef> Textures; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*a07abee8ef
// Size: 0x20 (Inherited: 0x00)
struct F*a07abee8ef {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct CustomizableObject.*9057d67164
// Size: 0x10 (Inherited: 0x00)
struct F*9057d67164 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*44e87167c1
// Size: 0x14 (Inherited: 0x00)
struct F*44e87167c1 {
	struct FGuid *e058c29439; // 0x00(0x10)
	int32 *fdc94a46f3; // 0x10(0x04)
};

// ScriptStruct CustomizableObject.*3b569bad13
// Size: 0x20 (Inherited: 0x00)
struct F*3b569bad13 {
	struct UCustomizableObject* *b0dbab3b91; // 0x00(0x20)
};

// ScriptStruct CustomizableObject.*5d3c7bf855
// Size: 0x08 (Inherited: 0x00)
struct F*5d3c7bf855 {
	int32 *4d734745c9; // 0x00(0x04)
	int32 VertexIndex; // 0x04(0x04)
};

// ScriptStruct CustomizableObject.*5c8826e450
// Size: 0x18 (Inherited: 0x00)
struct F*5c8826e450 {
	int32 SizeX; // 0x00(0x04)
	int32 SizeY; // 0x04(0x04)
	struct TArray<uint32> Data; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*f2d21b72e0
// Size: 0x118 (Inherited: 0x00)
struct F*f2d21b72e0 {
	struct FString Name; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *4b6134461d; // 0x14(0x04)
	struct TArray<struct F*90091d0590> *d9196e1571; // 0x18(0x10)
	struct F*825469a545 *7aa2799348; // 0x28(0xe8)
	bool *4e1d4eb29c; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct CustomizableObject.*90091d0590
// Size: 0x18 (Inherited: 0x00)
struct F*90091d0590 {
	struct FString Name; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.*92ff69471e
// Size: 0x20 (Inherited: 0x00)
struct F*92ff69471e {
	struct FString *91f0302430; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32 LODBias; // 0x18(0x04)
	enum class *5476cf1861 AddressX; // 0x1c(0x01)
	enum class *5476cf1861 AddressY; // 0x1d(0x01)
	enum class TextureGroup LODGroup; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct CustomizableObject.*995838d218
// Size: 0x18 (Inherited: 0x00)
struct F*995838d218 {
	bool *7655a82a05; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TargetPlatform; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*51be7374dd
// Size: 0x20 (Inherited: 0x00)
struct F*51be7374dd {
	bool *7655a82a05; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *4b462d4235; // 0x04(0x04)
	bool *51059a5f29; // 0x08(0x01)
	bool *ea193c33b4; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
};

// ScriptStruct CustomizableObject.*54b7b15cfa
// Size: 0x70 (Inherited: 0x00)
struct F*54b7b15cfa {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct F*31be403f50> *cb44e01fbc; // 0x10(0x10)
	struct TArray<struct F*931db3194b> *1be56fa897; // 0x20(0x10)
	struct TArray<struct F*660dd47cd5> *1053b4727f; // 0x30(0x10)
	struct TArray<struct F*7797a85727> *0b4606fbe6; // 0x40(0x10)
	struct TArray<struct F*0210d02652> *68a814167a; // 0x50(0x10)
	struct TArray<struct F*57128bd1a0> *15e6a0cbfc; // 0x60(0x10)
};

// ScriptStruct CustomizableObject.*734b8b5ab6
// Size: 0x20 (Inherited: 0x00)
struct F*734b8b5ab6 {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TArray<struct USkinnedMeshComponent*> Components; // 0x08(0x10)
	double Timestamp; // 0x18(0x08)
};

