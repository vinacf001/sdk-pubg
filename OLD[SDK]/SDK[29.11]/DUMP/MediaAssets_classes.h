// Class MediaAssets.*66347ee8b8
// Size: 0xc0 (Inherited: 0x30)
struct U*66347ee8b8 : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	struct FTimespan *dde23501b5(); // Function MediaAssets.*66347ee8b8.*dde23501b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6577324
	struct FTimespan *c6ec39b2ee(); // Function MediaAssets.*66347ee8b8.*c6ec39b2ee // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6577208
	struct FTimespan *65a4be5227(); // Function MediaAssets.*66347ee8b8.*65a4be5227 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6576a4c
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

	struct FName *2d012867ae(); // Function MediaAssets.MediaPlayer.*2d012867ae // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576b64
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x657796c
	int32 *d6819f1d9f(); // Function MediaAssets.MediaPlayer.*d6819f1d9f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576dc0
	bool Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6578140
	struct UMediaTexture* *46cfb8391e(); // Function MediaAssets.MediaPlayer.*46cfb8391e // Final|Native|Public|BlueprintCallable // @ game+0x65786d4
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577a0c
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6577440
	bool *ceb1445812(); // Function MediaAssets.MediaPlayer.*ceb1445812 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576790
	bool *c50df15bc4(); // Function MediaAssets.MediaPlayer.*c50df15bc4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6578764
	bool *a273265b9b(); // Function MediaAssets.MediaPlayer.*a273265b9b // Final|Native|Public|BlueprintCallable // @ game+0x6577dc4
	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65788a8
	bool *6b6f4aefed(); // Function MediaAssets.MediaPlayer.*6b6f4aefed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x657791c
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6577ef4
	struct FFloatRange *9175e6cb18(); // Function MediaAssets.MediaPlayer.*9175e6cb18 // Final|Native|Public|BlueprintCallable // @ game+0x6576bcc
	bool OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6577acc
	struct UMediaSoundWave* *fa46056ddf(); // Function MediaAssets.MediaPlayer.*fa46056ddf // Final|Native|Public|BlueprintCallable // @ game+0x6578644
	struct FText *31f82390cc(); // Function MediaAssets.MediaPlayer.*31f82390cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x657748c
	bool *eafce99873(); // Function MediaAssets.MediaPlayer.*eafce99873 // Final|Native|Public|BlueprintCallable // @ game+0x6577c3c
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577708
	float *5d406483a7(); // Function MediaAssets.MediaPlayer.*5d406483a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577054
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6576970
	struct FString *843becc775(); // Function MediaAssets.MediaPlayer.*843becc775 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65775c0
	int32 *62b14724a7(); // Function MediaAssets.MediaPlayer.*62b14724a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577154
	bool SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x657846c
	bool Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6577ec0
	bool *ae27c6b02f(); // Function MediaAssets.MediaPlayer.*ae27c6b02f // Final|Native|Public|BlueprintCallable // @ game+0x6577d24
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x65780e4
	bool *c2b5012bb0(); // Function MediaAssets.MediaPlayer.*c2b5012bb0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65779bc
	bool *02fcfc5106(); // Function MediaAssets.MediaPlayer.*02fcfc5106 // Final|Native|Public|BlueprintCallable // @ game+0x657687c
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6576b80
	struct FName *eea297c18c(); // Function MediaAssets.MediaPlayer.*eea297c18c // Final|Native|Public|BlueprintCallable // @ game+0x6578318
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6578078
	struct FFloatRange *df9b39249f(); // Function MediaAssets.MediaPlayer.*df9b39249f // Final|Native|Public|BlueprintCallable // @ game+0x6577098
	struct FName *99814981ac(); // Function MediaAssets.MediaPlayer.*99814981ac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576e80
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6577e90
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6578858
	struct U*66347ee8b8* *336f003587(); // Function MediaAssets.MediaPlayer.*336f003587 // Final|Native|Public|BlueprintCallable // @ game+0x657850c
	bool SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6578208
	bool *2c942ebae7(); // Function MediaAssets.MediaPlayer.*2c942ebae7 // Final|Native|Public|BlueprintCallable // @ game+0x6577b98
	bool *86a7605f9a(); // Function MediaAssets.MediaPlayer.*86a7605f9a // Final|Native|Public|BlueprintCallable // @ game+0x65767dc
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65778cc
	bool Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6577a94
	bool *34916ef7b0(); // Function MediaAssets.MediaPlayer.*34916ef7b0 // Final|Native|Public|BlueprintCallable // @ game+0x657859c
};

// Class MediaAssets.*1fefcdc250
// Size: 0x40 (Inherited: 0x30)
struct U*1fefcdc250 : UObject {
	struct TArray<struct U*ff47d0e8f4*> Items; // 0x30(0x10)

	struct U*ff47d0e8f4* Get(); // Function MediaAssets.*1fefcdc250.Get // Final|Native|Public|BlueprintCallable // @ game+0x6576984
	struct U*ff47d0e8f4* GetNext(); // Function MediaAssets.*1fefcdc250.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6576d14
	struct U*ff47d0e8f4* Remove(); // Function MediaAssets.*1fefcdc250.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6577f18
	int32 Num(); // Function MediaAssets.*1fefcdc250.Num // Final|Native|Public|BlueprintCallable // @ game+0x6577ab8
	int32 Insert(); // Function MediaAssets.*1fefcdc250.Insert // Final|Native|Public|BlueprintCallable // @ game+0x65777b4
	int32 RemoveAt(); // Function MediaAssets.*1fefcdc250.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6577fb0
	struct U*ff47d0e8f4* Add(); // Function MediaAssets.*1fefcdc250.Add // Final|Native|Public|BlueprintCallable // @ game+0x65766dc
	struct U*ff47d0e8f4* *2e1ce1b18d(); // Function MediaAssets.*1fefcdc250.*2e1ce1b18d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6576ed0
	struct U*ff47d0e8f4* *a9af84331b(); // Function MediaAssets.*1fefcdc250.*a9af84331b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6576fa8
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

	struct FString *b32f65d5bb(); // Function MediaAssets.FileMediaSource.*b32f65d5bb // Final|Native|Public|BlueprintCallable // @ game+0x65783ac
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

	int32 *12a5ac5a31(); // Function MediaAssets.MediaTexture.*12a5ac5a31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6577728
	int32 *d6909bc6d9(); // Function MediaAssets.MediaTexture.*d6909bc6d9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576c88
	float *488cf16fbc(); // Function MediaAssets.MediaTexture.*488cf16fbc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6576a24
};

