// ScriptStruct PhysXVehicles.*4bbb30343f
// Size: 0x30 (Inherited: 0x00)
struct F*4bbb30343f {
	struct UClass* *304470bc6d; // 0x00(0x08)
	struct UClass* *6cdebee0b4; // 0x08(0x08)
	struct UClass* *f41c548aec; // 0x10(0x08)
	struct FName BoneName; // 0x18(0x08)
	struct FVector *4836e2b7a6; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*0b9c1223db
// Size: 0x28 (Inherited: 0x00)
struct F*0b9c1223db {
	bool *072b11a471; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> *6817f47017; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct PhysXVehicles.*42ae5cb29f
// Size: 0x10 (Inherited: 0x00)
struct F*42ae5cb29f {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float *d721b555b8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PhysXVehicles.*51ca46ef7b
// Size: 0x540 (Inherited: 0x520)
struct F*51ca46ef7b : F*082f93e0ad {
	char pad_520[0x20]; // 0x520(0x20)
};

// ScriptStruct PhysXVehicles.*8523fec421
// Size: 0x14 (Inherited: 0x00)
struct F*8523fec421 {
	float *b4c65a86fd; // 0x00(0x04)
	float *7192c6aedf; // 0x04(0x04)
	float *fe131bb1cd; // 0x08(0x04)
	float *b89afd76bb; // 0x0c(0x04)
	float *d08f2fc207; // 0x10(0x04)
};

// ScriptStruct PhysXVehicles.*b6b96469f5
// Size: 0x60 (Inherited: 0x00)
struct F*b6b96469f5 {
	bool *9d01e29592; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x08(0x08)
	struct FVector *31830ab499; // 0x10(0x0c)
	struct FVector ContactPoint; // 0x1c(0x0c)
	struct FVector *e92d014b5b; // 0x28(0x0c)
	struct FVector *20ff154576; // 0x34(0x0c)
	float *938c4e1d74; // 0x40(0x04)
	float SuspJounce; // 0x44(0x04)
	float *f3ed7cc3ef; // 0x48(0x04)
	float *85f981b8fa; // 0x4c(0x04)
	float *3c75505c57; // 0x50(0x04)
	float SteerAngle; // 0x54(0x04)
	float RotationAngle; // 0x58(0x04)
	float RotationSpeed; // 0x5c(0x04)
};

// ScriptStruct PhysXVehicles.*5f66ed682c
// Size: 0x0c (Inherited: 0x00)
struct F*5f66ed682c {
	uint32 *15605fb781; // 0x00(0x04)
	uint32 *b679a8f41f; // 0x04(0x04)
	float Stiffness; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*9d54d4c4f6
// Size: 0x08 (Inherited: 0x00)
struct F*9d54d4c4f6 {
	float *3232f7a6a2; // 0x00(0x04)
	float *e276f57c64; // 0x04(0x04)
};

// ScriptStruct PhysXVehicles.*ea6b647fa8
// Size: 0x1c (Inherited: 0x00)
struct F*ea6b647fa8 {
	float *b486c6fc45; // 0x00(0x04)
	float *511051753a; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float *40b41e4b8d; // 0x0c(0x04)
	int16 CurrentGear; // 0x10(0x02)
	int16 EngineRotationSpeed; // 0x12(0x02)
	uint32 *935bdcd224; // 0x14(0x04)
	uint32 *f66d81ab3a; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float *264a5c7f77; // 0x08(0x04)
	float *3a70276b17; // 0x0c(0x04)
	struct TArray<struct F*a710ae0ebe> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float *3989033fd6; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*a710ae0ebe
// Size: 0x0c (Inherited: 0x00)
struct F*a710ae0ebe {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*59dac41ed6
// Size: 0x90 (Inherited: 0x00)
struct F*59dac41ed6 {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x78)
	float *f348b0f71e; // 0x78(0x04)
	float *db5797d2b2; // 0x7c(0x04)
	float *c3855e3f06; // 0x80(0x04)
	float *4cb87c7e84; // 0x84(0x04)
	float *6cda85fe5f; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct PhysXVehicles.*e57d981de0
// Size: 0x1c (Inherited: 0x00)
struct F*e57d981de0 {
	enum class *24e9ac34cf *e8730a6787; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *ff2e0637b6; // 0x04(0x04)
	float *69384e3fd3; // 0x08(0x04)
	float *8d46221592; // 0x0c(0x04)
	float *99d1377636; // 0x10(0x04)
	float *aff0a24920; // 0x14(0x04)
	float *51da475699; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x110 (Inherited: 0xf8)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	char pad_F8[0x18]; // 0xf8(0x18)
};

