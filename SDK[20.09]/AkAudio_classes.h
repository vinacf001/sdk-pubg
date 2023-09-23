// Class AkAudio.*d2d00875b6
// Size: 0x28 (Inherited: 0x28)
struct U*d2d00875b6 : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x410 (Inherited: 0x3f0)
struct AAkAmbientSound : AActor {
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UAkComponent* AkComponent; // 0x400(0x08)
	bool AutoPost; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float AutoPlayDistance; // 0x40c(0x04)

	void *ff788e17a8(); // Function AkAudio.AkAmbientSound.*ff788e17a8 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660c954
	void *600a6ea6d3(); // Function AkAudio.AkAmbientSound.*600a6ea6d3 // Final|Native|Public|BlueprintCallable // @ game+0x660a938
	void *6a31e0bc5f(); // Function AkAudio.AkAmbientSound.*6a31e0bc5f // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660c66c
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

	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660b8b4
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660bc90
	void *429dc22528(); // Function AkAudio.AkComponent.*429dc22528 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660aea0
	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660c0d4
	struct FString *986319744d(); // Function AkAudio.AkComponent.*986319744d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660adc8
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x660c970
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x660bac8
	void *b74971531d(); // Function AkAudio.AkComponent.*b74971531d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660bbf8
	void *b9fbdd0e64(); // Function AkAudio.AkComponent.*b9fbdd0e64 // Final|Native|Public|BlueprintCallable // @ game+0x660a6d4
	float SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x9aa9a8
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x660a90c
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x660bb5c
	void *0b0e30c42d(); // Function AkAudio.AkComponent.*0b0e30c42d // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660cbf8
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660c814
	void *57fad08cec(struct FString in_EventName); // Function AkAudio.AkComponent.*57fad08cec // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660acb0
	void *5cfc6d99fa(); // Function AkAudio.AkComponent.*5cfc6d99fa // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660a988
	void *600a6ea6d3(); // Function AkAudio.AkComponent.*600a6ea6d3 // Final|Native|Public|BlueprintCallable // @ game+0x660a964
	void *9fa0178ec0(); // Function AkAudio.AkComponent.*9fa0178ec0 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660c044
	void *c122e7f9b4(); // Function AkAudio.AkComponent.*c122e7f9b4 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660cdf0
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x660cc88
};

// Class AkAudio.*3dba4fd279
// Size: 0x28 (Inherited: 0x28)
struct U*3dba4fd279 : UBlueprintFunctionLibrary {
};

// Class AkAudio.
// Size: 0x460 (Inherited: 0x428)
struct A : AVolume {
	char bEnabled : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct U*f718108d11* AuxBus; // 0x430(0x08)
	struct FString AuxBusName; // 0x438(0x10)
	float SendLevel; // 0x448(0x04)
	float FadeRate; // 0x44c(0x04)
	float Priority; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct A* *505708a82c; // 0x458(0x08)
};

