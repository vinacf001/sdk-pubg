// Class AkAudio.*665e071abd
// Size: 0x30 (Inherited: 0x30)
struct U*665e071abd : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x410 (Inherited: 0x3f0)
struct AAkAmbientSound : AActor {
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UAkComponent* AkComponent; // 0x400(0x08)
	bool AutoPost; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float AutoPlayDistance; // 0x40c(0x04)

	bool *8d9ef64e05(); // Function AkAudio.AkAmbientSound.*8d9ef64e05 // Final|Native|Public|BlueprintCallable // @ game+0x6765528
	void *aa021e9e0b(); // Function AkAudio.AkAmbientSound.*aa021e9e0b // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767144
	void *b513631234(); // Function AkAudio.AkAmbientSound.*b513631234 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6766e5c
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
// Size: 0x6e0 (Inherited: 0x480)
struct UAkComponent : USceneComponent {
	char pad_480[0x8]; // 0x480(0x08)
	bool *dda974bbe6; // 0x488(0x01)
	bool *63a14b11f3; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float AttenuationScalingFactor; // 0x48c(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x490(0x08)
	struct FString EventName; // 0x498(0x10)
	char pad_4A8[0x4]; // 0x4a8(0x04)
	bool *32978b3338; // 0x4ac(0x01)
	char pad_4AD[0x87]; // 0x4ad(0x87)
	struct F*ccccf129dd *fd524db575; // 0x534(0x10)
	char pad_544[0xa8]; // 0x544(0xa8)
	float *1ab2798e68; // 0x5ec(0x04)
	char pad_5F0[0x90]; // 0x5f0(0x90)
	SetProperty *d51abdd3f5; // 0x680(0x50)
	char pad_6D0[0x10]; // 0x6d0(0x10)

	struct FString SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc8ece4
	struct FString PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67664a4
	int32 *a22d339c6f(); // Function AkAudio.AkComponent.*a22d339c6f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67659b8
	int32 *a9cfb03f27(); // Function AkAudio.AkComponent.*a9cfb03f27 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67658a0
	float SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x676674c
	bool *8d9ef64e05(); // Function AkAudio.AkComponent.*8d9ef64e05 // Final|Native|Public|BlueprintCallable // @ game+0x6765554
	float *bf882d3ab3(); // Function AkAudio.AkComponent.*bf882d3ab3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67667e8
	bool *b34e358c2e(); // Function AkAudio.AkComponent.*b34e358c2e // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6766c34
	int32 SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x67666b8
	bool *2ef356f02c(); // Function AkAudio.AkComponent.*2ef356f02c // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67673e8
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x67654fc
	float SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6766880
	bool *293f34ed36(); // Function AkAudio.AkComponent.*293f34ed36 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6765578
	int32 SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6611fc
	bool UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767478
	bool *b6d6fea835(); // Function AkAudio.AkComponent.*b6d6fea835 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x67675e0
	float *c931f3f7c1(); // Function AkAudio.AkComponent.*c931f3f7c1 // Final|Native|Public|BlueprintCallable // @ game+0x67652c4
	int32 StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6767160
	int32 *2250523f02(); // Function AkAudio.AkComponent.*2250523f02 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6765a90
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6767004
};

// Class AkAudio.*5443f3f438
// Size: 0x30 (Inherited: 0x30)
struct U*5443f3f438 : UBlueprintFunctionLibrary {

