// Class MediaAssets.*66347ee8b8
// Size: 0xc0 (Inherited: 0x30)
struct U*66347ee8b8 : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	void *dde23501b5(); // Function MediaAssets.*66347ee8b8.*dde23501b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6795f18
	void *c6ec39b2ee(); // Function MediaAssets.*66347ee8b8.*c6ec39b2ee // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6795dfc
	void *65a4be5227(); // Function MediaAssets.*66347ee8b8.*65a4be5227 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6795640
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
	bool *0a028bb924; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char Shuffle : 1; // 0xac(0x01)
	char Loop : 1; // 0xac(0x01)
	char pad_AC_2 : 6; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct U*66347ee8b8* Overlays; // 0xb0(0x08)
	struct U*1fefcdc250* PlayList; // 0xb8(0x08)
	int32 PlaylistIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UMediaSoundWave* SoundWave; // 0xc8(0x08)
	struct UMediaTexture* VideoTexture; // 0xd0(0x08)
	char pad_D8[0x98]; // 0xd8(0x98)

	void *2d012867ae(); // Function MediaAssets.MediaPlayer.*2d012867ae // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6795758
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6796560
	void *d6819f1d9f(); // Function MediaAssets.MediaPlayer.*d6819f1d9f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67959b4
	void Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6796d34
	void *46cfb8391e(); // Function MediaAssets.MediaPlayer.*46cfb8391e // Final|Native|Public|BlueprintCallable // @ game+0x67972c8
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6796600
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6796034
	void *ceb1445812(); // Function MediaAssets.MediaPlayer.*ceb1445812 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6795384
	void *c50df15bc4(); // Function MediaAssets.MediaPlayer.*c50df15bc4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6797358
	void *a273265b9b(); // Function MediaAssets.MediaPlayer.*a273265b9b // Final|Native|Public|BlueprintCallable // @ game+0x67969b8
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679749c
	void *6b6f4aefed(); // Function MediaAssets.MediaPlayer.*6b6f4aefed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6796510
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6796ae8
	void *9175e6cb18(); // Function MediaAssets.MediaPlayer.*9175e6cb18 // Final|Native|Public|BlueprintCallable // @ game+0x67957c0
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x67966c0
	void *fa46056ddf(); // Function MediaAssets.MediaPlayer.*fa46056ddf // Final|Native|Public|BlueprintCallable // @ game+0x6797238
	void *31f82390cc(); // Function MediaAssets.MediaPlayer.*31f82390cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6796080
	void *eafce99873(); // Function MediaAssets.MediaPlayer.*eafce99873 // Final|Native|Public|BlueprintCallable // @ game+0x6796830
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67962fc
	void *5d406483a7(); // Function MediaAssets.MediaPlayer.*5d406483a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6795c48
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6795564
	void *843becc775(); // Function MediaAssets.MediaPlayer.*843becc775 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67961b4
	void *62b14724a7(); // Function MediaAssets.MediaPlayer.*62b14724a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6795d48
	void SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6797060
	void Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6796ab4
	void *ae27c6b02f(); // Function MediaAssets.MediaPlayer.*ae27c6b02f // Final|Native|Public|BlueprintCallable // @ game+0x6796918
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x6796cd8
	void *c2b5012bb0(); // Function MediaAssets.MediaPlayer.*c2b5012bb0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67965b0
	void *02fcfc5106(); // Function MediaAssets.MediaPlayer.*02fcfc5106 // Final|Native|Public|BlueprintCallable // @ game+0x6795470
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6795774
	void *eea297c18c(); // Function MediaAssets.MediaPlayer.*eea297c18c // Final|Native|Public|BlueprintCallable // @ game+0x6796f0c
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6796c6c
	void *df9b39249f(); // Function MediaAssets.MediaPlayer.*df9b39249f // Final|Native|Public|BlueprintCallable // @ game+0x6795c8c
	void *99814981ac(); // Function MediaAssets.MediaPlayer.*99814981ac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6795a74
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6796a84
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679744c
	void *336f003587(); // Function MediaAssets.MediaPlayer.*336f003587 // Final|Native|Public|BlueprintCallable // @ game+0x6797100
	void SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6796dfc
	void *2c942ebae7(); // Function MediaAssets.MediaPlayer.*2c942ebae7 // Final|Native|Public|BlueprintCallable // @ game+0x679678c
	void *86a7605f9a(); // Function MediaAssets.MediaPlayer.*86a7605f9a // Final|Native|Public|BlueprintCallable // @ game+0x67953d0
	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67964c0
	void Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6796688
	void *34916ef7b0(); // Function MediaAssets.MediaPlayer.*34916ef7b0 // Final|Native|Public|BlueprintCallable // @ game+0x6797190
};