// Class AkAudio.
// Size: 0xa0 (Inherited: 0x28)
struct U : UObject {
	bool MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x40(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x50(0x10)
	bool SuppressWwiseProjectPathWarnings; // 0x60(0x01)
	char pad_61[0x3f]; // 0x61(0x3f)
};

// Class AkAudio.
// Size: 0x3f8 (Inherited: 0x3f0)
struct A : AActor {
	struct U*7902b0d5f1* SoundVolumeComponent; // 0x3f0(0x08)
};

// Class AkAudio.
// Size: 0x4e0 (Inherited: 0x4d0)
struct U : USceneComponent {
	struct FRotator RelativeRotation; // 0x1f0(0x0c)
	struct FVector RelativeLocation; // 0x208(0x0c)
	struct FVector RelativeScale3D; // 0x214(0x0c)
	char pad_4F4_0 : 1; // 0x4f4(0x01)
	char bReplicatesAttachmentReference : 1; // 0x220(0x01)
	char bReplicatesAttachment : 1; // 0x220(0x01)
	char *9874f81ad0 : 1; // 0x220(0x01)
	char pad_4F4_4 : 1; // 0x4f4(0x01)
	char bAbsoluteLocation : 1; // 0x220(0x01)
	char bAbsoluteRotation : 1; // 0x220(0x01)
	char bAbsoluteScale : 1; // 0x220(0x01)
	char bVisible : 1; // 0x221(0x01)
	char bHiddenInGame : 1; // 0x221(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x221(0x01)
	char *131f3529c6 : 1; // 0x221(0x01)
	char bUseAttachParentBound : 1; // 0x221(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x221(0x01)
	char bAbsoluteTranslation : 1; // 0x250(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x254(0x08)
	struct FVector RelativeTranslation; // 0x278(0x0c)
	enum class EComponentMobility Mobility; // 0x310(0x01)
	enum class *1d65b135dd DetailMode; // 0x311(0x01)
	SetProperty *815e178173; // 0x318(0x50)
	struct USceneComponent* AttachParent; // 0x378(0x08)
	struct FName *055f551900; // 0x380(0x08)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x388(0x10)
	struct FVector *49e84c2fad; // 0x398(0x0c)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x3a8(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x3b8(0x10)

