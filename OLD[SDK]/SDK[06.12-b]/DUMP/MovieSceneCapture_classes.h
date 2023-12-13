// Class MovieSceneCapture.*b40921424c
// Size: 0x30 (Inherited: 0x30)
struct U*b40921424c : UInterface {
};

// Class MovieSceneCapture.*f75a731658
// Size: 0x30 (Inherited: 0x30)
struct U*f75a731658 : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x250 (Inherited: 0x30)
struct UMovieSceneCapture : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FCaptureProtocolID CaptureType; // 0x40(0x08)
	struct U*f75a731658* *b650164e13; // 0x48(0x08)
	struct F*b1fc0640db Settings; // 0x50(0x50)
	bool bUseSeparateProcess; // 0xa0(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa8(0x10)
	struct FString *5428325c97; // 0xb8(0x10)
	char pad_C8[0x188]; // 0xc8(0x188)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x250 (Inherited: 0x250)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x270 (Inherited: 0x250)
struct ULevelCapture : UMovieSceneCapture {
	bool *16bd88c378; // 0x248(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FGuid *1d95f3705a; // 0x254(0x10)
	char pad_264[0xc]; // 0x264(0x0c)
};

// Class MovieSceneCapture.*cb0f984c85
// Size: 0x30 (Inherited: 0x30)
struct U*cb0f984c85 : UObject {

	float *8988c96aa8(); // Function MovieSceneCapture.*cb0f984c85.*8988c96aa8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x617fe2c
	int32 *9ec223c6a7(); // Function MovieSceneCapture.*cb0f984c85.*9ec223c6a7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x617fe54
};

// Class MovieSceneCapture.*34aac48ea0
// Size: 0x38 (Inherited: 0x30)
struct U*34aac48ea0 : U*f75a731658 {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MovieSceneCapture.*4c99033a19
// Size: 0x30 (Inherited: 0x30)
struct U*4c99033a19 : U*f75a731658 {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x40 (Inherited: 0x38)
struct UImageCaptureSettings : U*34aac48ea0 {
	int32 CompressionQuality; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x60 (Inherited: 0x30)
struct UCompositionGraphCaptureSettings : U*f75a731658 {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x30(0x10)
	bool bCaptureFramesInHDR; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 HDRCompressionQuality; // 0x44(0x04)
	enum class *100ac40003 CaptureGamut; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x50(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x50 (Inherited: 0x38)
struct UVideoCaptureSettings : U*34aac48ea0 {
	bool bUseCompression; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CompressionQuality; // 0x3c(0x04)
	struct FString VideoCodec; // 0x40(0x10)
};

