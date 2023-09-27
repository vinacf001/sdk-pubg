// Class MediaAssets.*19b3aca252
// Size: 0xc0 (Inherited: 0x30)
struct U*19b3aca252 : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	void *fb856e8913(); // Function MediaAssets.*19b3aca252.*fb856e8913 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x684609c
	void *de9d858384(); // Function MediaAssets.*19b3aca252.*de9d858384 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68461b8
	void *32940f127c(); // Function MediaAssets.*19b3aca252.*32940f127c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6845934
};

// Class MediaAssets.MediaPlayer
// Size: 0x170 (Inherited: 0x30)
struct UMediaPlayer : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FMulticastDelegate OnEndReached; // 0x48(0x10)
	struct FMulticastDelegate OnMediaClosed; // 0x58(0x10)
	struct FMulticastDelegate OnMediaOpened; // 0x68(0x10)
	struct FMulticastDelegate OnMediaOpenFailed; // 0x78(0x10)
	struct FMulticastDelegate OnPlaybackResumed; // 0x88(0x10)
	struct FMulticastDelegate OnPlaybackSuspended; // 0x98(0x10)
	bool *b0c81f8985; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char Shuffle : 1; // 0xac(0x01)
	char Loop : 1; // 0xac(0x01)
	char pad_AC_2 : 6; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct U*19b3aca252* Overlays; // 0xb0(0x08)
	struct U*8c40d4efc3* PlayList; // 0xb8(0x08)
	int32 PlaylistIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UMediaSoundWave* SoundWave; // 0xc8(0x08)
	struct UMediaTexture* VideoTexture; // 0xd0(0x08)
	char pad_D8[0x98]; // 0xd8(0x98)

	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x684670c
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6845a68
	void *75790aa887(); // Function MediaAssets.MediaPlayer.*75790aa887 // Final|Native|Public|BlueprintCallable // @ game+0x6847484
	void *8f9621f73b(); // Function MediaAssets.MediaPlayer.*8f9621f73b // Final|Native|Public|BlueprintCallable // @ game+0x6847158
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x684659c
	void Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6846d00
	void *699d09b6a4(); // Function MediaAssets.MediaPlayer.*699d09b6a4 // Final|Native|Public|BlueprintCallable // @ game+0x6845ab4
	void *105aa62fa6(); // Function MediaAssets.MediaPlayer.*105aa62fa6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845d14
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68462d4
	void *963367fbd6(); // Function MediaAssets.MediaPlayer.*963367fbd6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845678
	void *acaac2310c(); // Function MediaAssets.MediaPlayer.*acaac2310c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6846320
	void *198c8c0c90(); // Function MediaAssets.MediaPlayer.*198c8c0c90 // Final|Native|Public|BlueprintCallable // @ game+0x6845f2c
	void *b577468b46(); // Function MediaAssets.MediaPlayer.*b577468b46 // Final|Native|Public|BlueprintCallable // @ game+0x6846a7c
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x684690c
	void *56322a2a36(); // Function MediaAssets.MediaPlayer.*56322a2a36 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x684675c
	void *1ef360d30f(); // Function MediaAssets.MediaPlayer.*1ef360d30f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845ee8
	void *c1f80bf6cd(); // Function MediaAssets.MediaPlayer.*c1f80bf6cd // Final|Native|Public|BlueprintCallable // @ game+0x68469d8
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6845858
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6846d34
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x684684c
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6846cd0
	void *639b7c4d2a(); // Function MediaAssets.MediaPlayer.*639b7c4d2a // Final|Native|Public|BlueprintCallable // @ game+0x6847514
	void *d37fa25784(); // Function MediaAssets.MediaPlayer.*d37fa25784 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68467fc
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x6846f24
	void Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x68468d4
	void *24ed8122bb(); // Function MediaAssets.MediaPlayer.*24ed8122bb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845a4c
	void *02039c2661(); // Function MediaAssets.MediaPlayer.*02039c2661 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845c54
	void *eafca58aea(); // Function MediaAssets.MediaPlayer.*eafca58aea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845fe8
	void *69546eff82(); // Function MediaAssets.MediaPlayer.*69546eff82 // Final|Native|Public|BlueprintCallable // @ game+0x68473dc
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68476e8
	void *11a818a8c9(); // Function MediaAssets.MediaPlayer.*11a818a8c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6846454
	void *8ec55e0cb3(); // Function MediaAssets.MediaPlayer.*8ec55e0cb3 // Final|Native|Public|BlueprintCallable // @ game+0x6846c04
	void Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6846f80
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6847698
	void *760c9191e8(); // Function MediaAssets.MediaPlayer.*760c9191e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68475a4
	void *ba5c7546ae(); // Function MediaAssets.MediaPlayer.*ba5c7546ae // Final|Native|Public|BlueprintCallable // @ game+0x6845764
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6846eb8
	void SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x68472ac
	void *add0c19050(); // Function MediaAssets.MediaPlayer.*add0c19050 // Final|Native|Public|BlueprintCallable // @ game+0x684734c
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68467ac
	void *5ee603f5bb(); // Function MediaAssets.MediaPlayer.*5ee603f5bb // Final|Native|Public|BlueprintCallable // @ game+0x68456c4
	void *2e0a752349(); // Function MediaAssets.MediaPlayer.*2e0a752349 // Final|Native|Public|BlueprintCallable // @ game+0x6846b64
	void SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6847048
};

