// Enum BuildPatchServices.*a429193c3c
enum class *a429193c3c : uint8 {
	*f5bdccf024,
	*f3c11aeba4,
	*0edd7a598e,
	*a429193c3c_MAX,
};

// ScriptStruct BuildPatchServices.*ff13d6a900
// Size: 0x14 (Inherited: 0x00)
struct F*ff13d6a900 {
	bool Hash[0x14]; // 0x00(0x14)
};

// ScriptStruct BuildPatchServices.*5ca059991a
// Size: 0x70 (Inherited: 0x00)
struct F*5ca059991a {
	struct FString FileName; // 0x00(0x10)
	struct F*ff13d6a900 FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*4115ba3335> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct BuildPatchServices.*4115ba3335
// Size: 0x18 (Inherited: 0x00)
struct F*4115ba3335 {
	struct FGuid Guid; // 0x00(0x10)
	uint32 Offset; // 0x10(0x04)
	uint32 Size; // 0x14(0x04)
};

// ScriptStruct BuildPatchServices.*40ab190174
// Size: 0x40 (Inherited: 0x00)
struct F*40ab190174 {
	struct FGuid Guid; // 0x00(0x10)
	uint64 Hash; // 0x10(0x08)
	struct F*ff13d6a900 *1448235b68; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64 FileSize; // 0x30(0x08)
	bool *fdab4f52bf; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BuildPatchServices.*9e043aed5a
// Size: 0x20 (Inherited: 0x00)
struct F*9e043aed5a {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

