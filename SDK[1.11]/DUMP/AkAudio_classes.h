// Class AkAudio.*d609de333c
// Size: 0x28 (Inherited: 0x28)
struct U*d609de333c : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x408 (Inherited: 0x3e8)
struct AAkAmbientSound : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct UAkComponent* AkComponent; // 0x3f8(0x08)
	bool AutoPost; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float AutoPlayDistance; // 0x404(0x04)

	void *60bd4abd28(); // Function AkAudio.AkAmbientSound.*60bd4abd28 // Final|Native|Public|BlueprintCallable // @ game+0x68533ac
	void *fc7f679350(); // Function AkAudio.AkAmbientSound.*fc7f679350 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x68550e8
	void *0b05a900e5(); // Function AkAudio.AkAmbientSound.*0b05a900e5 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6854e00
};

// Class AkAudio.*570d980dee
// Size: 0x30 (Inherited: 0x28)
struct U*570d980dee : UObject {
	bool AutoLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioEvent : UObject {
	struct U*570d980dee* RequiredBank; // 0x28(0x08)
	float MaxAttenuationRadius; // 0x30(0x04)
	bool IsInfinite; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinimumDuration; // 0x38(0x04)
	float MaximumDuration; // 0x3c(0x04)
};

// Class AkAudio.*34df6bd037
// Size: 0x38 (Inherited: 0x28)
struct U*34df6bd037 : UObject {
	struct U*570d980dee* RequiredBank; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x730 (Inherited: 0x4d0)
struct UAkComponent : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
	bool *91ddd35066; // 0x4e0(0x01)
	bool *1f6ce5b46a; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float AttenuationScalingFactor; // 0x4e4(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x4e8(0x08)
	struct FString EventName; // 0x4f0(0x10)
	char pad_500[0x4]; // 0x500(0x04)
	bool *516ab125eb; // 0x504(0x01)
	char pad_505[0x87]; // 0x505(0x87)
	struct F*54ef9cb877 *9fd1ae1a98; // 0x58c(0x10)
	char pad_59C[0xa8]; // 0x59c(0xa8)
	float *131554c2cd; // 0x644(0x04)
	char pad_648[0x90]; // 0x648(0x90)
	SetProperty *9ab668962f; // 0x6d8(0x50)
	char pad_728[0x8]; // 0x728(0x08)

	void *6932824342(); // Function AkAudio.AkComponent.*6932824342 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x685538c
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6855104
	void *3b040943c9(); // Function AkAudio.AkComponent.*3b040943c9 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6853914
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x68546dc
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x685541c
	struct FString *9f8a3a8ca3(); // Function AkAudio.AkComponent.*9f8a3a8ca3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6853724
	void *5e3529ae9c(); // Function AkAudio.AkComponent.*5e3529ae9c // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6854644
	void *89412fc8aa(); // Function AkAudio.AkComponent.*89412fc8aa // Final|Native|Public|BlueprintCallable // @ game+0x6853148
	void *62ded669ad(); // Function AkAudio.AkComponent.*62ded669ad // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6854a90
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6854fa8
	void *b6fc87e04d(); // Function AkAudio.AkComponent.*b6fc87e04d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x68533fc
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6853380
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6854514
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x68545a8
	float SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc7b248
	void *700681c9c9(); // Function AkAudio.AkComponent.*700681c9c9 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6855584
	void *0d6d17c73f(); // Function AkAudio.AkComponent.*0d6d17c73f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x685383c
	void SetSwitch(struct FString SwitchGroup); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6854b20
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6854300
	void *60bd4abd28(); // Function AkAudio.AkComponent.*60bd4abd28 // Final|Native|Public|BlueprintCallable // @ game+0x68533d8
};

// Class AkAudio.*fbcecff142
// Size: 0x28 (Inherited: 0x28)
struct U*fbcecff142 : UBlueprintFunctionLibrary {

