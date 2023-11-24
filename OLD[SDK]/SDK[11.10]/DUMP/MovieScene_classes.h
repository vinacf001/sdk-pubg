// Class MovieScene.*5b3d64e612
// Size: 0xb0 (Inherited: 0x30)
struct U*5b3d64e612 : UObject {
	struct FGuid Signature; // 0x30(0x10)
	char pad_40[0x70]; // 0x40(0x70)
};

// Class MovieScene.MovieScene
// Size: 0x130 (Inherited: 0xb0)
struct UMovieScene : U*5b3d64e612 {
	struct TArray<struct FMovieSceneSpawnable> *288ba10721; // 0xb0(0x10)
	struct TArray<struct FMovieScenePossessable> *05923cf21f; // 0xc0(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0xd0(0x10)
	struct TArray<struct UMovieSceneTrack*> *11e268510f; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FFloatRange SelectionRange; // 0xf8(0x10)
	struct FFloatRange *c57aff3239; // 0x108(0x10)
	bool *78634592a0; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float *26e56fa903; // 0x11c(0x04)
	float InTime; // 0x120(0x04)
	float OutTime; // 0x124(0x04)
	float StartTime; // 0x128(0x04)
	float EndTime; // 0x12c(0x04)
};

// Class MovieScene.*d580154f15
// Size: 0x30 (Inherited: 0x30)
struct U*d580154f15 : UInterface {
};

// Class MovieScene.*e18a9d1f3d
// Size: 0xa0 (Inherited: 0x30)
struct U*e18a9d1f3d : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> *8ad4bc9095; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)
};

// Class MovieScene.*ade452c7c9
// Size: 0x30 (Inherited: 0x30)
struct U*ade452c7c9 : UInterface {
};

// Class MovieScene.*8c2f1dd818
// Size: 0x78 (Inherited: 0x30)
struct U*8c2f1dd818 : UObject {
	struct FName FolderName; // 0x30(0x08)
	struct TArray<struct U*8c2f1dd818*> *83203c076c; // 0x38(0x10)
	struct TArray<struct UMovieSceneTrack*> *c40940cd18; // 0x48(0x10)
	struct TArray<struct FString> *fc5a77e7f2; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class MovieScene.*14a032dbde
// Size: 0x700 (Inherited: 0x30)
struct U*14a032dbde : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct FMulticastDelegate OnPlay; // 0x378(0x10)
	struct FMulticastDelegate OnStop; // 0x388(0x10)
	struct FMulticastDelegate OnPause; // 0x398(0x10)
	char *598733c5c5 : 1; // 0x3a8(0x01)
	char *79e73cc39d : 1; // 0x3a8(0x01)
	char *5a8954a496 : 1; // 0x3a8(0x01)
	char pad_3A8_3 : 5; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UMovieSceneSequence* Sequence; // 0x3b0(0x08)
	float *b10075d914; // 0x3b8(0x04)
	float StartTime; // 0x3bc(0x04)
	float *0abd4a1669; // 0x3c0(0x04)
	int32 *b2d7f331a7; // 0x3c4(0x04)
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct FMovieSceneSequencePlaybackSettings *71e043bb6c; // 0x3d8(0x28)
	char pad_400[0x300]; // 0x400(0x300)

	int32 *22408b49f5(); // Function MovieScene.*14a032dbde.*22408b49f5 // Final|Native|Public|BlueprintCallable // @ game+0xd0c8a4
	void PlayReverse(); // Function MovieScene.*14a032dbde.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x5f9addc
	float SetPlaybackPosition(); // Function MovieScene.*14a032dbde.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x5f9ae90
	float SetPlayRate(); // Function MovieScene.*14a032dbde.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x5f9adf8
	bool IsPlaying(); // Function MovieScene.*14a032dbde.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ad90
	void Stop(); // Function MovieScene.*14a032dbde.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5f9b018
	void Pause(); // Function MovieScene.*14a032dbde.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5f9adac
	void *ad87fa339d(); // Function MovieScene.*14a032dbde.*ad87fa339d // Final|Native|Public|BlueprintCallable // @ game+0x5f9b004
	float GetPlayRate(); // Function MovieScene.*14a032dbde.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ad30
	float *fcebe680c3(); // Function MovieScene.*14a032dbde.*fcebe680c3 // Final|Native|Public|BlueprintCallable // @ game+0x5f9af28
	float *b2077c676e(); // Function MovieScene.*14a032dbde.*b2077c676e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ad78
	float *9548ae7454(); // Function MovieScene.*14a032dbde.*9548ae7454 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ad0c
	struct TArray<struct UObject*> *764b6d0441(); // Function MovieScene.*14a032dbde.*764b6d0441 // Final|Native|Public|BlueprintCallable // @ game+0x5f9abe8
	float *db1643e9dc(); // Function MovieScene.*14a032dbde.*db1643e9dc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ad48
	void Play(); // Function MovieScene.*14a032dbde.Play // Final|Native|Public|BlueprintCallable // @ game+0x5f9adc0
	float *3dc22f4f13(); // Function MovieScene.*14a032dbde.*3dc22f4f13 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9ad60
	void *f976cf8725(); // Function MovieScene.*14a032dbde.*f976cf8725 // Final|Native|Public|BlueprintCallable // @ game+0x5f9abbc
};

// Class MovieScene.MovieSceneSection
// Size: 0xd0 (Inherited: 0xb0)
struct UMovieSceneSection : U*5b3d64e612 {
	struct FMovieSceneSectionEvalOptions *27f3a73f7f; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float StartTime; // 0xb4(0x04)
	float *0abd4a1669; // 0xb8(0x04)
	int32 *3a3a453816; // 0xbc(0x04)
	int32 *e5755ec720; // 0xc0(0x04)
	char *a0e3b46900 : 1; // 0xc4(0x01)
	char *9006995667 : 1; // 0xc4(0x01)
	char *7ca2a97413 : 1; // 0xc4(0x01)
	char pad_C4_3 : 5; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *d186ea6a3b; // 0xc8(0x04)
	float *30a37445d6; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneTrack
// Size: 0xc0 (Inherited: 0xb0)
struct UMovieSceneTrack : U*5b3d64e612 {
	struct FMovieSceneTrackEvalOptions *27f3a73f7f; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class MovieScene.*f082264a67
// Size: 0xd0 (Inherited: 0xc0)
struct U*f082264a67 : UMovieSceneTrack {
	bool *bd766d36a3; // 0xb8(0x01)
	struct TArray<struct UMovieSceneSection*> *ac3b707af4; // 0xc0(0x10)
};

// Class MovieScene.*d88ac26a06
// Size: 0xd0 (Inherited: 0xd0)
struct U*d88ac26a06 : UMovieSceneSection {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x330 (Inherited: 0xb0)
struct UMovieSceneSequence : U*5b3d64e612 {
	struct F*eb532ee921 *32a0e5db70; // 0xb0(0x220)
	struct F*091897112a *b5782386b7; // 0x2d0(0x02)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TMap<struct UObject*, struct F*eb532ee921> *6bc528fbeb; // 0x2d8(0x50)
	bool *455bac0c38; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

