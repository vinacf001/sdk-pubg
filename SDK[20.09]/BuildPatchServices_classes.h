// Class BuildPatchServices.BuildPatchManifest
// Size: 0xd0 (Inherited: 0x28)
struct UBuildPatchManifest : UObject {
	bool ManifestFileVersion; // 0x28(0x01)
	bool bIsFileData; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	uint32 AppID; // 0x2c(0x04)
	struct FString AppName; // 0x30(0x10)
	struct FString BuildVersion; // 0x40(0x10)
	struct FString *9749b63700; // 0x50(0x10)
	struct FString LaunchCommand; // 0x60(0x10)
	struct FString PrereqName; // 0x70(0x10)
	struct FString PrereqPath; // 0x80(0x10)
	struct FString PrereqArgs; // 0x90(0x10)
	struct TArray<struct F*5ca059991a> FileManifestList; // 0xa0(0x10)
	struct TArray<struct F*40ab190174> *3d426bd905; // 0xb0(0x10)
	struct TArray<struct F*9e043aed5a> CustomFields; // 0xc0(0x10)
};

