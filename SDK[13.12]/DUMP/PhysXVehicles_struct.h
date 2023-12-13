// Enum PhysXVehicles.*8121e24a0e
enum class *8121e24a0e : uint8 {
	*dbf7d75abd,
	*bbbc85a6fe,
	*4a31632995,
	*564f4389da,
	*72c613415b,
	*8b23203f61,
	*3f12298c9a,
	*8121e24a0e_MAX,
};

// ScriptStruct PhysXVehicles.*3c0021b181
// Size: 0x30 (Inherited: 0x00)
struct F*3c0021b181 {
	struct UClass* *25eb3b6043; // 0x00(0x08)
	struct UClass* *ddd95185a2; // 0x08(0x08)
	struct UClass* *c53106daba; // 0x10(0x08)
	struct FName BoneName; // 0x18(0x08)
	struct FVector *bb987796b4; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*3038dddb2f
// Size: 0x28 (Inherited: 0x00)
struct F*3038dddb2f {
	bool *cf125ec136; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> *12302c8e6b; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct PhysXVehicles.*5b8465806f
// Size: 0x10 (Inherited: 0x00)
struct F*5b8465806f {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float *569dda12ee; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PhysXVehicles.*9d337f477b
// Size: 0x540 (Inherited: 0x520)
struct F*9d337f477b : F*c3868df940 {
	char pad_520[0x20]; // 0x520(0x20)
};

// ScriptStruct PhysXVehicles.*b9d73fdcc4
// Size: 0x14 (Inherited: 0x00)
struct F*b9d73fdcc4 {
	float *71b6901945; // 0x00(0x04)
	float *b597d4742a; // 0x04(0x04)
	float *6ba25ccc6f; // 0x08(0x04)
	float *82e987d3a0; // 0x0c(0x04)
	float *d26a4d082e; // 0x10(0x04)
};

// ScriptStruct PhysXVehicles.*8e315a7eda
// Size: 0x60 (Inherited: 0x00)
struct F*8e315a7eda {
	bool *959e45ddf0; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x08(0x08)
	struct FVector *3dc9930bfa; // 0x10(0x0c)
	struct FVector ContactPoint; // 0x1c(0x0c)
	struct FVector *196c0312d3; // 0x28(0x0c)
	struct FVector *5ec940585e; // 0x34(0x0c)
	float *66baa6ec95; // 0x40(0x04)
	float SuspJounce; // 0x44(0x04)
	float *8310cc6e89; // 0x48(0x04)
	float *0fe1a0532c; // 0x4c(0x04)
	float *f897d34b92; // 0x50(0x04)
	float SteerAngle; // 0x54(0x04)
	float RotationAngle; // 0x58(0x04)
	float RotationSpeed; // 0x5c(0x04)
};

// ScriptStruct PhysXVehicles.*e412e043c3
// Size: 0x0c (Inherited: 0x00)
struct F*e412e043c3 {
	uint32 *c1bac4eef7; // 0x00(0x04)
	uint32 *d0a7810d6c; // 0x04(0x04)
	float Stiffness; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*a628692c6e
// Size: 0x08 (Inherited: 0x00)
struct F*a628692c6e {
	float *5e6f1d855d; // 0x00(0x04)
	float *7d414ffb3a; // 0x04(0x04)
};

// ScriptStruct PhysXVehicles.*877f287ff5
// Size: 0x1c (Inherited: 0x00)
struct F*877f287ff5 {
	float *3952c1debe; // 0x00(0x04)
	float *4c35aac3e2; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float *fddb27637c; // 0x0c(0x04)
	int16 CurrentGear; // 0x10(0x02)
	int16 EngineRotationSpeed; // 0x12(0x02)
	uint32 *528ec5b1c4; // 0x14(0x04)
	uint32 *b4ed2945ad; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float *bb35bce226; // 0x08(0x04)
	float *55c7d975c1; // 0x0c(0x04)
	struct TArray<struct F*e84b92ffba> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float *b2f05f8620; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*e84b92ffba
// Size: 0x0c (Inherited: 0x00)
struct F*e84b92ffba {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*4aae3f54bd
// Size: 0x90 (Inherited: 0x00)
struct F*4aae3f54bd {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x78)
	float *9d9a1b1b4d; // 0x78(0x04)
	float *c25bd41598; // 0x7c(0x04)
	float *3a13c2c65c; // 0x80(0x04)
	float *e80a8ce988; // 0x84(0x04)
	float *39ddc77679; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct PhysXVehicles.*83e77e4cf5
// Size: 0x1c (Inherited: 0x00)
struct F*83e77e4cf5 {
	enum class *8121e24a0e *2a1d01e064; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *00f7c179cf; // 0x04(0x04)
	float *17203ffbf0; // 0x08(0x04)
	float *71c992a13e; // 0x0c(0x04)
	float *d39988e6ce; // 0x10(0x04)
	float *9d71d32b7d; // 0x14(0x04)
	float *a42aeec700; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x110 (Inherited: 0xf8)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
	int32 LODThreshold; // 0x48(0x04)
	float ActualAlpha; // 0x4c(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x50(0x01)
	bool bAlphaBoolEnabled; // 0x51(0x01)
	float Alpha; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x60(0x50)
	struct FName AlphaCurveName; // 0xb0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xb8(0x30)
};

