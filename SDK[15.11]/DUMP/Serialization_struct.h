// ScriptStruct Serialization.*63874de910
// Size: 0x1d8 (Inherited: 0x00)
struct F*63874de910 {
	struct F*e2043d87cb Numerics; // 0x00(0x30)
	struct F*196556cae4 Booleans; // 0x30(0x08)
	struct F*de857ec150 Objects; // 0x38(0x10)
	struct F*3fd4804c82 Builtins; // 0x48(0x60)
	struct F*e99475bd31 Arrays; // 0xa8(0x40)
	struct F*181de9b3fd Maps; // 0xe8(0xf0)
};

// ScriptStruct Serialization.*181de9b3fd
// Size: 0xf0 (Inherited: 0x00)
struct F*181de9b3fd {
	struct TMap<int32, struct FString> *17445d930b; // 0x00(0x50)
	struct TMap<struct FString, struct FString> *f83758a25a; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> *5955b8172d; // 0xa0(0x50)
};

// ScriptStruct Serialization.*e99475bd31
// Size: 0x40 (Inherited: 0x00)
struct F*e99475bd31 {
	struct TArray<int32> *c7bfb17328; // 0x00(0x10)
	int32 *5899b6ae0e; // 0x10(0x04)
	int32 *054903d4b1[0x03]; // 0x14(0x0c)
	float *89e221300a[0x03]; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> *d4feaf6127; // 0x30(0x10)
};

// ScriptStruct Serialization.*3fd4804c82
// Size: 0x60 (Inherited: 0x00)
struct F*3fd4804c82 {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Text; // 0x38(0x18)
	struct FVector Vector; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Serialization.*de857ec150
// Size: 0x10 (Inherited: 0x00)
struct F*de857ec150 {
	struct UClass* Class; // 0x00(0x08)
	struct UObject* *e5e83a1944; // 0x08(0x08)
};

// ScriptStruct Serialization.*196556cae4
// Size: 0x08 (Inherited: 0x00)
struct F*196556cae4 {
	bool *51c6b8e992; // 0x00(0x01)
	bool *2f982425c6; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32 *7e51167bc0; // 0x04(0x04)
};

// ScriptStruct Serialization.*e2043d87cb
// Size: 0x30 (Inherited: 0x00)
struct F*e2043d87cb {
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

