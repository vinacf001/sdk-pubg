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

// Enum MovieScene.*b421d21246
enum class *b421d21246 : uint8 {
	*8c4b8efcaf,
	*8d6c8d126f,
	*dd5cd72624,
	*b421d21246_MAX,
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
	struct UObject* *e98a04fe47; // 0x20(0x08)
	struct TArray<struct FGuid> *0c4f827226; // 0x28(0x10)
	enum class ESpawnOwnership Ownership; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	struct FGuid *cf78fc3f4e; // 0x00(0x10)
	struct FString *93d5fb5c9c; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 (Inherited: 0x00)
struct FMovieScenePossessable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UClass* *d5d02b80ad; // 0x20(0x08)
	struct FGuid ParentGuid; // 0x28(0x10)
};

// ScriptStruct MovieScene.*2e70c59028
// Size: 0x04 (Inherited: 0x00)
struct F*2e70c59028 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
	int32 *df6363b9c2; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace Space; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.*365ecf98a0
// Size: 0x10 (Inherited: 0x00)
struct F*365ecf98a0 {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct F*07b28a1aa5> *25e75e2d82; // 0x00(0x50)
	struct FFloatRange *d138334fb1; // 0x50(0x10)
	struct FFloatRange *100e89f87d; // 0x60(0x10)
};

