// Class MovieSceneCapture.*a86b428bec
// Size: 0x30 (Inherited: 0x30)
struct U*a86b428bec : UInterface {
};

// Class MovieSceneCapture.*fc5cf55d6a
// Size: 0x30 (Inherited: 0x30)
struct U*fc5cf55d6a : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x250 (Inherited: 0x30)
struct UMovieSceneCapture : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FCaptureProtocolID CaptureType; // 0x40(0x08)
	struct U*fc5cf55d6a* *10800327d8; // 0x48(0x08)
	struct F*c0bc2fcc78 Settings; // 0x50(0x50)
	bool bUseSeparateProcess; // 0xa0(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa8(0x10)
	struct FString *c79dee564e; // 0xb8(0x10)
	char pad_C8[0x188]; // 0xc8(0x188)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x250 (Inherited: 0x250)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x270 (Inherited: 0x250)
struct ULevelCapture : UMovieSceneCapture {
	bool *913171c6b3; // 0x248(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FGuid *565055a2ff; // 0x254(0x10)
	char pad_264[0xc]; // 0x264(0x0c)
};

// Class MovieSceneCapture.*e4b5226582
// Size: 0x30 (Inherited: 0x30)
struct U*e4b5226582 : UObject {

	float *801a3392ae(); // Function MovieSceneCapture.*e4b5226582.*801a3392ae // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x649d224
	int32 *def259b86c(); // Function MovieSceneCapture.*e4b5226582.*def259b86c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x649d24c
};

// Class MovieSceneCapture.*0e3c58214e
// Size: 0x38 (Inherited: 0x30)
struct U*0e3c58214e : U*fc5cf55d6a {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MovieSceneCapture.*eaafaadd26
// Size: 0x30 (Inherited: 0x30)
struct U*eaafaadd26 : U*fc5cf55d6a {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x40 (Inherited: 0x38)
struct UImageCaptureSettings : U*0e3c58214e {
	int32 CompressionQuality; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x60 (Inherited: 0x30)
struct UCompositionGraphCaptureSettings : U*fc5cf55d6a {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x30(0x10)
	bool bCaptureFramesInHDR; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 HDRCompressionQuality; // 0x44(0x04)
	enum class *b5928f804b CaptureGamut; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x50(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x50 (Inherited: 0x38)
struct UVideoCaptureSettings : U*0e3c58214e {
	bool bUseCompression; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CompressionQuality; // 0x3c(0x04)
	struct FString VideoCodec; // 0x40(0x10)
};

