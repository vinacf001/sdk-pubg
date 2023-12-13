// Class AkAudio.*665e071abd
// Size: 0x30 (Inherited: 0x30)
struct U*665e071abd : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x418 (Inherited: 0x3f8)
struct AAkAmbientSound : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UAkComponent* AkComponent; // 0x408(0x08)
	bool AutoPost; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float AutoPlayDistance; // 0x414(0x04)

	void *8d9ef64e05(); // Function AkAudio.AkAmbientSound.*8d9ef64e05 // Final|Native|Public|BlueprintCallable // @ game+0x6987238
	void *aa021e9e0b(); // Function AkAudio.AkAmbientSound.*aa021e9e0b // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6988e3c
	void *b513631234(); // Function AkAudio.AkAmbientSound.*b513631234 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6988b54
};

// Class AkAudio.*6003aad43c
// Size: 0x38 (Inherited: 0x30)
struct U*6003aad43c : UObject {
	bool AutoLoad; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioEvent : UObject {
	struct U*6003aad43c* RequiredBank; // 0x30(0x08)
	float MaxAttenuationRadius; // 0x38(0x04)
	bool IsInfinite; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinimumDuration; // 0x40(0x04)
	float MaximumDuration; // 0x44(0x04)
};

// Class AkAudio.*1a43c89db3
// Size: 0x40 (Inherited: 0x30)
struct U*1a43c89db3 : UObject {
	struct U*6003aad43c* RequiredBank; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x6d0 (Inherited: 0x470)
struct UAkComponent : USceneComponent {
	char pad_470[0x8]; // 0x470(0x08)
	bool *dda974bbe6; // 0x478(0x01)
	bool *63a14b11f3; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float AttenuationScalingFactor; // 0x47c(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x480(0x08)
	struct FString EventName; // 0x488(0x10)
	char pad_498[0x4]; // 0x498(0x04)
	bool *32978b3338; // 0x49c(0x01)
	char pad_49D[0x87]; // 0x49d(0x87)
	struct F*ccccf129dd *fd524db575; // 0x524(0x10)
	char pad_534[0xa8]; // 0x534(0xa8)
	float *1ab2798e68; // 0x5dc(0x04)
	char pad_5E0[0x90]; // 0x5e0(0x90)
	SetProperty *d51abdd3f5; // 0x670(0x50)
	char pad_6C0[0x10]; // 0x6c0(0x10)

	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xd055fc
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x698819c
	void *a22d339c6f(); // Function AkAudio.AkComponent.*a22d339c6f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x69876b0
	void *a9cfb03f27(); // Function AkAudio.AkComponent.*a9cfb03f27 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6987598
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6988444
	void *8d9ef64e05(); // Function AkAudio.AkComponent.*8d9ef64e05 // Final|Native|Public|BlueprintCallable // @ game+0x6987264
	void *bf882d3ab3(); // Function AkAudio.AkComponent.*bf882d3ab3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x69884e0
	void *b34e358c2e(); // Function AkAudio.AkComponent.*b34e358c2e // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x698892c
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x69883b0
	void *2ef356f02c(); // Function AkAudio.AkComponent.*2ef356f02c // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x69890e0
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x698720c
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6988578
	void *293f34ed36(); // Function AkAudio.AkComponent.*293f34ed36 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x590b240
	void SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6fbd00
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6989170
	void *b6d6fea835(); // Function AkAudio.AkComponent.*b6d6fea835 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x69892d8
	void *c931f3f7c1(); // Function AkAudio.AkComponent.*c931f3f7c1 // Final|Native|Public|BlueprintCallable // @ game+0x6986fd4
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6988e58
	void *2250523f02(); // Function AkAudio.AkComponent.*2250523f02 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6987788
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6988cfc
};

// Class AkAudio.*5443f3f438
// Size: 0x30 (Inherited: 0x30)
struct U*5443f3f438 : UBlueprintFunctionLibrary {

