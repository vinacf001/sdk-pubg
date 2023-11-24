// Class MovieScene.*ff1deb1eee
// Size: 0xb0 (Inherited: 0x28)
struct U*ff1deb1eee : UObject {
	struct FGuid Signature; // 0x28(0x10)
	char pad_38[0x78]; // 0x38(0x78)
};

// Class MovieScene.MovieScene
// Size: 0x130 (Inherited: 0xb0)
struct UMovieScene : U*ff1deb1eee {
	struct TArray<struct FMovieSceneSpawnable> *a9827e637b; // 0xb0(0x10)
	struct TArray<struct FMovieScenePossessable> *d5bfb45398; // 0xc0(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0xd0(0x10)
	struct TArray<struct UMovieSceneTrack*> *9fe38320fd; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FFloatRange SelectionRange; // 0xf8(0x10)
	struct FFloatRange *b4446f9847; // 0x108(0x10)
	bool *5bae4f3f57; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float *05061ec8aa; // 0x11c(0x04)
	float InTime; // 0x120(0x04)
	float OutTime; // 0x124(0x04)
	float StartTime; // 0x128(0x04)
	float EndTime; // 0x12c(0x04)
};

// Class MovieScene.*4f3cb04d3c
// Size: 0x28 (Inherited: 0x28)
struct U*4f3cb04d3c : UInterface {
};

// Class MovieScene.*371e05edf3
// Size: 0x98 (Inherited: 0x28)
struct U*371e05edf3 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> *2969129849; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.*f584bebfbd
// Size: 0x28 (Inherited: 0x28)
struct U*f584bebfbd : UInterface {
};

// Class MovieScene.*04d5bbb708
// Size: 0x70 (Inherited: 0x28)
struct U*04d5bbb708 : UObject {
	struct FName FolderName; // 0x28(0x08)
	struct TArray<struct U*04d5bbb708*> *aadd60adbf; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> *e8d14b5a2a; // 0x40(0x10)
	struct TArray<struct FString> *99dd275336; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.*b09f37ac16
// Size: 0x700 (Inherited: 0x28)
struct U*b09f37ac16 : UObject {
	char pad_28[0x348]; // 0x28(0x348)
	struct FMulticastDelegate OnPlay; // 0x370(0x10)
	struct FMulticastDelegate OnStop; // 0x380(0x10)
	struct FMulticastDelegate OnPause; // 0x390(0x10)
	char *5608a590c0 : 1; // 0x3a0(0x01)
	char *fbf73c90fe : 1; // 0x3a0(0x01)
	char *4f983de950 : 1; // 0x3a0(0x01)
	char pad_3A0_3 : 5; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UMovieSceneSequence* Sequence; // 0x3a8(0x08)
	float *8a43db7d12; // 0x3b0(0x04)
	float StartTime; // 0x3b4(0x04)
	float *68d807403b; // 0x3b8(0x04)
	int32 *d744624e4c; // 0x3bc(0x04)
	char pad_3C0[0x10]; // 0x3c0(0x10)
	struct FMovieSceneSequencePlaybackSettings *ac26c294a7; // 0x3d0(0x28)
	char pad_3F8[0x308]; // 0x3f8(0x308)

	void PlayReverse(); // Function MovieScene.*b09f37ac16.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x5e05278
	void Stop(); // Function MovieScene.*b09f37ac16.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5e054b4
	void *4018e53717(); // Function MovieScene.*b09f37ac16.*4018e53717 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e05214
	void SetPlayRate(); // Function MovieScene.*b09f37ac16.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x5e05294
	void Pause(); // Function MovieScene.*b09f37ac16.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5e05248
	void *08afa86053(); // Function MovieScene.*b09f37ac16.*08afa86053 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e051fc
	void GetPlayRate(); // Function MovieScene.*b09f37ac16.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e051cc
	void *44267931b6(); // Function MovieScene.*b09f37ac16.*44267931b6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e051e4
	void SetPlaybackPosition(); // Function MovieScene.*b09f37ac16.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x5e0532c
	void *9393821099(); // Function MovieScene.*b09f37ac16.*9393821099 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e051a8
	void Play(); // Function MovieScene.*b09f37ac16.Play // Final|Native|Public|BlueprintCallable // @ game+0x5e0525c
	void *a1ff349d19(); // Function MovieScene.*b09f37ac16.*a1ff349d19 // Final|Native|Public|BlueprintCallable // @ game+0x5e053c4
	void *76ad3d2497(); // Function MovieScene.*b09f37ac16.*76ad3d2497 // Final|Native|Public|BlueprintCallable // @ game+0x5e05058
	struct FMovieSceneObjectBindingID *f601f1620b(); // Function MovieScene.*b09f37ac16.*f601f1620b // Final|Native|Public|BlueprintCallable // @ game+0x5e05084
	void IsPlaying(); // Function MovieScene.*b09f37ac16.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e0522c
	void *697f6ffc90(); // Function MovieScene.*b09f37ac16.*697f6ffc90 // Final|Native|Public|BlueprintCallable // @ game+0x5e054a0
	void *f16b0b2e9e(); // Function MovieScene.*b09f37ac16.*f16b0b2e9e // Final|Native|Public|BlueprintCallable // @ game+0xcc79ec
};

// Class MovieScene.MovieSceneSection
// Size: 0xd0 (Inherited: 0xb0)
struct UMovieSceneSection : U*ff1deb1eee {
	struct FMovieSceneSectionEvalOptions *d23e33bd44; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float StartTime; // 0xb4(0x04)
	float *68d807403b; // 0xb8(0x04)
	int32 *686db12b9d; // 0xbc(0x04)
	int32 *d63e06f389; // 0xc0(0x04)
	char *bdff81749e : 1; // 0xc4(0x01)
	char *d7425bf417 : 1; // 0xc4(0x01)
	char *45a90041f8 : 1; // 0xc4(0x01)
	char pad_C4_3 : 5; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *be86d9ecc8; // 0xc8(0x04)
	float *a2d2084d73; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneTrack
// Size: 0xc0 (Inherited: 0xb0)
struct UMovieSceneTrack : U*ff1deb1eee {
	struct FMovieSceneTrackEvalOptions *d23e33bd44; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class MovieScene.*fb2bcada4f
// Size: 0xd0 (Inherited: 0xc0)
struct U*fb2bcada4f : UMovieSceneTrack {
	bool *f0bd691837; // 0xb8(0x01)
	struct TArray<struct UMovieSceneSection*> *28c950e315; // 0xc0(0x10)
};

// Class MovieScene.*fcc7adb45c
// Size: 0xd0 (Inherited: 0xd0)
struct U*fcc7adb45c : UMovieSceneSection {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x330 (Inherited: 0xb0)
struct UMovieSceneSequence : U*ff1deb1eee {
	struct F*d43d53cdc6 *a543b534c2; // 0xb0(0x220)
	struct F*8ca65ce0b0 *f44b16fa23; // 0x2d0(0x02)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TMap<struct UObject*, struct F*d43d53cdc6> *64d9e6f24d; // 0x2d8(0x50)
	bool *b65642fb27; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

