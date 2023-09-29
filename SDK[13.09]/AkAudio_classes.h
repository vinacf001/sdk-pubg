// Class AkAudio.*d2d00875b6
// Size: 0x28 (Inherited: 0x28)
struct U*d2d00875b6 : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x418 (Inherited: 0x3f8)
struct AAkAmbientSound : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UAkComponent* AkComponent; // 0x408(0x08)
	bool AutoPost; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float AutoPlayDistance; // 0x414(0x04)

	void *ff788e17a8(); // Function AkAudio.AkAmbientSound.*ff788e17a8 // None // @ game+0x65e5638
	void *600a6ea6d3(); // Function AkAudio.AkAmbientSound.*600a6ea6d3 // None // @ game+0x65e361c
	void *6a31e0bc5f(); // Function AkAudio.AkAmbientSound.*6a31e0bc5f // None // @ game+0x65e5350
};

// Class AkAudio.*961b84910b
// Size: 0x30 (Inherited: 0x28)
struct U*961b84910b : UObject {
	bool AutoLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioEvent : UObject {
	struct U*961b84910b* RequiredBank; // 0x28(0x08)
	float MaxAttenuationRadius; // 0x30(0x04)
	bool IsInfinite; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinimumDuration; // 0x38(0x04)
	float MaximumDuration; // 0x3c(0x04)
};

// Class AkAudio.*f718108d11
// Size: 0x38 (Inherited: 0x28)
struct U*f718108d11 : UObject {
	struct U*961b84910b* RequiredBank; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x720 (Inherited: 0x4c0)
struct UAkComponent : USceneComponent {
	char pad_4C0[0x10]; // 0x4c0(0x10)
	bool *7cb73ccb30; // 0x4d0(0x01)
	bool *49f6f6b49e; // 0x4d1(0x01)
	char pad_4D2[0x2]; // 0x4d2(0x02)
	float AttenuationScalingFactor; // 0x4d4(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x4d8(0x08)
	struct FString EventName; // 0x4e0(0x10)
	char pad_4F0[0x4]; // 0x4f0(0x04)
	bool *f71753c9cc; // 0x4f4(0x01)
	char pad_4F5[0x87]; // 0x4f5(0x87)
	struct F*5fa39bc974 *470ae32547; // 0x57c(0x10)
	char pad_58C[0xa8]; // 0x58c(0xa8)
	float *8d33722da0; // 0x634(0x04)
	char pad_638[0x90]; // 0x638(0x90)
	SetProperty *e99b99c336; // 0x6c8(0x50)
	char pad_718[0x8]; // 0x718(0x08)

	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // None // @ game+0x65e4598
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // None // @ game+0x65e4974
	void *429dc22528(); // Function AkAudio.AkComponent.*429dc22528 // None // @ game+0x65e3b84
	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // None // @ game+0x65e4db8
	struct FString *986319744d(); // Function AkAudio.AkComponent.*986319744d // None // @ game+0x65e3aac
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // None // @ game+0x65e5654
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // None // @ game+0x65e47ac
	void *b74971531d(); // Function AkAudio.AkComponent.*b74971531d // None // @ game+0x65e48dc
	void *b9fbdd0e64(); // Function AkAudio.AkComponent.*b9fbdd0e64 // None // @ game+0x65e33b8
	float SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // None // @ game+0xaed454
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // None // @ game+0x65e35f0
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // None // @ game+0x65e4840
	void *0b0e30c42d(); // Function AkAudio.AkComponent.*0b0e30c42d // None // @ game+0x65e58dc
	void Stop(); // Function AkAudio.AkComponent.Stop // None // @ game+0x65e54f8
	void *57fad08cec(struct FString in_EventName); // Function AkAudio.AkComponent.*57fad08cec // None // @ game+0x65e3994
	void *5cfc6d99fa(); // Function AkAudio.AkComponent.*5cfc6d99fa // None // @ game+0x65e366c
	void *600a6ea6d3(); // Function AkAudio.AkComponent.*600a6ea6d3 // None // @ game+0x65e3648
	void *9fa0178ec0(); // Function AkAudio.AkComponent.*9fa0178ec0 // None // @ game+0x65e4d28
	void *c122e7f9b4(); // Function AkAudio.AkComponent.*c122e7f9b4 // None // @ game+0x65e5ad4
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // None // @ game+0x65e596c
};

// Class AkAudio.*3dba4fd279
// Size: 0x28 (Inherited: 0x28)
struct U*3dba4fd279 : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkReverbVolume
// Size: 0x468 (Inherited: 0x430)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct U*f718108d11* AuxBus; // 0x438(0x08)
	struct FString AuxBusName; // 0x440(0x10)
	float SendLevel; // 0x450(0x04)
	float FadeRate; // 0x454(0x04)
	float Priority; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct AAkReverbVolume* *505708a82c; // 0x460(0x08)
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
// Size: 0x400 (Inherited: 0x3f8)
struct AAkSoundVolume : AActor {
	struct U*7902b0d5f1* SoundVolumeComponent; // 0x3f8(0x08)
};

// Class AkAudio.*d6e6897987
// Size: 0x4d0 (Inherited: 0x4c0)
struct U*d6e6897987 : USceneComponent {
	enum class *1d65b135dd DetailMode; // 0x1f0(0x01)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x1f8(0x10)
	char pad_4D1_0 : 1; // 0x4d1(0x01)
	char bReplicatesAttachmentReference : 1; // 0x208(0x01)
	char bReplicatesAttachment : 1; // 0x208(0x01)
	char *9874f81ad0 : 1; // 0x208(0x01)
	char pad_4D1_4 : 1; // 0x4d1(0x01)
	char bAbsoluteLocation : 1; // 0x208(0x01)
	char bAbsoluteRotation : 1; // 0x208(0x01)
	char bAbsoluteScale : 1; // 0x208(0x01)
	char bVisible : 1; // 0x209(0x01)
	char bHiddenInGame : 1; // 0x209(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x209(0x01)
	char *131f3529c6 : 1; // 0x209(0x01)
	char bUseAttachParentBound : 1; // 0x209(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x209(0x01)
	char bAbsoluteTranslation : 1; // 0x238(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x23c(0x08)
	struct FVector *49e84c2fad; // 0x244(0x0c)
	struct USceneComponent* AttachParent; // 0x250(0x08)
	SetProperty *815e178173; // 0x258(0x50)
	struct FRotator RelativeRotation; // 0x344(0x0c)
	struct FVector RelativeTranslation; // 0x350(0x0c)
	struct FVector RelativeLocation; // 0x35c(0x0c)
	struct FVector RelativeScale3D; // 0x368(0x0c)
	enum class EComponentMobility Mobility; // 0x388(0x01)
	struct FName *055f551900; // 0x398(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x3a0(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x3b0(0x10)

