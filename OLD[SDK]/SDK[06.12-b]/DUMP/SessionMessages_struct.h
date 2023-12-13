// ScriptStruct SessionMessages.*5c25276c56
// Size: 0x01 (Inherited: 0x00)
struct F*5c25276c56 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*adb7db7bfa
// Size: 0x01 (Inherited: 0x00)
struct F*adb7db7bfa {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*686b6c399e
// Size: 0x70 (Inherited: 0x00)
struct F*686b6c399e {
	struct TArray<struct FName> Categories; // 0x00(0x10)
	struct TMap<uint32, struct FString> *d8f12715b9; // 0x10(0x50)
	struct FGuid InstanceId; // 0x60(0x10)
};

// ScriptStruct SessionMessages.*7afa81c107
// Size: 0x01 (Inherited: 0x00)
struct F*7afa81c107 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*0a0089567b
// Size: 0x38 (Inherited: 0x00)
struct F*0a0089567b {
	struct FName Category; // 0x00(0x08)
	struct FString Data; // 0x08(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	uint32 ThreadId; // 0x30(0x04)
	bool Verbosity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct SessionMessages.*822d7dbe13
// Size: 0x98 (Inherited: 0x00)
struct F*822d7dbe13 {
	bool *da06e2814c; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString *b5bab39c62; // 0x38(0x10)
	bool *e56e898c47; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString PlatformName; // 0x50(0x10)
	struct FGuid SessionId; // 0x60(0x10)
	struct FString SessionName; // 0x70(0x10)
	struct FString SessionOwner; // 0x80(0x10)
	bool Standalone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SessionMessages.*a4c9991b03
// Size: 0x10 (Inherited: 0x00)
struct F*a4c9991b03 {
	struct FString UserName; // 0x00(0x10)
};

