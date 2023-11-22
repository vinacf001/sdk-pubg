// Enum PhysXVehicles.*0ad072f2ee
enum class *0ad072f2ee : uint8 {
	*f4b4de7ead,
	*40f48cd617,
	*88a7623a6e,
	*fac52d239f,
	*d68ba2c0a4,
	*3b4d9efeca,
	*0a3c53b164,
	*0ad072f2ee_MAX,
};

// ScriptStruct PhysXVehicles.*7cc0cfa72d
// Size: 0x30 (Inherited: 0x00)
struct F*7cc0cfa72d {
	struct UClass* *78b98b5058; // 0x00(0x08)
	struct UClass* *63687972a2; // 0x08(0x08)
	struct UClass* *2e5b8376ed; // 0x10(0x08)
	struct FName BoneName; // 0x18(0x08)
	struct FVector *a38dc077bb; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*a52459bea9
// Size: 0x28 (Inherited: 0x00)
struct F*a52459bea9 {
	bool *1868e06ffe; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> *440a02ab16; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct PhysXVehicles.*d689347095
// Size: 0x10 (Inherited: 0x00)
struct F*d689347095 {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float *9af29b21eb; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PhysXVehicles.*e66fe4d96d
// Size: 0x540 (Inherited: 0x520)
struct F*e66fe4d96d : F*29144ded29 {
	char pad_520[0x20]; // 0x520(0x20)
};

// ScriptStruct PhysXVehicles.*b1911e6c32
// Size: 0x14 (Inherited: 0x00)
struct F*b1911e6c32 {
	float *2d4df9dcd8; // 0x00(0x04)
	float *d5c989ead1; // 0x04(0x04)
	float *4fc24004b5; // 0x08(0x04)
	float *7a3638b74a; // 0x0c(0x04)
	float *5ef793ab23; // 0x10(0x04)
};

// ScriptStruct PhysXVehicles.*9343c72883
// Size: 0x60 (Inherited: 0x00)
struct F*9343c72883 {
	bool *3359c12249; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x08(0x08)
	struct FVector *4d4cfb51e9; // 0x10(0x0c)
	struct FVector ContactPoint; // 0x1c(0x0c)
	struct FVector *838659a5ae; // 0x28(0x0c)
	struct FVector *900d72e46b; // 0x34(0x0c)
	float *a38a57d6d7; // 0x40(0x04)
	float SuspJounce; // 0x44(0x04)
	float *992dff6f90; // 0x48(0x04)
	float *ab50999619; // 0x4c(0x04)
	float *564de15c17; // 0x50(0x04)
	float SteerAngle; // 0x54(0x04)
	float RotationAngle; // 0x58(0x04)
	float RotationSpeed; // 0x5c(0x04)
};

// ScriptStruct PhysXVehicles.*ea4c7408d4
// Size: 0x0c (Inherited: 0x00)
struct F*ea4c7408d4 {
	uint32 *9ebba558d8; // 0x00(0x04)
	uint32 *2855248dae; // 0x04(0x04)
	float Stiffness; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*a707bb3f5b
// Size: 0x08 (Inherited: 0x00)
struct F*a707bb3f5b {
	float *30b365560c; // 0x00(0x04)
	float *da5aeb266b; // 0x04(0x04)
};

// ScriptStruct PhysXVehicles.*9ec7b26f1e
// Size: 0x1c (Inherited: 0x00)
struct F*9ec7b26f1e {
	float *5a7d8abdb4; // 0x00(0x04)
	float *303ff826d6; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float *1d05c95215; // 0x0c(0x04)
	int16 CurrentGear; // 0x10(0x02)
	int16 EngineRotationSpeed; // 0x12(0x02)
	uint32 *7b19a06a12; // 0x14(0x04)
	uint32 *c1381fd57f; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float *f28aa2c842; // 0x08(0x04)
	float *e8704a46e5; // 0x0c(0x04)
	struct TArray<struct F*5e311eaadc> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float *3c7fe881cd; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*5e311eaadc
// Size: 0x0c (Inherited: 0x00)
struct F*5e311eaadc {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*a3e4905c7f
// Size: 0x90 (Inherited: 0x00)
struct F*a3e4905c7f {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x78)
	float *ffd29d11ce; // 0x78(0x04)
	float *b1fb280ef0; // 0x7c(0x04)
	float *4fa2f5d189; // 0x80(0x04)
	float *56aaea7c07; // 0x84(0x04)
	float *40003eeecd; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct PhysXVehicles.*b1d66bf7c5
// Size: 0x1c (Inherited: 0x00)
struct F*b1d66bf7c5 {
	enum class *0ad072f2ee *db8343acc1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *fe15451472; // 0x04(0x04)
	float *9ec326bd04; // 0x08(0x04)
	float *9580dfce43; // 0x0c(0x04)
	float *8c0e2d291e; // 0x10(0x04)
	float *6d5b38beff; // 0x14(0x04)
	float *c13c7eaaec; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x110 (Inherited: 0xf8)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	char pad_F8[0x18]; // 0xf8(0x18)
};

