// Class MovieScene.*caf4eaa1e7
// Size: 0xb0 (Inherited: 0x30)
struct U*caf4eaa1e7 : UObject {
	struct FGuid Signature; // 0x30(0x10)
	char pad_40[0x70]; // 0x40(0x70)
};

// Class MovieScene.MovieScene
// Size: 0x130 (Inherited: 0xb0)
struct UMovieScene : U*caf4eaa1e7 {
	struct TArray<struct FMovieSceneSpawnable> *6a6e0c971d; // 0xb0(0x10)
	struct TArray<struct FMovieScenePossessable> *4d489649c7; // 0xc0(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0xd0(0x10)
	struct TArray<struct UMovieSceneTrack*> *ee2d663298; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FFloatRange SelectionRange; // 0xf8(0x10)
	struct FFloatRange *25ffbe8d44; // 0x108(0x10)
	bool *ad07589214; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float *ea238f7f40; // 0x11c(0x04)
	float InTime; // 0x120(0x04)
	float OutTime; // 0x124(0x04)
	float StartTime; // 0x128(0x04)
	float EndTime; // 0x12c(0x04)
};

// Class MovieScene.*d04d891fd6
// Size: 0x30 (Inherited: 0x30)
struct U*d04d891fd6 : UInterface {
};

// Class MovieScene.*acfe1829bf
// Size: 0xa0 (Inherited: 0x30)
struct U*acfe1829bf : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> *6cb2a3499d; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)
};

// Class MovieScene.*7383c04d64
// Size: 0x30 (Inherited: 0x30)
struct U*7383c04d64 : UInterface {
};

// Class MovieScene.*fc1e7ff951
// Size: 0x78 (Inherited: 0x30)
struct U*fc1e7ff951 : UObject {
	struct FName FolderName; // 0x30(0x08)
	struct TArray<struct U*fc1e7ff951*> *894b76bd31; // 0x38(0x10)
	struct TArray<struct UMovieSceneTrack*> *7c9187aed8; // 0x48(0x10)
	struct TArray<struct FString> *52392b4a22; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class MovieScene.*077b952708
// Size: 0x700 (Inherited: 0x30)
struct U*077b952708 : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct FMulticastDelegate OnPlay; // 0x378(0x10)
	struct FMulticastDelegate OnStop; // 0x388(0x10)
	struct FMulticastDelegate OnPause; // 0x398(0x10)
	char *2e44ab1b7e : 1; // 0x3a8(0x01)
	char *bdac78466e : 1; // 0x3a8(0x01)
	char *41a9c2b291 : 1; // 0x3a8(0x01)
	char pad_3A8_3 : 5; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UMovieSceneSequence* Sequence; // 0x3b0(0x08)
	float *f591e2b673; // 0x3b8(0x04)
	float StartTime; // 0x3bc(0x04)
	float *6962c2e26e; // 0x3c0(0x04)
	int32 *615e67ef66; // 0x3c4(0x04)
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct FMovieSceneSequencePlaybackSettings *17013ee0de; // 0x3d8(0x28)
	char pad_400[0x300]; // 0x400(0x300)

