// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8 {
	LookAtLocation,
	FollowCamera,
	FollowPawn,
	Stationary,
	EFollowMethod_MAX,
};

// ScriptStruct OceanPlugin.*6f9a383ca9
// Size: 0xa0 (Inherited: 0x00)
struct F*6f9a383ca9 {
	struct F*a8ec53011e Wave01; // 0x00(0x14)
	struct F*a8ec53011e Wave02; // 0x14(0x14)
	struct F*a8ec53011e Wave03; // 0x28(0x14)
	struct F*a8ec53011e Wave04; // 0x3c(0x14)
	struct F*a8ec53011e Wave05; // 0x50(0x14)
	struct F*a8ec53011e Wave06; // 0x64(0x14)
	struct F*a8ec53011e Wave07; // 0x78(0x14)
	struct F*a8ec53011e Wave08; // 0x8c(0x14)
};

// ScriptStruct OceanPlugin.*a8ec53011e
// Size: 0x14 (Inherited: 0x00)
struct F*a8ec53011e {
	float Rotation; // 0x00(0x04)
	float Length; // 0x04(0x04)
	float Amplitude; // 0x08(0x04)
	float Steepness; // 0x0c(0x04)
	float TimeScale; // 0x10(0x04)
};

// ScriptStruct OceanPlugin.*ba107aed0a
// Size: 0x6c (Inherited: 0x00)
struct F*ba107aed0a {
	char pad_0[0x6c]; // 0x00(0x6c)
};

// ScriptStruct OceanPlugin.*b47527963e
// Size: 0x10 (Inherited: 0x00)
struct F*b47527963e {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OceanPlugin.*00b2c3492a
// Size: 0x10 (Inherited: 0x00)
struct F*00b2c3492a {
	struct FName BoneName; // 0x00(0x08)
	float Density; // 0x08(0x04)
	float TestRadius; // 0x0c(0x04)
};

// ScriptStruct OceanPlugin.*de25589e23
// Size: 0x1c (Inherited: 0x00)
struct F*de25589e23 {
	int32 Millisecond; // 0x00(0x04)
	int32 second; // 0x04(0x04)
	int32 Minute; // 0x08(0x04)
	int32 Hour; // 0x0c(0x04)
	int32 Day; // 0x10(0x04)
	int32 Month; // 0x14(0x04)
	int32 Year; // 0x18(0x04)
};