	void K2_AddWorldTransform(bool bSweep); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394fa0
	struct FHitResult K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394454
	bool K2_AddWorldOffset(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394bf0
	void *24d4692696(); // Function Engine.SceneComponent.*24d4692696 // Final|Native|Public|BlueprintCallable // @ game+0x63a1a4c
	struct FHitResult K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394dc8
	bool K2_SetRelativeLocation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6397b20
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x63895d4
	struct FHitResult K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6398728
	void *a4c0c6dacf(); // Function Engine.SceneComponent.*a4c0c6dacf // Final|Native|Public|BlueprintCallable // @ game+0x639b080
	void K2_SetWorldTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6398900
	void *c95aa311e1(); // Function Engine.SceneComponent.*c95aa311e1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x63a4ae0
	void *64c6a50e0e(); // Function Engine.SceneComponent.*64c6a50e0e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63929d4
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x639984c
	void K2_AddLocalOffset(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639427c
	void *1ab06a479c(); // Function Engine.SceneComponent.*1ab06a479c // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638d964
	int32 *8ecb931576(); // Function Engine.SceneComponent.*8ecb931576 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d444
	void *e94c620b17(struct FName InSocketName); // Function Engine.SceneComponent.*e94c620b17 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6389808
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6396528
	void *71b355cc39(); // Function Engine.SceneComponent.*71b355cc39 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbd0b50
	struct FName *c7f3749d3f(); // Function Engine.SceneComponent.*c7f3749d3f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63934b8
	void *47f11c6aa4(); // Function Engine.SceneComponent.*47f11c6aa4 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x638d4e4
	void *7b9f3977eb(); // Function Engine.SceneComponent.*7b9f3977eb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63964e4
	struct FHitResult K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639462c
	void *d6237c56a2(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.*d6237c56a2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63984f8
	void *fdc9f4ce48(); // Function Engine.SceneComponent.*fdc9f4ce48 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63920fc
	void *c983529eeb(); // Function Engine.SceneComponent.*c983529eeb // Native|Public|HasDefaults|BlueprintCallable // @ game+0x63a33bc
	void *fadfce2f5c(struct USceneComponent* InParent); // Function Engine.SceneComponent.*fadfce2f5c // Final|Native|Public|BlueprintCallable // @ game+0x63a4eec
	void *fe65a776a5(); // Function Engine.SceneComponent.*fe65a776a5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6396460
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xb9f430
	void *e51a15ac42(); // Function Engine.SceneComponent.*e51a15ac42 // Final|Native|Public|BlueprintCallable // @ game+0x63a1ae8
	void K2_SetRelativeRotation(bool bSweep); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6397f1c
	void *a0c587c4d6(); // Function Engine.SceneComponent.*a0c587c4d6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x639088c
	enum class *42e1cdcd79 *a17d5e84b8(enum class *42e1cdcd79 ScaleRule); // Function Engine.SceneComponent.*a17d5e84b8 // Final|Native|Public|BlueprintCallable // @ game+0x1fe3dc
	struct FHitResult *f0cbf81c2a(struct FRotator NewRotation); // Function Engine.SceneComponent.*f0cbf81c2a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6397cec
	struct FHitResult K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394858
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xae4444
	void *330134b8c2(); // Function Engine.SceneComponent.*330134b8c2 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63916a0
	void *cb975ed8ba(); // Function Engine.SceneComponent.*cb975ed8ba // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638e338
	struct FHitResult K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63980f4
	void *5b447b62b7(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*5b447b62b7 // Final|Native|Public|BlueprintCallable // @ game+0x639dc5c
	struct FName *a27f6d4764(); // Function Engine.SceneComponent.*a27f6d4764 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6391868
	bool *287e49cc7e(); // Function Engine.SceneComponent.*287e49cc7e // Final|Native|Public|BlueprintCallable // @ game+0x63a1774
	void *6f297235ba(); // Function Engine.SceneComponent.*6f297235ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6391498
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63935ac
	void *bb79d1adbb(); // Function Engine.SceneComponent.*bb79d1adbb // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x639112c
	enum class EAttachLocation K2_AttachTo(bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x63954cc
	void K2_SetWorldLocation(struct FVector NewLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6398320
	void *709ad87786(); // Function Engine.SceneComponent.*709ad87786 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c5a4
	struct FName *716c958ce4(enum class *5515701312 TransformSpace); // Function Engine.SceneComponent.*716c958ce4 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6391a88
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xc0a81c
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xc0a81c
	struct FHitResult K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394a24
	void *77cf8156db(struct FName InSocketName); // Function Engine.SceneComponent.*77cf8156db // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63919d0
	void *c786340f98(); // Function Engine.SceneComponent.*c786340f98 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c6c0
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xba2854
	void *8686c19d5c(); // Function Engine.SceneComponent.*8686c19d5c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x639170c
	struct USceneComponent* *e13072354b(struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule ScaleRule); // Function Engine.SceneComponent.*e13072354b // Final|Native|Public|BlueprintCallable // @ game+0x639586c
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x63a5c64
	struct FName *45081e78dc(); // Function Engine.SceneComponent.*45081e78dc // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6391920
	void *4883fee90d(); // Function Engine.SceneComponent.*4883fee90d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x639641c
};

// Class AkAudio.*7902b0d5f1
// Size: 0x630 (Inherited: 0x4e0)
struct U*7902b0d5f1 : U {
	struct F Struct; // 0x4d8(0x158)
};

// Class AkAudio.*5ee603fddf
// Size: 0x5d0 (Inherited: 0x4e0)
struct U*5ee603fddf : U {
	struct F*1703c9495e Struct; // 0x4e0(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e0 (Inherited: 0x30)
struct UAkSoundVolumeManager : U*ed75cbc976 {
	char pad_30[0x150]; // 0x30(0x150)
	struct TMap<struct UObject*, struct F*2605160634> *0f56387deb; // 0x180(0x50)
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x3f8 (Inherited: 0x3f0)
struct AAkSoundVolumePortal : AActor {
	struct U*5ee603fddf* SoundVolumePortalComponent; // 0x3f0(0x08)
};

// Class AkAudio.*e2767e6e12
// Size: 0x40 (Inherited: 0x30)
struct U*e2767e6e12 : UDataAsset {
	struct TArray<struct F*53c6d3d74f> *6546d029de; // 0x30(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x250 (Inherited: 0x1f0)
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F> Volumes; // 0x1f0(0x10)
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

