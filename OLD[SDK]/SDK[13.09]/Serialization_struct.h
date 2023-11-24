// ScriptStruct Serialization.*a721898204
// Size: 0x1d8 (Inherited: 0x00)
struct F*a721898204 {
	struct F*f7b26e791d Numerics; // 0x00(0x30)
	struct F*77312df8f1 Booleans; // 0x30(0x08)
	struct F*a014bda8d4 Objects; // 0x38(0x10)
	struct F*a040f1875f Builtins; // 0x48(0x60)
	struct F*405c20a414 Arrays; // 0xa8(0x40)
	struct F*34b5acae53 Maps; // 0xe8(0xf0)
};

// ScriptStruct Serialization.*34b5acae53
// Size: 0xf0 (Inherited: 0x00)
struct F*34b5acae53 {
	struct TMap<int32, struct FString> *0670632be7; // 0x00(0x50)
	struct TMap<struct FString, struct FString> *54d453d775; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> *dd197d2329; // 0xa0(0x50)
};

// ScriptStruct Serialization.*405c20a414
// Size: 0x40 (Inherited: 0x00)
struct F*405c20a414 {
	struct TArray<int32> *89b71c0a26; // 0x00(0x10)
	int32 *b0fd51c7f3; // 0x10(0x04)
	int32 *5404d620dd[0x03]; // 0x14(0x0c)
	float *223c0009ea[0x03]; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> *630fb48636; // 0x30(0x10)
};

// ScriptStruct Serialization.*a040f1875f
// Size: 0x60 (Inherited: 0x00)
struct F*a040f1875f {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Text; // 0x38(0x18)
	struct FVector Vector; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Serialization.*a014bda8d4
// Size: 0x10 (Inherited: 0x00)
struct F*a014bda8d4 {
	struct UClass* Class; // 0x00(0x08)
	struct UObject* *da7df9d68d; // 0x08(0x08)
};

// ScriptStruct Serialization.*77312df8f1
// Size: 0x08 (Inherited: 0x00)
struct F*77312df8f1 {
	bool *da7ff50a4d; // 0x00(0x01)
	bool *90abd82c94; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32 *f54ae276ff; // 0x04(0x04)
};

// ScriptStruct Serialization.*f7b26e791d
// Size: 0x30 (Inherited: 0x00)
struct F*f7b26e791d {
	int8 Int8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16 Int16; // 0x02(0x02)
	int32 Int32; // 0x04(0x04)
	int64 Int64; // 0x08(0x08)
	bool UInt8; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16 UInt16; // 0x12(0x02)
	uint32 UInt32; // 0x14(0x04)
	uint64 UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)
};

