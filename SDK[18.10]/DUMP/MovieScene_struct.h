// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	None,
	None,
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	None,
	None,
};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	None,
	None,
};

// Enum MovieScene.*8ae17a7bb4
enum class *8ae17a7bb4 : uint8 {
	None,
	None,
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None,
	None,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	None,
	None,
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x40 (Inherited: 0x00)
struct FMovieSceneSpawnable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UObject* *9cc458370b; // 0x20(0x08)
	struct TArray<struct FGuid> *343d41ce6b; // 0x28(0x10)
	enum class ESpawnOwnership Ownership; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	struct FGuid *bdbe008281; // 0x00(0x10)
	struct FString *6b429e2468; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 (Inherited: 0x00)
struct FMovieScenePossessable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UClass* *f4628103da; // 0x20(0x08)
	struct FGuid ParentGuid; // 0x28(0x10)
};

// ScriptStruct MovieScene.*80fd56dcf7
// Size: 0x04 (Inherited: 0x00)
struct F*80fd56dcf7 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
	int32 *2d4528d72f; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace Space; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.*1e6bc7e9c7
// Size: 0x10 (Inherited: 0x00)
struct F*1e6bc7e9c7 {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct F*18967dca57> *8585053ad4; // 0x00(0x50)
	struct FFloatRange *0fb6806e98; // 0x50(0x10)
	struct FFloatRange *8d29bf49cd; // 0x60(0x10)
};

