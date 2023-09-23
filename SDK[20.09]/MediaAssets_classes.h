// Class MediaAssets.*19b3aca252
// Size: 0xb0 (Inherited: 0x28)
struct U*19b3aca252 : UObject {
	char pad_28[0x88]; // 0x28(0x88)
};

// Class MediaAssets.MediaPlayer
// Size: 0x160 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FMulticastDelegate OnEndReached; // 0x40(0x10)
	struct FMulticastDelegate OnMediaClosed; // 0x50(0x10)
	struct FMulticastDelegate OnMediaOpened; // 0x60(0x10)
	struct FMulticastDelegate OnMediaOpenFailed; // 0x70(0x10)
	struct FMulticastDelegate OnPlaybackResumed; // 0x80(0x10)
	struct FMulticastDelegate OnPlaybackSuspended; // 0x90(0x10)
	bool *b0c81f8985; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char Shuffle : 1; // 0xa4(0x01)
	char Loop : 1; // 0xa4(0x01)
	char pad_A4_2 : 6; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct U*19b3aca252* Overlays; // 0xa8(0x08)
	struct U*8c40d4efc3* PlayList; // 0xb0(0x08)
	int32 PlaylistIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UMediaSoundWave* SoundWave; // 0xc0(0x08)
	struct UMediaTexture* VideoTexture; // 0xc8(0x08)
	char pad_D0[0x90]; // 0xd0(0x90)

	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64279a8
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6426d04
	void *75790aa887(); // Function MediaAssets.MediaPlayer.*75790aa887 // Final|Native|Public|BlueprintCallable // @ game+0x6428720
	void *8f9621f73b(); // Function MediaAssets.MediaPlayer.*8f9621f73b // Final|Native|Public|BlueprintCallable // @ game+0x64283f4
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427838
	void Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6427f9c
	void *699d09b6a4(bool Unthinned); // Function MediaAssets.MediaPlayer.*699d09b6a4 // Final|Native|Public|BlueprintCallable // @ game+0x6426d50
	void *105aa62fa6(); // Function MediaAssets.MediaPlayer.*105aa62fa6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6426fb0
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6427570
	void *963367fbd6(); // Function MediaAssets.MediaPlayer.*963367fbd6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6426914
	void *acaac2310c(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.*acaac2310c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64275bc
	void *198c8c0c90(); // Function MediaAssets.MediaPlayer.*198c8c0c90 // Final|Native|Public|BlueprintCallable // @ game+0x64271c8
	int32 *b577468b46(); // Function MediaAssets.MediaPlayer.*b577468b46 // Final|Native|Public|BlueprintCallable // @ game+0x6427d18
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6427ba8
	void *56322a2a36(); // Function MediaAssets.MediaPlayer.*56322a2a36 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64279f8
	void *1ef360d30f(); // Function MediaAssets.MediaPlayer.*1ef360d30f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427184
	struct U*8c40d4efc3* *c1f80bf6cd(); // Function MediaAssets.MediaPlayer.*c1f80bf6cd // Final|Native|Public|BlueprintCallable // @ game+0x6427c74
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6426af4
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6427fd0
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427ae8
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6427f6c
	void *639b7c4d2a(); // Function MediaAssets.MediaPlayer.*639b7c4d2a // Final|Native|Public|BlueprintCallable // @ game+0x64287b0
	void *d37fa25784(); // Function MediaAssets.MediaPlayer.*d37fa25784 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427a98
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x64281c0
	void Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6427b70
	void *24ed8122bb(); // Function MediaAssets.MediaPlayer.*24ed8122bb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6426ce8
	void *02039c2661(); // Function MediaAssets.MediaPlayer.*02039c2661 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6426ef0
	void *eafca58aea(); // Function MediaAssets.MediaPlayer.*eafca58aea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427284
	float *69546eff82(); // Function MediaAssets.MediaPlayer.*69546eff82 // Final|Native|Public|BlueprintCallable // @ game+0x6428678
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6428984
	void *11a818a8c9(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.*11a818a8c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64276f0
	struct FString *8ec55e0cb3(); // Function MediaAssets.MediaPlayer.*8ec55e0cb3 // Final|Native|Public|BlueprintCallable // @ game+0x6427ea0
	struct FTimespan Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x642821c
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6428934
	void *760c9191e8(float Rate); // Function MediaAssets.MediaPlayer.*760c9191e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6428840
	struct FString *ba5c7546ae(); // Function MediaAssets.MediaPlayer.*ba5c7546ae // Final|Native|Public|BlueprintCallable // @ game+0x6426a00
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6428154
	void SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6428548
	void *add0c19050(); // Function MediaAssets.MediaPlayer.*add0c19050 // Final|Native|Public|BlueprintCallable // @ game+0x64285e8
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427a48
	struct U*1b7950d6f1* *5ee603f5bb(); // Function MediaAssets.MediaPlayer.*5ee603f5bb // Final|Native|Public|BlueprintCallable // @ game+0x6426960
	void *2e0a752349(struct U*1b7950d6f1* MediaSource); // Function MediaAssets.MediaPlayer.*2e0a752349 // Final|Native|Public|BlueprintCallable // @ game+0x6427e00
	int32 SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x64282e4
};

// Class MediaAssets.*8c40d4efc3
// Size: 0x38 (Inherited: 0x28)
struct U*8c40d4efc3 : UObject {
	struct TArray<struct U*1b7950d6f1*> Items; // 0x28(0x10)

	int32 *d672675962(); // Function MediaAssets.*8c40d4efc3.*d672675962 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6427000
	int32 GetNext(); // Function MediaAssets.*8c40d4efc3.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6426e44
	void Add(); // Function MediaAssets.*8c40d4efc3.Add // Final|Native|Public|BlueprintCallable // @ game+0x6426860
	void *c01936c944(); // Function MediaAssets.*8c40d4efc3.*c01936c944 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x64270d8
	int32 Get(); // Function MediaAssets.*8c40d4efc3.Get // Final|Native|Public|BlueprintCallable // @ game+0x6426b08
	void Num(); // Function MediaAssets.*8c40d4efc3.Num // Final|Native|Public|BlueprintCallable // @ game+0x6427b94
	void Insert(); // Function MediaAssets.*8c40d4efc3.Insert // Final|Native|Public|BlueprintCallable // @ game+0x6427890
	void RemoveAt(); // Function MediaAssets.*8c40d4efc3.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x642808c
	void Remove(); // Function MediaAssets.*8c40d4efc3.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6427ff4
};

// Class MediaAssets.MediaSoundWave
// Size: 0x360 (Inherited: 0x288)
struct UMediaSoundWave : USoundWave {
	char pad_288[0x8]; // 0x288(0x08)
	int32 AudioTrackIndex; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x298(0x08)
	char pad_2A0[0xc0]; // 0x2a0(0xc0)
};

// Class MediaAssets.*1b7950d6f1
// Size: 0x30 (Inherited: 0x28)
struct U*1b7950d6f1 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MediaAssets.*e10d3db5e5
// Size: 0x38 (Inherited: 0x30)
struct U*e10d3db5e5 : U*1b7950d6f1 {
	struct FName PlayerName; // 0x30(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x50 (Inherited: 0x38)
struct UFileMediaSource : U*e10d3db5e5 {
	struct FString FilePath; // 0x38(0x10)
	bool PrecacheFile; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void *0a5d140f15(); // Function MediaAssets.FileMediaSource.*0a5d140f15 // Final|Native|Public|BlueprintCallable // @ game+0x6428488
};

// Class MediaAssets.StreamMediaSource
// Size: 0x48 (Inherited: 0x38)
struct UStreamMediaSource : U*e10d3db5e5 {
	struct FString StreamUrl; // 0x38(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x38 (Inherited: 0x30)
struct UPlatformMediaSource : U*1b7950d6f1 {
	struct U*1b7950d6f1* *1b7950d6f1; // 0x30(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x1a0 (Inherited: 0xb8)
struct UMediaTexture : UTexture {
	char pad_B8[0x8]; // 0xb8(0x08)
	enum class *6486b70fc0 AddressX; // 0xc0(0x01)
	enum class *6486b70fc0 AddressY; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	struct FLinearColor ClearColor; // 0xc4(0x10)
	bool bDelayedInitialization; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UMediaPlayer* MediaPlayer; // 0xd8(0x08)
	int32 VideoTrackIndex; // 0xe0(0x04)
	char pad_E4[0xbc]; // 0xe4(0xbc)

	void *72210cfba9(); // Function MediaAssets.MediaTexture.*72210cfba9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6426e0c
	void *49b46cf116(); // Function MediaAssets.MediaTexture.*49b46cf116 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6427858
	void *59255be0cc(); // Function MediaAssets.MediaTexture.*59255be0cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6426ba8
};

