// ScriptStruct SessionMessages.*d8819fbd4b
// Size: 0x01 (Inherited: 0x00)
struct F*d8819fbd4b {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*4069bcfe0d
// Size: 0x01 (Inherited: 0x00)
struct F*4069bcfe0d {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*c1fa0acf93
// Size: 0x70 (Inherited: 0x00)
struct F*c1fa0acf93 {
	struct TArray<struct FName> Categories; // 0x00(0x10)
	struct TMap<uint32, struct FString> *0cea96ad93; // 0x10(0x50)
	struct FGuid InstanceId; // 0x60(0x10)
};

// ScriptStruct SessionMessages.*b43498f837
// Size: 0x01 (Inherited: 0x00)
struct F*b43498f837 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*a3b87af476
// Size: 0x38 (Inherited: 0x00)
struct F*a3b87af476 {
	struct FName Category; // 0x00(0x08)
	struct FString Data; // 0x08(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	uint32 ThreadId; // 0x30(0x04)
	bool Verbosity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct SessionMessages.*ba99c9cb7c
// Size: 0x98 (Inherited: 0x00)
struct F*ba99c9cb7c {
	bool *ab9cec9224; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString *d82aaafc91; // 0x38(0x10)
	bool *c1b3b5ef05; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString PlatformName; // 0x50(0x10)
	struct FGuid SessionId; // 0x60(0x10)
	struct FString SessionName; // 0x70(0x10)
	struct FString SessionOwner; // 0x80(0x10)
	bool Standalone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SessionMessages.*13c9df741b
// Size: 0x10 (Inherited: 0x00)
struct F*13c9df741b {
	struct FString UserName; // 0x00(0x10)
};

