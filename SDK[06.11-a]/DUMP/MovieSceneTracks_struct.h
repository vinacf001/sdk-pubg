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

// Enum MovieSceneTracks.*80cc45f4d9
enum class *80cc45f4d9 : uint8 {
	*55b34d7a46,
	*07ea6ff453,
	*21385e0a40,
	*f7f8419315,
	*80cc45f4d9_MAX,
};

// Enum MovieSceneTracks.*3a3f54ddc4
enum class *3a3f54ddc4 : uint8 {
	*413a855b9c,
	*8761ed1fe8,
	*5110fd868f,
	*5087124cb8,
	*3a3f54ddc4_MAX,
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

// ScriptStruct MovieSceneTracks.*06ae7a2a57
// Size: 0x78 (Inherited: 0x08)
struct F*06ae7a2a57 : F*29ec846f95 {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4c]; // 0x2c(0x4c)
};

// ScriptStruct MovieSceneTracks.*d79e327154
// Size: 0x30 (Inherited: 0x08)
struct F*d79e327154 : F*29ec846f95 {
	struct FVector Scale; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*ad3e2b5b05
// Size: 0x30 (Inherited: 0x08)
struct F*ad3e2b5b05 : F*29ec846f95 {
	struct FRotator Rotation; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*559227fe7f
// Size: 0x30 (Inherited: 0x08)
struct F*559227fe7f : F*29ec846f95 {
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*4915aa1936
// Size: 0x20 (Inherited: 0x00)
struct F*4915aa1936 {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float *4a88e64a3e; // 0x0c(0x04)
	float *6aee803143; // 0x10(0x04)
	float *dc193f8f8d; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.*ccd4bdcfc2
// Size: 0x20 (Inherited: 0x00)
struct F*ccd4bdcfc2 {
	struct UClass* *d373d4cbe2; // 0x00(0x08)
	float *4a88e64a3e; // 0x08(0x04)
	enum class ECameraAnimPlaySpace *bd31187e3f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator *087f03984b; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.*57d9081dae
// Size: 0x58 (Inherited: 0x08)
struct F*57d9081dae : F*29ec846f95 {
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x40]; // 0x18(0x40)
};

// ScriptStruct MovieSceneTracks.*c6539f8b88
// Size: 0x20 (Inherited: 0x00)
struct F*c6539f8b88 {
	struct TArray<float> *c9d1486c39; // 0x00(0x10)
	struct TArray<struct FEventPayload> *70cf42f13b; // 0x10(0x10)
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

// ScriptStruct MovieSceneTracks.*e3248d6b08
// Size: 0x1d0 (Inherited: 0x00)
struct F*e3248d6b08 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *d2afe79a88; // 0x10(0x70)
	struct FRichCurve *792dcb744a; // 0x80(0x70)
	struct FRichCurve *d0ea9dc3cc; // 0xf0(0x70)
	struct FRichCurve *fccd6d3304; // 0x160(0x70)
};

// ScriptStruct MovieSceneTracks.*ef5e36734e
// Size: 0x160 (Inherited: 0x00)
struct F*ef5e36734e {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *123beae1fb; // 0x10(0x70)
	struct FRichCurve *7c0f3bffab; // 0x80(0x70)
	struct FRichCurve *e6611343ce; // 0xf0(0x70)
};

// ScriptStruct MovieSceneTracks.*cd23b8cf6f
// Size: 0x80 (Inherited: 0x00)
struct F*cd23b8cf6f {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *4a51ae2439; // 0x10(0x70)
};

// ScriptStruct MovieSceneTracks.*ab8f40b693
// Size: 0x90 (Inherited: 0x00)
struct F*ab8f40b693 {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float StartOffset; // 0x08(0x04)
	float *6af56df0a3; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char *ae2ab6f58f : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName SlotName; // 0x18(0x08)
	struct FRichCurve Weight; // 0x20(0x70)
};

// ScriptStruct MovieSceneTracks.*aca797245f
// Size: 0x60 (Inherited: 0x48)
struct F*aca797245f : F*70a143ba21 {
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 Vector; // 0x50(0x10)
};

// ScriptStruct MovieSceneTracks.*70a143ba21
// Size: 0x48 (Inherited: 0x08)
struct F*70a143ba21 : F*29ec846f95 {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct MovieSceneTracks.*c2e64c7948
// Size: 0x58 (Inherited: 0x48)
struct F*c2e64c7948 : F*70a143ba21 {
	struct FVector Vector; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MovieSceneTracks.*2fa5f36c12
// Size: 0x50 (Inherited: 0x48)
struct F*2fa5f36c12 : F*70a143ba21 {
	struct FVector2D Vector; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*17c4c65248
// Size: 0x50 (Inherited: 0x48)
struct F*17c4c65248 : F*e1dd260690 {
	int32 MaterialIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.*e1dd260690
// Size: 0x48 (Inherited: 0x18)
struct F*e1dd260690 : F*4c783496cb {
	struct TArray<struct F*cd23b8cf6f> *c5a4e5c690; // 0x18(0x10)
	struct TArray<struct F*ef5e36734e> Vectors; // 0x28(0x10)
	struct TArray<struct F*e3248d6b08> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*6811b89edf
// Size: 0x88 (Inherited: 0x18)
struct F*6811b89edf : F*4c783496cb {
	struct F*0bb3c50063 Curve; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*2cb4ed1a1d
// Size: 0x38 (Inherited: 0x18)
struct F*2cb4ed1a1d : F*4c783496cb {
	struct FGuid *d59f33e792; // 0x18(0x10)
	struct FName *cb3fc8827c; // 0x28(0x08)
	struct FName *05334d3a77; // 0x30(0x08)
};

// ScriptStruct MovieSceneTracks.*ad485b71e8
// Size: 0xa0 (Inherited: 0x18)
struct F*ad485b71e8 : F*4c783496cb {
	struct FGuid *4b65fcde23; // 0x18(0x10)
	struct FRichCurve *3d63b9a91c; // 0x28(0x70)
	enum class MovieScene3DPathSection_Axis *a2f7e54cd1; // 0x98(0x01)
	enum class MovieScene3DPathSection_Axis *8dce6d92dd; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	char bFollow : 1; // 0x9c(0x01)
	char *ae2ab6f58f : 1; // 0x9c(0x01)
	char *691d19961c : 1; // 0x9c(0x01)
	char pad_9C_3 : 5; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct MovieSceneTracks.*3c9f89d655
// Size: 0x408 (Inherited: 0x18)
struct F*3c9f89d655 : F*4c783496cb {
	struct FRichCurve *079bc5575e[0x03]; // 0x18(0x150)
	struct FRichCurve *a5b32a1550[0x03]; // 0x168(0x150)
	struct FRichCurve *580f37dfff[0x03]; // 0x2b8(0x150)
};

// ScriptStruct MovieSceneTracks.*8ed362d240
// Size: 0xc0 (Inherited: 0x18)
struct F*8ed362d240 : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct F*0bb3c50063 *d078646302; // 0x40(0x70)
	struct TArray<struct FGuid> *83768a9489; // 0xb0(0x10)
};

// ScriptStruct MovieSceneTracks.*99af56e9fb
// Size: 0x150 (Inherited: 0x18)
struct F*99af56e9fb : F*4c783496cb {
	struct F*4fc3080c7a *8a808fd583; // 0x18(0x138)
};

// ScriptStruct MovieSceneTracks.*4fc3080c7a
// Size: 0x138 (Inherited: 0x00)
struct F*4fc3080c7a {
	struct USoundBase* Sound; // 0x00(0x08)
	float *f48d1566de; // 0x08(0x04)
	struct FFloatRange *2c60774fcf; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve *530300cc25; // 0x20(0x70)
	struct FRichCurve *211491bdba; // 0x90(0x70)
	int32 *58cea9cf6c; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	DelegateProperty *f3f6bca861; // 0x108(0x10)
	struct FMulticastDelegate *3211c963e8; // 0x118(0x10)
	struct FMulticastDelegate *a84dd23fd5; // 0x128(0x10)
};

// ScriptStruct MovieSceneTracks.*eaa9d884cb
// Size: 0x18 (Inherited: 0x18)
struct F*eaa9d884cb : F*4c783496cb {
	enum class *1a2fe29341 *1584218364; // 0x10(0x01)
};

// ScriptStruct MovieSceneTracks.*c014fa99ac
// Size: 0x40 (Inherited: 0x18)
struct F*c014fa99ac : F*c685eb5b62 {
	struct F*ccd4bdcfc2 *54b58cd9af; // 0x18(0x20)
	float *17912d8fc6; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*c685eb5b62
// Size: 0x18 (Inherited: 0x18)
struct F*c685eb5b62 : F*4c783496cb {
	enum class *1a2fe29341 *1584218364; // 0x10(0x01)
};

// ScriptStruct MovieSceneTracks.*eb0d170ce7
// Size: 0x40 (Inherited: 0x18)
struct F*eb0d170ce7 : F*c685eb5b62 {
	struct F*4915aa1936 *54b58cd9af; // 0x18(0x20)
	float *17912d8fc6; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*b15e3b6f82
// Size: 0x70 (Inherited: 0x18)
struct F*b15e3b6f82 : F*4c783496cb {
	struct FGuid *135a2db555; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *18dc875d9c; // 0x30(0x30)
	bool *0e79e51f39; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct MovieSceneTracks.*61591aedeb
// Size: 0x1f0 (Inherited: 0x18)
struct F*61591aedeb : F*4c783496cb {
	struct FName PropertyName; // 0x18(0x08)
	struct FString PropertyPath; // 0x20(0x10)
	struct FRichCurve Curves[0x04]; // 0x30(0x1c0)
};

// ScriptStruct MovieSceneTracks.*661f3419c7
// Size: 0x50 (Inherited: 0x18)
struct F*661f3419c7 : F*4c783496cb {
	struct F*c6539f8b88 EventData; // 0x18(0x20)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x38(0x10)
	char *21e23af20d : 1; // 0x48(0x01)
	char *a622a509be : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MovieSceneTracks.*4b97935706
// Size: 0xa0 (Inherited: 0x18)
struct F*4b97935706 : F*4c783496cb {
	struct FRichCurve *e168ee82f0; // 0x18(0x70)
	struct FLinearColor *c5b49359fd; // 0x88(0x10)
	char *b1d853a51c : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct MovieSceneTracks.*9e508ea702
// Size: 0x30 (Inherited: 0x18)
struct F*9e508ea702 : F*4c783496cb {
	enum class ELevelVisibility Visibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> *3dab3d308f; // 0x20(0x10)
};

// ScriptStruct MovieSceneTracks.*19b211b2e8
// Size: 0x50 (Inherited: 0x48)
struct F*19b211b2e8 : F*e1dd260690 {
	struct UMaterialParameterCollection* MPC; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*3020dbde0d
// Size: 0x48 (Inherited: 0x48)
struct F*3020dbde0d : F*e1dd260690 {
	struct TArray<struct F*cd23b8cf6f> *c5a4e5c690; // 0x18(0x10)
	struct TArray<struct F*ef5e36734e> Vectors; // 0x28(0x10)
	struct TArray<struct F*e3248d6b08> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*2cf4296187
// Size: 0x88 (Inherited: 0x18)
struct F*2cf4296187 : F*4c783496cb {
	struct F*0bb3c50063 *53ff26ad92; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*abc0b1271c
// Size: 0x430 (Inherited: 0x18)
struct F*abc0b1271c : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct FRichCurve *079bc5575e[0x03]; // 0x40(0x150)
	struct FRichCurve *a5b32a1550[0x03]; // 0x190(0x150)
	struct FRichCurve *580f37dfff[0x03]; // 0x2e0(0x150)
};

// ScriptStruct MovieSceneTracks.*8e74498d12
// Size: 0x208 (Inherited: 0x18)
struct F*8e74498d12 : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct FRichCurve *1d7e28c0a6[0x04]; // 0x40(0x1c0)
	int32 *ea7a7a816a; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// ScriptStruct MovieSceneTracks.*da82c0b1e1
// Size: 0xb8 (Inherited: 0x18)
struct F*da82c0b1e1 : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct F*af85ca4d93 *af85ca4d93; // 0x40(0x78)
};

// ScriptStruct MovieSceneTracks.*feb83f9570
// Size: 0xb0 (Inherited: 0x18)
struct F*feb83f9570 : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct F*0bb3c50063 *121683ced5; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*8cc3a6e4fd
// Size: 0xb0 (Inherited: 0x18)
struct F*8cc3a6e4fd : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct F*0bb3c50063 *b9b0ec48fc; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*2e853a8790
// Size: 0xb0 (Inherited: 0x18)
struct F*2e853a8790 : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct F*0bb3c50063 *4abf3e6d9a; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*2957455e5e
// Size: 0xb0 (Inherited: 0x18)
struct F*2957455e5e : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct FRichCurve *0796ed81e5; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*2b2a5248dd
// Size: 0xb0 (Inherited: 0x18)
struct F*2b2a5248dd : F*4c783496cb {
	struct F*a6a3aec1a0 *b2541451cd; // 0x18(0x28)
	struct F*0bb3c50063 *e26b59082e; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*e0973f19d5
// Size: 0x18 (Inherited: 0x18)
struct F*e0973f19d5 : F*4c783496cb {
	enum class *1a2fe29341 *1584218364; // 0x10(0x01)
};

// ScriptStruct MovieSceneTracks.*4380452a39
// Size: 0xb0 (Inherited: 0x18)
struct F*4380452a39 : F*4c783496cb {
	struct F*533300c8c5 Params; // 0x18(0x98)
};

// ScriptStruct MovieSceneTracks.*533300c8c5
// Size: 0x98 (Inherited: 0x90)
struct F*533300c8c5 : F*ab8f40b693 {
	float *17912d8fc6; // 0x90(0x04)
	float *fd53c06f03; // 0x94(0x04)
};

// ScriptStruct MovieSceneTracks.*3791c48187
// Size: 0x88 (Inherited: 0x18)
struct F*3791c48187 : F*4c783496cb {
	struct FRichCurve *ff5bd77f3b; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*e279ac2a1e
// Size: 0xb8 (Inherited: 0xb0)
struct F*e279ac2a1e : F*2b2a5248dd {
	bool *62b8783217; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

