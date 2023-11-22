// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8 {
	LookAtLocation,
	FollowCamera,
	FollowPawn,
	Stationary,
	EFollowMethod_MAX,
};

// ScriptStruct OceanPlugin.*535b9127b3
// Size: 0xa0 (Inherited: 0x00)
struct F*535b9127b3 {
	struct F*05a1c7cb7b Wave01; // 0x00(0x14)
	struct F*05a1c7cb7b Wave02; // 0x14(0x14)
	struct F*05a1c7cb7b Wave03; // 0x28(0x14)
	struct F*05a1c7cb7b Wave04; // 0x3c(0x14)
	struct F*05a1c7cb7b Wave05; // 0x50(0x14)
	struct F*05a1c7cb7b Wave06; // 0x64(0x14)
	struct F*05a1c7cb7b Wave07; // 0x78(0x14)
	struct F*05a1c7cb7b Wave08; // 0x8c(0x14)
};

// ScriptStruct OceanPlugin.*05a1c7cb7b
// Size: 0x14 (Inherited: 0x00)
struct F*05a1c7cb7b {
	float Rotation; // 0x00(0x04)
	float Length; // 0x04(0x04)
	float Amplitude; // 0x08(0x04)
	float Steepness; // 0x0c(0x04)
	float TimeScale; // 0x10(0x04)
};

// ScriptStruct OceanPlugin.*263eeda478
// Size: 0x6c (Inherited: 0x00)
struct F*263eeda478 {
	char pad_0[0x6c]; // 0x00(0x6c)
};

// ScriptStruct OceanPlugin.*582d4c55f8
// Size: 0x10 (Inherited: 0x00)
struct F*582d4c55f8 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OceanPlugin.*fce3234f1d
// Size: 0x10 (Inherited: 0x00)
struct F*fce3234f1d {
	struct FName BoneName; // 0x00(0x08)
	float Density; // 0x08(0x04)
	float TestRadius; // 0x0c(0x04)
};

// ScriptStruct OceanPlugin.*e79c431be3
// Size: 0x1c (Inherited: 0x00)
struct F*e79c431be3 {
	int32 Millisecond; // 0x00(0x04)
	int32 second; // 0x04(0x04)
	int32 Minute; // 0x08(0x04)
	int32 Hour; // 0x0c(0x04)
	int32 Day; // 0x10(0x04)
	int32 Month; // 0x14(0x04)
	int32 Year; // 0x18(0x04)
};

