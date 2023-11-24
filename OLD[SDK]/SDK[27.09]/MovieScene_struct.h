// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence,
	MasterSequence,
	External,
	ESpawnOwnership_MAX,
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local,
	Root,
	EMovieSceneObjectBindingSpace_MAX,
};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto,
	User,
	Break,
	Linear,
	Constant,
	EMovieSceneKeyInterpolation_MAX,
};

// Enum MovieScene.*3cf94ed0fa
enum class *3cf94ed0fa : uint8 {
	*1b90f72d51,
	*f25c4e7ee0,
	*9b7b9159ac,
	*3cf94ed0fa_MAX,
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None,
	PreRoll,
	PostRoll,
	ESectionEvaluationFlags_MAX,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static,
	Swept,
	EEvaluationMethod_MAX,
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x40 (Inherited: 0x00)
struct FMovieSceneSpawnable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UObject* *7d18919ebb; // 0x20(0x08)
	struct TArray<struct FGuid> *f43c27ab6f; // 0x28(0x10)
	enum class ESpawnOwnership Ownership; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	struct FGuid *33d6d55a00; // 0x00(0x10)
	struct FString *eca9158fd8; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 (Inherited: 0x00)
struct FMovieScenePossessable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UClass* *d266ba696e; // 0x20(0x08)
	struct FGuid ParentGuid; // 0x28(0x10)
};

// ScriptStruct MovieScene.*8fd9384163
// Size: 0x04 (Inherited: 0x00)
struct F*8fd9384163 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
	int32 *5c97f7c145; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace Space; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.*97d02b65eb
// Size: 0x10 (Inherited: 0x00)
struct F*97d02b65eb {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct F*546e0eaa8f> *a625a24e77; // 0x00(0x50)
	struct FFloatRange *7ad9d5f5da; // 0x50(0x10)
	struct FFloatRange *06d3209d54; // 0x60(0x10)
};

