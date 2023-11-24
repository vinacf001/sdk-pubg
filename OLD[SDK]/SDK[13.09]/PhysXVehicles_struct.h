// ScriptStruct PhysXVehicles.*ebd8454d75
// Size: 0x30 (Inherited: 0x00)
struct F*ebd8454d75 {
	struct UClass* *b71ea9effb; // 0x00(0x08)
	struct UClass* *02866ece48; // 0x08(0x08)
	struct UClass* *844321d8c5; // 0x10(0x08)
	struct FName BoneName; // 0x18(0x08)
	struct FVector *3b9269422f; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*ee089b9d28
// Size: 0x28 (Inherited: 0x00)
struct F*ee089b9d28 {
	bool *e8e354f94a; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> *d853418266; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct PhysXVehicles.*b469a3281a
// Size: 0x10 (Inherited: 0x00)
struct F*b469a3281a {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float *7b5d5a514f; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PhysXVehicles.*af13bf1434
// Size: 0x540 (Inherited: 0x520)
struct F*af13bf1434 : F*434fea7363 {
	char pad_520[0x20]; // 0x520(0x20)
};

// ScriptStruct PhysXVehicles.*2df6460ee3
// Size: 0x14 (Inherited: 0x00)
struct F*2df6460ee3 {
	float *4d40c10744; // 0x00(0x04)
	float *e403e6fc44; // 0x04(0x04)
	float *621578f7b4; // 0x08(0x04)
	float *b746676f9f; // 0x0c(0x04)
	float *4229746ee0; // 0x10(0x04)
};

// ScriptStruct PhysXVehicles.*d7f913c186
// Size: 0x60 (Inherited: 0x00)
struct F*d7f913c186 {
	bool *639954b759; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x08(0x08)
	struct FVector *028510dbd7; // 0x10(0x0c)
	struct FVector ContactPoint; // 0x1c(0x0c)
	struct FVector *7f4a8d8a4c; // 0x28(0x0c)
	struct FVector *abe232d295; // 0x34(0x0c)
	float *a30bd8526d; // 0x40(0x04)
	float SuspJounce; // 0x44(0x04)
	float *33d65da0e0; // 0x48(0x04)
	float *4958e5e03f; // 0x4c(0x04)
	float *0e56750bff; // 0x50(0x04)
	float SteerAngle; // 0x54(0x04)
	float RotationAngle; // 0x58(0x04)
	float RotationSpeed; // 0x5c(0x04)
};

// ScriptStruct PhysXVehicles.*1e93597ec8
// Size: 0x0c (Inherited: 0x00)
struct F*1e93597ec8 {
	uint32 *e74a58f98e; // 0x00(0x04)
	uint32 *fe350499cf; // 0x04(0x04)
	float Stiffness; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*bdf082e32e
// Size: 0x08 (Inherited: 0x00)
struct F*bdf082e32e {
	float *deb39b7c96; // 0x00(0x04)
	float *2671c53f4c; // 0x04(0x04)
};

// ScriptStruct PhysXVehicles.*cefae821e6
// Size: 0x1c (Inherited: 0x00)
struct F*cefae821e6 {
	float *34102327b8; // 0x00(0x04)
	float *96c7307160; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float *8dd560971b; // 0x0c(0x04)
	int16 CurrentGear; // 0x10(0x02)
	int16 EngineRotationSpeed; // 0x12(0x02)
	uint32 *62d6db45db; // 0x14(0x04)
	uint32 *3ea337c22d; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float *d8d1e13987; // 0x08(0x04)
	float *655734b8fa; // 0x0c(0x04)
	struct TArray<struct F*d79a57f4c7> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float *f610e498c5; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*d79a57f4c7
// Size: 0x0c (Inherited: 0x00)
struct F*d79a57f4c7 {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*e2734b7252
// Size: 0x90 (Inherited: 0x00)
struct F*e2734b7252 {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x78)
	float *fc7149a512; // 0x78(0x04)
	float *55046c5061; // 0x7c(0x04)
	float *ae649f3160; // 0x80(0x04)
	float *ff5e282226; // 0x84(0x04)
	float *2252eb32e1; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct PhysXVehicles.*5d902b5339
// Size: 0x1c (Inherited: 0x00)
struct F*5d902b5339 {
	enum class *35815d1a99 *fc17885880; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *be98236c54; // 0x04(0x04)
	float *381c018a77; // 0x08(0x04)
	float *b5fd7c591f; // 0x0c(0x04)
	float *9693e88731; // 0x10(0x04)
	float *b3bdbcdcbb; // 0x14(0x04)
	float *67b30bcc7b; // 0x18(0x04)
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

