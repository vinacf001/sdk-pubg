// Class AkAudio.*d609de333c
// Size: 0x30 (Inherited: 0x30)
struct U*d609de333c : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x410 (Inherited: 0x3f0)
struct AAkAmbientSound : AActor {
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UAkComponent* AkComponent; // 0x400(0x08)
	bool AutoPost; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float AutoPlayDistance; // 0x40c(0x04)

	bool *60bd4abd28(); // Function AkAudio.AkAmbientSound.*60bd4abd28 // Final|Native|Public|BlueprintCallable // @ game+0x6651bd0
	void *fc7f679350(); // Function AkAudio.AkAmbientSound.*fc7f679350 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x665390c
	void *0b05a900e5(); // Function AkAudio.AkAmbientSound.*0b05a900e5 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6653624
};

// Class AkAudio.*570d980dee
// Size: 0x38 (Inherited: 0x30)
struct U*570d980dee : UObject {
	bool AutoLoad; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x48 (Inherited: 0x30)
struct UAkAudioEvent : UObject {
	struct U*570d980dee* RequiredBank; // 0x30(0x08)
	float MaxAttenuationRadius; // 0x38(0x04)
	bool IsInfinite; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinimumDuration; // 0x40(0x04)
	float MaximumDuration; // 0x44(0x04)
};

// Class AkAudio.*34df6bd037
// Size: 0x40 (Inherited: 0x30)
struct U*34df6bd037 : UObject {
	struct U*570d980dee* RequiredBank; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
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

	bool *6932824342(); // Function AkAudio.AkComponent.*6932824342 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6653bb0
	int32 StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6653928
	int32 *3b040943c9(); // Function AkAudio.AkComponent.*3b040943c9 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6652138
	float SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6652f00
	bool UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6653c40
	int32 *9f8a3a8ca3(); // Function AkAudio.AkComponent.*9f8a3a8ca3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6651f48
	float *5e3529ae9c(); // Function AkAudio.AkComponent.*5e3529ae9c // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6652e68
	float *89412fc8aa(); // Function AkAudio.AkComponent.*89412fc8aa // Final|Native|Public|BlueprintCallable // @ game+0x665196c
	bool *62ded669ad(); // Function AkAudio.AkComponent.*62ded669ad // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x66532b4
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x66537cc
	bool *b6fc87e04d(); // Function AkAudio.AkComponent.*b6fc87e04d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6651c20
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6651ba4
	int32 SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6652d38
	float SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6652dcc
	int32 SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0xc1d2d0
	bool *700681c9c9(); // Function AkAudio.AkComponent.*700681c9c9 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6653da8
	int32 *0d6d17c73f(); // Function AkAudio.AkComponent.*0d6d17c73f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6652060
	struct FString SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6653344
	struct FString PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6652b24
	bool *60bd4abd28(); // Function AkAudio.AkComponent.*60bd4abd28 // Final|Native|Public|BlueprintCallable // @ game+0x6651bfc
};

// Class AkAudio.*fbcecff142
// Size: 0x30 (Inherited: 0x30)
struct U*fbcecff142 : UBlueprintFunctionLibrary {

