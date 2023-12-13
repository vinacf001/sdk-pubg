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

// Enum MovieScene.*1a2fe29341
enum class *1a2fe29341 : uint8 {
	*ed03e5ccfd,
	*de54c95306,
	*711afedb42,
	*1a2fe29341_MAX,
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
	struct UObject* *5bb0023d6c; // 0x20(0x08)
	struct TArray<struct FGuid> *be57075ff7; // 0x28(0x10)
	enum class ESpawnOwnership Ownership; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	struct FGuid *62ba5e79b2; // 0x00(0x10)
	struct FString *899392ca9b; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 (Inherited: 0x00)
struct FMovieScenePossessable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UClass* *0950d21ce8; // 0x20(0x08)
	struct FGuid ParentGuid; // 0x28(0x10)
};

// ScriptStruct MovieScene.*415e861492
// Size: 0x04 (Inherited: 0x00)
struct F*415e861492 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
	int32 *93fcb02feb; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace Space; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.*44eedcc316
// Size: 0x10 (Inherited: 0x00)
struct F*44eedcc316 {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct F*4c235be805> *0513bb5a75; // 0x00(0x50)
	struct FFloatRange *7a12eb0d54; // 0x50(0x10)
	struct FFloatRange *280f175362; // 0x60(0x10)
};

