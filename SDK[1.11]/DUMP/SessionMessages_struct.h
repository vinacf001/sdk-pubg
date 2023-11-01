// ScriptStruct SessionMessages.*f0eaca98c2
// Size: 0x01 (Inherited: 0x00)
struct F*f0eaca98c2 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*40f2394c27
// Size: 0x01 (Inherited: 0x00)
struct F*40f2394c27 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*fafc47f77c
// Size: 0x70 (Inherited: 0x00)
struct F*fafc47f77c {
	struct TArray<struct FName> Categories[0x10]; // 0x00(0x10)
	struct TMap<uint32, struct FString> *41a06e36bc[0x50]; // 0x10(0x50)
	struct FGuid InstanceId[0x10]; // 0x60(0x10)
};

// ScriptStruct SessionMessages.*a1daf300f0
// Size: 0x01 (Inherited: 0x00)
struct F*a1daf300f0 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*41fa6967bb
// Size: 0x38 (Inherited: 0x00)
struct F*41fa6967bb {
	struct FName Category[0x08]; // 0x00(0x08)
	struct FString Data[0x10]; // 0x08(0x10)
	struct FGuid InstanceId[0x10]; // 0x18(0x10)
	double TimeSeconds[0x08]; // 0x28(0x08)
	uint32 ThreadId[0x04]; // 0x30(0x04)
	bool Verbosity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct SessionMessages.*2ae97b99d9
// Size: 0x98 (Inherited: 0x00)
struct F*2ae97b99d9 {
	bool *1079bb8afb; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate[0x10]; // 0x08(0x10)
	struct FString DeviceName[0x10]; // 0x18(0x10)
	struct FGuid InstanceId[0x10]; // 0x28(0x10)
	struct FString *8f519e168b[0x10]; // 0x38(0x10)
	bool *29d62d4fdd; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString PlatformName[0x10]; // 0x50(0x10)
	struct FGuid SessionId[0x10]; // 0x60(0x10)
	struct FString SessionName[0x10]; // 0x70(0x10)
	struct FString SessionOwner[0x10]; // 0x80(0x10)
	bool Standalone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SessionMessages.*a161c28930
// Size: 0x10 (Inherited: 0x00)
struct F*a161c28930 {
	struct FString UserName[0x10]; // 0x00(0x10)
};