	void *cabb8f3224(); // Function AkAudio.*fbcecff142.*cabb8f3224 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6651f20
	struct AActor* SetRTPCValue(); // Function AkAudio.*fbcecff142.SetRTPCValue // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6653074
	int32 PostEventAtLocation(); // Function AkAudio.*fbcecff142.PostEventAtLocation // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x665231c
	struct FString *50cd4324da(); // Function AkAudio.*fbcecff142.*50cd4324da // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6653b00
	struct FName *93bd3fde99(); // Function AkAudio.*fbcecff142.*93bd3fde99 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66531dc
	void *e694bbe9a1(); // Function AkAudio.*fbcecff142.*e694bbe9a1 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6651a04
	struct FString *7834e9d8d3(); // Function AkAudio.*fbcecff142.*7834e9d8d3 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6651d50
	bool *f691a5a127(); // Function AkAudio.*fbcecff142.*f691a5a127 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66529c8
	void StopAll(); // Function AkAudio.*fbcecff142.StopAll // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6653860
	struct AActor* PostTrigger(); // Function AkAudio.*fbcecff142.PostTrigger // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6652c60
	bool LoadBanks(); // Function AkAudio.*fbcecff142.LoadBanks // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6651e00
	void StopOutputCapture(); // Function AkAudio.*fbcecff142.StopOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x5721b1c
	struct AActor* SetSwitch(); // Function AkAudio.*fbcecff142.SetSwitch // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x665348c
	struct UAkComponent* *da92214637(); // Function AkAudio.*fbcecff142.*da92214637 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x7274d0
	int32 PostEvent(); // Function AkAudio.*fbcecff142.PostEvent // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x665216c
	struct FString *bda1bbf63c(); // Function AkAudio.*fbcecff142.*bda1bbf63c // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6651c38
	struct FString *5c8374617b(); // Function AkAudio.*fbcecff142.*5c8374617b // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66539e8
	struct AActor* UseReverbVolumes(); // Function AkAudio.*fbcecff142.UseReverbVolumes // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6653cd0
	struct UObject* *ecf9adfad5(); // Function AkAudio.*fbcecff142.*ecf9adfad5 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66535a4
	struct FString *2f14fce355(); // Function AkAudio.*fbcecff142.*2f14fce355 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x665371c
	struct AActor* SetOutputBusVolume(); // Function AkAudio.*fbcecff142.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6652f98
	int32 PostEventAttached(); // Function AkAudio.*fbcecff142.PostEventAttached // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66527a0
	void *8e8f48873c(); // Function AkAudio.*fbcecff142.*8e8f48873c // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66539b8
	struct FString *0aa7ae634a(); // Function AkAudio.*fbcecff142.*0aa7ae634a // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66518b0
	struct AActor* StopActor(); // Function AkAudio.*fbcecff142.StopActor // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x66537e0
	bool *074a4ac392(); // Function AkAudio.*fbcecff142.*074a4ac392 // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6652584
	struct FString StartOutputCapture(); // Function AkAudio.*fbcecff142.StartOutputCapture // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x665366c
	struct UAkComponent* GetAkComponent(); // Function AkAudio.*fbcecff142.GetAkComponent // Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6651a2c
	struct UObject* *4744923e66(); // Function AkAudio.*fbcecff142.*4744923e66 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x665388c
};

// Class AkAudio.AkReverbVolume
// Size: 0x460 (Inherited: 0x428)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct U*34df6bd037* AuxBus; // 0x430(0x08)
	struct FString AuxBusName; // 0x438(0x10)
	float SendLevel; // 0x448(0x04)
	float FadeRate; // 0x44c(0x04)
	float Priority; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct AAkReverbVolume* *089e97bbcc; // 0x458(0x08)
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
	struct U*2a1034b91f* SoundVolumeComponent; // 0x3f0(0x08)
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
// Size: 0x1e8 (Inherited: 0x38)
struct UAkSoundVolumeManager : U*468963f0bd {
	char pad_38[0x150]; // 0x38(0x150)
	struct TMap<struct UObject*, struct F*5e6fb77b56> *12eb9a3c7b; // 0x188(0x50)
	char pad_1D8[0x10]; // 0x1d8(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x3f8 (Inherited: 0x3f0)
struct AAkSoundVolumePortal : AActor {
	struct U*f9485292ab* SoundVolumePortalComponent; // 0x3f0(0x08)
};

// Class AkAudio.*aba85388f6
// Size: 0x48 (Inherited: 0x38)
struct U*aba85388f6 : UDataAsset {
	struct TArray<struct F*599efccd43> *e2cfa23aa6; // 0x38(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x260 (Inherited: 0x200)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*e48f5e5e98> Volumes; // 0x200(0x10)
	struct TArray<struct F*625dea2c27> *08db606e20; // 0x210(0x10)
	struct TArray<struct F*c20273b376> *d59ed8f1f8; // 0x220(0x10)
	struct TArray<struct F*95e5158016> *5c9e2f4758; // 0x230(0x10)
	char pad_240[0x20]; // 0x240(0x20)
};

// Class AkAudio.*747d1ecea0
// Size: 0xb0 (Inherited: 0x98)
struct U*747d1ecea0 : U*ca9fa09ea0 {
	struct TArray<struct F*45d2d61bc8> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*1f18283d0c
// Size: 0xb0 (Inherited: 0x98)
struct U*1f18283d0c : U*24e61502be {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*37af39c672
// Size: 0x38 (Inherited: 0x30)
struct U*37af39c672 : U*227b184286 {
	float *1038881cbc; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*d209689d92
// Size: 0x38 (Inherited: 0x30)
struct U*d209689d92 : U*227b184286 {
	float *1038881cbc; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
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

