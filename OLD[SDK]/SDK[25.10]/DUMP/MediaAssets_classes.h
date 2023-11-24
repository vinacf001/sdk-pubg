// Class MediaAssets.*657ac4f625
// Size: 0xc0 (Inherited: 0x30)
struct U*657ac4f625 : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	struct FTimespan *e669850b8c(); // Function MediaAssets.*657ac4f625.*e669850b8c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a8167c
	struct FTimespan *6d9791edae(); // Function MediaAssets.*657ac4f625.*6d9791edae // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81560
	struct FTimespan *a64686ba97(); // Function MediaAssets.*657ac4f625.*a64686ba97 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a80da4
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
	bool *183e237120; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char Shuffle : 1; // 0xac(0x01)
	char Loop : 1; // 0xac(0x01)
	char pad_AC_2 : 6; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct U*657ac4f625* Overlays; // 0xb0(0x08)
	struct U*533c566bc8* PlayList; // 0xb8(0x08)
	int32 PlaylistIndex; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UMediaSoundWave* SoundWave; // 0xc8(0x08)
	struct UMediaTexture* VideoTexture; // 0xd0(0x08)
	char pad_D8[0x98]; // 0xd8(0x98)

	struct U*657ac4f625* *723396ae1f(); // Function MediaAssets.MediaPlayer.*723396ae1f // Final|Native|Public|BlueprintCallable // @ game+0x6a82864
	struct FName *dd711b7f03(); // Function MediaAssets.MediaPlayer.*dd711b7f03 // Final|Native|Public|BlueprintCallable // @ game+0x6a82670
	int32 *3516b49ea9(); // Function MediaAssets.MediaPlayer.*3516b49ea9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81118
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6a821e8
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81a60
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81c24
	struct FName *0ff939e7a3(); // Function MediaAssets.MediaPlayer.*0ff939e7a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a811d8
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x6a80cc8
	bool *7f2ef7f336(); // Function MediaAssets.MediaPlayer.*7f2ef7f336 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81c74
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81cc4
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x6a823d0
	struct FFloatRange *04dbc16dd2(); // Function MediaAssets.MediaPlayer.*04dbc16dd2 // Final|Native|Public|BlueprintCallable // @ game+0x6a80f24
	bool *a80e41f9f7(); // Function MediaAssets.MediaPlayer.*a80e41f9f7 // Final|Native|Public|BlueprintCallable // @ game+0x6a80b34
	bool *6822b393a3(); // Function MediaAssets.MediaPlayer.*6822b393a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a82abc
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81d64
	bool *85c391bf75(); // Function MediaAssets.MediaPlayer.*85c391bf75 // Final|Native|Public|BlueprintCallable // @ game+0x6a81ef0
	struct FName *78b9872e61(); // Function MediaAssets.MediaPlayer.*78b9872e61 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a80ebc
	struct FString *dfabf72562(); // Function MediaAssets.MediaPlayer.*dfabf72562 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81918
	struct FFloatRange *11606936ca(); // Function MediaAssets.MediaPlayer.*11606936ca // Final|Native|Public|BlueprintCallable // @ game+0x6a813f0
	struct UMediaTexture* *196db359b5(); // Function MediaAssets.MediaPlayer.*196db359b5 // Final|Native|Public|BlueprintCallable // @ game+0x6a82a2c
	bool SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6a827c4
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6a8224c
	bool *ec1ddced55(); // Function MediaAssets.MediaPlayer.*ec1ddced55 // Final|Native|Public|BlueprintCallable // @ game+0x6a81f94
	bool *88925fd759(); // Function MediaAssets.MediaPlayer.*88925fd759 // Final|Native|Public|BlueprintCallable // @ game+0x6a828f4
	struct FText *790175e705(); // Function MediaAssets.MediaPlayer.*790175e705 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a817e4
	int32 *5250913764(); // Function MediaAssets.MediaPlayer.*5250913764 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a814ac
	bool OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6a81e24
	bool SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x6a82560
	bool *423ccde01c(); // Function MediaAssets.MediaPlayer.*423ccde01c // Final|Native|Public|BlueprintCallable // @ game+0x6a8211c
	bool Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6a82218
	struct UMediaSoundWave* *dc3025cf1b(); // Function MediaAssets.MediaPlayer.*dc3025cf1b // Final|Native|Public|BlueprintCallable // @ game+0x6a8299c
	float *19245c94bc(); // Function MediaAssets.MediaPlayer.*19245c94bc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a813ac
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81798
	bool Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x6a81dec
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x6a8243c
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a82bb0
	bool Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6a82498
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6a80ed8
	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a82c00
	bool *c6d29be177(); // Function MediaAssets.MediaPlayer.*c6d29be177 // Final|Native|Public|BlueprintCallable // @ game+0x6a8207c
	bool *1b9c52fbfa(); // Function MediaAssets.MediaPlayer.*1b9c52fbfa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a80ae8
	bool *5ecf2734e7(); // Function MediaAssets.MediaPlayer.*5ecf2734e7 // Final|Native|Public|BlueprintCallable // @ game+0x6a80bd4
	bool *538bbcb7f3(); // Function MediaAssets.MediaPlayer.*538bbcb7f3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81d14
};

