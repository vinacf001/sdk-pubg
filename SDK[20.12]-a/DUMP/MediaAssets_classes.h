// Class MediaAssets.*cf7efb9af2
// Size: 0xc0 (Inherited: 0x30)
struct U*cf7efb9af2 : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	void *5ddfb76f15(); // Function MediaAssets.*cf7efb9af2.*5ddfb76f15 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54724
	void *74df921d93(); // Function MediaAssets.*cf7efb9af2.*74df921d93 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c53e4c
	void *9e3e26a8bc(); // Function MediaAssets.*cf7efb9af2.*9e3e26a8bc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54608
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
	bool *a3806ffc9b; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char Shuffle : 1; // 0xac(0x01)
	char loop : 1; // 0xac(0x01)
	char pad_AC_2 : 6; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct U*cf7efb9af2* Overlays; // 0xb0(0x08)
	struct U*3b34470fe6* PlayList; // 0xb8(0x08)
	int32 PlaylistIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UMediaSoundWave* SoundWave; // 0xc8(0x08)
	struct UMediaTexture* VideoTexture; // 0xd0(0x08)
	char pad_D8[0x98]; // 0xd8(0x98)

	void *97946c5a9f(); // Function MediaAssets.MediaPlayer.*97946c5a9f // Final|Native|Public|BlueprintCallable // @ game+0x6c54498
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c53f80
	void *adc97a6090(); // Function MediaAssets.MediaPlayer.*adc97a6090 // Final|Native|Public|BlueprintCallable // @ game+0x6c55ad4
	void *3af0985c84(); // Function MediaAssets.MediaPlayer.*3af0985c84 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54554
	void *5ead074933(); // Function MediaAssets.MediaPlayer.*5ead074933 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c53f64
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6c552f4
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6c55478
	void *9136192671(); // Function MediaAssets.MediaPlayer.*9136192671 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c55b64
	void *f31402f417(); // Function MediaAssets.MediaPlayer.*f31402f417 // Final|Native|Public|BlueprintCallable // @ game+0x6c55a44
	void *f1614bcb99(); // Function MediaAssets.MediaPlayer.*f1614bcb99 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c5488c
	void *8ec249724d(); // Function MediaAssets.MediaPlayer.*8ec249724d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54d1c
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c55ca8
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6c54ecc
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54b08
	void *5899d96a8c(); // Function MediaAssets.MediaPlayer.*5899d96a8c // Final|Native|Public|BlueprintCallable // @ game+0x6c53bdc
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6c53d70
	void *bbef5ba4fe(); // Function MediaAssets.MediaPlayer.*bbef5ba4fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54dbc
	void *c8a132ff9f(); // Function MediaAssets.MediaPlayer.*c8a132ff9f // Final|Native|Public|BlueprintCallable // @ game+0x6c5599c
	void Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c55540
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x6c554e4
	void *ab1f31ed1c(); // Function MediaAssets.MediaPlayer.*ab1f31ed1c // Final|Native|Public|BlueprintCallable // @ game+0x6c53fcc
	void *04ac39b0eb(); // Function MediaAssets.MediaPlayer.*04ac39b0eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54454
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54840
	void SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6c5586c
	void *f3e2071dd9(); // Function MediaAssets.MediaPlayer.*f3e2071dd9 // Final|Native|Public|BlueprintCallable // @ game+0x6c55124
	void *6cb29a9ee8(); // Function MediaAssets.MediaPlayer.*6cb29a9ee8 // Final|Native|Public|BlueprintCallable // @ game+0x6c55718
	void *e145400b1d(); // Function MediaAssets.MediaPlayer.*e145400b1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c549c0
	void *d2bd2bd3ff(); // Function MediaAssets.MediaPlayer.*d2bd2bd3ff // Final|Native|Public|BlueprintCallable // @ game+0x6c5590c
	void Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6c54e94
	void *63364087cc(); // Function MediaAssets.MediaPlayer.*63364087cc // Final|Native|Public|BlueprintCallable // @ game+0x6c54f98
	void *58e5b88e13(); // Function MediaAssets.MediaPlayer.*58e5b88e13 // Final|Native|Public|BlueprintCallable // @ game+0x6c5503c
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6c55290
	void *c8600ffcce(); // Function MediaAssets.MediaPlayer.*c8600ffcce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54280
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54d6c
	void *6eac5f7aed(); // Function MediaAssets.MediaPlayer.*6eac5f7aed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c53b90
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54e0c
	void *c663c558a5(); // Function MediaAssets.MediaPlayer.*c663c558a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c541c0
	void Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6c552c0
	void *68d324baf9(); // Function MediaAssets.MediaPlayer.*68d324baf9 // Final|Native|Public|BlueprintCallable // @ game+0x6c53c7c
	void *a8559750e8(); // Function MediaAssets.MediaPlayer.*a8559750e8 // Final|Native|Public|BlueprintCallable // @ game+0x6c551c4
	void SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6c55608
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c55c58
	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54ccc
};

