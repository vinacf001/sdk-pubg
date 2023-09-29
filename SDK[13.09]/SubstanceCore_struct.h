// ScriptStruct SubstanceCore.*39ee56cac8
// Size: 0x20 (Inherited: 0x00)
struct F*39ee56cac8 {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*aaba7c2dae> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*aaba7c2dae
// Size: 0x18 (Inherited: 0x00)
struct F*aaba7c2dae {
	struct FString Name; // 0x00(0x10)
	enum class *93683ea49d Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*5da3b9bea1
// Size: 0x48 (Inherited: 0x18)
struct F*5da3b9bea1 : F*aaba7c2dae {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*eaad9b891e
// Size: 0x48 (Inherited: 0x18)
struct F*eaad9b891e : F*aaba7c2dae {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*55a8b62925
// Size: 0x20 (Inherited: 0x00)
struct F*55a8b62925 {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

