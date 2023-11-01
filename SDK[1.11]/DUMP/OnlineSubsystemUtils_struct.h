// ScriptStruct OnlineSubsystemUtils.*1efd0c747b
// Size: 0x108 (Inherited: 0x00)
struct F*1efd0c747b {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct OnlineSubsystemUtils.*49ed00af1b
// Size: 0x30 (Inherited: 0x00)
struct F*49ed00af1b {
	int32 TeamNum[0x04]; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl *31e2ec7fdc[0x18]; // 0x08(0x18)
	struct TArray<struct F*402bf529c1> *b3a46450aa[0x10]; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.*402bf529c1
// Size: 0x30 (Inherited: 0x00)
struct F*402bf529c1 {
	struct FUniqueNetIdRepl UniqueId[0x18]; // 0x00(0x18)
	struct FString *eb4201cd84[0x10]; // 0x18(0x10)
	float *4a0e165ffa[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.*7bf36f7666
// Size: 0x40 (Inherited: 0x00)
struct F*7bf36f7666 {
	struct FString ID[0x10]; // 0x00(0x10)
	struct FString Token[0x10]; // 0x10(0x10)
	struct FString Type[0x10]; // 0x20(0x10)
	struct TArray<bool> *12c917ee67[0x10]; // 0x30(0x10)
};