	void *cabb8f3224(); // Function AkAudio.*fbcecff142.*cabb8f3224 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68536fc
	int32 SetRTPCValue(); // Function AkAudio.*fbcecff142.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854850
	struct FRotator PostEventAtLocation(struct FString EventName, bool UseReverb); // Function AkAudio.*fbcecff142.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6853af8
	void *50cd4324da(); // Function AkAudio.*fbcecff142.*50cd4324da // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68552dc
	struct FName *93bd3fde99(); // Function AkAudio.*fbcecff142.*93bd3fde99 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68549b8
	void *e694bbe9a1(); // Function AkAudio.*fbcecff142.*e694bbe9a1 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68531e0
	void *7834e9d8d3(); // Function AkAudio.*fbcecff142.*7834e9d8d3 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x685352c
	void *f691a5a127(struct FString EventName); // Function AkAudio.*fbcecff142.*f691a5a127 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68541a4
	void StopAll(); // Function AkAudio.*fbcecff142.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x685503c
	struct FName PostTrigger(); // Function AkAudio.*fbcecff142.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x685443c
	void LoadBanks(); // Function AkAudio.*fbcecff142.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x68535dc
	void StopOutputCapture(); // Function AkAudio.*fbcecff142.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x58fa494
	struct FName SetSwitch(); // Function AkAudio.*fbcecff142.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854c68
	struct FVector *da92214637(struct FRotator Orientation, struct FString EventName); // Function AkAudio.*fbcecff142.*da92214637 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x726910
	struct FString PostEvent(); // Function AkAudio.*fbcecff142.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6853948
	struct U*570d980dee* *bda1bbf63c(); // Function AkAudio.*fbcecff142.*bda1bbf63c // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6853414
	void *5c8374617b(); // Function AkAudio.*fbcecff142.*5c8374617b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68551c4
	bool UseReverbVolumes(); // Function AkAudio.*fbcecff142.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x68554ac
	void *ecf9adfad5(); // Function AkAudio.*fbcecff142.*ecf9adfad5 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854d80
	void *2f14fce355(); // Function AkAudio.*fbcecff142.*2f14fce355 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854ef8
	void SetOutputBusVolume(); // Function AkAudio.*fbcecff142.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854774
	struct FString PostEventAttached(); // Function AkAudio.*fbcecff142.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6853f7c
	void *8e8f48873c(); // Function AkAudio.*fbcecff142.*8e8f48873c // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6855194
	void *0aa7ae634a(); // Function AkAudio.*fbcecff142.*0aa7ae634a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x685308c
	void StopActor(); // Function AkAudio.*fbcecff142.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854fbc
	struct UObject* *074a4ac392(); // Function AkAudio.*fbcecff142.*074a4ac392 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6853d60
	void StartOutputCapture(); // Function AkAudio.*fbcecff142.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6854e48
	void GetAkComponent(struct FName AttachPointName, enum class EAttachLocation LocationType); // Function AkAudio.*fbcecff142.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6853208
	void *4744923e66(); // Function AkAudio.*fbcecff142.*4744923e66 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6855068
};

// Class AkAudio.AkReverbVolume
// Size: 0x458 (Inherited: 0x420)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct U*34df6bd037* AuxBus; // 0x428(0x08)
	struct FString AuxBusName; // 0x430(0x10)
	float SendLevel; // 0x440(0x04)
	float FadeRate; // 0x444(0x04)
	float Priority; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct AAkReverbVolume* *089e97bbcc; // 0x450(0x08)
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
	struct U*2a1034b91f* SoundVolumeComponent; // 0x3e8(0x08)
};

// Class AkAudio.*38a4b9ef48
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*38a4b9ef48 : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
};

// Class AkAudio.*2a1034b91f
// Size: 0x630 (Inherited: 0x4e0)
struct U*2a1034b91f : U*38a4b9ef48 {
	struct F*e48f5e5e98 Struct; // 0x4d8(0x158)
};

// Class AkAudio.*f9485292ab
// Size: 0x5d0 (Inherited: 0x4e0)
struct U*f9485292ab : U*38a4b9ef48 {
	struct F*625dea2c27 Struct; // 0x4e0(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e0 (Inherited: 0x30)
struct UAkSoundVolumeManager : U*468963f0bd {
	char pad_30[0x150]; // 0x30(0x150)
	struct TMap<struct UObject*, struct F*5e6fb77b56> *12eb9a3c7b; // 0x180(0x50)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAkSoundVolumePortal : AActor {
	struct U*f9485292ab* SoundVolumePortalComponent; // 0x3e8(0x08)
};

// Class AkAudio.*aba85388f6
// Size: 0x40 (Inherited: 0x30)
struct U*aba85388f6 : UDataAsset {
	struct TArray<struct F*599efccd43> *e2cfa23aa6; // 0x30(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*e48f5e5e98> Volumes; // 0x1f0(0x10)
	struct TArray<struct F*625dea2c27> *08db606e20; // 0x200(0x10)
	struct TArray<struct F*c20273b376> *d59ed8f1f8; // 0x210(0x10)
	struct TArray<struct F*95e5158016> *5c9e2f4758; // 0x220(0x10)
	char pad_230[0x20]; // 0x230(0x20)
};

// Class AkAudio.*747d1ecea0
// Size: 0xa8 (Inherited: 0x90)
struct U*747d1ecea0 : U*ca9fa09ea0 {
	struct TArray<struct F*45d2d61bc8> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.*1f18283d0c
// Size: 0xa8 (Inherited: 0x90)
struct U*1f18283d0c : U*24e61502be {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.*37af39c672
// Size: 0x30 (Inherited: 0x28)
struct U*37af39c672 : U*227b184286 {
	float *1038881cbc; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.*d209689d92
// Size: 0x30 (Inherited: 0x28)
struct U*d209689d92 : U*227b184286 {
	float *1038881cbc; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.*68b5d3eff6
// Size: 0xf0 (Inherited: 0xd0)
struct U*68b5d3eff6 : UMovieSceneSection {
	struct UAkAudioEvent* Event; // 0xd0(0x08)
	struct FString EventName; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class AkAudio.*15a3e4ead1
// Size: 0x160 (Inherited: 0xd0)
struct U*15a3e4ead1 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString Name; // 0xd8(0x10)
	struct FRichCurve *e7fc2b8ab7; // 0xe8(0x70)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class AkAudio.*f4df44efd7
// Size: 0xd0 (Inherited: 0xc0)
struct U*f4df44efd7 : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *8d76a0eade : 1; // 0xc8(0x01)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioEventTrack : U*f4df44efd7 {
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioRTPCTrack : U*f4df44efd7 {
};

