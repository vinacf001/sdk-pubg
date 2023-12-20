// Class AkAudio.*fa94dd61eb
// Size: 0x30 (Inherited: 0x30)
struct U*fa94dd61eb : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x408 (Inherited: 0x3e8)
struct AAkAmbientSound : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct UAkComponent* AkComponent; // 0x3f8(0x08)
	bool AutoPost; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float AutoPlayDistance; // 0x404(0x04)

	void *cd6e58ba06(); // Function AkAudio.AkAmbientSound.*cd6e58ba06 // Final|Native|Public|BlueprintCallable // @ game+0x6e4a190
	void *4b4d181bf3(); // Function AkAudio.AkAmbientSound.*4b4d181bf3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4bd2c
	void *d63c6fb903(); // Function AkAudio.AkAmbientSound.*d63c6fb903 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4c014
};

// Class AkAudio.*0b1bc3e196
// Size: 0x38 (Inherited: 0x30)
struct U*0b1bc3e196 : UObject {
	bool AutoLoad; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioEvent : UObject {
	struct U*0b1bc3e196* RequiredBank; // 0x30(0x08)
	float MaxAttenuationRadius; // 0x38(0x04)
	bool IsInfinite; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinimumDuration; // 0x40(0x04)
	float MaximumDuration; // 0x44(0x04)
};

// Class AkAudio.*19dbea6f8b
// Size: 0x40 (Inherited: 0x30)
struct U*19dbea6f8b : UObject {
	struct U*0b1bc3e196* RequiredBank; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x6d0 (Inherited: 0x470)
struct UAkComponent : USceneComponent {
	char pad_470[0x8]; // 0x470(0x08)
	bool *eb080f17b9; // 0x478(0x01)
	bool *b589da66c8; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float AttenuationScalingFactor; // 0x47c(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x480(0x08)
	struct FString EventName; // 0x488(0x10)
	char pad_498[0x4]; // 0x498(0x04)
	bool *48841d427a; // 0x49c(0x01)
	char pad_49D[0x87]; // 0x49d(0x87)
	struct F*8d35ae13c9 *ddadd4500a; // 0x524(0x10)
	char pad_534[0xa8]; // 0x534(0xa8)
	float *fc1d08a734; // 0x5dc(0x04)
	char pad_5E0[0x90]; // 0x5e0(0x90)
	SetProperty *cda73ccf48; // 0x670(0x50)
	char pad_6C0[0x10]; // 0x6c0(0x10)

	void *5b28cdf2d7(); // Function AkAudio.AkComponent.*5b28cdf2d7 // Final|Native|Public|BlueprintCallable // @ game+0x6e49f2c
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4c348
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4bed4
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6e4c030
	void *e5449e0c23(); // Function AkAudio.AkComponent.*e5449e0c23 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4a6e0
	void SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4b61c
	void *f3d387403a(); // Function AkAudio.AkComponent.*f3d387403a // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4b9bc
	void *648f21b6ad(); // Function AkAudio.AkComponent.*648f21b6ad // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4c2b8
	void *a72c7063e0(); // Function AkAudio.AkComponent.*a72c7063e0 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4a4f0
	void *3347f820ef(); // Function AkAudio.AkComponent.*3347f820ef // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4c4b0
	void *9e62df1780(); // Function AkAudio.AkComponent.*9e62df1780 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d8b60c
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6e4b374
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6e4a164
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6e4b2e0
	void *cd6e58ba06(); // Function AkAudio.AkComponent.*cd6e58ba06 // Final|Native|Public|BlueprintCallable // @ game+0x6e4a1bc
	void *dc9df620e3(); // Function AkAudio.AkComponent.*dc9df620e3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4a608
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4b0cc
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4b4a8
	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4ba4c
	void *fa26d13bc7(); // Function AkAudio.AkComponent.*fa26d13bc7 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4b410
};

// Class AkAudio.*937a5fb9d7
// Size: 0x30 (Inherited: 0x30)
struct U*937a5fb9d7 : UBlueprintFunctionLibrary {

