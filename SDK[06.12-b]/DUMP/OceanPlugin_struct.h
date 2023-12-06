// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8 {
	LookAtLocation,
	FollowCamera,
	FollowPawn,
	Stationary,
	EFollowMethod_MAX,
};

// ScriptStruct OceanPlugin.*34238a6751
// Size: 0xa0 (Inherited: 0x00)
struct F*34238a6751 {
	struct F*b74fb89548 Wave01; // 0x00(0x14)
	struct F*b74fb89548 Wave02; // 0x14(0x14)
	struct F*b74fb89548 Wave03; // 0x28(0x14)
	struct F*b74fb89548 Wave04; // 0x3c(0x14)
	struct F*b74fb89548 Wave05; // 0x50(0x14)
	struct F*b74fb89548 Wave06; // 0x64(0x14)
	struct F*b74fb89548 Wave07; // 0x78(0x14)
	struct F*b74fb89548 Wave08; // 0x8c(0x14)
};

// ScriptStruct OceanPlugin.*b74fb89548
// Size: 0x14 (Inherited: 0x00)
struct F*b74fb89548 {
	float Rotation; // 0x00(0x04)
	float Length; // 0x04(0x04)
	float Amplitude; // 0x08(0x04)
	float Steepness; // 0x0c(0x04)
	float TimeScale; // 0x10(0x04)
};

// ScriptStruct OceanPlugin.*e07e7a22bc
// Size: 0x6c (Inherited: 0x00)
struct F*e07e7a22bc {
	char pad_0[0x6c]; // 0x00(0x6c)
};

// ScriptStruct OceanPlugin.*763665df54
// Size: 0x10 (Inherited: 0x00)
struct F*763665df54 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OceanPlugin.*2c7209c8e5
// Size: 0x10 (Inherited: 0x00)
struct F*2c7209c8e5 {
	struct FName BoneName; // 0x00(0x08)
	float Density; // 0x08(0x04)
	float TestRadius; // 0x0c(0x04)
};

// ScriptStruct OceanPlugin.*7bcf749d5f
// Size: 0x1c (Inherited: 0x00)
struct F*7bcf749d5f {
	int32 Millisecond; // 0x00(0x04)
	int32 second; // 0x04(0x04)
	int32 Minute; // 0x08(0x04)
	int32 Hour; // 0x0c(0x04)
	int32 Day; // 0x10(0x04)
	int32 Month; // 0x14(0x04)
	int32 Year; // 0x18(0x04)
};

