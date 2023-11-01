// ScriptStruct BuildPatchServices.*abdc0cdd70
// Size: 0x14 (Inherited: 0x00)
struct F*abdc0cdd70 {
	bool Hash[0x14]; // 0x00(0x14)
};

// ScriptStruct BuildPatchServices.*6b246abfcd
// Size: 0x70 (Inherited: 0x00)
struct F*6b246abfcd {
	struct FString FileName; // 0x00(0x10)
	struct F*abdc0cdd70 FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*b09d00ea8e> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct BuildPatchServices.*b09d00ea8e
// Size: 0x18 (Inherited: 0x00)
struct F*b09d00ea8e {
	struct FGuid Guid; // 0x00(0x10)
	uint32 Offset; // 0x10(0x04)
	uint32 Size; // 0x14(0x04)
};

// ScriptStruct BuildPatchServices.*fff5acbf13
// Size: 0x40 (Inherited: 0x00)
struct F*fff5acbf13 {
	struct FGuid Guid; // 0x00(0x10)
	uint64 Hash; // 0x10(0x08)
	struct F*abdc0cdd70 *8e166c1cfe; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64 FileSize; // 0x30(0x08)
	bool *48021d4698; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BuildPatchServices.*a45e391d99
// Size: 0x20 (Inherited: 0x00)
struct F*a45e391d99 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

