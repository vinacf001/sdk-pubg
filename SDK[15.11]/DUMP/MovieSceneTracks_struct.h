// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X,
	Y,
	Z,
	NEG_X,
	NEG_Y,
	NEG_Z,
	MovieScene3DPathSection_MAX,
};

// Enum MovieSceneTracks.*d3ee081000
enum class *d3ee081000 : uint8 {
	*1a2dabc369,
	*6c93860424,
	*10b41f7869,
	*eb59939283,
	*d3ee081000_MAX,
};

// Enum MovieSceneTracks.*f319d48929
enum class *f319d48929 : uint8 {
	*74dc73ae7c,
	*781e9b39bd,
	*c2f5d206bd,
	*4a4aac5fb8,
	*f319d48929_MAX,
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible,
	Hidden,
	ELevelVisibility_MAX,
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate,
	Deactivate,
	Trigger,
	EParticleKey_MAX,
};

// ScriptStruct MovieSceneTracks.*b150756cfa
// Size: 0x78 (Inherited: 0x08)
struct F*b150756cfa : F*b5828a653a {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4c]; // 0x2c(0x4c)
};

// ScriptStruct MovieSceneTracks.*b88259cc00
// Size: 0x30 (Inherited: 0x08)
struct F*b88259cc00 : F*b5828a653a {
	struct FVector Scale; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*d617bc4aa6
// Size: 0x30 (Inherited: 0x08)
struct F*d617bc4aa6 : F*b5828a653a {
	struct FRotator Rotation; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*c186740867
// Size: 0x30 (Inherited: 0x08)
struct F*c186740867 : F*b5828a653a {
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*1b44c18413
// Size: 0x20 (Inherited: 0x00)
struct F*1b44c18413 {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float *c634cfb68d; // 0x0c(0x04)
	float *2f7b29a7c9; // 0x10(0x04)
	float *955f0ddfa4; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.*e5b8f89a78
// Size: 0x20 (Inherited: 0x00)
struct F*e5b8f89a78 {
	struct UClass* *0eda648d75; // 0x00(0x08)
	float *c634cfb68d; // 0x08(0x04)
	enum class ECameraAnimPlaySpace *821995bfad; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator *56a4f7f4af; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.*68bbb67049
// Size: 0x58 (Inherited: 0x08)
struct F*68bbb67049 : F*b5828a653a {
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x40]; // 0x18(0x40)
};

// ScriptStruct MovieSceneTracks.*51e8524cda
// Size: 0x20 (Inherited: 0x00)
struct F*51e8524cda {
	struct TArray<float> *882b35e0f4; // 0x00(0x10)
	struct TArray<struct FEventPayload> *c4c912cee5; // 0x10(0x10)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x28 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName; // 0x00(0x08)
	struct FMovieSceneEventParameters Parameters; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct MovieSceneTracks.*6140021f51
// Size: 0x1d0 (Inherited: 0x00)
struct F*6140021f51 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *6f6a0b9222; // 0x10(0x70)
	struct FRichCurve *d98e034818; // 0x80(0x70)
	struct FRichCurve *89be386b93; // 0xf0(0x70)
	struct FRichCurve *491287cf08; // 0x160(0x70)
};

// ScriptStruct MovieSceneTracks.*17e2cdf3d1
// Size: 0x160 (Inherited: 0x00)
struct F*17e2cdf3d1 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *74b0b006f0; // 0x10(0x70)
	struct FRichCurve *b6d558d6d2; // 0x80(0x70)
	struct FRichCurve *886788fe68; // 0xf0(0x70)
};

// ScriptStruct MovieSceneTracks.*6decb936f9
// Size: 0x80 (Inherited: 0x00)
struct F*6decb936f9 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *5d28fb08b5; // 0x10(0x70)
};

// ScriptStruct MovieSceneTracks.*4787beef47
// Size: 0x90 (Inherited: 0x00)
struct F*4787beef47 {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float StartOffset; // 0x08(0x04)
	float *be3db781e6; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char *b8708eb9e5 : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName SlotName; // 0x18(0x08)
	struct FRichCurve Weight; // 0x20(0x70)
};

// ScriptStruct MovieSceneTracks.*3204f65894
// Size: 0x60 (Inherited: 0x48)
struct F*3204f65894 : F*d464fe1b18 {
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 Vector; // 0x50(0x10)
};

// ScriptStruct MovieSceneTracks.*d464fe1b18
// Size: 0x48 (Inherited: 0x08)
struct F*d464fe1b18 : F*b5828a653a {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct MovieSceneTracks.*bc4dc9f0ae
// Size: 0x58 (Inherited: 0x48)
struct F*bc4dc9f0ae : F*d464fe1b18 {
	struct FVector Vector; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MovieSceneTracks.*76f23db248
// Size: 0x50 (Inherited: 0x48)
struct F*76f23db248 : F*d464fe1b18 {
	struct FVector2D Vector; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*12507fc494
// Size: 0x50 (Inherited: 0x48)
struct F*12507fc494 : F*f9b3c02c02 {
	int32 MaterialIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.*f9b3c02c02
// Size: 0x48 (Inherited: 0x18)
struct F*f9b3c02c02 : F*b53fddfd6a {
	struct TArray<struct F*6decb936f9> *4cb1825dee; // 0x18(0x10)
	struct TArray<struct F*17e2cdf3d1> Vectors; // 0x28(0x10)
	struct TArray<struct F*6140021f51> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*ca0cd4cd95
// Size: 0x88 (Inherited: 0x18)
struct F*ca0cd4cd95 : F*b53fddfd6a {
	struct F*9953b1ece2 Curve; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*823115a5ef
// Size: 0x38 (Inherited: 0x18)
struct F*823115a5ef : F*b53fddfd6a {
	struct FGuid *9e4af5c7b8; // 0x18(0x10)
	struct FName *d0cdbdd0fa; // 0x28(0x08)
	struct FName *ea2e0abe9d; // 0x30(0x08)
};

// ScriptStruct MovieSceneTracks.*04a7165508
// Size: 0xa0 (Inherited: 0x18)
struct F*04a7165508 : F*b53fddfd6a {
	struct FGuid *ee44bda2de; // 0x18(0x10)
	struct FRichCurve *bf1fbc1df6; // 0x28(0x70)
	enum class MovieScene3DPathSection_Axis *22ae67a2ac; // 0x98(0x01)
	enum class MovieScene3DPathSection_Axis *28d457f044; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	char bFollow : 1; // 0x9c(0x01)
	char *b8708eb9e5 : 1; // 0x9c(0x01)
	char *d314ad13a8 : 1; // 0x9c(0x01)
	char pad_9C_3 : 5; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct MovieSceneTracks.*94c134cff7
// Size: 0x408 (Inherited: 0x18)
struct F*94c134cff7 : F*b53fddfd6a {
	struct FRichCurve *cd1188fc31[0x03]; // 0x18(0x150)
	struct FRichCurve *054f4fd12f[0x03]; // 0x168(0x150)
	struct FRichCurve *c8ce31d780[0x03]; // 0x2b8(0x150)
};

// ScriptStruct MovieSceneTracks.*f73d4ffa61
// Size: 0xc0 (Inherited: 0x18)
struct F*f73d4ffa61 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct F*9953b1ece2 *2763ad7277; // 0x40(0x70)
	struct TArray<struct FGuid> *9d0a724a61; // 0xb0(0x10)
};

// ScriptStruct MovieSceneTracks.*66d52d3c46
// Size: 0x150 (Inherited: 0x18)
struct F*66d52d3c46 : F*b53fddfd6a {
	struct F*4a9c40233e *599b924f92; // 0x18(0x138)
};

// ScriptStruct MovieSceneTracks.*4a9c40233e
// Size: 0x138 (Inherited: 0x00)
struct F*4a9c40233e {
	struct USoundBase* Sound; // 0x00(0x08)
	float *42f0fee473; // 0x08(0x04)
	struct FFloatRange *edb5c31c5a; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve *5be8fbfcb1; // 0x20(0x70)
	struct FRichCurve *e252b692fe; // 0x90(0x70)
	int32 *686db12b9d; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	DelegateProperty *49c893029b; // 0x108(0x10)
	struct FMulticastDelegate *19244ea5be; // 0x118(0x10)
	struct FMulticastDelegate *ef3b2ee252; // 0x128(0x10)
};

// ScriptStruct MovieSceneTracks.*ddb8878a1b
// Size: 0x18 (Inherited: 0x18)
struct F*ddb8878a1b : F*b53fddfd6a {
};

// ScriptStruct MovieSceneTracks.*c3184fd74e
// Size: 0x40 (Inherited: 0x18)
struct F*c3184fd74e : F*edebce05e3 {
	struct F*e5b8f89a78 *35e36ee816; // 0x18(0x20)
	float *5aa77a3931; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*edebce05e3
// Size: 0x18 (Inherited: 0x18)
struct F*edebce05e3 : F*b53fddfd6a {
};

// ScriptStruct MovieSceneTracks.*dbf026084a
// Size: 0x40 (Inherited: 0x18)
struct F*dbf026084a : F*edebce05e3 {
	struct F*1b44c18413 *35e36ee816; // 0x18(0x20)
	float *5aa77a3931; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*dac0a66d56
// Size: 0x70 (Inherited: 0x18)
struct F*dac0a66d56 : F*b53fddfd6a {
	struct FGuid *bdeb2726f9; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *79900b46a6; // 0x30(0x30)
	bool *9e36c21050; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct MovieSceneTracks.*fdb1c4fbb6
// Size: 0x1f0 (Inherited: 0x18)
struct F*fdb1c4fbb6 : F*b53fddfd6a {
	struct FName PropertyName; // 0x18(0x08)
	struct FString PropertyPath; // 0x20(0x10)
	struct FRichCurve Curves[0x04]; // 0x30(0x1c0)
};

// ScriptStruct MovieSceneTracks.*d834d86d2d
// Size: 0x50 (Inherited: 0x18)
struct F*d834d86d2d : F*b53fddfd6a {
	struct F*51e8524cda EventData; // 0x18(0x20)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x38(0x10)
	char *d81418be8a : 1; // 0x48(0x01)
	char *4be71478c3 : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MovieSceneTracks.*b1bfc0f5c3
// Size: 0xa0 (Inherited: 0x18)
struct F*b1bfc0f5c3 : F*b53fddfd6a {
	struct FRichCurve *33c8da7843; // 0x18(0x70)
	struct FLinearColor *83572fc8a0; // 0x88(0x10)
	char *7160127719 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct MovieSceneTracks.*14442cb7f4
// Size: 0x30 (Inherited: 0x18)
struct F*14442cb7f4 : F*b53fddfd6a {
	enum class ELevelVisibility Visibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> *5e2147146d; // 0x20(0x10)
};

// ScriptStruct MovieSceneTracks.*40de0498dd
// Size: 0x50 (Inherited: 0x48)
struct F*40de0498dd : F*f9b3c02c02 {
	struct UMaterialParameterCollection* MPC; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*c0745b64a9
// Size: 0x48 (Inherited: 0x48)
struct F*c0745b64a9 : F*f9b3c02c02 {
};

// ScriptStruct MovieSceneTracks.*c733bdc03c
// Size: 0x88 (Inherited: 0x18)
struct F*c733bdc03c : F*b53fddfd6a {
	struct F*9953b1ece2 *f99822e699; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*f637b699d7
// Size: 0x430 (Inherited: 0x18)
struct F*f637b699d7 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct FRichCurve *cd1188fc31[0x03]; // 0x40(0x150)
	struct FRichCurve *054f4fd12f[0x03]; // 0x190(0x150)
	struct FRichCurve *c8ce31d780[0x03]; // 0x2e0(0x150)
};

// ScriptStruct MovieSceneTracks.*50493f9b6f
// Size: 0x208 (Inherited: 0x18)
struct F*50493f9b6f : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct FRichCurve *6d1fd70d92[0x04]; // 0x40(0x1c0)
	int32 *829d61e77f; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// ScriptStruct MovieSceneTracks.*25a188aae4
// Size: 0xb8 (Inherited: 0x18)
struct F*25a188aae4 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct F*71d5760fff *71d5760fff; // 0x40(0x78)
};

// ScriptStruct MovieSceneTracks.*af213231e9
// Size: 0xb0 (Inherited: 0x18)
struct F*af213231e9 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct F*9953b1ece2 *c80e68ab95; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*ce360866d2
// Size: 0xb0 (Inherited: 0x18)
struct F*ce360866d2 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct F*9953b1ece2 *e2ae9b1757; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*164ec2fa6e
// Size: 0xb0 (Inherited: 0x18)
struct F*164ec2fa6e : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct F*9953b1ece2 *69d8b58fa8; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*9511c12409
// Size: 0xb0 (Inherited: 0x18)
struct F*9511c12409 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct FRichCurve *aa79e9f954; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*d8f4b220a7
// Size: 0xb0 (Inherited: 0x18)
struct F*d8f4b220a7 : F*b53fddfd6a {
	struct F*3f6f1d8d58 *68ad4242e9; // 0x18(0x28)
	struct F*9953b1ece2 *d3ec0e8326; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*c0ac72fd4b
// Size: 0x18 (Inherited: 0x18)
struct F*c0ac72fd4b : F*b53fddfd6a {
};

// ScriptStruct MovieSceneTracks.*708995f040
// Size: 0xb0 (Inherited: 0x18)
struct F*708995f040 : F*b53fddfd6a {
	struct F*8471ffdd04 Params; // 0x18(0x98)
};

// ScriptStruct MovieSceneTracks.*8471ffdd04
// Size: 0x98 (Inherited: 0x90)
struct F*8471ffdd04 : F*4787beef47 {
	float *5aa77a3931; // 0x90(0x04)
	float *62f3b08814; // 0x94(0x04)
};

// ScriptStruct MovieSceneTracks.*8b9accf431
// Size: 0x88 (Inherited: 0x18)
struct F*8b9accf431 : F*b53fddfd6a {
	struct FRichCurve *a4d3f2a594; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*ed573c8589
// Size: 0xb8 (Inherited: 0xb0)
struct F*ed573c8589 : F*d8f4b220a7 {
	bool *19c0d292be; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

