// ScriptStruct SessionMessages.*eb9914e3a6
// Size: 0x01 (Inherited: 0x00)
struct F*eb9914e3a6 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*463a5cf20a
// Size: 0x01 (Inherited: 0x00)
struct F*463a5cf20a {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*10165d3cd7
// Size: 0x70 (Inherited: 0x00)
struct F*10165d3cd7 {
	struct TArray<struct FName> Categories; // 0x00(0x10)
	struct TMap<uint32, struct FString> *c778c19536; // 0x10(0x50)
	struct FGuid InstanceId; // 0x60(0x10)
};

// ScriptStruct SessionMessages.*485f883e0c
// Size: 0x01 (Inherited: 0x00)
struct F*485f883e0c {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*8091b7a7a0
// Size: 0x38 (Inherited: 0x00)
struct F*8091b7a7a0 {
	struct FName Category; // 0x00(0x08)
	struct FString Data; // 0x08(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	uint32 ThreadId; // 0x30(0x04)
	bool Verbosity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct SessionMessages.*2962a581e8
// Size: 0x98 (Inherited: 0x00)
struct F*2962a581e8 {
	bool *81f73816ba; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString *713527eb11; // 0x38(0x10)
	bool *86a74072b7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString PlatformName; // 0x50(0x10)
	struct FGuid SessionId; // 0x60(0x10)
	struct FString SessionName; // 0x70(0x10)
	struct FString SessionOwner; // 0x80(0x10)
	bool Standalone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SessionMessages.*14fe02e4b4
// Size: 0x10 (Inherited: 0x00)
struct F*14fe02e4b4 {
	struct FString UserName; // 0x00(0x10)
};