// Class MediaAssets.*1fefcdc250
// Size: 0x40 (Inherited: 0x30)
struct U*1fefcdc250 : UObject {
	struct TArray<struct U*ff47d0e8f4*> Items; // 0x30(0x10)

	void Get(); // Function MediaAssets.*1fefcdc250.Get // Final|Native|Public|BlueprintCallable // @ game+0x6795578
	void GetNext(); // Function MediaAssets.*1fefcdc250.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6795908
	void Remove(); // Function MediaAssets.*1fefcdc250.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6796b0c
	void Num(); // Function MediaAssets.*1fefcdc250.Num // Final|Native|Public|BlueprintCallable // @ game+0x67966ac
	void Insert(); // Function MediaAssets.*1fefcdc250.Insert // Final|Native|Public|BlueprintCallable // @ game+0x67963a8
	void RemoveAt(); // Function MediaAssets.*1fefcdc250.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6796ba4
	void Add(); // Function MediaAssets.*1fefcdc250.Add // Final|Native|Public|BlueprintCallable // @ game+0x67952d0
	void *2e1ce1b18d(); // Function MediaAssets.*1fefcdc250.*2e1ce1b18d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6795ac4
	void *a9af84331b(); // Function MediaAssets.*1fefcdc250.*a9af84331b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6795b9c
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

// Class MediaAssets.*ff47d0e8f4
// Size: 0x38 (Inherited: 0x30)
struct U*ff47d0e8f4 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MediaAssets.*5bdbeac096
// Size: 0x40 (Inherited: 0x38)
struct U*5bdbeac096 : U*ff47d0e8f4 {
	struct FName PlayerName; // 0x38(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x58 (Inherited: 0x40)
struct UFileMediaSource : U*5bdbeac096 {
	struct FString FilePath; // 0x40(0x10)
	bool PrecacheFile; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *b32f65d5bb(); // Function MediaAssets.FileMediaSource.*b32f65d5bb // Final|Native|Public|BlueprintCallable // @ game+0x6796fa0
};

// Class MediaAssets.StreamMediaSource
// Size: 0x50 (Inherited: 0x40)
struct UStreamMediaSource : U*5bdbeac096 {
	struct FString StreamUrl; // 0x40(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x40 (Inherited: 0x38)
struct UPlatformMediaSource : U*ff47d0e8f4 {
	struct U*ff47d0e8f4* *ff47d0e8f4; // 0x38(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x260 (Inherited: 0x180)
struct UMediaTexture : UTexture {
	char pad_180[0x8]; // 0x180(0x08)
	enum class *5476cf1861 AddressX; // 0x188(0x01)
	enum class *5476cf1861 AddressY; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	struct FLinearColor ClearColor; // 0x18c(0x10)
	bool bDelayedInitialization; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x1a0(0x08)
	int32 VideoTrackIndex; // 0x1a8(0x04)
	char pad_1AC[0xb4]; // 0x1ac(0xb4)

	void *12a5ac5a31(); // Function MediaAssets.MediaTexture.*12a5ac5a31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679631c
	void *d6909bc6d9(); // Function MediaAssets.MediaTexture.*d6909bc6d9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x679587c
	void *488cf16fbc(); // Function MediaAssets.MediaTexture.*488cf16fbc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6795618
};

