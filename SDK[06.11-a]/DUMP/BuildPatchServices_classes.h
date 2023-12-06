// Class BuildPatchServices.BuildPatchManifest
// Size: 0xd8 (Inherited: 0x30)
struct UBuildPatchManifest : UObject {
	bool ManifestFileVersion; // 0x30(0x01)
	bool bIsFileData; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	uint32 AppID; // 0x34(0x04)
	struct FString AppName; // 0x38(0x10)
	struct FString BuildVersion; // 0x48(0x10)
	struct FString *7933fbd8ee; // 0x58(0x10)
	struct FString LaunchCommand; // 0x68(0x10)
	struct FString PrereqName; // 0x78(0x10)
	struct FString PrereqPath; // 0x88(0x10)
	struct FString PrereqArgs; // 0x98(0x10)
	struct TArray<struct F*8ec639c0f8> FileManifestList; // 0xa8(0x10)
	struct TArray<struct F*0d24e6c03b> *b2a4066c91; // 0xb8(0x10)
	struct TArray<struct F*c667bf8018> CustomFields; // 0xc8(0x10)
};