	void *f296fe8781(); // Function AkAudio.*937a5fb9d7.*f296fe8781 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4bf94
	void SetRTPCValue(); // Function AkAudio.*937a5fb9d7.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4b77c
	void SetSwitch(); // Function AkAudio.*937a5fb9d7.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4bb94
	void PostEventAtLocation(); // Function AkAudio.*937a5fb9d7.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6e4a8c4
	void *5b0181ec5d(); // Function AkAudio.*937a5fb9d7.*5b0181ec5d // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4c208
	void *f8b3360a4b(); // Function AkAudio.*937a5fb9d7.*f8b3360a4b // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6e4ab2c
	void *919233274b(); // Function AkAudio.*937a5fb9d7.*919233274b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4a1e0
	void *5d5550412f(); // Function AkAudio.*937a5fb9d7.*5d5550412f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4be24
	void *66813d447a(); // Function AkAudio.*937a5fb9d7.*66813d447a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4c0f0
	void PostTrigger(); // Function AkAudio.*937a5fb9d7.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4b208
	void StopActor(); // Function AkAudio.*937a5fb9d7.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4bee8
	void *8327ef3534(); // Function AkAudio.*937a5fb9d7.*8327ef3534 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4a2f8
	void PostEvent(); // Function AkAudio.*937a5fb9d7.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4a714
	void UseReverbVolumes(); // Function AkAudio.*937a5fb9d7.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4c3d8
	void PostEventAttached(); // Function AkAudio.*937a5fb9d7.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4ad48
	void StopAll(); // Function AkAudio.*937a5fb9d7.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4bf68
	void *48fc5fc003(); // Function AkAudio.*937a5fb9d7.*48fc5fc003 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4a4c8
	void *fe4f023310(); // Function AkAudio.*937a5fb9d7.*fe4f023310 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e49e70
	void LoadBanks(); // Function AkAudio.*937a5fb9d7.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6e4a3a8
	void StopOutputCapture(); // Function AkAudio.*937a5fb9d7.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5e74160
	void GetAkComponent(); // Function AkAudio.*937a5fb9d7.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6e49fec
	void *a87daab608(); // Function AkAudio.*937a5fb9d7.*a87daab608 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e49fc4
	void SetOutputBusVolume(); // Function AkAudio.*937a5fb9d7.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4b540
	void StartOutputCapture(); // Function AkAudio.*937a5fb9d7.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4bd74
	void *c01d08938d(); // Function AkAudio.*937a5fb9d7.*c01d08938d // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4c0c0
	void *a0d218bfae(); // Function AkAudio.*937a5fb9d7.*a0d218bfae // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4bcac
	void *0c6bf5a736(); // Function AkAudio.*937a5fb9d7.*0c6bf5a736 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4b8e4
	void *0fb21f80bd(); // Function AkAudio.*937a5fb9d7.*0fb21f80bd // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6e4af70
	void *ee958295f0(); // Function AkAudio.*937a5fb9d7.*ee958295f0 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x7b05ac
};

// Class AkAudio.AkReverbVolume
// Size: 0x458 (Inherited: 0x420)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct U*19dbea6f8b* AuxBus; // 0x428(0x08)
	struct FString AuxBusName; // 0x430(0x10)
	float SendLevel; // 0x440(0x04)
	float FadeRate; // 0x444(0x04)
	float Priority; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct AAkReverbVolume* *f751b54f01; // 0x450(0x08)
};

// Class AkAudio.AkSettings
// Size: 0xa8 (Inherited: 0x30)
struct UAkSettings : UObject {
	bool MaxSimultaneousReverbVolumes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x48(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x58(0x10)
	bool SuppressWwiseProjectPathWarnings; // 0x68(0x01)
	char pad_69[0x3f]; // 0x69(0x3f)
};

// Class AkAudio.AkSoundVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAkSoundVolume : AActor {
	struct U*9851be14e2* SoundVolumeComponent; // 0x3e8(0x08)
};

// Class AkAudio.*885997a705
// Size: 0x470 (Inherited: 0x470)
struct U*885997a705 : USceneComponent {
};

// Class AkAudio.*9851be14e2
// Size: 0x5d0 (Inherited: 0x470)
struct U*9851be14e2 : U*885997a705 {
	struct F*f524627b2a Struct; // 0x470(0x158)
	char pad_5C8[0x8]; // 0x5c8(0x08)
};

// Class AkAudio.*d8c6edd270
// Size: 0x560 (Inherited: 0x470)
struct U*d8c6edd270 : U*885997a705 {
	struct F*fe97e5a054 Struct; // 0x470(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e8 (Inherited: 0x38)
struct UAkSoundVolumeManager : U*ee34789f9a {
	char pad_38[0x150]; // 0x38(0x150)
	struct TMap<struct UObject*, struct F*a8c0533dc3> *231c72bbec; // 0x188(0x50)
	char pad_1D8[0x10]; // 0x1d8(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAkSoundVolumePortal : AActor {
	struct U*d8c6edd270* SoundVolumePortalComponent; // 0x3e8(0x08)
};

// Class AkAudio.*ac656ba6d3
// Size: 0x48 (Inherited: 0x38)
struct U*ac656ba6d3 : UDataAsset {
	struct TArray<struct F*dc64eb5c0a> *c48899c910; // 0x38(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x260 (Inherited: 0x200)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*f524627b2a> Volumes; // 0x200(0x10)
	struct TArray<struct F*fe97e5a054> *c97b97b53e; // 0x210(0x10)
	struct TArray<struct F*8d152ac5ac> *4140ece2d8; // 0x220(0x10)
	struct TArray<struct F*f1216c49e5> *4bfa540d16; // 0x230(0x10)
	char pad_240[0x20]; // 0x240(0x20)
};

// Class AkAudio.*ffc388721d
// Size: 0xb0 (Inherited: 0x98)
struct U*ffc388721d : U*35c972b7e7 {
	struct TArray<struct F*014244e398> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*5662951e50
// Size: 0xb0 (Inherited: 0x98)
struct U*5662951e50 : U*031396ff59 {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*581e278303
// Size: 0x38 (Inherited: 0x30)
struct U*581e278303 : U*2e17404cd6 {
	float *b70bd2a7cd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*f3f9de4404
// Size: 0x38 (Inherited: 0x30)
struct U*f3f9de4404 : U*2e17404cd6 {
	float *b70bd2a7cd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*2f5ffc229f
// Size: 0xf0 (Inherited: 0xd0)
struct U*2f5ffc229f : UMovieSceneSection {
	struct UAkAudioEvent* Event; // 0xd0(0x08)
	struct FString EventName; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class AkAudio.*abc3097a41
// Size: 0x160 (Inherited: 0xd0)
struct U*abc3097a41 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString Name; // 0xd8(0x10)
	struct FRichCurve *0796ed81e5; // 0xe8(0x70)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class AkAudio.*9eee6d071d
// Size: 0xd0 (Inherited: 0xc0)
struct U*9eee6d071d : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *8e0331d5c2 : 1; // 0xc8(0x01)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioEventTrack : U*9eee6d071d {
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioRTPCTrack : U*9eee6d071d {
};

