// ScriptStruct Serialization.*bc87a18c3f
// Size: 0x1d8 (Inherited: 0x00)
struct F*bc87a18c3f {
	struct F*59bd74117f Numerics; // 0x00(0x30)
	struct F*9d1d99b902 Booleans; // 0x30(0x08)
	struct F*d274381c03 Objects; // 0x38(0x10)
	struct F*aba6e8435b Builtins; // 0x48(0x60)
	struct F*b0039a8052 Arrays; // 0xa8(0x40)
	struct F*6144e4d361 Maps; // 0xe8(0xf0)
};

// ScriptStruct Serialization.*6144e4d361
// Size: 0xf0 (Inherited: 0x00)
struct F*6144e4d361 {
	struct TMap<int32, struct FString> *d283bf5fcb; // 0x00(0x50)
	struct TMap<struct FString, struct FString> *ad16a8fade; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> *9e8b392220; // 0xa0(0x50)
};

// ScriptStruct Serialization.*b0039a8052
// Size: 0x40 (Inherited: 0x00)
struct F*b0039a8052 {
	struct TArray<int32> *9a3f6b1f35; // 0x00(0x10)
	int32 *e4c943dbac; // 0x10(0x04)
	int32 *2c61f20355[0x03]; // 0x14(0x0c)
	float *05ee8e79ad[0x03]; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> *0b9edb0965; // 0x30(0x10)
};

// ScriptStruct Serialization.*aba6e8435b
// Size: 0x60 (Inherited: 0x00)
struct F*aba6e8435b {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Text; // 0x38(0x18)
	struct FVector Vector; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Serialization.*d274381c03
// Size: 0x10 (Inherited: 0x00)
struct F*d274381c03 {
	struct UClass* Class; // 0x00(0x08)
	struct UObject* *404dcf7af8; // 0x08(0x08)
};

// ScriptStruct Serialization.*9d1d99b902
// Size: 0x08 (Inherited: 0x00)
struct F*9d1d99b902 {
	bool *3a769d5a0f; // 0x00(0x01)
	bool *e457f20816; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32 *296b4ff83f; // 0x04(0x04)
};

// ScriptStruct Serialization.*59bd74117f
// Size: 0x30 (Inherited: 0x00)
struct F*59bd74117f {
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

