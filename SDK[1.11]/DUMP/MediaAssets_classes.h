// Class MediaAssets.*657ac4f625
// Size: 0xb0 (Inherited: 0x28)
struct U*657ac4f625 : UObject {
	char pad_28[0x88]; // 0x28(0x88)

	void *e669850b8c(struct TArray<struct F*2f842ff0f7>* OutTexts); // Function MediaAssets.*657ac4f625.*e669850b8c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6661a7c
	struct TArray<struct F*2f842ff0f7> *6d9791edae(); // Function MediaAssets.*657ac4f625.*6d9791edae // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6661960
	void *a64686ba97(struct TArray<struct F*2f842ff0f7>* OutCaptions); // Function MediaAssets.*657ac4f625.*a64686ba97 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66611a8
};

// Class MediaAssets.MediaPlayer
// Size: 0x160 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FMulticastDelegate OnEndReached[0x10]; // 0x40(0x10)
	struct FMulticastDelegate OnMediaClosed[0x10]; // 0x50(0x10)
	struct FMulticastDelegate OnMediaOpened[0x10]; // 0x60(0x10)
	struct FMulticastDelegate OnMediaOpenFailed[0x10]; // 0x70(0x10)
	struct FMulticastDelegate OnPlaybackResumed[0x10]; // 0x80(0x10)
	struct FMulticastDelegate OnPlaybackSuspended[0x10]; // 0x90(0x10)
	bool *183e237120; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char Shuffle : 1; // 0xa4(0x01)
	char Loop : 1; // 0xa4(0x01)
	char pad_A4_2 : 6; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct U*657ac4f625* Overlays[0x08]; // 0xa8(0x08)
	struct U*533c566bc8* PlayList[0x08]; // 0xb0(0x08)
	int32 PlaylistIndex[0x04]; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UMediaSoundWave* SoundWave[0x08]; // 0xc0(0x08)
	struct UMediaTexture* VideoTexture[0x08]; // 0xc8(0x08)
	char pad_D0[0x90]; // 0xd0(0x90)

	void *723396ae1f(); // Function MediaAssets.MediaPlayer.*723396ae1f // Final|Native|Public|BlueprintCallable // @ game+0x6662c60
	void *dd711b7f03(); // Function MediaAssets.MediaPlayer.*dd711b7f03 // Final|Native|Public|BlueprintCallable // @ game+0x6662a6c
	void *3516b49ea9(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.*3516b49ea9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6661518
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x66625e4
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6661e60
	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662020
	void *0ff939e7a3(); // Function MediaAssets.MediaPlayer.*0ff939e7a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66615d8
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x66610cc
	void *7f2ef7f336(); // Function MediaAssets.MediaPlayer.*7f2ef7f336 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662070
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66620c0
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x66627cc
	bool *04dbc16dd2(); // Function MediaAssets.MediaPlayer.*04dbc16dd2 // Final|Native|Public|BlueprintCallable // @ game+0x6661328
	void *a80e41f9f7(struct U*e5589784b8** MediaSource); // Function MediaAssets.MediaPlayer.*a80e41f9f7 // Final|Native|Public|BlueprintCallable // @ game+0x6660f38
	bool *6822b393a3(); // Function MediaAssets.MediaPlayer.*6822b393a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662eb8
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662160
	void *85c391bf75(struct U*533c566bc8** InPlaylist); // Function MediaAssets.MediaPlayer.*85c391bf75 // Final|Native|Public|BlueprintCallable // @ game+0x66622ec
	void *78b9872e61(); // Function MediaAssets.MediaPlayer.*78b9872e61 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66612c0
	int32 *dfabf72562(); // Function MediaAssets.MediaPlayer.*dfabf72562 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6661d18
	bool *11606936ca(); // Function MediaAssets.MediaPlayer.*11606936ca // Final|Native|Public|BlueprintCallable // @ game+0x66617f0
	void *196db359b5(); // Function MediaAssets.MediaPlayer.*196db359b5 // Final|Native|Public|BlueprintCallable // @ game+0x6662e28
	void SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6662bc0
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x6662648
	int32 *ec1ddced55(); // Function MediaAssets.MediaPlayer.*ec1ddced55 // Final|Native|Public|BlueprintCallable // @ game+0x6662390
	void *88925fd759(); // Function MediaAssets.MediaPlayer.*88925fd759 // Final|Native|Public|BlueprintCallable // @ game+0x6662cf0
	int32 *790175e705(); // Function MediaAssets.MediaPlayer.*790175e705 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6661be4
	enum class EMediaPlayerTrack *5250913764(); // Function MediaAssets.MediaPlayer.*5250913764 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66618ac
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x6662220
	int32 SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x666295c
	struct FString *423ccde01c(); // Function MediaAssets.MediaPlayer.*423ccde01c // Final|Native|Public|BlueprintCallable // @ game+0x6662518
	void Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x6662614
	void *dc3025cf1b(); // Function MediaAssets.MediaPlayer.*dc3025cf1b // Final|Native|Public|BlueprintCallable // @ game+0x6662d98
	void *19245c94bc(); // Function MediaAssets.MediaPlayer.*19245c94bc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66617ac
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6661b98
	void Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x66621e8
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x6662838
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662fac
	struct FTimespan Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6662894
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66612dc
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662ffc
	void *c6d29be177(); // Function MediaAssets.MediaPlayer.*c6d29be177 // Final|Native|Public|BlueprintCallable // @ game+0x6662478
	void *1b9c52fbfa(); // Function MediaAssets.MediaPlayer.*1b9c52fbfa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6660eec
	struct FString *5ecf2734e7(); // Function MediaAssets.MediaPlayer.*5ecf2734e7 // Final|Native|Public|BlueprintCallable // @ game+0x6660fd8
	void *538bbcb7f3(); // Function MediaAssets.MediaPlayer.*538bbcb7f3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6662110
};

