// Class MovieScene.*5b9705c7ac
// Size: 0xb0 (Inherited: 0x28)
struct U*5b9705c7ac : UObject {
	struct FGuid Signature; // 0x28(0x10)
	char pad_38[0x78]; // 0x38(0x78)
};

// Class MovieScene.MovieScene
// Size: 0x130 (Inherited: 0xb0)
struct UMovieScene : U*5b9705c7ac {
	struct TArray<struct FMovieSceneSpawnable> *c42b4a230d; // 0xb0(0x10)
	struct TArray<struct FMovieScenePossessable> *625c82cb4e; // 0xc0(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0xd0(0x10)
	struct TArray<struct UMovieSceneTrack*> *72f3cfdf62; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FFloatRange SelectionRange; // 0xf8(0x10)
	struct FFloatRange *bbf50fd7b3; // 0x108(0x10)
	bool *afa58d4446; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float *e976793509; // 0x11c(0x04)
	float InTime; // 0x120(0x04)
	float OutTime; // 0x124(0x04)
	float StartTime; // 0x128(0x04)
	float EndTime; // 0x12c(0x04)
};

// Class MovieScene.*8d500dc646
// Size: 0x28 (Inherited: 0x28)
struct U*8d500dc646 : UInterface {
};

// Class MovieScene.*1d756e9d11
// Size: 0x98 (Inherited: 0x28)
struct U*1d756e9d11 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> *da6fdbf838; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.*62cb1ea3fc
// Size: 0x28 (Inherited: 0x28)
struct U*62cb1ea3fc : UInterface {
};

// Class MovieScene.*6d49a867c7
// Size: 0x70 (Inherited: 0x28)
struct U*6d49a867c7 : UObject {
	struct FName FolderName; // 0x28(0x08)
	struct TArray<struct U*6d49a867c7*> *b0366fad3d; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> *42be7c3552; // 0x40(0x10)
	struct TArray<struct FString> *a2e2360a8a; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.*c992a80a5e
// Size: 0x700 (Inherited: 0x28)
struct U*c992a80a5e : UObject {
	char pad_28[0x348]; // 0x28(0x348)
	struct FMulticastDelegate OnPlay; // 0x370(0x10)
	struct FMulticastDelegate OnStop; // 0x380(0x10)
	struct FMulticastDelegate OnPause; // 0x390(0x10)
	char *2a032012a4 : 1; // 0x3a0(0x01)
	char *c74475af73 : 1; // 0x3a0(0x01)
	char *3d373b0a13 : 1; // 0x3a0(0x01)
	char pad_3A0_3 : 5; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UMovieSceneSequence* Sequence; // 0x3a8(0x08)
	float *2bb06f91ab; // 0x3b0(0x04)
	float StartTime; // 0x3b4(0x04)
	float *a5e35cc094; // 0x3b8(0x04)
	int32 *6238e92459; // 0x3bc(0x04)
	char pad_3C0[0x10]; // 0x3c0(0x10)
	struct FMovieSceneSequencePlaybackSettings *1f133caf89; // 0x3d0(0x28)
	char pad_3F8[0x308]; // 0x3f8(0x308)

