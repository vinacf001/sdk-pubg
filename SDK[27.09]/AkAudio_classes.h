// Class AkAudio.*d2d00875b6
// Size: 0x30 (Inherited: 0x30)
struct U*d2d00875b6 : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x428 (Inherited: 0x408)
struct AAkAmbientSound : AActor {
	char pad_408[0x10]; // 0x408(0x10)
	struct UAkComponent* AkComponent; // 0x418(0x08)
	bool AutoPost; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float AutoPlayDistance; // 0x424(0x04)

	void *ff788e17a8(); // Function AkAudio.AkAmbientSound.*ff788e17a8 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2fea0
	void *600a6ea6d3(); // Function AkAudio.AkAmbientSound.*600a6ea6d3 // Final|Native|Public|BlueprintCallable // @ game+0x6a2de84
	void *6a31e0bc5f(); // Function AkAudio.AkAmbientSound.*6a31e0bc5f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2fbb8
};

// Class AkAudio.*961b84910b
// Size: 0x38 (Inherited: 0x30)
struct U*961b84910b : UObject {
	bool AutoLoad; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioEvent : UObject {
	struct U*961b84910b* RequiredBank; // 0x30(0x08)
	float MaxAttenuationRadius; // 0x38(0x04)
	bool IsInfinite; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinimumDuration; // 0x40(0x04)
	float MaximumDuration; // 0x44(0x04)
};

// Class AkAudio.*f718108d11
// Size: 0x40 (Inherited: 0x30)
struct U*f718108d11 : UObject {
	struct U*961b84910b* RequiredBank; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x730 (Inherited: 0x4d0)
struct UAkComponent : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
	bool *7cb73ccb30; // 0x4e0(0x01)
	bool *49f6f6b49e; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float AttenuationScalingFactor; // 0x4e4(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x4e8(0x08)
	struct FString EventName; // 0x4f0(0x10)
	char pad_500[0x4]; // 0x500(0x04)
	bool *f71753c9cc; // 0x504(0x01)
	char pad_505[0x87]; // 0x505(0x87)
	struct F*5fa39bc974 *470ae32547; // 0x58c(0x10)
	char pad_59C[0xa8]; // 0x59c(0xa8)
	float *8d33722da0; // 0x644(0x04)
	char pad_648[0x90]; // 0x648(0x90)
	SetProperty *e99b99c336; // 0x6d8(0x50)
	char pad_728[0x8]; // 0x728(0x08)

	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2ee00
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2f1dc
	void *429dc22528(); // Function AkAudio.AkComponent.*429dc22528 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2e3ec
	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2f620
	void *986319744d(); // Function AkAudio.AkComponent.*986319744d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2e314
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6a2febc
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6a2f014
	void *b74971531d(); // Function AkAudio.AkComponent.*b74971531d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2f144
	void *b9fbdd0e64(); // Function AkAudio.AkComponent.*b9fbdd0e64 // Final|Native|Public|BlueprintCallable // @ game+0x6a2dc20
	void SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xbd4a28
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6a2de58
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6a2f0a8
	void *0b0e30c42d(); // Function AkAudio.AkComponent.*0b0e30c42d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a30144
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2fd60
	void *57fad08cec(); // Function AkAudio.AkComponent.*57fad08cec // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2e1fc
	void *5cfc6d99fa(); // Function AkAudio.AkComponent.*5cfc6d99fa // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2ded4
	void *600a6ea6d3(); // Function AkAudio.AkComponent.*600a6ea6d3 // Final|Native|Public|BlueprintCallable // @ game+0x6a2deb0
	void *9fa0178ec0(); // Function AkAudio.AkComponent.*9fa0178ec0 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a2f590
	void *c122e7f9b4(); // Function AkAudio.AkComponent.*c122e7f9b4 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a3033c
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6a301d4
};

// Class AkAudio.*3dba4fd279
// Size: 0x30 (Inherited: 0x30)
struct U*3dba4fd279 : UBlueprintFunctionLibrary {