// ScriptStruct MovieScene.*546e0eaa8f
// Size: 0x01 (Inherited: 0x00)
struct F*546e0eaa8f {
	bool *4a1049a6dd; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID *28aba9275c; // 0x00(0x18)
	struct UObject* Object; // 0x18(0x08)
	bool *f6245584e6; // 0x20(0x01)
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
	TScriptInterface<struct U*8d500dc646> BindingOverrides; // 0x18(0x10)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool *15bb86f902; // 0x00(0x01)
	enum class *3cf94ed0fa *282ba82093; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char *5c3d4866c1 : 1; // 0x00(0x01)
	char *6372ee821c : 1; // 0x00(0x01)
	char *099f2c7863 : 1; // 0x00(0x01)
	char *436b227c19 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.*b0cbc87225
// Size: 0x02 (Inherited: 0x00)
struct F*b0cbc87225 {
	bool *a53859458b; // 0x00(0x01)
	bool *fff2ec2300; // 0x01(0x01)
};

// ScriptStruct MovieScene.*e77d7c298b
// Size: 0x04 (Inherited: 0x00)
struct F*e77d7c298b {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.*e6e6b1f59d
// Size: 0x30 (Inherited: 0x00)
struct F*e6e6b1f59d {
	struct TArray<struct FFloatRange> Ranges; // 0x00(0x10)
	struct TArray<struct F*5b8a6f1af7> Groups; // 0x10(0x10)
	struct TArray<struct F*f274d175d7> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.*f274d175d7
// Size: 0x10 (Inherited: 0x00)
struct F*f274d175d7 {
	struct TArray<struct F*8fd9384163> *0eda330546; // 0x00(0x10)
};

// ScriptStruct MovieScene.*5b8a6f1af7
// Size: 0x20 (Inherited: 0x00)
struct F*5b8a6f1af7 {
	struct TArray<struct F*2ac782e59c> *7cf5cb369c; // 0x00(0x10)
	struct TArray<struct F*0041e7bf3a> *2fab8dc1bf; // 0x10(0x10)
};

// ScriptStruct MovieScene.*0041e7bf3a
// Size: 0x0c (Inherited: 0x08)
struct F*0041e7bf3a : F*de15760ce8 {
	int32 *11084054b7; // 0x08(0x04)
};

// ScriptStruct MovieScene.*de15760ce8
// Size: 0x08 (Inherited: 0x00)
struct F*de15760ce8 {
	struct F*8fd9384163 *5c97f7c145; // 0x00(0x04)
	struct F*e77d7c298b *8c4111d080; // 0x04(0x04)
};

// ScriptStruct MovieScene.*2ac782e59c
// Size: 0x10 (Inherited: 0x00)
struct F*2ac782e59c {
	bool *cb04540d5b; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *61c83955d5; // 0x04(0x04)
	int32 *86cfd70233; // 0x08(0x04)
	int32 *cc1d34b5fd; // 0x0c(0x04)
};

// ScriptStruct MovieScene.*f581c2f13d
// Size: 0x50 (Inherited: 0x00)
struct F*f581c2f13d {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct MovieScene.*8b4de8fa6c
// Size: 0x0c (Inherited: 0x00)
struct F*8b4de8fa6c {
	int32 *03ab47fcf3; // 0x00(0x04)
	float *2fcea01272; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MovieScene.*a9d8c56341
// Size: 0x10 (Inherited: 0x00)
struct F*a9d8c56341 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.*b60ef897a2
// Size: 0x01 (Inherited: 0x00)
struct F*b60ef897a2 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.*9005884d6c
// Size: 0x38 (Inherited: 0x00)
struct F*9005884d6c {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*e107e6ad4f
// Size: 0x18 (Inherited: 0x10)
struct F*e107e6ad4f : F*a9d8c56341 {
	enum class *3cf94ed0fa *282ba82093; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieScene.*b19fd5fd52
// Size: 0x38 (Inherited: 0x00)
struct F*b19fd5fd52 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*fa14bda630
// Size: 0x10 (Inherited: 0x10)
struct F*fa14bda630 : F*a9d8c56341 {
};

// ScriptStruct MovieScene.*486adfdb32
// Size: 0x80 (Inherited: 0x00)
struct F*486adfdb32 {
	struct FGuid *28aba9275c; // 0x00(0x10)
	uint16 *b27a418fd7; // 0x10(0x02)
	enum class EEvaluationMethod *b1ef4e3748; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct F*f581c2f13d> Segments; // 0x18(0x10)
	struct TArray<struct F*9005884d6c> *5d390a85c1; // 0x28(0x10)
	struct F*b19fd5fd52 *bc105a7721; // 0x38(0x38)
	struct FName *37ff78ccb6; // 0x70(0x08)
	char *099f2c7863 : 1; // 0x78(0x01)
	char *436b227c19 : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MovieScene.*e97c55c7f4
// Size: 0x08 (Inherited: 0x00)
struct F*e97c55c7f4 {
	float TimeScale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct MovieScene.*dcce9ef5e1
// Size: 0x14 (Inherited: 0x00)
struct F*dcce9ef5e1 {
	float StartOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	int32 *1a15640245; // 0x08(0x04)
	float PrerollTime; // 0x0c(0x04)
	float PostrollTime; // 0x10(0x04)
};

// ScriptStruct MovieScene.*3fe86dedf0
// Size: 0xa0 (Inherited: 0x00)
struct F*3fe86dedf0 {
	struct TMap<uint32, struct F*8358ecf16e> *3a8e6f0a62; // 0x00(0x50)
	struct TMap<uint32, struct F*f4193853d4> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.*f4193853d4
// Size: 0x18 (Inherited: 0x00)
struct F*f4193853d4 {
	struct F*8fd9384163 *00c3d73d3d; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*8fd9384163> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.*8358ecf16e
// Size: 0x50 (Inherited: 0x00)
struct F*8358ecf16e {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct UObject* *4580570cd4; // 0x08(0x08)
	struct F*e97c55c7f4 *019a5480c1; // 0x10(0x08)
	struct FGuid *adca8bf469; // 0x18(0x10)
	struct F*8fd9384163 *516b201174; // 0x28(0x04)
	struct FFloatRange *93d076289b; // 0x2c(0x10)
	struct FFloatRange *a34d2ec56b; // 0x3c(0x10)
	int32 *1a15640245; // 0x4c(0x04)
};

// ScriptStruct MovieScene.*435e5e3aed
// Size: 0x220 (Inherited: 0x220)
struct F*435e5e3aed : F*afe90a1498 {
};

// ScriptStruct MovieScene.*afe90a1498
// Size: 0x220 (Inherited: 0x00)
struct F*afe90a1498 {
	struct TMap<uint32, struct F*486adfdb32> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct F*e6e6b1f59d *31a305607e; // 0xa0(0x30)
	struct F*3fe86dedf0 Hierarchy; // 0xd0(0xa0)
	struct F*663e7ec8f8 *e46059592d; // 0x170(0xa8)
	char *b67a4178ad : 1; // 0x218(0x01)
	char *35e57e0ca5 : 1; // 0x218(0x01)
	char pad_218_2 : 6; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct MovieScene.*663e7ec8f8
// Size: 0xa8 (Inherited: 0x00)
struct F*663e7ec8f8 {
	struct F*e77d7c298b *b316754f39; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct F*e77d7c298b, int32> *58b0d937ac; // 0x08(0x50)
	struct TMap<struct FGuid, struct F*0d4da43202> *7eb63e818c; // 0x58(0x50)
};

// ScriptStruct MovieScene.*0d4da43202
// Size: 0x10 (Inherited: 0x00)
struct F*0d4da43202 {
	struct TArray<struct F*e77d7c298b> Data; // 0x00(0x10)
};

// ScriptStruct MovieScene.*da45d6bb69
// Size: 0x18 (Inherited: 0x00)
struct F*da45d6bb69 {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FGuid *815ce829ad; // 0x08(0x10)
};

// ScriptStruct MovieScene.*b061482a9b
// Size: 0x20 (Inherited: 0x18)
struct F*b061482a9b : F*e107e6ad4f {
	struct UMovieSceneTrack* Track; // 0x18(0x08)
};

// ScriptStruct MovieScene.*7eb4da19fb
// Size: 0x28 (Inherited: 0x00)
struct F*7eb4da19fb {
	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
	struct FName *0193fba6e2; // 0x20(0x08)
};

// ScriptStruct MovieScene.*81eee59cc1
// Size: 0x08 (Inherited: 0x00)
struct F*81eee59cc1 {
	char pad_0[0x8]; // 0x00(0x08)
};