	void Stop(); // Function MovieScene.*c992a80a5e.Stop // Final|Native|Public|BlueprintCallable // @ game+0x7d8c7c
	void *90ef13c7e8(); // Function MovieScene.*c992a80a5e.*90ef13c7e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ca1528
	void SetPlaybackPosition(); // Function MovieScene.*c992a80a5e.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0xcc3ce4
	struct FMovieSceneObjectBindingID *726aef7834(); // Function MovieScene.*c992a80a5e.*726aef7834 // Final|Native|Public|BlueprintCallable // @ game+0x5ca1398
	void *66dd39edcc(); // Function MovieScene.*c992a80a5e.*66dd39edcc // Final|Native|Public|BlueprintCallable // @ game+0x5ca1570
	void *1ab067b5fe(); // Function MovieScene.*c992a80a5e.*1ab067b5fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ca14bc
	void SetPlayRate(); // Function MovieScene.*c992a80a5e.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x5ca1624
	void Pause(); // Function MovieScene.*c992a80a5e.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5ca155c
	void *ed91657adb(); // Function MovieScene.*c992a80a5e.*ed91657adb // Final|Native|Public|BlueprintCallable // @ game+0x5ca1798
	void IsPlaying(); // Function MovieScene.*c992a80a5e.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ca1540
	void *84b1451f3a(); // Function MovieScene.*c992a80a5e.*84b1451f3a // Final|Native|Public|BlueprintCallable // @ game+0x5ca136c
	void *697a521358(); // Function MovieScene.*c992a80a5e.*697a521358 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ca14f8
	void Play(); // Function MovieScene.*c992a80a5e.Play // Final|Native|Public|BlueprintCallable // @ game+0xcf6180
	void *6970975b29(); // Function MovieScene.*c992a80a5e.*6970975b29 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ca1510
	void PlayReverse(); // Function MovieScene.*c992a80a5e.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x5ca1608
	void GetPlayRate(); // Function MovieScene.*c992a80a5e.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ca14e0
	void *3370c5db82(float NewStartTime); // Function MovieScene.*c992a80a5e.*3370c5db82 // Final|Native|Public|BlueprintCallable // @ game+0x5ca16bc
};

// Class MovieScene.MovieSceneSection
// Size: 0xd0 (Inherited: 0xb0)
struct UMovieSceneSection : U*5b9705c7ac {
	struct FMovieSceneSectionEvalOptions *c4667ed85b; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float StartTime; // 0xb4(0x04)
	float *a5e35cc094; // 0xb8(0x04)
	int32 *32a3cf19b3; // 0xbc(0x04)
	int32 *09fb0a9a55; // 0xc0(0x04)
	char *eedbc91ee9 : 1; // 0xc4(0x01)
	char *f7e4838f55 : 1; // 0xc4(0x01)
	char *1dc8191ee9 : 1; // 0xc4(0x01)
	char pad_C4_3 : 5; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *dc44698f2e; // 0xc8(0x04)
	float *7e779305f8; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneTrack
// Size: 0xc0 (Inherited: 0xb0)
struct UMovieSceneTrack : U*5b9705c7ac {
	struct FMovieSceneTrackEvalOptions *c4667ed85b; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class MovieScene.*2313a8d0fc
// Size: 0xd0 (Inherited: 0xc0)
struct U*2313a8d0fc : UMovieSceneTrack {
	bool *5655589780; // 0xb8(0x01)
	struct TArray<struct UMovieSceneSection*> *5ae6daedac; // 0xc0(0x10)
};

// Class MovieScene.*8f74457e77
// Size: 0xd0 (Inherited: 0xd0)
struct U*8f74457e77 : UMovieSceneSection {
	struct FMovieSceneSectionEvalOptions *c4667ed85b; // 0xb0(0x02)
	float StartTime; // 0xb4(0x04)
	float *a5e35cc094; // 0xb8(0x04)
	int32 *32a3cf19b3; // 0xbc(0x04)
	int32 *09fb0a9a55; // 0xc0(0x04)
	char *eedbc91ee9 : 1; // 0xc4(0x01)
	char *f7e4838f55 : 1; // 0xc4(0x01)
	char *1dc8191ee9 : 1; // 0xc4(0x01)
	float *dc44698f2e; // 0xc8(0x04)
	float *7e779305f8; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneSequence
// Size: 0x330 (Inherited: 0xb0)
struct UMovieSceneSequence : U*5b9705c7ac {
	struct F*435e5e3aed *d2fd60d8e3; // 0xb0(0x220)
	struct F*b0cbc87225 *23267c1e33; // 0x2d0(0x02)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TMap<struct UObject*, struct F*435e5e3aed> *fade23ae0e; // 0x2d8(0x50)
	bool *e35817f387; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
	struct FMovieSceneTrackEvalOptions *c4667ed85b; // 0xb0(0x04)
};

