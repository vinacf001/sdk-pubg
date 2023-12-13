// Class AkAudio.*665e071abd
// Size: 0x28 (Inherited: 0x28)
struct U*665e071abd : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x408 (Inherited: 0x3e8)
struct AAkAmbientSound : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct UAkComponent* AkComponent; // 0x3f8(0x08)
	bool AutoPost; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float AutoPlayDistance; // 0x404(0x04)

	void *8d9ef64e05(); // Function AkAudio.AkAmbientSound.*8d9ef64e05 // Final|Native|Public|BlueprintCallable // @ game+0x67667bc
	void *aa021e9e0b(); // Function AkAudio.AkAmbientSound.*aa021e9e0b // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67683d8
	void *b513631234(); // Function AkAudio.AkAmbientSound.*b513631234 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67680f0
};

// Class AkAudio.*6003aad43c
// Size: 0x30 (Inherited: 0x28)
struct U*6003aad43c : UObject {
	bool AutoLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioEvent : UObject {
	struct U*6003aad43c* RequiredBank; // 0x28(0x08)
	float MaxAttenuationRadius; // 0x30(0x04)
	bool IsInfinite; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinimumDuration; // 0x38(0x04)
	float MaximumDuration; // 0x3c(0x04)
};

// Class AkAudio.*1a43c89db3
// Size: 0x38 (Inherited: 0x28)
struct U*1a43c89db3 : UObject {
	struct U*6003aad43c* RequiredBank; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x6c0 (Inherited: 0x460)
struct UAkComponent : USceneComponent {
	char pad_460[0x8]; // 0x460(0x08)
	bool *dda974bbe6; // 0x468(0x01)
	bool *63a14b11f3; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	float AttenuationScalingFactor; // 0x46c(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x470(0x08)
	struct FString EventName; // 0x478(0x10)
	char pad_488[0x4]; // 0x488(0x04)
	bool *32978b3338; // 0x48c(0x01)
	char pad_48D[0x87]; // 0x48d(0x87)
	struct F*ccccf129dd *fd524db575; // 0x514(0x10)
	char pad_524[0xa8]; // 0x524(0xa8)
	float *1ab2798e68; // 0x5cc(0x04)
	char pad_5D0[0x90]; // 0x5d0(0x90)
	SetProperty *d51abdd3f5; // 0x660(0x50)
	char pad_6B0[0x10]; // 0x6b0(0x10)

	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xb865bc
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767738
	struct FString *a22d339c6f(); // Function AkAudio.AkComponent.*a22d339c6f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6766c4c
	struct FString *a9cfb03f27(); // Function AkAudio.AkComponent.*a9cfb03f27 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6766b34
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x67679e0
	void *8d9ef64e05(); // Function AkAudio.AkComponent.*8d9ef64e05 // Final|Native|Public|BlueprintCallable // @ game+0x67667e8
	void *bf882d3ab3(); // Function AkAudio.AkComponent.*bf882d3ab3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767a7c
	void *b34e358c2e(); // Function AkAudio.AkComponent.*b34e358c2e // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767ec8
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x676794c
	void *2ef356f02c(); // Function AkAudio.AkComponent.*2ef356f02c // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x676867c
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6766790
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767b14
	void *293f34ed36(); // Function AkAudio.AkComponent.*293f34ed36 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x676680c
	void SetRTPCValue(float Value); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x73830c
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x676870c
	void *b6d6fea835(); // Function AkAudio.AkComponent.*b6d6fea835 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6768874
	void *c931f3f7c1(); // Function AkAudio.AkComponent.*c931f3f7c1 // Final|Native|Public|BlueprintCallable // @ game+0x6766558
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x67683f4
	void *2250523f02(); // Function AkAudio.AkComponent.*2250523f02 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6766d24
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6768298
};

// Class AkAudio.*5443f3f438
// Size: 0x28 (Inherited: 0x28)
struct U*5443f3f438 : UBlueprintFunctionLibrary {