	void K2_AddWorldTransform(bool bSweep); // Function Engine.SceneComponent.K2_AddWorldTransform // None // @ game+0x636e08c
	struct FHitResult K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // None // @ game+0x636d540
	bool K2_AddWorldOffset(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldOffset // None // @ game+0x636dcdc
	void *24d4692696(); // Function Engine.SceneComponent.*24d4692696 // None // @ game+0x637a948
	struct FHitResult K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // None // @ game+0x636deb4
	bool K2_SetRelativeLocation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeLocation // None // @ game+0x6370a34
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // None // @ game+0x63628f0
	struct FHitResult K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // None // @ game+0x637163c
	void *a4c0c6dacf(); // Function Engine.SceneComponent.*a4c0c6dacf // None // @ game+0x6373f94
	void K2_SetWorldTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldTransform // None // @ game+0x6371814
	void *c95aa311e1(); // Function Engine.SceneComponent.*c95aa311e1 // None // @ game+0x637da70
	void *64c6a50e0e(); // Function Engine.SceneComponent.*64c6a50e0e // None // @ game+0x636bab8
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // None // @ game+0x6372760
	void K2_AddLocalOffset(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalOffset // None // @ game+0x636d368
	void *1ab06a479c(); // Function Engine.SceneComponent.*1ab06a479c // None // @ game+0x6366aac
	int32 *8ecb931576(); // Function Engine.SceneComponent.*8ecb931576 // None // @ game+0x636658c
	void *e94c620b17(struct FName InSocketName); // Function Engine.SceneComponent.*e94c620b17 // None // @ game+0x6362b24
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // None // @ game+0x636f52c
	void *71b355cc39(); // Function Engine.SceneComponent.*71b355cc39 // None // @ game+0xb9cb40
	struct FName *c7f3749d3f(); // Function Engine.SceneComponent.*c7f3749d3f // None // @ game+0x636c5a4
	void *47f11c6aa4(); // Function Engine.SceneComponent.*47f11c6aa4 // None // @ game+0x636662c
	void *7b9f3977eb(); // Function Engine.SceneComponent.*7b9f3977eb // None // @ game+0x636f4e8
	struct FHitResult K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // None // @ game+0x636d718
	void *d6237c56a2(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.*d6237c56a2 // None // @ game+0x637140c
	void *fdc9f4ce48(); // Function Engine.SceneComponent.*fdc9f4ce48 // None // @ game+0x636b1e0
	void *c983529eeb(); // Function Engine.SceneComponent.*c983529eeb // None // @ game+0x637c34c
	void *fadfce2f5c(struct USceneComponent* InParent); // Function Engine.SceneComponent.*fadfce2f5c // None // @ game+0x637de7c
	void *fe65a776a5(); // Function Engine.SceneComponent.*fe65a776a5 // None // @ game+0x636f464
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // None // @ game+0xb6c2dc
	void *e51a15ac42(); // Function Engine.SceneComponent.*e51a15ac42 // None // @ game+0x637a9e4
	void K2_SetRelativeRotation(bool bSweep); // Function Engine.SceneComponent.K2_SetRelativeRotation // None // @ game+0x6370e30
	void *a0c587c4d6(); // Function Engine.SceneComponent.*a0c587c4d6 // None // @ game+0x63699d4
	enum class *42e1cdcd79 *a17d5e84b8(enum class *42e1cdcd79 ScaleRule); // Function Engine.SceneComponent.*a17d5e84b8 // None // @ game+0x63f7b8
	struct FHitResult *f0cbf81c2a(struct FRotator NewRotation); // Function Engine.SceneComponent.*f0cbf81c2a // None // @ game+0x6370c00
	struct FHitResult K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // None // @ game+0x636d944
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // None // @ game+0x99d020
	void *330134b8c2(); // Function Engine.SceneComponent.*330134b8c2 // None // @ game+0x636a784
	void *cb975ed8ba(); // Function Engine.SceneComponent.*cb975ed8ba // None // @ game+0x6367480
	struct FHitResult K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // None // @ game+0x6371008
	void *5b447b62b7(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*5b447b62b7 // None // @ game+0x6376b58
	struct FName *a27f6d4764(); // Function Engine.SceneComponent.*a27f6d4764 // None // @ game+0x636a94c
	bool *287e49cc7e(); // Function Engine.SceneComponent.*287e49cc7e // None // @ game+0x637a670
	void *6f297235ba(); // Function Engine.SceneComponent.*6f297235ba // None // @ game+0x636a57c
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // None // @ game+0x636c698
	void *bb79d1adbb(); // Function Engine.SceneComponent.*bb79d1adbb // None // @ game+0x636a210
	enum class EAttachLocation K2_AttachTo(bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // None // @ game+0x636e5b8
	void K2_SetWorldLocation(struct FVector NewLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // None // @ game+0x6371234
	void *709ad87786(); // Function Engine.SceneComponent.*709ad87786 // None // @ game+0x6365764
	struct FName *716c958ce4(enum class *5515701312 TransformSpace); // Function Engine.SceneComponent.*716c958ce4 // None // @ game+0x636ab6c
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // None // @ game+0xbd36f4
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // None // @ game+0xbd36f4
	struct FHitResult K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // None // @ game+0x636db10
	void *77cf8156db(struct FName InSocketName); // Function Engine.SceneComponent.*77cf8156db // None // @ game+0x636aab4
	void *c786340f98(); // Function Engine.SceneComponent.*c786340f98 // None // @ game+0x56c1d5c
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // None // @ game+0xb6f418
	void *8686c19d5c(); // Function Engine.SceneComponent.*8686c19d5c // None // @ game+0x636a7f0
	struct USceneComponent* *e13072354b(struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule ScaleRule); // Function Engine.SceneComponent.*e13072354b // None // @ game+0x636e958
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // None // @ game+0x637ebf4
	struct FName *45081e78dc(); // Function Engine.SceneComponent.*45081e78dc // None // @ game+0x636aa04
	void *4883fee90d(); // Function Engine.SceneComponent.*4883fee90d // None // @ game+0x636f420
};

// Class AkAudio.*7902b0d5f1
// Size: 0x620 (Inherited: 0x4d0)
struct U*7902b0d5f1 : U*d6e6897987 {
	struct F*f8c9a07364 Struct; // 0x4c8(0x158)
};

// Class AkAudio.*5ee603fddf
// Size: 0x5c0 (Inherited: 0x4d0)
struct U*5ee603fddf : U*d6e6897987 {
	struct F*1703c9495e Struct; // 0x4d0(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e0 (Inherited: 0x30)
struct UAkSoundVolumeManager : U*ed75cbc976 {
	char pad_30[0x150]; // 0x30(0x150)
	struct TMap<struct UObject*, struct F*2605160634> *0f56387deb; // 0x180(0x50)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x400 (Inherited: 0x3f8)
struct AAkSoundVolumePortal : AActor {
	struct U*5ee603fddf* SoundVolumePortalComponent; // 0x3f8(0x08)
};

// Class AkAudio.*e2767e6e12
// Size: 0x40 (Inherited: 0x30)
struct U*e2767e6e12 : UDataAsset {
	struct TArray<struct F*53c6d3d74f> *6546d029de; // 0x30(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*f8c9a07364> Volumes; // 0x1f0(0x10)
	struct TArray<struct F*1703c9495e> *0c9a67849c; // 0x200(0x10)
	struct TArray<struct F*f0517a6bce> *8ef1a37a4d; // 0x210(0x10)
	struct TArray<struct F*2fb60a5ad2> *d22be89643; // 0x220(0x10)
	char pad_230[0x20]; // 0x230(0x20)
};

// Class AkAudio.*3ca6e8c209
// Size: 0xa8 (Inherited: 0x90)
struct U*3ca6e8c209 : U*4b768f09da {
	struct TArray<struct F*4500c83e35> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.*d7501ab46c
// Size: 0xa8 (Inherited: 0x90)
struct U*d7501ab46c : U*6e2748e3e3 {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.*0f685c22fd
// Size: 0x30 (Inherited: 0x28)
struct U*0f685c22fd : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.*e2173ed57a
// Size: 0x30 (Inherited: 0x28)
struct U*e2173ed57a : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
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
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *97171547c2 : 1; // 0xc8(0x01)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioRTPCTrack : U*4bd897fba7 {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *97171547c2 : 1; // 0xc8(0x01)
};

