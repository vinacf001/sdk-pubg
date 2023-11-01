// Class MovieSceneCapture.*a86b428bec
// Size: 0x28 (Inherited: 0x28)
struct U*a86b428bec : UInterface {
};

// Class MovieSceneCapture.*fc5cf55d6a
// Size: 0x28 (Inherited: 0x28)
struct U*fc5cf55d6a : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x240 (Inherited: 0x28)
struct UMovieSceneCapture : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FCaptureProtocolID CaptureType[0x08]; // 0x38(0x08)
	struct U*fc5cf55d6a* *10800327d8[0x08]; // 0x40(0x08)
	struct F*c0bc2fcc78 Settings[0x50]; // 0x48(0x50)
	bool bUseSeparateProcess; // 0x98(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString AdditionalCommandLineArguments[0x10]; // 0xa0(0x10)
	struct FString *c79dee564e[0x10]; // 0xb0(0x10)
	char pad_C0[0x180]; // 0xc0(0x180)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x240 (Inherited: 0x240)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x260 (Inherited: 0x240)
struct ULevelCapture : UMovieSceneCapture {
	bool *913171c6b3; // 0x238(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FGuid *565055a2ff[0x10]; // 0x244(0x10)
	char pad_254[0xc]; // 0x254(0x0c)
};

// Class MovieSceneCapture.*e4b5226582
// Size: 0x28 (Inherited: 0x28)
struct U*e4b5226582 : UObject {

	void *801a3392ae(); // Function MovieSceneCapture.*e4b5226582.*801a3392ae // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6097a54
	void *def259b86c(); // Function MovieSceneCapture.*e4b5226582.*def259b86c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6097a7c
};

// Class MovieSceneCapture.*0e3c58214e
// Size: 0x30 (Inherited: 0x28)
struct U*0e3c58214e : U*fc5cf55d6a {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MovieSceneCapture.*eaafaadd26
// Size: 0x28 (Inherited: 0x28)
struct U*eaafaadd26 : U*fc5cf55d6a {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x38 (Inherited: 0x30)
struct UImageCaptureSettings : U*0e3c58214e {
	int32 CompressionQuality[0x04]; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x58 (Inherited: 0x28)
struct UCompositionGraphCaptureSettings : U*fc5cf55d6a {
	struct FCompositionGraphCapturePasses IncludeRenderPasses[0x10]; // 0x28(0x10)
	bool bCaptureFramesInHDR; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 HDRCompressionQuality[0x04]; // 0x3c(0x04)
	enum class *b5928f804b CaptureGamut; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FStringAssetReference PostProcessingMaterial[0x10]; // 0x48(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x48 (Inherited: 0x30)
struct UVideoCaptureSettings : U*0e3c58214e {
	bool bUseCompression; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CompressionQuality[0x04]; // 0x34(0x04)
	struct FString VideoCodec[0x10]; // 0x38(0x10)
};