// Class MediaAssets.*533c566bc8
// Size: 0x40 (Inherited: 0x30)
struct U*533c566bc8 : UObject {
	struct TArray<struct U*e5589784b8*> Items; // 0x30(0x10)

	struct U*e5589784b8* Get(); // Function MediaAssets.*533c566bc8.Get // Final|Native|Public|BlueprintCallable // @ game+0x6a80cdc
	int32 RemoveAt(); // Function MediaAssets.*533c566bc8.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6a82308
	int32 Insert(); // Function MediaAssets.*533c566bc8.Insert // Final|Native|Public|BlueprintCallable // @ game+0x6a81b0c
	struct U*e5589784b8* GetNext(); // Function MediaAssets.*533c566bc8.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a8106c
	struct U*e5589784b8* *64da510b05(); // Function MediaAssets.*533c566bc8.*64da510b05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a81300
	int32 Num(); // Function MediaAssets.*533c566bc8.Num // Final|Native|Public|BlueprintCallable // @ game+0x6a81e10
	struct U*e5589784b8* Add(); // Function MediaAssets.*533c566bc8.Add // Final|Native|Public|BlueprintCallable // @ game+0x6a80a34
	struct U*e5589784b8* *0d5419696a(); // Function MediaAssets.*533c566bc8.*0d5419696a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6a81228
	struct U*e5589784b8* Remove(); // Function MediaAssets.*533c566bc8.Remove // Final|Native|Public|BlueprintCallable // @ game+0x6a82270
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

// Class MediaAssets.*e5589784b8
// Size: 0x38 (Inherited: 0x30)
struct U*e5589784b8 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MediaAssets.*14c98f9f2c
// Size: 0x40 (Inherited: 0x38)
struct U*14c98f9f2c : U*e5589784b8 {
	struct FName PlayerName; // 0x38(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x58 (Inherited: 0x40)
struct UFileMediaSource : U*14c98f9f2c {
	struct FString FilePath; // 0x40(0x10)
	bool PrecacheFile; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	struct FString *cc8121e075(); // Function MediaAssets.FileMediaSource.*cc8121e075 // Final|Native|Public|BlueprintCallable // @ game+0x6a82704
};

// Class MediaAssets.StreamMediaSource
// Size: 0x50 (Inherited: 0x40)
struct UStreamMediaSource : U*14c98f9f2c {
	struct FString StreamUrl; // 0x40(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x40 (Inherited: 0x38)
struct UPlatformMediaSource : U*e5589784b8 {
	struct U*e5589784b8* *e5589784b8; // 0x38(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x260 (Inherited: 0x180)
struct UMediaTexture : UTexture {
	char pad_180[0x8]; // 0x180(0x08)
	enum class *8e17248832 AddressX; // 0x188(0x01)
	enum class *8e17248832 AddressY; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	struct FLinearColor ClearColor; // 0x18c(0x10)
	bool bDelayedInitialization; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x1a0(0x08)
	int32 VideoTrackIndex; // 0x1a8(0x04)
	char pad_1AC[0xb4]; // 0x1ac(0xb4)

	int32 *c0fd9307f1(); // Function MediaAssets.MediaTexture.*c0fd9307f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a81a80
	int32 *2c9e934bb5(); // Function MediaAssets.MediaTexture.*2c9e934bb5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a80fe0
	float *bf41e31fc3(); // Function MediaAssets.MediaTexture.*bf41e31fc3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a80d7c
};