// Class MediaAssets.*3b34470fe6
// Size: 0x40 (Inherited: 0x30)
struct U*3b34470fe6 : UObject {
	struct TArray<struct U*4ac95d13e1*> Items; // 0x30(0x10)

	void Remove(); // Function MediaAssets.*3b34470fe6.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6c55318
	void Insert(); // Function MediaAssets.*3b34470fe6.Insert // Final|Native|Public|BlueprintCallable // @ game+0x6c54bb4
	void Get(); // Function MediaAssets.*3b34470fe6.Get // Final|Native|Public|BlueprintCallable // @ game+0x6c53d84
	void GetNext(); // Function MediaAssets.*3b34470fe6.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c54114
	void Num(); // Function MediaAssets.*3b34470fe6.Num // Final|Native|Public|BlueprintCallable // @ game+0x6c54eb8
	void Add(); // Function MediaAssets.*3b34470fe6.Add // Final|Native|Public|BlueprintCallable // @ game+0x6c53adc
	void RemoveAt(); // Function MediaAssets.*3b34470fe6.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6c553b0
	void *89bbcdb373(); // Function MediaAssets.*3b34470fe6.*89bbcdb373 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c543a8
	void *47cf6babb7(); // Function MediaAssets.*3b34470fe6.*47cf6babb7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c542d0
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

// Class MediaAssets.*4ac95d13e1
// Size: 0x38 (Inherited: 0x30)
struct U*4ac95d13e1 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MediaAssets.*eca20e36b6
// Size: 0x40 (Inherited: 0x38)
struct U*eca20e36b6 : U*4ac95d13e1 {
	struct FName PlayerName; // 0x38(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x58 (Inherited: 0x40)
struct UFileMediaSource : U*eca20e36b6 {
	struct FString FilePath; // 0x40(0x10)
	bool PrecacheFile; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *f96247986e(); // Function MediaAssets.FileMediaSource.*f96247986e // Final|Native|Public|BlueprintCallable // @ game+0x6c557ac
};

// Class MediaAssets.StreamMediaSource
// Size: 0x50 (Inherited: 0x40)
struct UStreamMediaSource : U*eca20e36b6 {
	struct FString StreamUrl; // 0x40(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x40 (Inherited: 0x38)
struct UPlatformMediaSource : U*4ac95d13e1 {
	struct U*4ac95d13e1* *4ac95d13e1; // 0x38(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x260 (Inherited: 0x180)
struct UMediaTexture : UTexture {
	char pad_180[0x8]; // 0x180(0x08)
	enum class *f13c8e8821 AddressX; // 0x188(0x01)
	enum class *f13c8e8821 AddressY; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	struct FLinearColor ClearColor; // 0x18c(0x10)
	bool bDelayedInitialization; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x1a0(0x08)
	int32 VideoTrackIndex; // 0x1a8(0x04)
	char pad_1AC[0xb4]; // 0x1ac(0xb4)

	void *7b39346b53(); // Function MediaAssets.MediaTexture.*7b39346b53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54b28
	void *623b3fc07f(); // Function MediaAssets.MediaTexture.*623b3fc07f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c53e24
	void *64bfa698d7(); // Function MediaAssets.MediaTexture.*64bfa698d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c54088
};

