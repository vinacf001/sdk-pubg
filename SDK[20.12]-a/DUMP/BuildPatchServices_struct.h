// Enum BuildPatchServices.*83ee013b8e
enum class *83ee013b8e : uint8 {
	*80cd1849e4,
	*80151a9db5,
	*2e2ebc57bf,
	*83ee013b8e_MAX,
};

// ScriptStruct BuildPatchServices.*0da400df16
// Size: 0x14 (Inherited: 0x00)
struct F*0da400df16 {
	bool Hash[0x14]; // 0x00(0x14)
};

// ScriptStruct BuildPatchServices.*8ec639c0f8
// Size: 0x70 (Inherited: 0x00)
struct F*8ec639c0f8 {
	struct FString FileName; // 0x00(0x10)
	struct F*0da400df16 FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*1bb1f46578> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct BuildPatchServices.*1bb1f46578
// Size: 0x18 (Inherited: 0x00)
struct F*1bb1f46578 {
	struct FGuid Guid; // 0x00(0x10)
	uint32 Offset; // 0x10(0x04)
	uint32 Size; // 0x14(0x04)
};

// ScriptStruct BuildPatchServices.*0d24e6c03b
// Size: 0x40 (Inherited: 0x00)
struct F*0d24e6c03b {
	struct FGuid Guid; // 0x00(0x10)
	uint64 Hash; // 0x10(0x08)
	struct F*0da400df16 *d4bb8c3b4d; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64 FileSize; // 0x30(0x08)
	bool *9fec4ed05f; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BuildPatchServices.*c667bf8018
// Size: 0x20 (Inherited: 0x00)
struct F*c667bf8018 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

