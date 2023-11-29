// Enum BuildPatchServices.*e65478f2b9
enum class *e65478f2b9 : uint8 {
	*453822a799,
	*71294f86e0,
	*5dfed06e6e,
	*e65478f2b9_MAX,
};

// ScriptStruct BuildPatchServices.*b58c1c2c94
// Size: 0x14 (Inherited: 0x00)
struct F*b58c1c2c94 {
	bool Hash[0x14]; // 0x00(0x14)
};

// ScriptStruct BuildPatchServices.*a1ad53d0b0
// Size: 0x70 (Inherited: 0x00)
struct F*a1ad53d0b0 {
	struct FString FileName; // 0x00(0x10)
	struct F*b58c1c2c94 FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*9fbf820d4f> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct BuildPatchServices.*9fbf820d4f
// Size: 0x18 (Inherited: 0x00)
struct F*9fbf820d4f {
	struct FGuid Guid; // 0x00(0x10)
	uint32 Offset; // 0x10(0x04)
	uint32 Size; // 0x14(0x04)
};

// ScriptStruct BuildPatchServices.*944a377e14
// Size: 0x40 (Inherited: 0x00)
struct F*944a377e14 {
	struct FGuid Guid; // 0x00(0x10)
	uint64 Hash; // 0x10(0x08)
	struct F*b58c1c2c94 *3b30eb962d; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64 FileSize; // 0x30(0x08)
	bool *ed57eaa3ae; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BuildPatchServices.*1b9951dd56
// Size: 0x20 (Inherited: 0x00)
struct F*1b9951dd56 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

