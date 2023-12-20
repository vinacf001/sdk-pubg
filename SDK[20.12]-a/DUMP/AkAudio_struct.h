// Enum AkAudio.*31d082ebae
enum class *31d082ebae : uint8 {
	*facbc7b26c,
	*7239d4fc21,
	*c9354b802b,
	*31d082ebae_MAX,
};

// Enum AkAudio.*d8cd6860e5
enum class *d8cd6860e5 : uint8 {
	*3b505f4c33,
	*0a43ed8120,
	*d739a8cdce,
	*31a1cdb877,
	*d988d52b2e,
	*d8cd6860e5_MAX,
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

// ScriptStruct AkAudio.*8d35ae13c9
// Size: 0x10 (Inherited: 0x00)
struct F*8d35ae13c9 {
	enum class *d8cd6860e5 Mode; // 0x00(0x01)
	enum class *31d082ebae *6672aa8c28; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *c3ab93db2a; // 0x04(0x04)
	float *a71c883f41; // 0x08(0x04)
	float MaxOcclusionDistance; // 0x0c(0x04)
};

// ScriptStruct AkAudio.*1e75299ec5
// Size: 0x80 (Inherited: 0x00)
struct F*1e75299ec5 {
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

// ScriptStruct AkAudio.*f524627b2a
// Size: 0x158 (Inherited: 0x80)
struct F*f524627b2a : F*1e75299ec5 {
	struct TMap<struct U*19dbea6f8b*, float> *0fe79070fe; // 0x80(0x50)
	struct U*ac656ba6d3* *5701530a00; // 0xd0(0x08)
	int32 Priority; // 0xd8(0x04)
	float *ca741d0956; // 0xdc(0x04)
	bool *595581862e; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *0585aa56cf; // 0xe4(0x04)
	enum class EAkIgnoreRolloffDirection *374fb1f785; // 0xe8(0x01)
	char pad_E9[0x6f]; // 0xe9(0x6f)
};

// ScriptStruct AkAudio.*fe97e5a054
// Size: 0xf0 (Inherited: 0x80)
struct F*fe97e5a054 : F*1e75299ec5 {
	float Openness; // 0x80(0x04)
	float *e4c08dcd30; // 0x84(0x04)
	float *ca741d0956; // 0x88(0x04)
	float *7473099748; // 0x8c(0x04)
	char pad_90[0x60]; // 0x90(0x60)
};

// ScriptStruct AkAudio.*a8c0533dc3
// Size: 0x20 (Inherited: 0x00)
struct F*a8c0533dc3 {
	struct TArray<struct F*f524627b2a> Volumes; // 0x00(0x10)
	struct TArray<struct F*fe97e5a054> *c97b97b53e; // 0x10(0x10)
};

// ScriptStruct AkAudio.*dc64eb5c0a
// Size: 0x18 (Inherited: 0x00)
struct F*dc64eb5c0a {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AkAudio.*f1216c49e5
// Size: 0x08 (Inherited: 0x00)
struct F*f1216c49e5 {
	int32 *9312c4905a; // 0x00(0x04)
	int32 *22b7e4d3ed; // 0x04(0x04)
};

// ScriptStruct AkAudio.*8d152ac5ac
// Size: 0x18 (Inherited: 0x00)
struct F*8d152ac5ac {
	struct TArray<int32> *dba520afbf; // 0x00(0x10)
	bool *f9c01876fe; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AkAudio.*014244e398
// Size: 0x20 (Inherited: 0x00)
struct F*014244e398 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.*e996e81c07
// Size: 0x20 (Inherited: 0x00)
struct F*e996e81c07 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*2f5ffc229f* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*b6b1b8961a
// Size: 0x20 (Inherited: 0x00)
struct F*b6b1b8961a {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*abc3097a41* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*dc379b852a
// Size: 0x80 (Inherited: 0x00)
struct F*dc379b852a {
	struct FString *41eaf7746e; // 0x00(0x10)
	struct FRichCurve *b22d327d5d; // 0x10(0x70)
};