	void *db13708ed5(float ReturnValue); // Function MovieScene.*077b952708.*db13708ed5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e54
	void Stop(); // Function MovieScene.*077b952708.Stop // Final|Native|Public|BlueprintCallable // @ game+0x64730f4
	void PlayReverse(); // Function MovieScene.*077b952708.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x6472eb8
	void Pause(); // Function MovieScene.*077b952708.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6472e88
	void Play(); // Function MovieScene.*077b952708.Play // Final|Native|Public|BlueprintCallable // @ game+0x6472e9c
	void *33ff4dc197(float NewEndTime); // Function MovieScene.*077b952708.*33ff4dc197 // Final|Native|Public|BlueprintCallable // @ game+0x6473004
	void *e619608247(float ReturnValue); // Function MovieScene.*077b952708.*e619608247 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472de8
	void SetPlayRate(); // Function MovieScene.*077b952708.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6472ed4
	void *369f181ebb(); // Function MovieScene.*077b952708.*369f181ebb // Final|Native|Public|BlueprintCallable // @ game+0x6472c98
	void *b45e0dc9b9(struct TArray<struct UObject*> ReturnValue); // Function MovieScene.*077b952708.*b45e0dc9b9 // Final|Native|Public|BlueprintCallable // @ game+0x6472cc4
	void GetPlayRate(float ReturnValue); // Function MovieScene.*077b952708.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e0c
	void *b0a7ef1c52(); // Function MovieScene.*077b952708.*b0a7ef1c52 // Final|Native|Public|BlueprintCallable // @ game+0x64730e0
	void *299565d7ba(); // Function MovieScene.*077b952708.*299565d7ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e24
	void IsPlaying(bool ReturnValue); // Function MovieScene.*077b952708.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e6c
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.*077b952708.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x6472f6c
	void *af322aa928(); // Function MovieScene.*077b952708.*af322aa928 // Final|Native|Public|BlueprintCallable // @ game+0xe7b4ac
	void *65ef202f2e(); // Function MovieScene.*077b952708.*65ef202f2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e3c
};

// Class MovieScene.MovieSceneSection
// Size: 0xd0 (Inherited: 0xb0)
struct UMovieSceneSection : U*caf4eaa1e7 {
	struct FMovieSceneSectionEvalOptions *ac6a72d46d; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float StartTime; // 0xb4(0x04)
	float *6962c2e26e; // 0xb8(0x04)
	int32 *58cea9cf6c; // 0xbc(0x04)
	int32 *b8ab45c962; // 0xc0(0x04)
	char *37789dceb0 : 1; // 0xc4(0x01)
	char *e5b27257c1 : 1; // 0xc4(0x01)
	char *fb0cda5068 : 1; // 0xc4(0x01)
	char pad_C4_3 : 5; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *f2fdc48b51; // 0xc8(0x04)
	float *5469745da8; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneTrack
// Size: 0xc0 (Inherited: 0xb0)
struct UMovieSceneTrack : U*caf4eaa1e7 {
	struct FMovieSceneTrackEvalOptions *ac6a72d46d; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class MovieScene.*68789de349
// Size: 0xd0 (Inherited: 0xc0)
struct U*68789de349 : UMovieSceneTrack {
	bool *77dddc929c; // 0xb8(0x01)
	struct TArray<struct UMovieSceneSection*> *f4f6b899fa; // 0xc0(0x10)
};

// Class MovieScene.*1bf497951b
// Size: 0xd0 (Inherited: 0xd0)
struct U*1bf497951b : UMovieSceneSection {
	struct FMovieSceneSectionEvalOptions *ac6a72d46d; // 0xb0(0x02)
	float StartTime; // 0xb4(0x04)
	float *6962c2e26e; // 0xb8(0x04)
	int32 *58cea9cf6c; // 0xbc(0x04)
	int32 *b8ab45c962; // 0xc0(0x04)
	char *37789dceb0 : 1; // 0xc4(0x01)
	char *e5b27257c1 : 1; // 0xc4(0x01)
	char *fb0cda5068 : 1; // 0xc4(0x01)
	float *f2fdc48b51; // 0xc8(0x04)
	float *5469745da8; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneSequence
// Size: 0x330 (Inherited: 0xb0)
struct UMovieSceneSequence : U*caf4eaa1e7 {
	struct F*94e9379752 *ea954f81b1; // 0xb0(0x220)
	struct F*a8ede5f1a5 *35ddcf5717; // 0x2d0(0x02)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TMap<struct UObject*, struct F*94e9379752> *55e46746a7; // 0x2d8(0x50)
	bool *8654ac0dcf; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
	struct FMovieSceneTrackEvalOptions *ac6a72d46d; // 0xb0(0x04)
};

