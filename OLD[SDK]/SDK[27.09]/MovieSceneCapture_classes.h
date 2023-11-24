// Class MovieSceneCapture.*161dd257da
// Size: 0x30 (Inherited: 0x30)
struct U*161dd257da : UInterface {
};

// Class MovieSceneCapture.*1788e51a22
// Size: 0x30 (Inherited: 0x30)
struct U*1788e51a22 : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x250 (Inherited: 0x30)
struct UMovieSceneCapture : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FCaptureProtocolID CaptureType; // 0x40(0x08)
	struct U*1788e51a22* *906d8de1f8; // 0x48(0x08)
	struct F*6bdcdf26ea Settings; // 0x50(0x50)
	bool bUseSeparateProcess; // 0xa0(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa8(0x10)
	struct FString *5252b9b2d7; // 0xb8(0x10)
	char pad_C8[0x188]; // 0xc8(0x188)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x250 (Inherited: 0x250)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x270 (Inherited: 0x250)
struct ULevelCapture : UMovieSceneCapture {
	bool *545cd3adfd; // 0x248(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FGuid *e19f150f65; // 0x254(0x10)
	char pad_264[0xc]; // 0x264(0x0c)
};

// Class MovieSceneCapture.*84a805ae7a
// Size: 0x30 (Inherited: 0x30)
struct U*84a805ae7a : UObject {

	void *2d856de465(); // Function MovieSceneCapture.*84a805ae7a.*2d856de465 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6265580
	void *79c9104e10(); // Function MovieSceneCapture.*84a805ae7a.*79c9104e10 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6265558
};

// Class MovieSceneCapture.*86bcb5d33d
// Size: 0x38 (Inherited: 0x30)
struct U*86bcb5d33d : U*1788e51a22 {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MovieSceneCapture.*544562cb46
// Size: 0x30 (Inherited: 0x30)
struct U*544562cb46 : U*1788e51a22 {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x40 (Inherited: 0x38)
struct UImageCaptureSettings : U*86bcb5d33d {
	int32 CompressionQuality; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x60 (Inherited: 0x30)
struct UCompositionGraphCaptureSettings : U*1788e51a22 {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x30(0x10)
	bool bCaptureFramesInHDR; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 HDRCompressionQuality; // 0x44(0x04)
	enum class *13d2c77a5e CaptureGamut; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x50(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x50 (Inherited: 0x38)
struct UVideoCaptureSettings : U*86bcb5d33d {
	bool bUseCompression; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CompressionQuality; // 0x3c(0x04)
	struct FString VideoCodec; // 0x40(0x10)
};