// Class MediaAssets.*533c566bc8
// Size: 0x38 (Inherited: 0x28)
struct U*533c566bc8 : UObject {
	struct TArray<struct U*e5589784b8*> Items[0x10]; // 0x28(0x10)

	void Get(int32* Index); // Function MediaAssets.*533c566bc8.Get // Final|Native|Public|BlueprintCallable // @ game+0x66610e0
	void RemoveAt(); // Function MediaAssets.*533c566bc8.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x6662704
	struct U*e5589784b8* Insert(); // Function MediaAssets.*533c566bc8.Insert // Final|Native|Public|BlueprintCallable // @ game+0x6661f08
	void GetNext(); // Function MediaAssets.*533c566bc8.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x666146c
	void *64da510b05(); // Function MediaAssets.*533c566bc8.*64da510b05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6661700
	void Num(); // Function MediaAssets.*533c566bc8.Num // Final|Native|Public|BlueprintCallable // @ game+0x666220c
	void Add(); // Function MediaAssets.*533c566bc8.Add // Final|Native|Public|BlueprintCallable // @ game+0x6660e38
	void *0d5419696a(int32* InOutIndex); // Function MediaAssets.*533c566bc8.*0d5419696a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6661628
	void Remove(); // Function MediaAssets.*533c566bc8.Remove // Final|Native|Public|BlueprintCallable // @ game+0x666266c
};

// Class MediaAssets.MediaSoundWave
// Size: 0x360 (Inherited: 0x288)
struct UMediaSoundWave : USoundWave {
	char pad_288[0x8]; // 0x288(0x08)
	int32 AudioTrackIndex[0x04]; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct UMediaPlayer* MediaPlayer[0x08]; // 0x298(0x08)
	char pad_2A0[0xc0]; // 0x2a0(0xc0)
};

// Class MediaAssets.*e5589784b8
// Size: 0x30 (Inherited: 0x28)
struct U*e5589784b8 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MediaAssets.*14c98f9f2c
// Size: 0x38 (Inherited: 0x30)
struct U*14c98f9f2c : U*e5589784b8 {
	struct FName PlayerName[0x08]; // 0x30(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x50 (Inherited: 0x38)
struct UFileMediaSource : U*14c98f9f2c {
	struct FString FilePath[0x10]; // 0x38(0x10)
	bool PrecacheFile; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void *cc8121e075(); // Function MediaAssets.FileMediaSource.*cc8121e075 // Final|Native|Public|BlueprintCallable // @ game+0x6662b00
};

// Class MediaAssets.StreamMediaSource
// Size: 0x48 (Inherited: 0x38)
struct UStreamMediaSource : U*14c98f9f2c {
	struct FString StreamUrl[0x10]; // 0x38(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x38 (Inherited: 0x30)
struct UPlatformMediaSource : U*e5589784b8 {
	struct U*e5589784b8* *e5589784b8[0x08]; // 0x30(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x250 (Inherited: 0x170)
struct UMediaTexture : UTexture {
	char pad_170[0x8]; // 0x170(0x08)
	enum class *8e17248832 AddressX; // 0x178(0x01)
	enum class *8e17248832 AddressY; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	struct FLinearColor ClearColor[0x10]; // 0x17c(0x10)
	bool bDelayedInitialization; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UMediaPlayer* MediaPlayer[0x08]; // 0x190(0x08)
	int32 VideoTrackIndex[0x04]; // 0x198(0x04)
	char pad_19C[0xb4]; // 0x19c(0xb4)

	void *c0fd9307f1(); // Function MediaAssets.MediaTexture.*c0fd9307f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6661e80
	void *2c9e934bb5(); // Function MediaAssets.MediaTexture.*2c9e934bb5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66613e4
	void *bf41e31fc3(); // Function MediaAssets.MediaTexture.*bf41e31fc3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6661180
};