	struct FString PostEventAttached(); // Function AkAudio.*5443f3f438.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67673b4
	void *bd98a3b188(struct U*6003aad43c* Bank); // Function AkAudio.*5443f3f438.*bd98a3b188 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766824
	struct UObject* *c8e6b0f518(struct FString EventName); // Function AkAudio.*5443f3f438.*c8e6b0f518 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6767198
	void *2883c3ffc2(); // Function AkAudio.*5443f3f438.*2883c3ffc2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766b0c
	void *68f0e6a66f(struct FString EventName); // Function AkAudio.*5443f3f438.*68f0e6a66f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67675dc
	void StopActor(); // Function AkAudio.*5443f3f438.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67682ac
	void *0f63154d50(); // Function AkAudio.*5443f3f438.*0f63154d50 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x676693c
	struct FVector GetAkComponent(enum class EAttachLocation LocationType); // Function AkAudio.*5443f3f438.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6766618
	void *9b7adc2c2d(); // Function AkAudio.*5443f3f438.*9b7adc2c2d // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67681e8
	struct TArray<struct U*6003aad43c*> LoadBanks(); // Function AkAudio.*5443f3f438.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67669ec
	void *691c459426(); // Function AkAudio.*5443f3f438.*691c459426 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67685cc
	void PostTrigger(); // Function AkAudio.*5443f3f438.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767874
	bool PostEventAtLocation(struct FVector Location); // Function AkAudio.*5443f3f438.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6766f30
	struct UAkAudioEvent* PostEvent(struct AActor* Actor, struct FString EventName); // Function AkAudio.*5443f3f438.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766d58
	void *b0b43a3ee0(); // Function AkAudio.*5443f3f438.*b0b43a3ee0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6768070
	float SetOutputBusVolume(); // Function AkAudio.*5443f3f438.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767bac
	bool UseReverbVolumes(); // Function AkAudio.*5443f3f438.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x676879c
	void *0fbb3f8c01(); // Function AkAudio.*5443f3f438.*0fbb3f8c01 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767df0
	struct FName SetSwitch(); // Function AkAudio.*5443f3f438.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767f58
	void *798f7c8065(); // Function AkAudio.*5443f3f438.*798f7c8065 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6768358
	void *e932a67ea2(struct U*6003aad43c* Bank); // Function AkAudio.*5443f3f438.*e932a67ea2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67684b4
	void StopAll(); // Function AkAudio.*5443f3f438.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x676832c
	void *1cc23b0298(); // Function AkAudio.*5443f3f438.*1cc23b0298 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67665f0
	void *afbd5e9190(); // Function AkAudio.*5443f3f438.*afbd5e9190 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6768484
	struct FRotator *2f1f587787(bool AutoPost, bool AutoDestroy); // Function AkAudio.*5443f3f438.*2f1f587787 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x737e30
	int32 SetRTPCValue(); // Function AkAudio.*5443f3f438.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767c88
	void StopOutputCapture(); // Function AkAudio.*5443f3f438.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x57fddd0
	void StartOutputCapture(); // Function AkAudio.*5443f3f438.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6768138
	void *6053937f95(); // Function AkAudio.*5443f3f438.*6053937f95 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x676649c
};

// Class AkAudio.AkReverbVolume
// Size: 0x458 (Inherited: 0x420)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct U*1a43c89db3* AuxBus; // 0x428(0x08)
	struct FString AuxBusName; // 0x430(0x10)
	float SendLevel; // 0x440(0x04)
	float FadeRate; // 0x444(0x04)
	float Priority; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct AAkReverbVolume* *77b97fe49f; // 0x450(0x08)
};

// Class AkAudio.AkSettings
// Size: 0xa0 (Inherited: 0x28)
struct UAkSettings : UObject {
	bool MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x40(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x50(0x10)
	bool SuppressWwiseProjectPathWarnings; // 0x60(0x01)
	char pad_61[0x3f]; // 0x61(0x3f)
};

// Class AkAudio.AkSoundVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAkSoundVolume : AActor {
	struct U*e5d9a3cb11* SoundVolumeComponent; // 0x3e8(0x08)
};

// Class AkAudio.*ffde9429e4
// Size: 0x460 (Inherited: 0x460)
struct U*ffde9429e4 : USceneComponent {
};

// Class AkAudio.*e5d9a3cb11
// Size: 0x5c0 (Inherited: 0x460)
struct U*e5d9a3cb11 : U*ffde9429e4 {
	struct F*b0dfea1f65 Struct; // 0x460(0x158)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class AkAudio.*454c2b0b80
// Size: 0x550 (Inherited: 0x460)
struct U*454c2b0b80 : U*ffde9429e4 {
	struct F*6fa33de392 Struct; // 0x460(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e0 (Inherited: 0x30)
struct UAkSoundVolumeManager : U*7563a7fc65 {
	char pad_30[0x150]; // 0x30(0x150)
	struct TMap<struct UObject*, struct F*b6addcbc8c> *68b05d9352; // 0x180(0x50)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAkSoundVolumePortal : AActor {
	struct U*454c2b0b80* SoundVolumePortalComponent; // 0x3e8(0x08)
};

// Class AkAudio.*7e5bf076b0
// Size: 0x40 (Inherited: 0x30)
struct U*7e5bf076b0 : UDataAsset {
	struct TArray<struct F*eb2f5ca8c9> *53258deb89; // 0x30(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*b0dfea1f65> Volumes; // 0x1f0(0x10)
	struct TArray<struct F*6fa33de392> *868aaba59a; // 0x200(0x10)
	struct TArray<struct F*fbc28ae434> *216ab36078; // 0x210(0x10)
	struct TArray<struct F*f4ded46021> *0dd5f37fa5; // 0x220(0x10)
	char pad_230[0x20]; // 0x230(0x20)
};

// Class AkAudio.*3b08cc8943
// Size: 0xa8 (Inherited: 0x90)
struct U*3b08cc8943 : U*db7d1fa87f {
	struct TArray<struct F*f7853de414> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.*ada3052078
// Size: 0xa8 (Inherited: 0x90)
struct U*ada3052078 : U*d4649cbb86 {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.*3d8d32cf46
// Size: 0x30 (Inherited: 0x28)
struct U*3d8d32cf46 : U*b141bba8ca {
	float *ef07ca8261; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.*31e7e3afdb
// Size: 0x30 (Inherited: 0x28)
struct U*31e7e3afdb : U*b141bba8ca {
	float *ef07ca8261; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
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

