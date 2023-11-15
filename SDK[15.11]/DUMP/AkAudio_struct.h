// Enum AkAudio.*9edb6a54da
enum class *9edb6a54da : uint8 {
	*e0268d988d,
	*528f441477,
	*a3d8c8cd95,
	*9edb6a54da_MAX,
};

// Enum AkAudio.*dc2b94862a
enum class *dc2b94862a : uint8 {
	*da9d3b56e3,
	*3a3d62ab83,
	*4c306624a6,
	*006c331dad,
	*44206df704,
	*dc2b94862a_MAX,
};

// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8 {
	Box,
	Sphere,
	Capsule,
	ESoundVolumeShape_MAX,
};

// Enum AkAudio.EAkIgnoreRolloffDirection
enum class EAkIgnoreRolloffDirection : uint8 {
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

// ScriptStruct AkAudio.*ccccf129dd
// Size: 0x10 (Inherited: 0x00)
struct F*ccccf129dd {
	enum class *dc2b94862a Mode; // 0x00(0x01)
	enum class *9edb6a54da *8cbfc900f8; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *4bec3be879; // 0x04(0x04)
	float *1317367c1e; // 0x08(0x04)
	float MaxOcclusionDistance; // 0x0c(0x04)
};

// ScriptStruct AkAudio.*259e3e2db3
// Size: 0x80 (Inherited: 0x00)
struct F*259e3e2db3 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRotator Rotation; // 0x08(0x0c)
	struct FVector Location; // 0x14(0x0c)
	char pad_20[0x9]; // 0x20(0x09)
	enum class ESoundVolumeShape Shape; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector BoxExtents; // 0x2c(0x0c)
	float Radius; // 0x38(0x04)
	float CapsuleHalfHeight; // 0x3c(0x04)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct AkAudio.*b0dfea1f65
// Size: 0x158 (Inherited: 0x80)
struct F*b0dfea1f65 : F*259e3e2db3 {
	struct TMap<struct U*1a43c89db3*, float> *627b38cf54; // 0x80(0x50)
	struct U*7e5bf076b0* *893cc57df2; // 0xd0(0x08)
	int32 Priority; // 0xd8(0x04)
	float *8aa63c86ff; // 0xdc(0x04)
	bool *59893d7b94; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *e07a909cfa; // 0xe4(0x04)
	enum class EAkIgnoreRolloffDirection *b67d710585; // 0xe8(0x01)
	char pad_E9[0x6f]; // 0xe9(0x6f)
};

// ScriptStruct AkAudio.*6fa33de392
// Size: 0xf0 (Inherited: 0x80)
struct F*6fa33de392 : F*259e3e2db3 {
	float Openness; // 0x80(0x04)
	float *88591eb079; // 0x84(0x04)
	float *8aa63c86ff; // 0x88(0x04)
	float *1230400bc8; // 0x8c(0x04)
	char pad_90[0x60]; // 0x90(0x60)
};

// ScriptStruct AkAudio.*b6addcbc8c
// Size: 0x20 (Inherited: 0x00)
struct F*b6addcbc8c {
	struct TArray<struct F*b0dfea1f65> Volumes; // 0x00(0x10)
	struct TArray<struct F*6fa33de392> *868aaba59a; // 0x10(0x10)
};

// ScriptStruct AkAudio.*eb2f5ca8c9
// Size: 0x18 (Inherited: 0x00)
struct F*eb2f5ca8c9 {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AkAudio.*f4ded46021
// Size: 0x08 (Inherited: 0x00)
struct F*f4ded46021 {
	int32 *33838b53bb; // 0x00(0x04)
	int32 *2224c65638; // 0x04(0x04)
};

// ScriptStruct AkAudio.*fbc28ae434
// Size: 0x18 (Inherited: 0x00)
struct F*fbc28ae434 {
	struct TArray<int32> *459a87b63a; // 0x00(0x10)
	bool *caee881f22; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AkAudio.*f7853de414
// Size: 0x20 (Inherited: 0x00)
struct F*f7853de414 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.*8e91c54a4d
// Size: 0x20 (Inherited: 0x00)
struct F*8e91c54a4d {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*2ebf6d3400* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*47ccd41d28
// Size: 0x20 (Inherited: 0x00)
struct F*47ccd41d28 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*800d15c341* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*659868e582
// Size: 0x80 (Inherited: 0x00)
struct F*659868e582 {
	struct FString *1e012d1585; // 0x00(0x10)
	struct FRichCurve *23b6015836; // 0x10(0x70)
};