// ScriptStruct MovieScene.*4c235be805
// Size: 0x01 (Inherited: 0x00)
struct F*4c235be805 {
	bool *6d072042c2; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID *fcc6726d24; // 0x00(0x18)
	struct UObject* Object; // 0x18(0x08)
	bool *a086bac57b; // 0x20(0x01)
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
	TScriptInterface<struct U*d04d891fd6> BindingOverrides; // 0x18(0x10)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool *0e019c4b50; // 0x00(0x01)
	enum class *1a2fe29341 *1584218364; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char *55f68a6b2e : 1; // 0x00(0x01)
	char *d7b73b3900 : 1; // 0x00(0x01)
	char *5790167fa6 : 1; // 0x00(0x01)
	char *5a2b9d4c01 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.*a8ede5f1a5
// Size: 0x02 (Inherited: 0x00)
struct F*a8ede5f1a5 {
	bool *12d4bd4608; // 0x00(0x01)
	bool *7b56c96fd2; // 0x01(0x01)
};

// ScriptStruct MovieScene.*b23cd5b720
// Size: 0x04 (Inherited: 0x00)
struct F*b23cd5b720 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.*e0ce84b510
// Size: 0x30 (Inherited: 0x00)
struct F*e0ce84b510 {
	struct TArray<struct FFloatRange> Ranges; // 0x00(0x10)
	struct TArray<struct F*5284af6c16> Groups; // 0x10(0x10)
	struct TArray<struct F*41cb304b17> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.*41cb304b17
// Size: 0x10 (Inherited: 0x00)
struct F*41cb304b17 {
	struct TArray<struct F*415e861492> *256537ca8a; // 0x00(0x10)
};

// ScriptStruct MovieScene.*5284af6c16
// Size: 0x20 (Inherited: 0x00)
struct F*5284af6c16 {
	struct TArray<struct F*ca55a433fd> *da8d196d52; // 0x00(0x10)
	struct TArray<struct F*dfae3f247a> *deb9807eec; // 0x10(0x10)
};

// ScriptStruct MovieScene.*dfae3f247a
// Size: 0x0c (Inherited: 0x08)
struct F*dfae3f247a : F*87498290b6 {
	int32 *c25fa7c99a; // 0x08(0x04)
};

// ScriptStruct MovieScene.*87498290b6
// Size: 0x08 (Inherited: 0x00)
struct F*87498290b6 {
	struct F*415e861492 *93fcb02feb; // 0x00(0x04)
	struct F*b23cd5b720 *7e1b76a01f; // 0x04(0x04)
};

// ScriptStruct MovieScene.*ca55a433fd
// Size: 0x10 (Inherited: 0x00)
struct F*ca55a433fd {
	bool *3dfeba9b45; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *ee4ac0f98a; // 0x04(0x04)
	int32 *1bb29c1620; // 0x08(0x04)
	int32 *a59e6dbc97; // 0x0c(0x04)
};

// ScriptStruct MovieScene.*9a0fc1d79a
// Size: 0x50 (Inherited: 0x00)
struct F*9a0fc1d79a {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct MovieScene.*42ead14a88
// Size: 0x0c (Inherited: 0x00)
struct F*42ead14a88 {
	int32 *a15e149305; // 0x00(0x04)
	float *de9e7539d1; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MovieScene.*e54d44743a
// Size: 0x10 (Inherited: 0x00)
struct F*e54d44743a {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.*0620d5b7cc
// Size: 0x01 (Inherited: 0x00)
struct F*0620d5b7cc {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.*a100ba3693
// Size: 0x38 (Inherited: 0x00)
struct F*a100ba3693 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*4c783496cb
// Size: 0x18 (Inherited: 0x10)
struct F*4c783496cb : F*e54d44743a {
	enum class *1a2fe29341 *1584218364; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieScene.*4cbd24d4e3
// Size: 0x38 (Inherited: 0x00)
struct F*4cbd24d4e3 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*12b577aa32
// Size: 0x10 (Inherited: 0x10)
struct F*12b577aa32 : F*e54d44743a {
};

// ScriptStruct MovieScene.*0d8e20be11
// Size: 0x80 (Inherited: 0x00)
struct F*0d8e20be11 {
	struct FGuid *fcc6726d24; // 0x00(0x10)
	uint16 *1c83f04262; // 0x10(0x02)
	enum class EEvaluationMethod *e760f2b969; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct F*9a0fc1d79a> Segments; // 0x18(0x10)
	struct TArray<struct F*a100ba3693> *df22aeb771; // 0x28(0x10)
	struct F*4cbd24d4e3 *23226c8c7b; // 0x38(0x38)
	struct FName *7d9592cde0; // 0x70(0x08)
	char *5790167fa6 : 1; // 0x78(0x01)
	char *5a2b9d4c01 : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MovieScene.*590d7bf489
// Size: 0x08 (Inherited: 0x00)
struct F*590d7bf489 {
	float TimeScale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct MovieScene.*a0d8ec735c
// Size: 0x14 (Inherited: 0x00)
struct F*a0d8ec735c {
	float StartOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	int32 *62c1c6a362; // 0x08(0x04)
	float PrerollTime; // 0x0c(0x04)
	float PostrollTime; // 0x10(0x04)
};

// ScriptStruct MovieScene.*a2b7db284c
// Size: 0xa0 (Inherited: 0x00)
struct F*a2b7db284c {
	struct TMap<uint32, struct F*4c53b4f33a> *5b1f59e616; // 0x00(0x50)
	struct TMap<uint32, struct F*0078c90eac> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.*0078c90eac
// Size: 0x18 (Inherited: 0x00)
struct F*0078c90eac {
	struct F*415e861492 *8f512870de; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*415e861492> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.*4c53b4f33a
// Size: 0x50 (Inherited: 0x00)
struct F*4c53b4f33a {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct UObject* *93ea77ea69; // 0x08(0x08)
	struct F*590d7bf489 *d412f19242; // 0x10(0x08)
	struct FGuid *4142428492; // 0x18(0x10)
	struct F*415e861492 *5b24248729; // 0x28(0x04)
	struct FFloatRange *8977a389c9; // 0x2c(0x10)
	struct FFloatRange *07f29b2faa; // 0x3c(0x10)
	int32 *62c1c6a362; // 0x4c(0x04)
};

// ScriptStruct MovieScene.*94e9379752
// Size: 0x220 (Inherited: 0x220)
struct F*94e9379752 : F*7d4499604c {
};

// ScriptStruct MovieScene.*7d4499604c
// Size: 0x220 (Inherited: 0x00)
struct F*7d4499604c {
	struct TMap<uint32, struct F*0d8e20be11> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct F*e0ce84b510 *d7c64ff7dc; // 0xa0(0x30)
	struct F*a2b7db284c Hierarchy; // 0xd0(0xa0)
	struct F*5b5d3e54be *6c2cb50de9; // 0x170(0xa8)
	char *c6d95603c1 : 1; // 0x218(0x01)
	char *2594fd945f : 1; // 0x218(0x01)
	char pad_218_2 : 6; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct MovieScene.*5b5d3e54be
// Size: 0xa8 (Inherited: 0x00)
struct F*5b5d3e54be {
	struct F*b23cd5b720 *d4297d75b2; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct F*b23cd5b720, int32> *f4997abbec; // 0x08(0x50)
	struct TMap<struct FGuid, struct F*14cd081cae> *02daa6e2be; // 0x58(0x50)
};

// ScriptStruct MovieScene.*14cd081cae
// Size: 0x10 (Inherited: 0x00)
struct F*14cd081cae {
	struct TArray<struct F*b23cd5b720> Data; // 0x00(0x10)
};

// ScriptStruct MovieScene.*aea623c0b7
// Size: 0x18 (Inherited: 0x00)
struct F*aea623c0b7 {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FGuid *51c5a4d533; // 0x08(0x10)
};

// ScriptStruct MovieScene.*28f0fcd932
// Size: 0x20 (Inherited: 0x18)
struct F*28f0fcd932 : F*4c783496cb {
	struct UMovieSceneTrack* Track; // 0x18(0x08)
};

// ScriptStruct MovieScene.*a6a3aec1a0
// Size: 0x28 (Inherited: 0x00)
struct F*a6a3aec1a0 {
	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
	struct FName *1a8fbc0d24; // 0x20(0x08)
};

// ScriptStruct MovieScene.*29ec846f95
// Size: 0x08 (Inherited: 0x00)
struct F*29ec846f95 {
	char pad_0[0x8]; // 0x00(0x08)
};