	int32 PostEventAttached(); // Function AkAudio.*5443f3f438.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766120
	struct FString *bd98a3b188(); // Function AkAudio.*5443f3f438.*bd98a3b188 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6765590
	bool *c8e6b0f518(); // Function AkAudio.*5443f3f438.*c8e6b0f518 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6765f04
	void *2883c3ffc2(); // Function AkAudio.*5443f3f438.*2883c3ffc2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6765878
	bool *68f0e6a66f(); // Function AkAudio.*5443f3f438.*68f0e6a66f // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766348
	struct AActor* StopActor(); // Function AkAudio.*5443f3f438.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767018
	struct FString *0f63154d50(); // Function AkAudio.*5443f3f438.*0f63154d50 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67656a8
	struct UAkComponent* GetAkComponent(); // Function AkAudio.*5443f3f438.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6765384
	struct FString *9b7adc2c2d(); // Function AkAudio.*5443f3f438.*9b7adc2c2d // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766f54
	bool LoadBanks(); // Function AkAudio.*5443f3f438.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6765758
	struct FString *691c459426(); // Function AkAudio.*5443f3f438.*691c459426 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767338
	struct AActor* PostTrigger(); // Function AkAudio.*5443f3f438.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67665e0
	int32 PostEventAtLocation(); // Function AkAudio.*5443f3f438.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6765c9c
	int32 PostEvent(); // Function AkAudio.*5443f3f438.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6765ac4
	struct UObject* *b0b43a3ee0(); // Function AkAudio.*5443f3f438.*b0b43a3ee0 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766ddc
	struct AActor* SetOutputBusVolume(); // Function AkAudio.*5443f3f438.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766918
	struct AActor* UseReverbVolumes(); // Function AkAudio.*5443f3f438.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767508
	struct FName *0fbb3f8c01(); // Function AkAudio.*5443f3f438.*0fbb3f8c01 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766b5c
	struct AActor* SetSwitch(); // Function AkAudio.*5443f3f438.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766cc4
	struct UObject* *798f7c8065(); // Function AkAudio.*5443f3f438.*798f7c8065 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67670c4
	struct FString *e932a67ea2(); // Function AkAudio.*5443f3f438.*e932a67ea2 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767220
	void StopAll(); // Function AkAudio.*5443f3f438.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6767098
	void *1cc23b0298(); // Function AkAudio.*5443f3f438.*1cc23b0298 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x676535c
	void *afbd5e9190(); // Function AkAudio.*5443f3f438.*afbd5e9190 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67671f0
	struct UAkComponent* *2f1f587787(); // Function AkAudio.*5443f3f438.*2f1f587787 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0xb77578
	struct AActor* SetRTPCValue(); // Function AkAudio.*5443f3f438.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x67669f4
	void StopOutputCapture(); // Function AkAudio.*5443f3f438.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x57f5974
	struct FString StartOutputCapture(); // Function AkAudio.*5443f3f438.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6766ea4
	struct FString *6053937f95(); // Function AkAudio.*5443f3f438.*6053937f95 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6765208
};

// Class AkAudio.AkReverbVolume
// Size: 0x460 (Inherited: 0x428)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct U*1a43c89db3* AuxBus; // 0x430(0x08)
	struct FString AuxBusName; // 0x438(0x10)
	float SendLevel; // 0x448(0x04)
	float FadeRate; // 0x44c(0x04)
	float Priority; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct AAkReverbVolume* *77b97fe49f; // 0x458(0x08)
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
// Size: 0x3f8 (Inherited: 0x3f0)
struct AAkSoundVolume : AActor {
	struct U*e5d9a3cb11* SoundVolumeComponent; // 0x3f0(0x08)
};

// Class AkAudio.*ffde9429e4
// Size: 0x480 (Inherited: 0x480)
struct U*ffde9429e4 : USceneComponent {
};

// Class AkAudio.*e5d9a3cb11
// Size: 0x5e0 (Inherited: 0x480)
struct U*e5d9a3cb11 : U*ffde9429e4 {
	struct F*b0dfea1f65 Struct; // 0x480(0x158)
	char pad_5D8[0x8]; // 0x5d8(0x08)
};

// Class AkAudio.*454c2b0b80
// Size: 0x570 (Inherited: 0x480)
struct U*454c2b0b80 : U*ffde9429e4 {
	struct F*6fa33de392 Struct; // 0x480(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e8 (Inherited: 0x38)
struct UAkSoundVolumeManager : U*7563a7fc65 {
	char pad_38[0x150]; // 0x38(0x150)
	struct TMap<struct UObject*, struct F*b6addcbc8c> *68b05d9352; // 0x188(0x50)
	char pad_1D8[0x10]; // 0x1d8(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x3f8 (Inherited: 0x3f0)
struct AAkSoundVolumePortal : AActor {
	struct U*454c2b0b80* SoundVolumePortalComponent; // 0x3f0(0x08)
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

