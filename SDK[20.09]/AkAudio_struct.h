// Enum AkAudio.*15c4bcdc15
enum class *15c4bcdc15 : uint8 {
	*be88497c87,
	*9d900f8fe9,
	*6711571e17,
	*15c4bcdc15_MAX,
};

// Enum AkAudio.*77e5e5098d
enum class *77e5e5098d : uint8 {
	*59cfa77309,
	*786577f13b,
	*88f9681981,
	*ecc23d15ba,
	*a5ab19ff11,
	*77e5e5098d_MAX,
};

// Enum AkAudio.
enum class  : uint8 {
	Box,
	Sphere,
	Capsule,
	ESoundVolumeShape_MAX,
};

// Enum AkAudio.
enum class  : uint8 {
	None,
	Left,
	Right,
	Front,
	Back,
	LeftAndRight,
	LeftAndFront,
	LeftAndBack,
	RightAndFront,
	RightAndBack,
	BackAndFront,
	EAkIgnoreRolloffDirection_MAX,
};

// ScriptStruct AkAudio.*5fa39bc974
// Size: 0x10 (Inherited: 0x00)
struct F*5fa39bc974 {
	enum class *77e5e5098d Mode; // 0x00(0x01)
	enum class *15c4bcdc15 *b99311412d; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *b32c9aaf7c; // 0x04(0x04)
	float *a1d2ae20e5; // 0x08(0x04)
	float MaxOcclusionDistance; // 0x0c(0x04)
};

// ScriptStruct AkAudio.
// Size: 0x80 (Inherited: 0x00)
struct F {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRotator Rotation; // 0x08(0x0c)
	struct FVector Location; // 0x14(0x0c)
	char pad_20[0x9]; // 0x20(0x09)
	enum class  Shape; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector BoxExtents; // 0x2c(0x0c)
	float Radius; // 0x38(0x04)
	float CapsuleHalfHeight; // 0x3c(0x04)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct AkAudio.
// Size: 0x158 (Inherited: 0x80)
struct F : F {
	struct TMap<struct U*f718108d11*, float> *7b9fd2bae0; // 0x80(0x50)
	struct U*e2767e6e12* *9672c74a99; // 0xd0(0x08)
	int32 Priority; // 0xd8(0x04)
	float *ea64883728; // 0xdc(0x04)
	bool *7c399e2901; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *22ee4a8e54; // 0xe4(0x04)
	enum class  *9d19fe0a8a; // 0xe8(0x01)
	char pad_E9[0x6f]; // 0xe9(0x6f)
};

// ScriptStruct AkAudio.*1703c9495e
// Size: 0xf0 (Inherited: 0x80)
struct F*1703c9495e : F {
	float Openness; // 0x80(0x04)
	float *c461336fb0; // 0x84(0x04)
	float *ea64883728; // 0x88(0x04)
	float *75147dc22d; // 0x8c(0x04)
	char pad_90[0x60]; // 0x90(0x60)
};

// ScriptStruct AkAudio.*2605160634
// Size: 0x20 (Inherited: 0x00)
struct F*2605160634 {
	struct TArray<struct F> Volumes; // 0x00(0x10)
	struct TArray<struct F*1703c9495e> *0c9a67849c; // 0x10(0x10)
};

// ScriptStruct AkAudio.*53c6d3d74f
// Size: 0x18 (Inherited: 0x00)
struct F*53c6d3d74f {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AkAudio.*2fb60a5ad2
// Size: 0x08 (Inherited: 0x00)
struct F*2fb60a5ad2 {
	int32 *e5ecacd3d1; // 0x00(0x04)
	int32 *7e2b3e4936; // 0x04(0x04)
};

// ScriptStruct AkAudio.*f0517a6bce
// Size: 0x18 (Inherited: 0x00)
struct F*f0517a6bce {
	struct TArray<int32> *904123cf3c; // 0x00(0x10)
	bool *66819f8731; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AkAudio.*4500c83e35
// Size: 0x20 (Inherited: 0x00)
struct F*4500c83e35 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.*eb9af1ed54
// Size: 0x20 (Inherited: 0x00)
struct F*eb9af1ed54 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*145ef3c228* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*2df40ad1c8
// Size: 0x20 (Inherited: 0x00)
struct F*2df40ad1c8 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*9cc86f9cfb* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*9db0705afc
// Size: 0x80 (Inherited: 0x00)
struct F*9db0705afc {
	struct FString *f48322fb40; // 0x00(0x10)
	struct FRichCurve *f7a4eb651b; // 0x10(0x70)
};

