// Class MediaAssets.*cf7efb9af2
// Size: 0xc0 (Inherited: 0x30)
struct U*cf7efb9af2 : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	struct FTimespan *5ddfb76f15(); // Function MediaAssets.*cf7efb9af2.*5ddfb76f15 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67707f8
	struct FTimespan *74df921d93(); // Function MediaAssets.*cf7efb9af2.*74df921d93 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x676ff20
	struct FTimespan *9e3e26a8bc(); // Function MediaAssets.*cf7efb9af2.*9e3e26a8bc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67706dc
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

	struct FFloatRange *97946c5a9f(); // Function MediaAssets.MediaPlayer.*97946c5a9f // Final|Native|Public|BlueprintCallable // @ game+0x677056c
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6770054
	struct UMediaTexture* *adc97a6090(); // Function MediaAssets.MediaPlayer.*adc97a6090 // Final|Native|Public|BlueprintCallable // @ game+0x6771ba8
	int32 *3af0985c84(); // Function MediaAssets.MediaPlayer.*3af0985c84 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770628
	struct FName *5ead074933(); // Function MediaAssets.MediaPlayer.*5ead074933 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770038
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x67713c8
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x677154c
	bool *9136192671(); // Function MediaAssets.MediaPlayer.*9136192671 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6771c38
	struct UMediaSoundWave* *f31402f417(); // Function MediaAssets.MediaPlayer.*f31402f417 // Final|Native|Public|BlueprintCallable // @ game+0x6771b18
	struct FText *f1614bcb99(); // Function MediaAssets.MediaPlayer.*f1614bcb99 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770960
	bool *8ec249724d(); // Function MediaAssets.MediaPlayer.*8ec249724d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770df0
	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6771d7c
	bool OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6770fa0
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770bdc
	bool *5899d96a8c(); // Function MediaAssets.MediaPlayer.*5899d96a8c // Final|Native|Public|BlueprintCallable // @ game+0x676fcb0
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x676fe44
	bool *bbef5ba4fe(); // Function MediaAssets.MediaPlayer.*bbef5ba4fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770e90
	bool *c8a132ff9f(); // Function MediaAssets.MediaPlayer.*c8a132ff9f // Final|Native|Public|BlueprintCallable // @ game+0x6771a70
	bool Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6771614
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x67715b8
	struct FFloatRange *ab1f31ed1c(); // Function MediaAssets.MediaPlayer.*ab1f31ed1c // Final|Native|Public|BlueprintCallable // @ game+0x67700a0
	float *04ac39b0eb(); // Function MediaAssets.MediaPlayer.*04ac39b0eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770528
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6770914
	bool SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6771940
	bool *f3e2071dd9(); // Function MediaAssets.MediaPlayer.*f3e2071dd9 // Final|Native|Public|BlueprintCallable // @ game+0x67711f8
	struct FName *6cb29a9ee8(); // Function MediaAssets.MediaPlayer.*6cb29a9ee8 // Final|Native|Public|BlueprintCallable // @ game+0x67717ec
	struct FString *e145400b1d(); // Function MediaAssets.MediaPlayer.*e145400b1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770a94
	struct U*cf7efb9af2* *d2bd2bd3ff(); // Function MediaAssets.MediaPlayer.*d2bd2bd3ff // Final|Native|Public|BlueprintCallable // @ game+0x67719e0
	bool Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6770f68
	bool *63364087cc(); // Function MediaAssets.MediaPlayer.*63364087cc // Final|Native|Public|BlueprintCallable // @ game+0x677106c
	bool *58e5b88e13(); // Function MediaAssets.MediaPlayer.*58e5b88e13 // Final|Native|Public|BlueprintCallable // @ game+0x6771110
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6771364
	struct FName *c8600ffcce(); // Function MediaAssets.MediaPlayer.*c8600ffcce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770354
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770e40
	bool *6eac5f7aed(); // Function MediaAssets.MediaPlayer.*6eac5f7aed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x676fc64
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770ee0
	int32 *c663c558a5(); // Function MediaAssets.MediaPlayer.*c663c558a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770294
	bool Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6771394
	bool *68d324baf9(); // Function MediaAssets.MediaPlayer.*68d324baf9 // Final|Native|Public|BlueprintCallable // @ game+0x676fd50
	bool *a8559750e8(); // Function MediaAssets.MediaPlayer.*a8559750e8 // Final|Native|Public|BlueprintCallable // @ game+0x6771298
	bool SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x67716dc
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6771d2c
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770da0
};

// Class MediaAssets.*3b34470fe6
// Size: 0x40 (Inherited: 0x30)
struct U*3b34470fe6 : UObject {
	struct TArray<struct U*4ac95d13e1*> Items; // 0x30(0x10)

	struct U*4ac95d13e1* Remove(); // Function MediaAssets.*3b34470fe6.Remove // Final|Native|Public|BlueprintCallable // @ game+0x67713ec
	int32 Insert(); // Function MediaAssets.*3b34470fe6.Insert // Final|Native|Public|BlueprintCallable // @ game+0x6770c88
	struct U*4ac95d13e1* Get(); // Function MediaAssets.*3b34470fe6.Get // Final|Native|Public|BlueprintCallable // @ game+0x676fe58
	struct U*4ac95d13e1* GetNext(); // Function MediaAssets.*3b34470fe6.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67701e8
	int32 Num(); // Function MediaAssets.*3b34470fe6.Num // Final|Native|Public|BlueprintCallable // @ game+0x6770f8c
	struct U*4ac95d13e1* Add(); // Function MediaAssets.*3b34470fe6.Add // Final|Native|Public|BlueprintCallable // @ game+0x676fbb0
	int32 RemoveAt(); // Function MediaAssets.*3b34470fe6.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6771484
	struct U*4ac95d13e1* *89bbcdb373(); // Function MediaAssets.*3b34470fe6.*89bbcdb373 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x677047c
	struct U*4ac95d13e1* *47cf6babb7(); // Function MediaAssets.*3b34470fe6.*47cf6babb7 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67703a4
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

	struct FString *f96247986e(); // Function MediaAssets.FileMediaSource.*f96247986e // Final|Native|Public|BlueprintCallable // @ game+0x6771880
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

	int32 *7b39346b53(); // Function MediaAssets.MediaTexture.*7b39346b53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6770bfc
	float *623b3fc07f(); // Function MediaAssets.MediaTexture.*623b3fc07f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x676fef8
	int32 *64bfa698d7(); // Function MediaAssets.MediaTexture.*64bfa698d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677015c
};