// ScriptStruct MovieScene.*07b28a1aa5
// Size: 0x01 (Inherited: 0x00)
struct F*07b28a1aa5 {
	bool *ae70e7d1a3; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID *a44eb742f5; // 0x00(0x18)
	struct UObject* Object; // 0x18(0x08)
	bool *1e4cb83766; // 0x20(0x01)
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
	TScriptInterface<struct U*4f3cb04d3c> BindingOverrides; // 0x18(0x10)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool *28e09f9d8f; // 0x00(0x01)
	enum class *b421d21246 *3b56c23df1; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char *f6568f9b9a : 1; // 0x00(0x01)
	char *6c0a187951 : 1; // 0x00(0x01)
	char *8250f63d93 : 1; // 0x00(0x01)
	char *127c3448f6 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.*8ca65ce0b0
// Size: 0x02 (Inherited: 0x00)
struct F*8ca65ce0b0 {
	bool *795b03a9c1; // 0x00(0x01)
	bool *0d0f407fb5; // 0x01(0x01)
};

// ScriptStruct MovieScene.*e459706190
// Size: 0x04 (Inherited: 0x00)
struct F*e459706190 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.*96a2197002
// Size: 0x30 (Inherited: 0x00)
struct F*96a2197002 {
	struct TArray<struct FFloatRange> Ranges; // 0x00(0x10)
	struct TArray<struct F*2c041205a5> Groups; // 0x10(0x10)
	struct TArray<struct F*533aa01053> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.*533aa01053
// Size: 0x10 (Inherited: 0x00)
struct F*533aa01053 {
	struct TArray<struct F*2e70c59028> *44d62371d4; // 0x00(0x10)
};

// ScriptStruct MovieScene.*2c041205a5
// Size: 0x20 (Inherited: 0x00)
struct F*2c041205a5 {
	struct TArray<struct F*2a234c5518> *77755ba466; // 0x00(0x10)
	struct TArray<struct F*ad869f12ef> *de70886d8f; // 0x10(0x10)
};

// ScriptStruct MovieScene.*ad869f12ef
// Size: 0x0c (Inherited: 0x08)
struct F*ad869f12ef : F*b96a5b7883 {
	int32 *e7dc0c820e; // 0x08(0x04)
};

// ScriptStruct MovieScene.*b96a5b7883
// Size: 0x08 (Inherited: 0x00)
struct F*b96a5b7883 {
	struct F*2e70c59028 *df6363b9c2; // 0x00(0x04)
	struct F*e459706190 *b98d798a2c; // 0x04(0x04)
};

// ScriptStruct MovieScene.*2a234c5518
// Size: 0x10 (Inherited: 0x00)
struct F*2a234c5518 {
	bool *15667012f2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *9085d56377; // 0x04(0x04)
	int32 *bcc0ccc4b1; // 0x08(0x04)
	int32 *3a150f9933; // 0x0c(0x04)
};

// ScriptStruct MovieScene.*e12ff53aaf
// Size: 0x50 (Inherited: 0x00)
struct F*e12ff53aaf {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct MovieScene.*5f1306c063
// Size: 0x0c (Inherited: 0x00)
struct F*5f1306c063 {
	int32 *4ee94adf74; // 0x00(0x04)
	float *fe631a2142; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MovieScene.*d5dafd6210
// Size: 0x10 (Inherited: 0x00)
struct F*d5dafd6210 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.*5bc7cd203c
// Size: 0x01 (Inherited: 0x00)
struct F*5bc7cd203c {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.*f08fd033d9
// Size: 0x38 (Inherited: 0x00)
struct F*f08fd033d9 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*b53fddfd6a
// Size: 0x18 (Inherited: 0x10)
struct F*b53fddfd6a : F*d5dafd6210 {
	enum class *b421d21246 *3b56c23df1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieScene.*4e08b80bc0
// Size: 0x38 (Inherited: 0x00)
struct F*4e08b80bc0 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*84180de145
// Size: 0x10 (Inherited: 0x10)
struct F*84180de145 : F*d5dafd6210 {
};

// ScriptStruct MovieScene.*3d7da96b9e
// Size: 0x80 (Inherited: 0x00)
struct F*3d7da96b9e {
	struct FGuid *a44eb742f5; // 0x00(0x10)
	uint16 *7f24f154fd; // 0x10(0x02)
	enum class EEvaluationMethod *871815939e; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct F*e12ff53aaf> Segments; // 0x18(0x10)
	struct TArray<struct F*f08fd033d9> *5dd19b65e4; // 0x28(0x10)
	struct F*4e08b80bc0 *a6214265a0; // 0x38(0x38)
	struct FName *ee9dc7f543; // 0x70(0x08)
	char *8250f63d93 : 1; // 0x78(0x01)
	char *127c3448f6 : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MovieScene.*cea42d5a91
// Size: 0x08 (Inherited: 0x00)
struct F*cea42d5a91 {
	float TimeScale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct MovieScene.*a11faaead1
// Size: 0x14 (Inherited: 0x00)
struct F*a11faaead1 {
	float StartOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	int32 *e457189f41; // 0x08(0x04)
	float PrerollTime; // 0x0c(0x04)
	float PostrollTime; // 0x10(0x04)
};

// ScriptStruct MovieScene.*cd723ff50c
// Size: 0xa0 (Inherited: 0x00)
struct F*cd723ff50c {
	struct TMap<uint32, struct F*8891e6e95a> *19aa9b492a; // 0x00(0x50)
	struct TMap<uint32, struct F*daad34dc11> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.*daad34dc11
// Size: 0x18 (Inherited: 0x00)
struct F*daad34dc11 {
	struct F*2e70c59028 *4f5aa2d6d5; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*2e70c59028> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.*8891e6e95a
// Size: 0x50 (Inherited: 0x00)
struct F*8891e6e95a {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct UObject* *6466a7580e; // 0x08(0x08)
	struct F*cea42d5a91 *09d52ac919; // 0x10(0x08)
	struct FGuid *77bd348f8c; // 0x18(0x10)
	struct F*2e70c59028 *b7cc75dc8a; // 0x28(0x04)
	struct FFloatRange *78d3efb24a; // 0x2c(0x10)
	struct FFloatRange *97df326038; // 0x3c(0x10)
	int32 *e457189f41; // 0x4c(0x04)
};

// ScriptStruct MovieScene.*d43d53cdc6
// Size: 0x220 (Inherited: 0x220)
struct F*d43d53cdc6 : F*bf8e3199af {
};

// ScriptStruct MovieScene.*bf8e3199af
// Size: 0x220 (Inherited: 0x00)
struct F*bf8e3199af {
	struct TMap<uint32, struct F*3d7da96b9e> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct F*96a2197002 *3b6d862d14; // 0xa0(0x30)
	struct F*cd723ff50c Hierarchy; // 0xd0(0xa0)
	struct F*f04e4f5752 *206b244c04; // 0x170(0xa8)
	char *f8ce2aff6a : 1; // 0x218(0x01)
	char *02497d36ae : 1; // 0x218(0x01)
	char pad_218_2 : 6; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct MovieScene.*f04e4f5752
// Size: 0xa8 (Inherited: 0x00)
struct F*f04e4f5752 {
	struct F*e459706190 *4a63312e79; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct F*e459706190, int32> *b5a5343891; // 0x08(0x50)
	struct TMap<struct FGuid, struct F*0eb0706278> *6c92ba53bf; // 0x58(0x50)
};

// ScriptStruct MovieScene.*0eb0706278
// Size: 0x10 (Inherited: 0x00)
struct F*0eb0706278 {
	struct TArray<struct F*e459706190> Data; // 0x00(0x10)
};

// ScriptStruct MovieScene.*6000f765aa
// Size: 0x18 (Inherited: 0x00)
struct F*6000f765aa {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FGuid *f3783606ae; // 0x08(0x10)
};

// ScriptStruct MovieScene.*72cd469aa7
// Size: 0x20 (Inherited: 0x18)
struct F*72cd469aa7 : F*b53fddfd6a {
	struct UMovieSceneTrack* Track; // 0x18(0x08)
};

// ScriptStruct MovieScene.*3f6f1d8d58
// Size: 0x28 (Inherited: 0x00)
struct F*3f6f1d8d58 {
	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
	struct FName *6b419d303a; // 0x20(0x08)
};

// ScriptStruct MovieScene.*b5828a653a
// Size: 0x08 (Inherited: 0x00)
struct F*b5828a653a {
	char pad_0[0x8]; // 0x00(0x08)
};

