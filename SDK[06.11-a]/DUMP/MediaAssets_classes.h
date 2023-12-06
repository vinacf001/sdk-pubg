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

	struct FFloatRange *97946c5a9f(); // Function MediaAssets.MediaPlayer.*97946c5a9f // Final|Native|Public|BlueprintCallable // @ game+0x6c4bd68
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4b850
	struct UMediaTexture* *adc97a6090(); // Function MediaAssets.MediaPlayer.*adc97a6090 // Final|Native|Public|BlueprintCallable // @ game+0x6c4d3a4
	int32 *3af0985c84(); // Function MediaAssets.MediaPlayer.*3af0985c84 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4be24
	struct FName *5ead074933(); // Function MediaAssets.MediaPlayer.*5ead074933 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4b834
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6c4cbc4
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6c4cd48
	bool *9136192671(); // Function MediaAssets.MediaPlayer.*9136192671 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4d434
	struct UMediaSoundWave* *f31402f417(); // Function MediaAssets.MediaPlayer.*f31402f417 // Final|Native|Public|BlueprintCallable // @ game+0x6c4d314
	struct FText *f1614bcb99(); // Function MediaAssets.MediaPlayer.*f1614bcb99 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c15c
	bool *8ec249724d(); // Function MediaAssets.MediaPlayer.*8ec249724d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c5ec
	void SupportsSeeking(bool ReturnValue); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4d578
	void OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6c4c79c
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c3d8
	void *5899d96a8c(struct U*4ac95d13e1* MediaSource, bool ReturnValue); // Function MediaAssets.MediaPlayer.*5899d96a8c // Final|Native|Public|BlueprintCallable // @ game+0x6c4b4ac
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6c4b640
	void *bbef5ba4fe(); // Function MediaAssets.MediaPlayer.*bbef5ba4fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c68c
	void *c8a132ff9f(); // Function MediaAssets.MediaPlayer.*c8a132ff9f // Final|Native|Public|BlueprintCallable // @ game+0x6c4d26c
	void Seek(struct FTimespan Time, bool ReturnValue); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c4ce10
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x6c4cdb4
	void *ab1f31ed1c(); // Function MediaAssets.MediaPlayer.*ab1f31ed1c // Final|Native|Public|BlueprintCallable // @ game+0x6c4b89c
	void *04ac39b0eb(float ReturnValue); // Function MediaAssets.MediaPlayer.*04ac39b0eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4bd24
	void GetTime(struct FTimespan ReturnValue); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c110
	void SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6c4d13c
	bool *f3e2071dd9(); // Function MediaAssets.MediaPlayer.*f3e2071dd9 // Final|Native|Public|BlueprintCallable // @ game+0x6c4c9f4
	struct FName *6cb29a9ee8(); // Function MediaAssets.MediaPlayer.*6cb29a9ee8 // Final|Native|Public|BlueprintCallable // @ game+0x6c4cfe8
	struct FString *e145400b1d(); // Function MediaAssets.MediaPlayer.*e145400b1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c290
	struct U*cf7efb9af2* *d2bd2bd3ff(); // Function MediaAssets.MediaPlayer.*d2bd2bd3ff // Final|Native|Public|BlueprintCallable // @ game+0x6c4d1dc
	bool Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6c4c764
	bool *63364087cc(); // Function MediaAssets.MediaPlayer.*63364087cc // Final|Native|Public|BlueprintCallable // @ game+0x6c4c868
	bool *58e5b88e13(); // Function MediaAssets.MediaPlayer.*58e5b88e13 // Final|Native|Public|BlueprintCallable // @ game+0x6c4c90c
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6c4cb60
	struct FName *c8600ffcce(); // Function MediaAssets.MediaPlayer.*c8600ffcce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4bb50
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c63c
	bool *6eac5f7aed(); // Function MediaAssets.MediaPlayer.*6eac5f7aed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4b460
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c6dc
	void *c663c558a5(enum class EMediaPlayerTrack TrackType, int32 ReturnValue); // Function MediaAssets.MediaPlayer.*c663c558a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4ba90
	void Play(bool ReturnValue); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6c4cb90
	void *68d324baf9(); // Function MediaAssets.MediaPlayer.*68d324baf9 // Final|Native|Public|BlueprintCallable // @ game+0x6c4b54c
	void *a8559750e8(struct FString URL, bool ReturnValue); // Function MediaAssets.MediaPlayer.*a8559750e8 // Final|Native|Public|BlueprintCallable // @ game+0x6c4ca94
	void SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6c4ced8
	void SupportsScrubbing(bool ReturnValue); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4d528
	void IsLooping(bool ReturnValue); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c59c
};

// Class MediaAssets.*3b34470fe6
// Size: 0x40 (Inherited: 0x30)
struct U*3b34470fe6 : UObject {
	struct TArray<struct U*4ac95d13e1*> Items; // 0x30(0x10)

	struct U*4ac95d13e1* Remove(); // Function MediaAssets.*3b34470fe6.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6c4cbe8
	void Insert(struct U*4ac95d13e1* MediaSource, int32 Index); // Function MediaAssets.*3b34470fe6.Insert // Final|Native|Public|BlueprintCallable // @ game+0x6c4c484
	void Get(int32 Index); // Function MediaAssets.*3b34470fe6.Get // Final|Native|Public|BlueprintCallable // @ game+0x6c4b654
	void GetNext(); // Function MediaAssets.*3b34470fe6.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c4b9e4
	void Num(int32 ReturnValue); // Function MediaAssets.*3b34470fe6.Num // Final|Native|Public|BlueprintCallable // @ game+0x6c4c788
	void Add(struct U*4ac95d13e1* MediaSource); // Function MediaAssets.*3b34470fe6.Add // Final|Native|Public|BlueprintCallable // @ game+0x6c4b3ac
	void RemoveAt(); // Function MediaAssets.*3b34470fe6.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6c4cc80
	void *89bbcdb373(struct U*4ac95d13e1* ReturnValue); // Function MediaAssets.*3b34470fe6.*89bbcdb373 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c4bc78
	void *47cf6babb7(int32 InOutIndex, struct U*4ac95d13e1* ReturnValue); // Function MediaAssets.*3b34470fe6.*47cf6babb7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c4bba0
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

	struct FString *f96247986e(); // Function MediaAssets.FileMediaSource.*f96247986e // Final|Native|Public|BlueprintCallable // @ game+0x6c4d07c
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

	int32 *7b39346b53(); // Function MediaAssets.MediaTexture.*7b39346b53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4c3f8
	float *623b3fc07f(); // Function MediaAssets.MediaTexture.*623b3fc07f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4b6f4
	int32 *64bfa698d7(); // Function MediaAssets.MediaTexture.*64bfa698d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c4b958
};

