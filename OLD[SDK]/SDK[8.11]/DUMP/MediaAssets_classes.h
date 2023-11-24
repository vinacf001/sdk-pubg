// Class MediaAssets.*66347ee8b8
// Size: 0xb0 (Inherited: 0x28)
struct U*66347ee8b8 : UObject {
	char pad_28[0x88]; // 0x28(0x88)

	void *dde23501b5(struct TArray<struct F*fadf3b7185> OutTexts); // Function MediaAssets.*66347ee8b8.*dde23501b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x658b8a8
	void *c6ec39b2ee(struct TArray<struct F*fadf3b7185> OutSubtitles); // Function MediaAssets.*66347ee8b8.*c6ec39b2ee // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x658b78c
	struct TArray<struct F*fadf3b7185> *65a4be5227(); // Function MediaAssets.*66347ee8b8.*65a4be5227 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x658afd4
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
	bool *0a028bb924; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char Shuffle : 1; // 0xa4(0x01)
	char Loop : 1; // 0xa4(0x01)
	char pad_A4_2 : 6; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct U*66347ee8b8* Overlays; // 0xa8(0x08)
	struct U*1fefcdc250* PlayList; // 0xb0(0x08)
	int32 PlaylistIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UMediaSoundWave* SoundWave; // 0xc0(0x08)
	struct UMediaTexture* VideoTexture; // 0xc8(0x08)
	char pad_D0[0x90]; // 0xd0(0x90)

