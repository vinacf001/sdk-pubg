// Class MovieSceneCapture.*f8426b032a
// Size: 0x28 (Inherited: 0x28)
struct U*f8426b032a : UInterface {
};

// Class MovieSceneCapture.*c0dfc9127e
// Size: 0x28 (Inherited: 0x28)
struct U*c0dfc9127e : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x240 (Inherited: 0x28)
struct UMovieSceneCapture : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FCaptureProtocolID CaptureType; // 0x38(0x08)
	struct U*c0dfc9127e* *6f1006aa18; // 0x40(0x08)
	struct F*fc67a3c521 Settings; // 0x48(0x50)
	bool bUseSeparateProcess; // 0x98(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa0(0x10)
	struct FString *d5c135487c; // 0xb0(0x10)
	char pad_C0[0x180]; // 0xc0(0x180)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x240 (Inherited: 0x240)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x260 (Inherited: 0x240)
struct ULevelCapture : UMovieSceneCapture {
	bool *0d60c02014; // 0x238(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FGuid *b7e86b61a7; // 0x244(0x10)
	char pad_254[0xc]; // 0x254(0x0c)
};

// Class MovieSceneCapture.*4bda4f1276
// Size: 0x28 (Inherited: 0x28)
struct U*4bda4f1276 : UObject {

	void *d92f344e8f(); // Function MovieSceneCapture.*4bda4f1276.*d92f344e8f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fbaad8
	void *d61f90bc6d(); // Function MovieSceneCapture.*4bda4f1276.*d61f90bc6d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5fbab00
};

// Class MovieSceneCapture.*eee4b9199d
// Size: 0x30 (Inherited: 0x28)
struct U*eee4b9199d : U*c0dfc9127e {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MovieSceneCapture.*7c422c63bd
// Size: 0x28 (Inherited: 0x28)
struct U*7c422c63bd : U*c0dfc9127e {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x38 (Inherited: 0x30)
struct UImageCaptureSettings : U*eee4b9199d {
	int32 CompressionQuality; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x58 (Inherited: 0x28)
struct UCompositionGraphCaptureSettings : U*c0dfc9127e {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x28(0x10)
	bool bCaptureFramesInHDR; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 HDRCompressionQuality; // 0x3c(0x04)
	enum class *c150507f78 CaptureGamut; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x48(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x48 (Inherited: 0x30)
struct UVideoCaptureSettings : U*eee4b9199d {
	bool bUseCompression; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CompressionQuality; // 0x34(0x04)
	struct FString VideoCodec; // 0x38(0x10)
};

