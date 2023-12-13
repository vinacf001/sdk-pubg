// Class MediaAssets.*cf7efb9af2
// Size: 0xc0 (Inherited: 0x30)
struct U*cf7efb9af2 : UObject {
	char pad_30[0x90]; // 0x30(0x90)
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

	void *97946c5a9f(); // Function MediaAssets.MediaPlayer.*97946c5a9f // Final|Native|Public|BlueprintCallable // @ game+0x692f7a0
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x692f288
	void *adc97a6090(); // Function MediaAssets.MediaPlayer.*adc97a6090 // Final|Native|Public|BlueprintCallable // @ game+0x6930ddc
	void *3af0985c84(); // Function MediaAssets.MediaPlayer.*3af0985c84 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f85c
	void *5ead074933(); // Function MediaAssets.MediaPlayer.*5ead074933 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f26c
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x69305fc
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6930780
	void *9136192671(); // Function MediaAssets.MediaPlayer.*9136192671 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6930e6c
	void *f31402f417(); // Function MediaAssets.MediaPlayer.*f31402f417 // Final|Native|Public|BlueprintCallable // @ game+0x6930d4c
	void *f1614bcb99(); // Function MediaAssets.MediaPlayer.*f1614bcb99 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692fb94
	void *8ec249724d(); // Function MediaAssets.MediaPlayer.*8ec249724d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6930024
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6930fb0
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x69301d4
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692fe10
	void *5899d96a8c(); // Function MediaAssets.MediaPlayer.*5899d96a8c // Final|Native|Public|BlueprintCallable // @ game+0x692eee4
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x692f078
	void *bbef5ba4fe(); // Function MediaAssets.MediaPlayer.*bbef5ba4fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69300c4
	void *c8a132ff9f(); // Function MediaAssets.MediaPlayer.*c8a132ff9f // Final|Native|Public|BlueprintCallable // @ game+0x6930ca4
	void Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6930848
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x69307ec
	void *ab1f31ed1c(); // Function MediaAssets.MediaPlayer.*ab1f31ed1c // Final|Native|Public|BlueprintCallable // @ game+0x692f2d4
	void *04ac39b0eb(); // Function MediaAssets.MediaPlayer.*04ac39b0eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f75c
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x692fb48
	void SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6930b74
	void *f3e2071dd9(struct U*4ac95d13e1* MediaSource, bool ReturnValue); // Function MediaAssets.MediaPlayer.*f3e2071dd9 // Final|Native|Public|BlueprintCallable // @ game+0x693042c
	void *6cb29a9ee8(struct FName PlayerName); // Function MediaAssets.MediaPlayer.*6cb29a9ee8 // Final|Native|Public|BlueprintCallable // @ game+0x6930a20
	void *e145400b1d(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, struct FString ReturnValue); // Function MediaAssets.MediaPlayer.*e145400b1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692fcc8
	void *d2bd2bd3ff(struct U*cf7efb9af2* NewOverlays); // Function MediaAssets.MediaPlayer.*d2bd2bd3ff // Final|Native|Public|BlueprintCallable // @ game+0x6930c14
	void Next(bool ReturnValue); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x693019c
	void *63364087cc(struct U*3b34470fe6* InPlaylist, bool ReturnValue); // Function MediaAssets.MediaPlayer.*63364087cc // Final|Native|Public|BlueprintCallable // @ game+0x69302a0
	void *58e5b88e13(struct U*3b34470fe6* InPlaylist, int32 Index, bool ReturnValue); // Function MediaAssets.MediaPlayer.*58e5b88e13 // Final|Native|Public|BlueprintCallable // @ game+0x6930344
	void Pause(bool ReturnValue); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6930598
	void *c8600ffcce(struct FName ReturnValue); // Function MediaAssets.MediaPlayer.*c8600ffcce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f588
	void IsPlaying(bool ReturnValue); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6930074
	void *6eac5f7aed(bool ReturnValue); // Function MediaAssets.MediaPlayer.*6eac5f7aed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692ee98
	void IsReady(bool ReturnValue); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6930114
	void *c663c558a5(enum class EMediaPlayerTrack TrackType, int32 ReturnValue); // Function MediaAssets.MediaPlayer.*c663c558a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f4c8
	void Play(bool ReturnValue); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x69305c8
	void *68d324baf9(struct FString URL, bool ReturnValue); // Function MediaAssets.MediaPlayer.*68d324baf9 // Final|Native|Public|BlueprintCallable // @ game+0x692ef84
	void *a8559750e8(struct FString URL, bool ReturnValue); // Function MediaAssets.MediaPlayer.*a8559750e8 // Final|Native|Public|BlueprintCallable // @ game+0x69304cc
	void SelectTrack(enum class EMediaPlayerTrack TrackType, int32 TrackIndex, bool ReturnValue); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6930910
	void SupportsScrubbing(bool ReturnValue); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6930f60
	void IsLooping(bool ReturnValue); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692ffd4
};

// Class MediaAssets.*3b34470fe6
// Size: 0x40 (Inherited: 0x30)
struct U*3b34470fe6 : UObject {
	struct TArray<struct U*4ac95d13e1*> Items; // 0x30(0x10)

	void Remove(struct U*4ac95d13e1* MediaSource); // Function MediaAssets.*3b34470fe6.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6930620
	void Insert(struct U*4ac95d13e1* MediaSource, int32 Index); // Function MediaAssets.*3b34470fe6.Insert // Final|Native|Public|BlueprintCallable // @ game+0x692febc
	void Get(int32 Index, struct U*4ac95d13e1* ReturnValue); // Function MediaAssets.*3b34470fe6.Get // Final|Native|Public|BlueprintCallable // @ game+0x692f08c
	void GetNext(int32 InOutIndex, struct U*4ac95d13e1* ReturnValue); // Function MediaAssets.*3b34470fe6.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x692f41c
	void Num(int32 ReturnValue); // Function MediaAssets.*3b34470fe6.Num // Final|Native|Public|BlueprintCallable // @ game+0x69301c0
	void Add(struct U*4ac95d13e1* MediaSource); // Function MediaAssets.*3b34470fe6.Add // Final|Native|Public|BlueprintCallable // @ game+0x692ede4
	void RemoveAt(int32 Index); // Function MediaAssets.*3b34470fe6.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x69306b8
	void *89bbcdb373(int32 InOutIndex, struct U*4ac95d13e1* ReturnValue); // Function MediaAssets.*3b34470fe6.*89bbcdb373 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x692f6b0
	void *47cf6babb7(int32 InOutIndex, struct U*4ac95d13e1* ReturnValue); // Function MediaAssets.*3b34470fe6.*47cf6babb7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x692f5d8
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

	void *f96247986e(struct FString path); // Function MediaAssets.FileMediaSource.*f96247986e // Final|Native|Public|BlueprintCallable // @ game+0x6930ab4
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

	void *7b39346b53(int32 ReturnValue); // Function MediaAssets.MediaTexture.*7b39346b53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692fe30
	void *623b3fc07f(float ReturnValue); // Function MediaAssets.MediaTexture.*623b3fc07f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f12c
	void *64bfa698d7(int32 ReturnValue); // Function MediaAssets.MediaTexture.*64bfa698d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x692f390
};

