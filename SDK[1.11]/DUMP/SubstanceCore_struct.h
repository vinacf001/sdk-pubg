// ScriptStruct SubstanceCore.*dc524197be
// Size: 0x20 (Inherited: 0x00)
struct F*dc524197be {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*9aa43c566b> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*9aa43c566b
// Size: 0x18 (Inherited: 0x00)
struct F*9aa43c566b {
	struct FString Name; // 0x00(0x10)
	enum class *1ba95bd775 Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*28360cb8d9
// Size: 0x48 (Inherited: 0x18)
struct F*28360cb8d9 : F*9aa43c566b {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*a82c3d2872
// Size: 0x48 (Inherited: 0x18)
struct F*a82c3d2872 : F*9aa43c566b {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*8f12134eea
// Size: 0x20 (Inherited: 0x00)
struct F*8f12134eea {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