	void PostEventAttached(); // Function AkAudio.*5443f3f438.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6987e18
	void *bd98a3b188(); // Function AkAudio.*5443f3f438.*bd98a3b188 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6987288
	void *c8e6b0f518(); // Function AkAudio.*5443f3f438.*c8e6b0f518 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6987bfc
	void *2883c3ffc2(); // Function AkAudio.*5443f3f438.*2883c3ffc2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6987570
	void *68f0e6a66f(); // Function AkAudio.*5443f3f438.*68f0e6a66f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988040
	void StopActor(); // Function AkAudio.*5443f3f438.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988d10
	void *0f63154d50(); // Function AkAudio.*5443f3f438.*0f63154d50 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x69873a0
	void GetAkComponent(); // Function AkAudio.*5443f3f438.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6987094
	void *9b7adc2c2d(); // Function AkAudio.*5443f3f438.*9b7adc2c2d // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988c4c
	void LoadBanks(); // Function AkAudio.*5443f3f438.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6987450
	void *691c459426(); // Function AkAudio.*5443f3f438.*691c459426 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6989030
	void PostTrigger(); // Function AkAudio.*5443f3f438.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x69882d8
	void PostEventAtLocation(); // Function AkAudio.*5443f3f438.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6987994
	void PostEvent(); // Function AkAudio.*5443f3f438.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x69877bc
	void *b0b43a3ee0(); // Function AkAudio.*5443f3f438.*b0b43a3ee0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988ad4
	void SetOutputBusVolume(); // Function AkAudio.*5443f3f438.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988610
	void UseReverbVolumes(); // Function AkAudio.*5443f3f438.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6989200
	void *0fbb3f8c01(); // Function AkAudio.*5443f3f438.*0fbb3f8c01 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988854
	void SetSwitch(); // Function AkAudio.*5443f3f438.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x69889bc
	void *798f7c8065(); // Function AkAudio.*5443f3f438.*798f7c8065 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988dbc
	void *e932a67ea2(); // Function AkAudio.*5443f3f438.*e932a67ea2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988f18
	void StopAll(); // Function AkAudio.*5443f3f438.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988d90
	void *1cc23b0298(); // Function AkAudio.*5443f3f438.*1cc23b0298 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x698706c
	void *afbd5e9190(); // Function AkAudio.*5443f3f438.*afbd5e9190 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988ee8
	void *2f1f587787(); // Function AkAudio.*5443f3f438.*2f1f587787 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fa668
	void SetRTPCValue(); // Function AkAudio.*5443f3f438.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x69886ec
	void StopOutputCapture(); // Function AkAudio.*5443f3f438.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x59ec1b0
	void StartOutputCapture(); // Function AkAudio.*5443f3f438.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6988b9c
	void *6053937f95(); // Function AkAudio.*5443f3f438.*6053937f95 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6986f18
};

// Class AkAudio.AkReverbVolume
// Size: 0x468 (Inherited: 0x430)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct U*1a43c89db3* AuxBus; // 0x438(0x08)
	struct FString AuxBusName; // 0x440(0x10)
	float SendLevel; // 0x450(0x04)
	float FadeRate; // 0x454(0x04)
	float Priority; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct AAkReverbVolume* *77b97fe49f; // 0x460(0x08)
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
// Size: 0x400 (Inherited: 0x3f8)
struct AAkSoundVolume : AActor {
	struct U*e5d9a3cb11* SoundVolumeComponent; // 0x3f8(0x08)
};

// Class AkAudio.*ffde9429e4
// Size: 0x470 (Inherited: 0x470)
struct U*ffde9429e4 : USceneComponent {
};

// Class AkAudio.*e5d9a3cb11
// Size: 0x5d0 (Inherited: 0x470)
struct U*e5d9a3cb11 : U*ffde9429e4 {
	struct F*b0dfea1f65 Struct; // 0x470(0x158)
	char pad_5C8[0x8]; // 0x5c8(0x08)
};

// Class AkAudio.*454c2b0b80
// Size: 0x560 (Inherited: 0x470)
struct U*454c2b0b80 : U*ffde9429e4 {
	struct F*6fa33de392 Struct; // 0x470(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e8 (Inherited: 0x38)
struct UAkSoundVolumeManager : U*7563a7fc65 {
	char pad_38[0x150]; // 0x38(0x150)
	struct TMap<struct UObject*, struct F*b6addcbc8c> *68b05d9352; // 0x188(0x50)
	char pad_1D8[0x10]; // 0x1d8(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x400 (Inherited: 0x3f8)
struct AAkSoundVolumePortal : AActor {
	struct U*454c2b0b80* SoundVolumePortalComponent; // 0x3f8(0x08)
};

// Class AkAudio.*7e5bf076b0
// Size: 0x48 (Inherited: 0x38)
struct U*7e5bf076b0 : UDataAsset {
	struct TArray<struct F*eb2f5ca8c9> *53258deb89; // 0x38(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x260 (Inherited: 0x200)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*b0dfea1f65> Volumes; // 0x200(0x10)
	struct TArray<struct F*6fa33de392> *868aaba59a; // 0x210(0x10)
	struct TArray<struct F*fbc28ae434> *216ab36078; // 0x220(0x10)
	struct TArray<struct F*f4ded46021> *0dd5f37fa5; // 0x230(0x10)
	char pad_240[0x20]; // 0x240(0x20)
};

// Class AkAudio.*3b08cc8943
// Size: 0xb0 (Inherited: 0x98)
struct U*3b08cc8943 : U*db7d1fa87f {
	struct TArray<struct F*f7853de414> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*ada3052078
// Size: 0xb0 (Inherited: 0x98)
struct U*ada3052078 : U*d4649cbb86 {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*3d8d32cf46
// Size: 0x38 (Inherited: 0x30)
struct U*3d8d32cf46 : U*b141bba8ca {
	float *ef07ca8261; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*31e7e3afdb
// Size: 0x38 (Inherited: 0x30)
struct U*31e7e3afdb : U*b141bba8ca {
	float *ef07ca8261; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*2ebf6d3400
// Size: 0xf0 (Inherited: 0xd0)
struct U*2ebf6d3400 : UMovieSceneSection {
	struct UAkAudioEvent* Event; // 0xd0(0x08)
	struct FString EventName; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class AkAudio.*800d15c341
// Size: 0x160 (Inherited: 0xd0)
struct U*800d15c341 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString Name; // 0xd8(0x10)
	struct FRichCurve *aa79e9f954; // 0xe8(0x70)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class AkAudio.*bdc47c6fb4
// Size: 0xd0 (Inherited: 0xc0)
struct U*bdc47c6fb4 : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *9d0d7b969f : 1; // 0xc8(0x01)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioEventTrack : U*bdc47c6fb4 {
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioRTPCTrack : U*bdc47c6fb4 {
};