// ScriptStruct MovieScene.*18967dca57
// Size: 0x01 (Inherited: 0x00)
struct F*18967dca57 {
	bool *52afbf16af; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID *ee4e7c9622; // 0x00(0x18)
	struct UObject* Object; // 0x18(0x08)
	bool *3c1f81d89e; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneSequencePlaybackSettings {
	int32 LoopCount; // 0x00(0x04)
	float PlayRate; // 0x04(0x04)
	bool bRandomStartTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
	bool bRestoreState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	TScriptInterface<struct U*d580154f15> BindingOverrides; // 0x18(0x10)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool *d408302c8b; // 0x00(0x01)
	enum class *8ae17a7bb4 *1dc00b4214; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char *081503a667 : 1; // 0x00(0x01)
	char *a477e31373 : 1; // 0x00(0x01)
	char *3d48e86323 : 1; // 0x00(0x01)
	char *639a97c3f1 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.*091897112a
// Size: 0x02 (Inherited: 0x00)
struct F*091897112a {
	bool *f85c4cf3ca; // 0x00(0x01)
	bool *ae3a06ce4e; // 0x01(0x01)
};

// ScriptStruct MovieScene.*60af139e2b
// Size: 0x04 (Inherited: 0x00)
struct F*60af139e2b {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.*0aa17b3eaa
// Size: 0x30 (Inherited: 0x00)
struct F*0aa17b3eaa {
	struct TArray<struct FFloatRange> Ranges; // 0x00(0x10)
	struct TArray<struct F*af4e0a2082> Groups; // 0x10(0x10)
	struct TArray<struct F*49cbe755b6> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.*49cbe755b6
// Size: 0x10 (Inherited: 0x00)
struct F*49cbe755b6 {
	struct TArray<struct F*80fd56dcf7> *08d66ebae5; // 0x00(0x10)
};

// ScriptStruct MovieScene.*af4e0a2082
// Size: 0x20 (Inherited: 0x00)
struct F*af4e0a2082 {
	struct TArray<struct F*4815fedca7> *0c28e383b4; // 0x00(0x10)
	struct TArray<struct F*8f4b01fa68> *4e66b0ce70; // 0x10(0x10)
};

// ScriptStruct MovieScene.*8f4b01fa68
// Size: 0x0c (Inherited: 0x08)
struct F*8f4b01fa68 : F*31220dbee4 {
	int32 *48636034a2; // 0x08(0x04)
};

// ScriptStruct MovieScene.*31220dbee4
// Size: 0x08 (Inherited: 0x00)
struct F*31220dbee4 {
	struct F*80fd56dcf7 *2d4528d72f; // 0x00(0x04)
	struct F*60af139e2b *4ea8f6ef25; // 0x04(0x04)
};

// ScriptStruct MovieScene.*4815fedca7
// Size: 0x10 (Inherited: 0x00)
struct F*4815fedca7 {
	bool *6f12e52a1e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *7e69aa4fee; // 0x04(0x04)
	int32 *571f8d555a; // 0x08(0x04)
	int32 *f00b1f7c46; // 0x0c(0x04)
};

// ScriptStruct MovieScene.*d896ceae9b
// Size: 0x50 (Inherited: 0x00)
struct F*d896ceae9b {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct MovieScene.*8e5e10ab20
// Size: 0x0c (Inherited: 0x00)
struct F*8e5e10ab20 {
	int32 *7594d88b9b; // 0x00(0x04)
	float *cf4a47ff58; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MovieScene.*76b28fe511
// Size: 0x10 (Inherited: 0x00)
struct F*76b28fe511 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.*86920f2844
// Size: 0x01 (Inherited: 0x00)
struct F*86920f2844 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.*631bc0ead6
// Size: 0x38 (Inherited: 0x00)
struct F*631bc0ead6 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*bb608aaa2f
// Size: 0x18 (Inherited: 0x10)
struct F*bb608aaa2f : F*76b28fe511 {
	enum class *8ae17a7bb4 *1dc00b4214; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieScene.*b64ec47960
// Size: 0x38 (Inherited: 0x00)
struct F*b64ec47960 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*c03c110622
// Size: 0x10 (Inherited: 0x10)
struct F*c03c110622 : F*76b28fe511 {
};

// ScriptStruct MovieScene.*9607bc57eb
// Size: 0x80 (Inherited: 0x00)
struct F*9607bc57eb {
	struct FGuid *ee4e7c9622; // 0x00(0x10)
	uint16 *978c2e3d6b; // 0x10(0x02)
	enum class EEvaluationMethod *f579caef1a; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct F*d896ceae9b> Segments; // 0x18(0x10)
	struct TArray<struct F*631bc0ead6> *999b77c6e9; // 0x28(0x10)
	struct F*b64ec47960 *7dfe7d95ca; // 0x38(0x38)
	struct FName *d89531eb5a; // 0x70(0x08)
	char *3d48e86323 : 1; // 0x78(0x01)
	char *639a97c3f1 : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MovieScene.*6b6fe1c654
// Size: 0x08 (Inherited: 0x00)
struct F*6b6fe1c654 {
	float TimeScale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct MovieScene.*2c37a623a9
// Size: 0x14 (Inherited: 0x00)
struct F*2c37a623a9 {
	float StartOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	int32 *98e370ab5e; // 0x08(0x04)
	float PrerollTime; // 0x0c(0x04)
	float PostrollTime; // 0x10(0x04)
};

// ScriptStruct MovieScene.*f3be0b02a2
// Size: 0xa0 (Inherited: 0x00)
struct F*f3be0b02a2 {
	struct TMap<uint32, struct F*4c20d6485b> *e5edf5d2b4; // 0x00(0x50)
	struct TMap<uint32, struct F*4e488d55fe> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.*4e488d55fe
// Size: 0x18 (Inherited: 0x00)
struct F*4e488d55fe {
	struct F*80fd56dcf7 *50a83aa619; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*80fd56dcf7> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.*4c20d6485b
// Size: 0x50 (Inherited: 0x00)
struct F*4c20d6485b {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct UObject* *ca8a64a271; // 0x08(0x08)
	struct F*6b6fe1c654 *93f79ca81c; // 0x10(0x08)
	struct FGuid *5ffcfe9455; // 0x18(0x10)
	struct F*80fd56dcf7 *f52501355f; // 0x28(0x04)
	struct FFloatRange *789577600d; // 0x2c(0x10)
	struct FFloatRange *3de4930338; // 0x3c(0x10)
	int32 *98e370ab5e; // 0x4c(0x04)
};

// ScriptStruct MovieScene.*eb532ee921
// Size: 0x220 (Inherited: 0x220)
struct F*eb532ee921 : F*acfd4224b8 {
};

// ScriptStruct MovieScene.*acfd4224b8
// Size: 0x220 (Inherited: 0x00)
struct F*acfd4224b8 {
	struct TMap<uint32, struct F*9607bc57eb> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct F*0aa17b3eaa *c3c2bfb44c; // 0xa0(0x30)
	struct F*f3be0b02a2 Hierarchy; // 0xd0(0xa0)
	struct F*571f87ad6f *8e0ed9b825; // 0x170(0xa8)
	char *5f59e4616c : 1; // 0x218(0x01)
	char *78da58cab6 : 1; // 0x218(0x01)
	char pad_218_2 : 6; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct MovieScene.*571f87ad6f
// Size: 0xa8 (Inherited: 0x00)
struct F*571f87ad6f {
	struct F*60af139e2b *d46d209167; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct F*60af139e2b, int32> *e62af45087; // 0x08(0x50)
	struct TMap<struct FGuid, struct F*94e3d90fa5> *0ad4b41f08; // 0x58(0x50)
};

// ScriptStruct MovieScene.*94e3d90fa5
// Size: 0x10 (Inherited: 0x00)
struct F*94e3d90fa5 {
	struct TArray<struct F*60af139e2b> Data; // 0x00(0x10)
};

// ScriptStruct MovieScene.*0dce5c6b5e
// Size: 0x18 (Inherited: 0x00)
struct F*0dce5c6b5e {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FGuid *561f6e56f4; // 0x08(0x10)
};

// ScriptStruct MovieScene.*c25870ef1f
// Size: 0x20 (Inherited: 0x18)
struct F*c25870ef1f : F*bb608aaa2f {
	struct UMovieSceneTrack* Track; // 0x18(0x08)
};

// ScriptStruct MovieScene.*a1e412f2f3
// Size: 0x28 (Inherited: 0x00)
struct F*a1e412f2f3 {
	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
	struct FName *0eaf81edb4; // 0x20(0x08)
};

// ScriptStruct MovieScene.*59993d0e65
// Size: 0x08 (Inherited: 0x00)
struct F*59993d0e65 {
	char pad_0[0x8]; // 0x00(0x08)
};