	void *2d012867ae(); // Function MediaAssets.MediaPlayer.*2d012867ae // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658b0ec
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658beec
	void *d6819f1d9f(); // Function MediaAssets.MediaPlayer.*d6819f1d9f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658b344
	struct FTimespan Seek(); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x658c6c0
	void *46cfb8391e(); // Function MediaAssets.MediaPlayer.*46cfb8391e // Final|Native|Public|BlueprintCallable // @ game+0x658cc54
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658bf8c
	void GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x658b9c4
	void *ceb1445812(); // Function MediaAssets.MediaPlayer.*ceb1445812 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658ad18
	bool *c50df15bc4(); // Function MediaAssets.MediaPlayer.*c50df15bc4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658cce4
	void *a273265b9b(struct FString URL); // Function MediaAssets.MediaPlayer.*a273265b9b // Final|Native|Public|BlueprintCallable // @ game+0x658c344
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658ce28
	void *6b6f4aefed(); // Function MediaAssets.MediaPlayer.*6b6f4aefed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658be9c
	void Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x658c474
	void *9175e6cb18(); // Function MediaAssets.MediaPlayer.*9175e6cb18 // Final|Native|Public|BlueprintCallable // @ game+0x658b154
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x658c04c
	void *fa46056ddf(); // Function MediaAssets.MediaPlayer.*fa46056ddf // Final|Native|Public|BlueprintCallable // @ game+0x658cbc4
	int32 *31f82390cc(); // Function MediaAssets.MediaPlayer.*31f82390cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658ba10
	void *eafce99873(struct U*1fefcdc250* InPlaylist); // Function MediaAssets.MediaPlayer.*eafce99873 // Final|Native|Public|BlueprintCallable // @ game+0x658c1bc
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658bc8c
	void *5d406483a7(); // Function MediaAssets.MediaPlayer.*5d406483a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658b5d8
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x658aef8
	void *843becc775(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.*843becc775 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658bb44
	enum class EMediaPlayerTrack *62b14724a7(); // Function MediaAssets.MediaPlayer.*62b14724a7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658b6d8
	bool SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x658c9ec
	void Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x658c440
	void *ae27c6b02f(); // Function MediaAssets.MediaPlayer.*ae27c6b02f // Final|Native|Public|BlueprintCallable // @ game+0x658c2a4
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x658c664
	void *c2b5012bb0(); // Function MediaAssets.MediaPlayer.*c2b5012bb0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658bf3c
	void *02fcfc5106(); // Function MediaAssets.MediaPlayer.*02fcfc5106 // Final|Native|Public|BlueprintCallable // @ game+0x658ae04
	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x658b108
	void *eea297c18c(); // Function MediaAssets.MediaPlayer.*eea297c18c // Final|Native|Public|BlueprintCallable // @ game+0x658c898
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x658c5f8
	void *df9b39249f(bool Unthinned); // Function MediaAssets.MediaPlayer.*df9b39249f // Final|Native|Public|BlueprintCallable // @ game+0x658b61c
	void *99814981ac(); // Function MediaAssets.MediaPlayer.*99814981ac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658b404
	void Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x658c410
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658cdd8
	void *336f003587(); // Function MediaAssets.MediaPlayer.*336f003587 // Final|Native|Public|BlueprintCallable // @ game+0x658ca8c
	void SelectTrack(int32 TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x658c788
	struct U*1fefcdc250* *2c942ebae7(); // Function MediaAssets.MediaPlayer.*2c942ebae7 // Final|Native|Public|BlueprintCallable // @ game+0x658c118
	struct U*ff47d0e8f4* *86a7605f9a(); // Function MediaAssets.MediaPlayer.*86a7605f9a // Final|Native|Public|BlueprintCallable // @ game+0x658ad64
	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658be4c
	void Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x658c014
	float *34916ef7b0(); // Function MediaAssets.MediaPlayer.*34916ef7b0 // Final|Native|Public|BlueprintCallable // @ game+0x658cb1c
};

// Class MediaAssets.*1fefcdc250
// Size: 0x38 (Inherited: 0x28)
struct U*1fefcdc250 : UObject {
	struct TArray<struct U*ff47d0e8f4*> Items; // 0x28(0x10)

	int32 Get(); // Function MediaAssets.*1fefcdc250.Get // Final|Native|Public|BlueprintCallable // @ game+0x658af0c
	int32 GetNext(); // Function MediaAssets.*1fefcdc250.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x658b298
	void Remove(); // Function MediaAssets.*1fefcdc250.Remove // Final|Native|Public|BlueprintCallable // @ game+0x658c498
	void Num(); // Function MediaAssets.*1fefcdc250.Num // Final|Native|Public|BlueprintCallable // @ game+0x658c038
	struct U*ff47d0e8f4* Insert(); // Function MediaAssets.*1fefcdc250.Insert // Final|Native|Public|BlueprintCallable // @ game+0x658bd34
	void RemoveAt(); // Function MediaAssets.*1fefcdc250.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x658c530
	void Add(); // Function MediaAssets.*1fefcdc250.Add // Final|Native|Public|BlueprintCallable // @ game+0x658ac64
	void *2e1ce1b18d(int32 InOutIndex); // Function MediaAssets.*1fefcdc250.*2e1ce1b18d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x658b454
	int32 *a9af84331b(); // Function MediaAssets.*1fefcdc250.*a9af84331b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x658b52c
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

// Class MediaAssets.*ff47d0e8f4
// Size: 0x30 (Inherited: 0x28)
struct U*ff47d0e8f4 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class MediaAssets.*5bdbeac096
// Size: 0x38 (Inherited: 0x30)
struct U*5bdbeac096 : U*ff47d0e8f4 {
	struct FName PlayerName; // 0x30(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x50 (Inherited: 0x38)
struct UFileMediaSource : U*5bdbeac096 {
	struct FString FilePath; // 0x38(0x10)
	bool PrecacheFile; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void *b32f65d5bb(); // Function MediaAssets.FileMediaSource.*b32f65d5bb // Final|Native|Public|BlueprintCallable // @ game+0x658c92c
};

// Class MediaAssets.StreamMediaSource
// Size: 0x48 (Inherited: 0x38)
struct UStreamMediaSource : U*5bdbeac096 {
	struct FString StreamUrl; // 0x38(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x38 (Inherited: 0x30)
struct UPlatformMediaSource : U*ff47d0e8f4 {
	struct U*ff47d0e8f4* *ff47d0e8f4; // 0x30(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x250 (Inherited: 0x170)
struct UMediaTexture : UTexture {
	char pad_170[0x8]; // 0x170(0x08)
	enum class *5476cf1861 AddressX; // 0x178(0x01)
	enum class *5476cf1861 AddressY; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	struct FLinearColor ClearColor; // 0x17c(0x10)
	bool bDelayedInitialization; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x190(0x08)
	int32 VideoTrackIndex; // 0x198(0x04)
	char pad_19C[0xb4]; // 0x19c(0xb4)

	void *12a5ac5a31(); // Function MediaAssets.MediaTexture.*12a5ac5a31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658bcac
	void *d6909bc6d9(); // Function MediaAssets.MediaTexture.*d6909bc6d9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658b210
	void *488cf16fbc(); // Function MediaAssets.MediaTexture.*488cf16fbc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x658afac
};