	void SetSwitch(); // Function AkAudio.*3dba4fd279.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2f768
	void *93edd4c1ba(); // Function AkAudio.*3dba4fd279.*93edd4c1ba // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2ff4c
	void StopOutputCapture(); // Function AkAudio.*3dba4fd279.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5a8bed4
	void *45c047f2da(); // Function AkAudio.*3dba4fd279.*45c047f2da // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a30094
	void SetRTPCValue(); // Function AkAudio.*3dba4fd279.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2f350
	void *c592c85921(); // Function AkAudio.*3dba4fd279.*c592c85921 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2e004
	void SetOutputBusVolume(); // Function AkAudio.*3dba4fd279.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2f274
	void StopActor(); // Function AkAudio.*3dba4fd279.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2fd74
	void PostEventAtLocation(); // Function AkAudio.*3dba4fd279.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6a2e5f8
	void *8c97ccadc4(); // Function AkAudio.*3dba4fd279.*8c97ccadc4 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2e1d4
	void GetAkComponent(); // Function AkAudio.*3dba4fd279.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6a2dce0
	void *2551ed7bc4(); // Function AkAudio.*3dba4fd279.*2551ed7bc4 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2eca4
	void *1783ef8029(); // Function AkAudio.*3dba4fd279.*1783ef8029 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2fe20
	void *2c14550b1b(); // Function AkAudio.*3dba4fd279.*2c14550b1b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2fcb0
	void PostEvent(); // Function AkAudio.*3dba4fd279.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2e420
	void UseReverbVolumes(); // Function AkAudio.*3dba4fd279.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a30264
	void *0a6f9491cf(); // Function AkAudio.*3dba4fd279.*0a6f9491cf // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2deec
	void *ed192e6fe6(); // Function AkAudio.*3dba4fd279.*ed192e6fe6 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2ff7c
	void LoadBanks(); // Function AkAudio.*3dba4fd279.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6a2e0b4
	void StartOutputCapture(); // Function AkAudio.*3dba4fd279.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2fc00
	void *6f0bf2549b(); // Function AkAudio.*3dba4fd279.*6f0bf2549b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2f4b8
	void PostEventAttached(); // Function AkAudio.*3dba4fd279.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2ea7c
	void PostTrigger(); // Function AkAudio.*3dba4fd279.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2ef3c
	void *d824fc61ed(); // Function AkAudio.*3dba4fd279.*d824fc61ed // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2fb38
	void *86e7017472(); // Function AkAudio.*3dba4fd279.*86e7017472 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6a2f880
	void *5b81e9b55b(); // Function AkAudio.*3dba4fd279.*5b81e9b55b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2dcb8
	void *0468a2ceea(); // Function AkAudio.*3dba4fd279.*0468a2ceea // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6a2e860
	void StopAll(); // Function AkAudio.*3dba4fd279.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2fdf4
	void *17e6d6faee(); // Function AkAudio.*3dba4fd279.*17e6d6faee // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6a2db64
};

// Class AkAudio.AkReverbVolume
// Size: 0x478 (Inherited: 0x440)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x440(0x01)
	char pad_440_1 : 7; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct U*f718108d11* AuxBus; // 0x448(0x08)
	struct FString AuxBusName; // 0x450(0x10)
	float SendLevel; // 0x460(0x04)
	float FadeRate; // 0x464(0x04)
	float Priority; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct AAkReverbVolume* *505708a82c; // 0x470(0x08)
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
// Size: 0x410 (Inherited: 0x408)
struct AAkSoundVolume : AActor {
	struct U*7902b0d5f1* SoundVolumeComponent; // 0x408(0x08)
};

// Class AkAudio.*d6e6897987
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*d6e6897987 : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
};

// Class AkAudio.*7902b0d5f1
// Size: 0x630 (Inherited: 0x4e0)
struct U*7902b0d5f1 : U*d6e6897987 {
	struct F*f8c9a07364 Struct; // 0x4d8(0x158)
};

// Class AkAudio.*5ee603fddf
// Size: 0x5d0 (Inherited: 0x4e0)
struct U*5ee603fddf : U*d6e6897987 {
	struct F*1703c9495e Struct; // 0x4e0(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e8 (Inherited: 0x38)
struct UAkSoundVolumeManager : U*ed75cbc976 {
	char pad_38[0x150]; // 0x38(0x150)
	struct TMap<struct UObject*, struct F*2605160634> *0f56387deb; // 0x188(0x50)
	char pad_1D8[0x10]; // 0x1d8(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x410 (Inherited: 0x408)
struct AAkSoundVolumePortal : AActor {
	struct U*5ee603fddf* SoundVolumePortalComponent; // 0x408(0x08)
};

// Class AkAudio.*e2767e6e12
// Size: 0x48 (Inherited: 0x38)
struct U*e2767e6e12 : UDataAsset {
	struct TArray<struct F*53c6d3d74f> *6546d029de; // 0x38(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x260 (Inherited: 0x200)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*f8c9a07364> Volumes; // 0x200(0x10)
	struct TArray<struct F*1703c9495e> *0c9a67849c; // 0x210(0x10)
	struct TArray<struct F*f0517a6bce> *8ef1a37a4d; // 0x220(0x10)
	struct TArray<struct F*2fb60a5ad2> *d22be89643; // 0x230(0x10)
	char pad_240[0x20]; // 0x240(0x20)
};

// Class AkAudio.*3ca6e8c209
// Size: 0xb0 (Inherited: 0x98)
struct U*3ca6e8c209 : U*4b768f09da {
	struct TArray<struct F*4500c83e35> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*d7501ab46c
// Size: 0xb0 (Inherited: 0x98)
struct U*d7501ab46c : U*6e2748e3e3 {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*0f685c22fd
// Size: 0x38 (Inherited: 0x30)
struct U*0f685c22fd : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*e2173ed57a
// Size: 0x38 (Inherited: 0x30)
struct U*e2173ed57a : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*145ef3c228
// Size: 0xf0 (Inherited: 0xd0)
struct U*145ef3c228 : UMovieSceneSection {
	struct UAkAudioEvent* Event; // 0xd0(0x08)
	struct FString EventName; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class AkAudio.*9cc86f9cfb
// Size: 0x160 (Inherited: 0xd0)
struct U*9cc86f9cfb : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString Name; // 0xd8(0x10)
	struct FRichCurve *2d625a83c8; // 0xe8(0x70)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class AkAudio.*4bd897fba7
// Size: 0xd0 (Inherited: 0xc0)
struct U*4bd897fba7 : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *97171547c2 : 1; // 0xc8(0x01)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioEventTrack : U*4bd897fba7 {
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioRTPCTrack : U*4bd897fba7 {
};

