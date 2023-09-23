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

// Enum MovieSceneTracks.*d449e4d489
enum class *d449e4d489 : uint8 {
	*ffc1cdbf0f,
	*a014da1cc4,
	*875b576307,
	*3ea0937a9d,
	*d449e4d489_MAX,
};

// Enum MovieSceneTracks.*49e1f639c8
enum class *49e1f639c8 : uint8 {
	*c82cbaa06f,
	*940d0b898c,
	*5ec60dabf2,
	*0397d2a280,
	*49e1f639c8_MAX,
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

// ScriptStruct MovieSceneTracks.*c4270a44d1
// Size: 0x78 (Inherited: 0x08)
struct F*c4270a44d1 : F*81eee59cc1 {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4c]; // 0x2c(0x4c)
};

// ScriptStruct MovieSceneTracks.*b35e9b5e93
// Size: 0x30 (Inherited: 0x08)
struct F*b35e9b5e93 : F*81eee59cc1 {
	struct FVector Scale; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*fe3100ffbc
// Size: 0x30 (Inherited: 0x08)
struct F*fe3100ffbc : F*81eee59cc1 {
	struct FRotator Rotation; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*d3c56d8810
// Size: 0x30 (Inherited: 0x08)
struct F*d3c56d8810 : F*81eee59cc1 {
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*0e4a918a02
// Size: 0x20 (Inherited: 0x00)
struct F*0e4a918a02 {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float *5dcf32bf21; // 0x0c(0x04)
	float *f3bf5851cc; // 0x10(0x04)
	float *9f65ffbbee; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.*96b9dab213
// Size: 0x20 (Inherited: 0x00)
struct F*96b9dab213 {
	struct UClass* *57fef69556; // 0x00(0x08)
	float *5dcf32bf21; // 0x08(0x04)
	enum class ECameraAnimPlaySpace *b6a684a682; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator *220a335c7e; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.*f5de43aa62
// Size: 0x58 (Inherited: 0x08)
struct F*f5de43aa62 : F*81eee59cc1 {
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x40]; // 0x18(0x40)
};

// ScriptStruct MovieSceneTracks.*6cafaee3b9
// Size: 0x20 (Inherited: 0x00)
struct F*6cafaee3b9 {
	struct TArray<float> *034cdb3e81; // 0x00(0x10)
	struct TArray<struct FEventPayload> *3863334963; // 0x10(0x10)
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

// ScriptStruct MovieSceneTracks.*e1567a4e2e
// Size: 0x1d0 (Inherited: 0x00)
struct F*e1567a4e2e {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *27e6f842d3; // 0x10(0x70)
	struct FRichCurve *b83b3df190; // 0x80(0x70)
	struct FRichCurve *8f28636e1f; // 0xf0(0x70)
	struct FRichCurve *c02750cfe0; // 0x160(0x70)
};

// ScriptStruct MovieSceneTracks.*f613d01826
// Size: 0x160 (Inherited: 0x00)
struct F*f613d01826 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *583f7c1bbe; // 0x10(0x70)
	struct FRichCurve *ee1962cfde; // 0x80(0x70)
	struct FRichCurve *6fbd21ec8a; // 0xf0(0x70)
};

// ScriptStruct MovieSceneTracks.*87a8276e8e
// Size: 0x80 (Inherited: 0x00)
struct F*87a8276e8e {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *4c1722b6a4; // 0x10(0x70)
};

// ScriptStruct MovieSceneTracks.*6d99390fca
// Size: 0x90 (Inherited: 0x00)
struct F*6d99390fca {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float StartOffset; // 0x08(0x04)
	float *34c143e9a3; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char *3c7b58347f : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName SlotName; // 0x18(0x08)
	struct FRichCurve Weight; // 0x20(0x70)
};

// ScriptStruct MovieSceneTracks.*63961d915b
// Size: 0x60 (Inherited: 0x48)
struct F*63961d915b : F*6a405f79a4 {
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 Vector; // 0x50(0x10)
};

// ScriptStruct MovieSceneTracks.*6a405f79a4
// Size: 0x48 (Inherited: 0x08)
struct F*6a405f79a4 : F*81eee59cc1 {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct MovieSceneTracks.*6dfcd9d6f6
// Size: 0x58 (Inherited: 0x48)
struct F*6dfcd9d6f6 : F*6a405f79a4 {
	struct FVector Vector; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MovieSceneTracks.*8990de37ea
// Size: 0x50 (Inherited: 0x48)
struct F*8990de37ea : F*6a405f79a4 {
	struct FVector2D Vector; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*baef6ce71c
// Size: 0x50 (Inherited: 0x48)
struct F*baef6ce71c : F*a965e14a16 {
	int32 MaterialIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.*a965e14a16
// Size: 0x48 (Inherited: 0x18)
struct F*a965e14a16 : F*e107e6ad4f {
	struct TArray<struct F*87a8276e8e> *bebc1b5772; // 0x18(0x10)
	struct TArray<struct F*f613d01826> Vectors; // 0x28(0x10)
	struct TArray<struct F*e1567a4e2e> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*ebf465ead2
// Size: 0x88 (Inherited: 0x18)
struct F*ebf465ead2 : F*e107e6ad4f {
	struct F*5d74728a19 Curve; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*14caa90549
// Size: 0x38 (Inherited: 0x18)
struct F*14caa90549 : F*e107e6ad4f {
	struct FGuid *f779601431; // 0x18(0x10)
	struct FName *055f551900; // 0x28(0x08)
	struct FName *a4c1211f17; // 0x30(0x08)
};

// ScriptStruct MovieSceneTracks.*645ddd4748
// Size: 0xa0 (Inherited: 0x18)
struct F*645ddd4748 : F*e107e6ad4f {
	struct FGuid *f8306f7b35; // 0x18(0x10)
	struct FRichCurve *42993f6508; // 0x28(0x70)
	enum class MovieScene3DPathSection_Axis *dcdb80cdcf; // 0x98(0x01)
	enum class MovieScene3DPathSection_Axis *b7de8813ba; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	char bFollow : 1; // 0x9c(0x01)
	char *3c7b58347f : 1; // 0x9c(0x01)
	char *ae43a0eb39 : 1; // 0x9c(0x01)
	char pad_9C_3 : 5; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct MovieSceneTracks.*63ed2d57f4
// Size: 0x408 (Inherited: 0x18)
struct F*63ed2d57f4 : F*e107e6ad4f {
	struct FRichCurve *e3d474c01b[0x03]; // 0x18(0x150)
	struct FRichCurve *457b381550[0x03]; // 0x168(0x150)
	struct FRichCurve *5b13d24445[0x03]; // 0x2b8(0x150)
};

// ScriptStruct MovieSceneTracks.*59a96428c4
// Size: 0xc0 (Inherited: 0x18)
struct F*59a96428c4 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct F*5d74728a19 *a75ca7d740; // 0x40(0x70)
	struct TArray<struct FGuid> *81cd37e6fb; // 0xb0(0x10)
};

// ScriptStruct MovieSceneTracks.*141304a2da
// Size: 0x150 (Inherited: 0x18)
struct F*141304a2da : F*e107e6ad4f {
	struct F*56277c5779 *6a41a73b7c; // 0x18(0x138)
};

// ScriptStruct MovieSceneTracks.*56277c5779
// Size: 0x138 (Inherited: 0x00)
struct F*56277c5779 {
	struct USoundBase* Sound; // 0x00(0x08)
	float *91367c04c7; // 0x08(0x04)
	struct FFloatRange *e2c8eb83ab; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve *ebfeda88e8; // 0x20(0x70)
	struct FRichCurve *33f902992b; // 0x90(0x70)
	int32 *32a3cf19b3; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	DelegateProperty *6c1db6614a; // 0x108(0x10)
	struct FMulticastDelegate *fd14034d1b; // 0x118(0x10)
	struct FMulticastDelegate *f2fb9b17fd; // 0x128(0x10)
};

// ScriptStruct MovieSceneTracks.*87eb10ef25
// Size: 0x18 (Inherited: 0x18)
struct F*87eb10ef25 : F*e107e6ad4f {
	enum class *3cf94ed0fa *282ba82093; // 0x10(0x01)
};

// ScriptStruct MovieSceneTracks.*173b8a5376
// Size: 0x40 (Inherited: 0x18)
struct F*173b8a5376 : F*fb131793e8 {
	struct F*96b9dab213 *1bb4efe87c; // 0x18(0x20)
	float *0de3a592e3; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*fb131793e8
// Size: 0x18 (Inherited: 0x18)
struct F*fb131793e8 : F*e107e6ad4f {
	enum class *3cf94ed0fa *282ba82093; // 0x10(0x01)
};

// ScriptStruct MovieSceneTracks.*ee4b22f408
// Size: 0x40 (Inherited: 0x18)
struct F*ee4b22f408 : F*fb131793e8 {
	struct F*0e4a918a02 *1bb4efe87c; // 0x18(0x20)
	float *0de3a592e3; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*cda79a0750
// Size: 0x70 (Inherited: 0x18)
struct F*cda79a0750 : F*e107e6ad4f {
	struct FGuid *910b6593fe; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *008b0a9206; // 0x30(0x30)
	bool *319c654f7e; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct MovieSceneTracks.*0dd09e5f0b
// Size: 0x1f0 (Inherited: 0x18)
struct F*0dd09e5f0b : F*e107e6ad4f {
	struct FName PropertyName; // 0x18(0x08)
	struct FString PropertyPath; // 0x20(0x10)
	struct FRichCurve Curves[0x04]; // 0x30(0x1c0)
};

// ScriptStruct MovieSceneTracks.*4a1467468d
// Size: 0x50 (Inherited: 0x18)
struct F*4a1467468d : F*e107e6ad4f {
	struct F*6cafaee3b9 EventData; // 0x18(0x20)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x38(0x10)
	char *f910bc4e96 : 1; // 0x48(0x01)
	char *3b4aa2c40a : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MovieSceneTracks.*9696b90928
// Size: 0xa0 (Inherited: 0x18)
struct F*9696b90928 : F*e107e6ad4f {
	struct FRichCurve *2b8b1b038f; // 0x18(0x70)
	struct FLinearColor *43c44276e7; // 0x88(0x10)
	char *a7d566211e : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct MovieSceneTracks.*f3f6266f3a
// Size: 0x30 (Inherited: 0x18)
struct F*f3f6266f3a : F*e107e6ad4f {
	enum class ELevelVisibility Visibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> *af908a77c5; // 0x20(0x10)
};

// ScriptStruct MovieSceneTracks.*898b3d647b
// Size: 0x50 (Inherited: 0x48)
struct F*898b3d647b : F*a965e14a16 {
	struct UMaterialParameterCollection* MPC; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*2f5f30f192
// Size: 0x48 (Inherited: 0x48)
struct F*2f5f30f192 : F*a965e14a16 {
	struct TArray<struct F*87a8276e8e> *bebc1b5772; // 0x18(0x10)
	struct TArray<struct F*f613d01826> Vectors; // 0x28(0x10)
	struct TArray<struct F*e1567a4e2e> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*42d4a68dec
// Size: 0x88 (Inherited: 0x18)
struct F*42d4a68dec : F*e107e6ad4f {
	struct F*5d74728a19 *baa8468f2e; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*b45783e389
// Size: 0x430 (Inherited: 0x18)
struct F*b45783e389 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct FRichCurve *e3d474c01b[0x03]; // 0x40(0x150)
	struct FRichCurve *457b381550[0x03]; // 0x190(0x150)
	struct FRichCurve *5b13d24445[0x03]; // 0x2e0(0x150)
};

// ScriptStruct MovieSceneTracks.*b91302c816
// Size: 0x208 (Inherited: 0x18)
struct F*b91302c816 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct FRichCurve *4907fbe29d[0x04]; // 0x40(0x1c0)
	int32 *4c8968a7e5; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// ScriptStruct MovieSceneTracks.*3401360cbb
// Size: 0xb8 (Inherited: 0x18)
struct F*3401360cbb : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct F*bff53d7b09 *bff53d7b09; // 0x40(0x78)
};

// ScriptStruct MovieSceneTracks.*e2c1adeb8f
// Size: 0xb0 (Inherited: 0x18)
struct F*e2c1adeb8f : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct F*5d74728a19 *ca52fcc29e; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*8b1d4fedbe
// Size: 0xb0 (Inherited: 0x18)
struct F*8b1d4fedbe : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct F*5d74728a19 *cc9e20575f; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*da4f7b2875
// Size: 0xb0 (Inherited: 0x18)
struct F*da4f7b2875 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct F*5d74728a19 *cb6637f951; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*9dedbb80a9
// Size: 0xb0 (Inherited: 0x18)
struct F*9dedbb80a9 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct FRichCurve *2d625a83c8; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*68db153471
// Size: 0xb0 (Inherited: 0x18)
struct F*68db153471 : F*e107e6ad4f {
	struct F*7eb4da19fb *0d2bdf0634; // 0x18(0x28)
	struct F*5d74728a19 *425e77dd15; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*a5223cc8f2
// Size: 0x18 (Inherited: 0x18)
struct F*a5223cc8f2 : F*e107e6ad4f {
	enum class *3cf94ed0fa *282ba82093; // 0x10(0x01)
};

// ScriptStruct MovieSceneTracks.*84be8a52cd
// Size: 0xb0 (Inherited: 0x18)
struct F*84be8a52cd : F*e107e6ad4f {
	struct F*b18ffaf673 Params; // 0x18(0x98)
};

// ScriptStruct MovieSceneTracks.*b18ffaf673
// Size: 0x98 (Inherited: 0x90)
struct F*b18ffaf673 : F*6d99390fca {
	float *0de3a592e3; // 0x90(0x04)
	float *ab4b8418aa; // 0x94(0x04)
};

// ScriptStruct MovieSceneTracks.*b6914237f4
// Size: 0x88 (Inherited: 0x18)
struct F*b6914237f4 : F*e107e6ad4f {
	struct FRichCurve *e59c9ed9ee; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*edfe55eb5b
// Size: 0xb8 (Inherited: 0xb0)
struct F*edfe55eb5b : F*68db153471 {
	bool *f28849ef4d; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

