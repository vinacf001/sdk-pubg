// ScriptStruct MovieSceneTracks.*d110d9446a
// Size: 0x78 (Inherited: 0x08)
struct F*d110d9446a : F*59993d0e65 {
	struct FVector Location[0x0c]; // 0x08(0x0c)
	struct FRotator Rotation[0x0c]; // 0x14(0x0c)
	struct FVector Scale[0x0c]; // 0x20(0x0c)
	char pad_2C[0x4c]; // 0x2c(0x4c)
};

// ScriptStruct MovieSceneTracks.*3dd1e4e2d8
// Size: 0x30 (Inherited: 0x08)
struct F*3dd1e4e2d8 : F*59993d0e65 {
	struct FVector Scale[0x0c]; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*4b0d0ee16e
// Size: 0x30 (Inherited: 0x08)
struct F*4b0d0ee16e : F*59993d0e65 {
	struct FRotator Rotation[0x0c]; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*0d368f171c
// Size: 0x30 (Inherited: 0x08)
struct F*0d368f171c : F*59993d0e65 {
	struct FVector Location[0x0c]; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*8d8f974b0b
// Size: 0x20 (Inherited: 0x00)
struct F*8d8f974b0b {
	struct UCameraAnim* CameraAnim[0x08]; // 0x00(0x08)
	float PlayRate[0x04]; // 0x08(0x04)
	float *434e9f9344[0x04]; // 0x0c(0x04)
	float *4d6467dc71[0x04]; // 0x10(0x04)
	float *19f3e239cb[0x04]; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.*99422fccd2
// Size: 0x20 (Inherited: 0x00)
struct F*99422fccd2 {
	struct UClass* *f590cee254[0x08]; // 0x00(0x08)
	float *434e9f9344[0x04]; // 0x08(0x04)
	enum class ECameraAnimPlaySpace *364bfed6d3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator *63d6d36023[0x0c]; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.*2bffebaf21
// Size: 0x58 (Inherited: 0x08)
struct F*2bffebaf21 : F*59993d0e65 {
	struct FLinearColor Color[0x10]; // 0x08(0x10)
	char pad_18[0x40]; // 0x18(0x40)
};

// ScriptStruct MovieSceneTracks.*127da3598a
// Size: 0x20 (Inherited: 0x00)
struct F*127da3598a {
	struct TArray<float> *c7f2aa9c25[0x10]; // 0x00(0x10)
	struct TArray<struct FEventPayload> *de049ba847[0x10]; // 0x10(0x10)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x28 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName[0x08]; // 0x00(0x08)
	struct FMovieSceneEventParameters Parameters[0x20]; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct MovieSceneTracks.*df788b5612
// Size: 0x1d0 (Inherited: 0x00)
struct F*df788b5612 {
	struct FName ParameterName[0x08]; // 0x00(0x08)
	int32 Index[0x04]; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *ce07ec0a99[0x70]; // 0x10(0x70)
	struct FRichCurve *ecb940efc5[0x70]; // 0x80(0x70)
	struct FRichCurve *48d16680d2[0x70]; // 0xf0(0x70)
	struct FRichCurve *7b49fabe25[0x70]; // 0x160(0x70)
};

// ScriptStruct MovieSceneTracks.*21fbc1ac13
// Size: 0x160 (Inherited: 0x00)
struct F*21fbc1ac13 {
	struct FName ParameterName[0x08]; // 0x00(0x08)
	int32 Index[0x04]; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *adee3e5a3c[0x70]; // 0x10(0x70)
	struct FRichCurve *a930f64d80[0x70]; // 0x80(0x70)
	struct FRichCurve *bd9fb28530[0x70]; // 0xf0(0x70)
};

// ScriptStruct MovieSceneTracks.*298ca1f497
// Size: 0x80 (Inherited: 0x00)
struct F*298ca1f497 {
	struct FName ParameterName[0x08]; // 0x00(0x08)
	int32 Index[0x04]; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *0652bd3d88[0x70]; // 0x10(0x70)
};

// ScriptStruct MovieSceneTracks.*8ed3cfc9a1
// Size: 0x90 (Inherited: 0x00)
struct F*8ed3cfc9a1 {
	struct UAnimSequenceBase* Animation[0x08]; // 0x00(0x08)
	float StartOffset[0x04]; // 0x08(0x04)
	float *95b3cbc2db[0x04]; // 0x0c(0x04)
	float PlayRate[0x04]; // 0x10(0x04)
	char *2ca662263e : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName SlotName[0x08]; // 0x18(0x08)
	struct FRichCurve Weight[0x70]; // 0x20(0x70)
};

// ScriptStruct MovieSceneTracks.*f0db8788a0
// Size: 0x60 (Inherited: 0x48)
struct F*f0db8788a0 : F*64f188cf54 {
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 Vector[0x10]; // 0x50(0x10)
};

// ScriptStruct MovieSceneTracks.*64f188cf54
// Size: 0x48 (Inherited: 0x08)
struct F*64f188cf54 : F*59993d0e65 {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct MovieSceneTracks.*d1dd4547ce
// Size: 0x58 (Inherited: 0x48)
struct F*d1dd4547ce : F*64f188cf54 {
	struct FVector Vector[0x0c]; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MovieSceneTracks.*401c18440e
// Size: 0x50 (Inherited: 0x48)
struct F*401c18440e : F*64f188cf54 {
	struct FVector2D Vector[0x08]; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*62bb6b832a
// Size: 0x50 (Inherited: 0x48)
struct F*62bb6b832a : F*521c9d3efb {
	int32 MaterialIndex[0x04]; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.*521c9d3efb
// Size: 0x48 (Inherited: 0x18)
struct F*521c9d3efb : F*bb608aaa2f {
	struct TArray<struct F*298ca1f497> *f7717d625f[0x10]; // 0x18(0x10)
	struct TArray<struct F*21fbc1ac13> Vectors[0x10]; // 0x28(0x10)
	struct TArray<struct F*df788b5612> Colors[0x10]; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*59513ec0b1
// Size: 0x88 (Inherited: 0x18)
struct F*59513ec0b1 : F*bb608aaa2f {
	struct F*a422f9d4ff Curve[0x70]; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*c8714d5657
// Size: 0x38 (Inherited: 0x18)
struct F*c8714d5657 : F*bb608aaa2f {
	struct FGuid *89f093a1a4[0x10]; // 0x18(0x10)
	struct FName *d373ab65c0[0x08]; // 0x28(0x08)
	struct FName *1a9619f01d[0x08]; // 0x30(0x08)
};

// ScriptStruct MovieSceneTracks.*5132e289db
// Size: 0xa0 (Inherited: 0x18)
struct F*5132e289db : F*bb608aaa2f {
	struct FGuid *4413adcf76[0x10]; // 0x18(0x10)
	struct FRichCurve *ef9296323d[0x70]; // 0x28(0x70)
	enum class MovieScene3DPathSection_Axis *6e33a8f5ac; // 0x98(0x01)
	enum class MovieScene3DPathSection_Axis *0d7fbce3eb; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	char bFollow : 1; // 0x9c(0x01)
	char *2ca662263e : 1; // 0x9c(0x01)
	char *b6ecafb608 : 1; // 0x9c(0x01)
	char pad_9C_3 : 5; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct MovieSceneTracks.*51ef9cce13
// Size: 0x408 (Inherited: 0x18)
struct F*51ef9cce13 : F*bb608aaa2f {
	struct FRichCurve *1960b1af8c[0x70]; // 0x18(0x150)
	struct FRichCurve *6eb9b2fb15[0x70]; // 0x168(0x150)
	struct FRichCurve *0ee2e9841f[0x70]; // 0x2b8(0x150)
};

// ScriptStruct MovieSceneTracks.*8bc9b8a066
// Size: 0xc0 (Inherited: 0x18)
struct F*8bc9b8a066 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct F*a422f9d4ff *90771a3ffe[0x70]; // 0x40(0x70)
	struct TArray<struct FGuid> *a309d80663[0x10]; // 0xb0(0x10)
};

// ScriptStruct MovieSceneTracks.*9aa9e99537
// Size: 0x150 (Inherited: 0x18)
struct F*9aa9e99537 : F*bb608aaa2f {
	struct F*8a563567b1 *c9b45e0812[0x138]; // 0x18(0x138)
};

// ScriptStruct MovieSceneTracks.*8a563567b1
// Size: 0x138 (Inherited: 0x00)
struct F*8a563567b1 {
	struct USoundBase* Sound[0x08]; // 0x00(0x08)
	float *a117829d7c[0x04]; // 0x08(0x04)
	struct FFloatRange *3f07221c79[0x10]; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve *dcfa131bbe[0x70]; // 0x20(0x70)
	struct FRichCurve *b1d40a50ff[0x70]; // 0x90(0x70)
	int32 *3a3a453816[0x04]; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	DelegateProperty *2b3f413ec8[0x10]; // 0x108(0x10)
	struct FMulticastDelegate *319260c8a8[0x10]; // 0x118(0x10)
	struct FMulticastDelegate *ad534c7196[0x10]; // 0x128(0x10)
};

// ScriptStruct MovieSceneTracks.*4b45040ec0
// Size: 0x18 (Inherited: 0x18)
struct F*4b45040ec0 : F*bb608aaa2f {
};

// ScriptStruct MovieSceneTracks.*e3b4abc97a
// Size: 0x40 (Inherited: 0x18)
struct F*e3b4abc97a : F*c449b0474a {
	struct F*99422fccd2 *a88ca1f9f2[0x20]; // 0x18(0x20)
	float *890330df50[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*c449b0474a
// Size: 0x18 (Inherited: 0x18)
struct F*c449b0474a : F*bb608aaa2f {
};

// ScriptStruct MovieSceneTracks.*7e8c1b4c65
// Size: 0x40 (Inherited: 0x18)
struct F*7e8c1b4c65 : F*c449b0474a {
	struct F*8d8f974b0b *a88ca1f9f2[0x20]; // 0x18(0x20)
	float *890330df50[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*74abdaa0d9
// Size: 0x70 (Inherited: 0x18)
struct F*74abdaa0d9 : F*bb608aaa2f {
	struct FGuid *a2333c5817[0x10]; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *25f38a7101[0x30]; // 0x30(0x30)
	bool *c8ff6a4e8b; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct MovieSceneTracks.*6ba5b1bda1
// Size: 0x1f0 (Inherited: 0x18)
struct F*6ba5b1bda1 : F*bb608aaa2f {
	struct FName PropertyName[0x08]; // 0x18(0x08)
	struct FString PropertyPath[0x10]; // 0x20(0x10)
	struct FRichCurve Curves[0x70]; // 0x30(0x1c0)
};

// ScriptStruct MovieSceneTracks.*fdb8ee4e82
// Size: 0x50 (Inherited: 0x18)
struct F*fdb8ee4e82 : F*bb608aaa2f {
	struct F*127da3598a EventData[0x20]; // 0x18(0x20)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers[0x10]; // 0x38(0x10)
	char *0aa83bc524 : 1; // 0x48(0x01)
	char *1d2a54934d : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MovieSceneTracks.*caf602f762
// Size: 0xa0 (Inherited: 0x18)
struct F*caf602f762 : F*bb608aaa2f {
	struct FRichCurve *da4e08eaf1[0x70]; // 0x18(0x70)
	struct FLinearColor *59ad6910df[0x10]; // 0x88(0x10)
	char *f42de07281 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct MovieSceneTracks.*b4eea82670
// Size: 0x30 (Inherited: 0x18)
struct F*b4eea82670 : F*bb608aaa2f {
	enum class ELevelVisibility Visibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> *33f67d2b24[0x10]; // 0x20(0x10)
};

// ScriptStruct MovieSceneTracks.*bdf8626eac
// Size: 0x50 (Inherited: 0x48)
struct F*bdf8626eac : F*521c9d3efb {
	struct UMaterialParameterCollection* MPC[0x08]; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*c54b82f131
// Size: 0x48 (Inherited: 0x48)
struct F*c54b82f131 : F*521c9d3efb {
};

// ScriptStruct MovieSceneTracks.*3dfea610bb
// Size: 0x88 (Inherited: 0x18)
struct F*3dfea610bb : F*bb608aaa2f {
	struct F*a422f9d4ff *e0ead3eac1[0x70]; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*52e9e32bad
// Size: 0x430 (Inherited: 0x18)
struct F*52e9e32bad : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct FRichCurve *1960b1af8c[0x70]; // 0x40(0x150)
	struct FRichCurve *6eb9b2fb15[0x70]; // 0x190(0x150)
	struct FRichCurve *0ee2e9841f[0x70]; // 0x2e0(0x150)
};

// ScriptStruct MovieSceneTracks.*6e7cc1c305
// Size: 0x208 (Inherited: 0x18)
struct F*6e7cc1c305 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct FRichCurve *5fb73c8460[0x70]; // 0x40(0x1c0)
	int32 *57fdae08aa[0x04]; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// ScriptStruct MovieSceneTracks.*997b40d6d7
// Size: 0xb8 (Inherited: 0x18)
struct F*997b40d6d7 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct F*754bde3481 *754bde3481[0x78]; // 0x40(0x78)
};

// ScriptStruct MovieSceneTracks.*501aacac08
// Size: 0xb0 (Inherited: 0x18)
struct F*501aacac08 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct F*a422f9d4ff *03937a0b98[0x70]; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*98fec65754
// Size: 0xb0 (Inherited: 0x18)
struct F*98fec65754 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct F*a422f9d4ff *0df0f3f9db[0x70]; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*2d52b07c95
// Size: 0xb0 (Inherited: 0x18)
struct F*2d52b07c95 : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct F*a422f9d4ff *1c59b21309[0x70]; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*e7392487cd
// Size: 0xb0 (Inherited: 0x18)
struct F*e7392487cd : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct FRichCurve *e7fc2b8ab7[0x70]; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*42eb5934cd
// Size: 0xb0 (Inherited: 0x18)
struct F*42eb5934cd : F*bb608aaa2f {
	struct F*a1e412f2f3 *f1a0f3f2df[0x28]; // 0x18(0x28)
	struct F*a422f9d4ff *e769e648e6[0x70]; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*fa86dcbec4
// Size: 0x18 (Inherited: 0x18)
struct F*fa86dcbec4 : F*bb608aaa2f {
};

// ScriptStruct MovieSceneTracks.*55d0804b55
// Size: 0xb0 (Inherited: 0x18)
struct F*55d0804b55 : F*bb608aaa2f {
	struct F*92bb548e10 Params[0x98]; // 0x18(0x98)
};

// ScriptStruct MovieSceneTracks.*92bb548e10
// Size: 0x98 (Inherited: 0x90)
struct F*92bb548e10 : F*8ed3cfc9a1 {
	float *890330df50[0x04]; // 0x90(0x04)
	float *0edfdc941b[0x04]; // 0x94(0x04)
};

// ScriptStruct MovieSceneTracks.*2a195c1c1a
// Size: 0x88 (Inherited: 0x18)
struct F*2a195c1c1a : F*bb608aaa2f {
	struct FRichCurve *a8f072ba6a[0x70]; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*c36bb78909
// Size: 0xb8 (Inherited: 0xb0)
struct F*c36bb78909 : F*42eb5934cd {
	bool *b21e32a602; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