// Class MediaAssets.*8c40d4efc3
// Size: 0x40 (Inherited: 0x30)
struct U*8c40d4efc3 : UObject {
	struct TArray<struct U*1b7950d6f1*> Items; // 0x30(0x10)

	void *d672675962(); // Function MediaAssets.*8c40d4efc3.*d672675962 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6845d64
	void GetNext(); // Function MediaAssets.*8c40d4efc3.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6845ba8
	void Add(); // Function MediaAssets.*8c40d4efc3.Add // Final|Native|Public|BlueprintCallable // @ game+0x68455c4
	void *c01936c944(); // Function MediaAssets.*8c40d4efc3.*c01936c944 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6845e3c
	void Get(); // Function MediaAssets.*8c40d4efc3.Get // Final|Native|Public|BlueprintCallable // @ game+0x684586c
	void Num(); // Function MediaAssets.*8c40d4efc3.Num // Final|Native|Public|BlueprintCallable // @ game+0x68468f8
	void Insert(); // Function MediaAssets.*8c40d4efc3.Insert // Final|Native|Public|BlueprintCallable // @ game+0x68465f4
	void RemoveAt(); // Function MediaAssets.*8c40d4efc3.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6846df0
	void Remove(); // Function MediaAssets.*8c40d4efc3.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6846d58
};

// Class MediaAssets.MediaSoundWave
// Size: 0x370 (Inherited: 0x290)
struct UMediaSoundWave : USoundWave {
	char pad_290[0x8]; // 0x290(0x08)
	int32 AudioTrackIndex; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x2a0(0x08)
	char pad_2A8[0xc8]; // 0x2a8(0xc8)
};

// Class MediaAssets.*1b7950d6f1
// Size: 0x38 (Inherited: 0x30)
struct U*1b7950d6f1 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MediaAssets.*e10d3db5e5
// Size: 0x40 (Inherited: 0x38)
struct U*e10d3db5e5 : U*1b7950d6f1 {
	struct FName PlayerName; // 0x38(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x58 (Inherited: 0x40)
struct UFileMediaSource : U*e10d3db5e5 {
	struct FString FilePath; // 0x40(0x10)
	bool PrecacheFile; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *0a5d140f15(); // Function MediaAssets.FileMediaSource.*0a5d140f15 // Final|Native|Public|BlueprintCallable // @ game+0x68471ec
};

// Class MediaAssets.StreamMediaSource
// Size: 0x50 (Inherited: 0x40)
struct UStreamMediaSource : U*e10d3db5e5 {
	struct FString StreamUrl; // 0x40(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x40 (Inherited: 0x38)
struct UPlatformMediaSource : U*1b7950d6f1 {
	struct U*1b7950d6f1* *1b7950d6f1; // 0x38(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x1a0 (Inherited: 0xc0)
struct UMediaTexture : UTexture {
	char pad_C0[0x8]; // 0xc0(0x08)
	enum class *6486b70fc0 AddressX; // 0xc8(0x01)
	enum class *6486b70fc0 AddressY; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	struct FLinearColor ClearColor; // 0xcc(0x10)
	bool bDelayedInitialization; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UMediaPlayer* MediaPlayer; // 0xe0(0x08)
	int32 VideoTrackIndex; // 0xe8(0x04)
	char pad_EC[0xb4]; // 0xec(0xb4)

	void *72210cfba9(); // Function MediaAssets.MediaTexture.*72210cfba9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6845b70
	void *49b46cf116(); // Function MediaAssets.MediaTexture.*49b46cf116 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68465bc
	void *59255be0cc(); // Function MediaAssets.MediaTexture.*59255be0cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x684590c
};

