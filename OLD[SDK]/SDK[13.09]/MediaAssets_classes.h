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

	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // None // @ game+0x6400770
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // None // @ game+0x63ffacc
	void *75790aa887(); // Function MediaAssets.MediaPlayer.*75790aa887 // None // @ game+0x64014e8
	void *8f9621f73b(); // Function MediaAssets.MediaPlayer.*8f9621f73b // None // @ game+0x64011bc
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // None // @ game+0x6400600
	void Play(); // Function MediaAssets.MediaPlayer.Play // None // @ game+0x6400d64
	void *699d09b6a4(bool Unthinned); // Function MediaAssets.MediaPlayer.*699d09b6a4 // None // @ game+0x63ffb18
	void *105aa62fa6(); // Function MediaAssets.MediaPlayer.*105aa62fa6 // None // @ game+0x63ffd78
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // None // @ game+0x6400338
	void *963367fbd6(); // Function MediaAssets.MediaPlayer.*963367fbd6 // None // @ game+0x63ff6dc
	void *acaac2310c(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.*acaac2310c // None // @ game+0x6400384
	void *198c8c0c90(); // Function MediaAssets.MediaPlayer.*198c8c0c90 // None // @ game+0x63fff90
	int32 *b577468b46(); // Function MediaAssets.MediaPlayer.*b577468b46 // None // @ game+0x6400ae0
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // None // @ game+0x6400970
	void *56322a2a36(); // Function MediaAssets.MediaPlayer.*56322a2a36 // None // @ game+0x64007c0
	void *1ef360d30f(); // Function MediaAssets.MediaPlayer.*1ef360d30f // None // @ game+0x63fff4c
	struct U*8c40d4efc3* *c1f80bf6cd(); // Function MediaAssets.MediaPlayer.*c1f80bf6cd // None // @ game+0x6400a3c
	void Close(); // Function MediaAssets.MediaPlayer.Close // None // @ game+0x63ff8bc
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // None // @ game+0x6400d98
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // None // @ game+0x64008b0
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // None // @ game+0x6400d34
	void *639b7c4d2a(); // Function MediaAssets.MediaPlayer.*639b7c4d2a // None // @ game+0x6401578
	void *d37fa25784(); // Function MediaAssets.MediaPlayer.*d37fa25784 // None // @ game+0x6400860
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // None // @ game+0x6400f88
	void Next(); // Function MediaAssets.MediaPlayer.Next // None // @ game+0x6400938
	void *24ed8122bb(); // Function MediaAssets.MediaPlayer.*24ed8122bb // None // @ game+0x63ffab0
	void *02039c2661(); // Function MediaAssets.MediaPlayer.*02039c2661 // None // @ game+0x63ffcb8
	void *eafca58aea(); // Function MediaAssets.MediaPlayer.*eafca58aea // None // @ game+0x640004c
	float *69546eff82(); // Function MediaAssets.MediaPlayer.*69546eff82 // None // @ game+0x6401440
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // None // @ game+0x640174c
	void *11a818a8c9(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.*11a818a8c9 // None // @ game+0x64004b8
	struct FString *8ec55e0cb3(); // Function MediaAssets.MediaPlayer.*8ec55e0cb3 // None // @ game+0x6400c68
	struct FTimespan Seek(); // Function MediaAssets.MediaPlayer.Seek // None // @ game+0x6400fe4
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // None // @ game+0x64016fc
	void *760c9191e8(float Rate); // Function MediaAssets.MediaPlayer.*760c9191e8 // None // @ game+0x6401608
	struct FString *ba5c7546ae(); // Function MediaAssets.MediaPlayer.*ba5c7546ae // None // @ game+0x63ff7c8
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // None // @ game+0x6400f1c
	void SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // None // @ game+0x6401310
	void *add0c19050(); // Function MediaAssets.MediaPlayer.*add0c19050 // None // @ game+0x64013b0
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // None // @ game+0x6400810
	struct U*1b7950d6f1* *5ee603f5bb(); // Function MediaAssets.MediaPlayer.*5ee603f5bb // None // @ game+0x63ff728
	void *2e0a752349(struct U*1b7950d6f1* MediaSource); // Function MediaAssets.MediaPlayer.*2e0a752349 // None // @ game+0x6400bc8
	int32 SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // None // @ game+0x64010ac
};

// Class MediaAssets.*8c40d4efc3
// Size: 0x38 (Inherited: 0x28)
struct U*8c40d4efc3 : UObject {
	struct TArray<struct U*1b7950d6f1*> Items; // 0x28(0x10)

	int32 *d672675962(); // Function MediaAssets.*8c40d4efc3.*d672675962 // None // @ game+0x63ffdc8
	int32 GetNext(); // Function MediaAssets.*8c40d4efc3.GetNext // None // @ game+0x63ffc0c
	void Add(); // Function MediaAssets.*8c40d4efc3.Add // None // @ game+0x63ff628
	void *c01936c944(); // Function MediaAssets.*8c40d4efc3.*c01936c944 // None // @ game+0x63ffea0
	int32 Get(); // Function MediaAssets.*8c40d4efc3.Get // None // @ game+0x63ff8d0
	void Num(); // Function MediaAssets.*8c40d4efc3.Num // None // @ game+0x640095c
	void Insert(); // Function MediaAssets.*8c40d4efc3.Insert // None // @ game+0x6400658
	void RemoveAt(); // Function MediaAssets.*8c40d4efc3.RemoveAt // None // @ game+0x6400e54
	void Remove(); // Function MediaAssets.*8c40d4efc3.Remove // None // @ game+0x6400dbc
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

	void *0a5d140f15(); // Function MediaAssets.FileMediaSource.*0a5d140f15 // None // @ game+0x6401250
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

	void *72210cfba9(); // Function MediaAssets.MediaTexture.*72210cfba9 // None // @ game+0x63ffbd4
	void *49b46cf116(); // Function MediaAssets.MediaTexture.*49b46cf116 // None // @ game+0x6400620
	void *59255be0cc(); // Function MediaAssets.MediaTexture.*59255be0cc // None // @ game+0x63ff970
};

