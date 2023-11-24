// Class MovieSceneCapture.*161dd257da
// Size: 0x28 (Inherited: 0x28)
struct U*161dd257da : UInterface {
};

// Class MovieSceneCapture.*1788e51a22
// Size: 0x28 (Inherited: 0x28)
struct U*1788e51a22 : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x240 (Inherited: 0x28)
struct UMovieSceneCapture : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FCaptureProtocolID CaptureType; // 0x38(0x08)
	struct U*1788e51a22* *906d8de1f8; // 0x40(0x08)
	struct F*6bdcdf26ea Settings; // 0x48(0x50)
	bool bUseSeparateProcess; // 0x98(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa0(0x10)
	struct FString *5252b9b2d7; // 0xb0(0x10)
	char pad_C0[0x180]; // 0xc0(0x180)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x240 (Inherited: 0x240)
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
	struct FCaptureProtocolID CaptureType; // 0x38(0x08)
	struct U*1788e51a22* *906d8de1f8; // 0x40(0x08)
	struct F*6bdcdf26ea Settings; // 0x48(0x50)
	bool bUseSeparateProcess; // 0x98(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x99(0x01)
	struct FString AdditionalCommandLineArguments; // 0xa0(0x10)
	struct FString *5252b9b2d7; // 0xb0(0x10)
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x260 (Inherited: 0x240)
struct ULevelCapture : UMovieSceneCapture {
	bool *545cd3adfd; // 0x238(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FGuid *e19f150f65; // 0x244(0x10)
	char pad_254[0xc]; // 0x254(0x0c)
};

// Class MovieSceneCapture.*84a805ae7a
// Size: 0x28 (Inherited: 0x28)
struct U*84a805ae7a : UObject {
};

// Class MovieSceneCapture.*86bcb5d33d
// Size: 0x30 (Inherited: 0x28)
struct U*86bcb5d33d : U*1788e51a22 {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MovieSceneCapture.*544562cb46
// Size: 0x28 (Inherited: 0x28)
struct U*544562cb46 : U*1788e51a22 {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x38 (Inherited: 0x30)
struct UImageCaptureSettings : U*86bcb5d33d {
	int32 CompressionQuality; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x58 (Inherited: 0x28)
struct UCompositionGraphCaptureSettings : U*1788e51a22 {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x28(0x10)
	bool bCaptureFramesInHDR; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 HDRCompressionQuality; // 0x3c(0x04)
	enum class *13d2c77a5e CaptureGamut; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x48(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x48 (Inherited: 0x30)
struct UVideoCaptureSettings : U*86bcb5d33d {
	bool bUseCompression; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CompressionQuality; // 0x34(0x04)
	struct FString VideoCodec; // 0x38(0x10)
};

