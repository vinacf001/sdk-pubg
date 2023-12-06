// Class AkAudio.*fa94dd61eb
// Size: 0x30 (Inherited: 0x30)
struct U*fa94dd61eb : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x418 (Inherited: 0x3f8)
struct AAkAmbientSound : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UAkComponent* AkComponent; // 0x408(0x08)
	bool AutoPost; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float AutoPlayDistance; // 0x414(0x04)

	void *cd6e58ba06(bool ReturnValue); // Function AkAudio.AkAmbientSound.*cd6e58ba06 // Final|Native|Public|BlueprintCallable // @ game+0x6e41b94
	void *4b4d181bf3(); // Function AkAudio.AkAmbientSound.*4b4d181bf3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43730
	void *d63c6fb903(); // Function AkAudio.AkAmbientSound.*d63c6fb903 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43a18
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

	float *5b28cdf2d7(); // Function AkAudio.AkComponent.*5b28cdf2d7 // Final|Native|Public|BlueprintCallable // @ game+0x6e41930
	bool UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43d4c
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e438d8
	int32 StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6e43a34
	int32 *e5449e0c23(); // Function AkAudio.AkComponent.*e5449e0c23 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e420e4
	int32 SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43020
	bool *f3d387403a(); // Function AkAudio.AkComponent.*f3d387403a // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e433c0
	bool *648f21b6ad(); // Function AkAudio.AkComponent.*648f21b6ad // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43cbc
	int32 *a72c7063e0(); // Function AkAudio.AkComponent.*a72c7063e0 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e41ef4
	bool *3347f820ef(); // Function AkAudio.AkComponent.*3347f820ef // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43eb4
	bool *9e62df1780(); // Function AkAudio.AkComponent.*9e62df1780 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5d82f7c
	float SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6e42d78
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6e41b68
	int32 SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6e42ce4
	void *cd6e58ba06(bool ReturnValue); // Function AkAudio.AkComponent.*cd6e58ba06 // Final|Native|Public|BlueprintCallable // @ game+0x6e41bc0
	void *dc9df620e3(struct FString in_EventName, int32 ReturnValue); // Function AkAudio.AkComponent.*dc9df620e3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e4200c
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e42ad0
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e42eac
	void SetSwitch(struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e43450
	void *fa26d13bc7(); // Function AkAudio.AkComponent.*fa26d13bc7 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6e42e14
};

// Class AkAudio.*937a5fb9d7
// Size: 0x30 (Inherited: 0x30)
struct U*937a5fb9d7 : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkReverbVolume
// Size: 0x468 (Inherited: 0x430)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct U*19dbea6f8b* AuxBus; // 0x438(0x08)
	struct FString AuxBusName; // 0x440(0x10)
	float SendLevel; // 0x450(0x04)
	float FadeRate; // 0x454(0x04)
	float Priority; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct AAkReverbVolume* *f751b54f01; // 0x460(0x08)
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
	struct U*9851be14e2* SoundVolumeComponent; // 0x3f8(0x08)
};

// Class AkAudio.*885997a705
// Size: 0x470 (Inherited: 0x470)
struct U*885997a705 : USceneComponent {
	struct FVector *bf3a460e85; // 0x208(0x0c)
	struct USceneComponent* AttachParent; // 0x218(0x08)
	char pad_484_0 : 1; // 0x484(0x01)
	char bReplicatesAttachmentReference : 1; // 0x250(0x01)
	char bReplicatesAttachment : 1; // 0x250(0x01)
	char *70c5e7a9b6 : 1; // 0x250(0x01)
	char pad_484_4 : 1; // 0x484(0x01)
	char bAbsoluteLocation : 1; // 0x250(0x01)
	char bAbsoluteRotation : 1; // 0x250(0x01)
	char bAbsoluteScale : 1; // 0x250(0x01)
	char bVisible : 1; // 0x251(0x01)
	char bHiddenInGame : 1; // 0x251(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x251(0x01)
	char *1dac92158a : 1; // 0x251(0x01)
	char bUseAttachParentBound : 1; // 0x251(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x251(0x01)
	char bAbsoluteTranslation : 1; // 0x252(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x254(0x08)
	struct FName *cb3fc8827c; // 0x260(0x08)
	struct FVector RelativeTranslation; // 0x298(0x0c)
	enum class *92a8d5bca4 DetailMode; // 0x2f1(0x01)
	struct FRotator RelativeRotation; // 0x2f4(0x0c)
	SetProperty *912139fe50; // 0x300(0x50)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x350(0x10)
	enum class EComponentMobility Mobility; // 0x360(0x01)
	struct FVector RelativeScale3D; // 0x364(0x0c)
	struct FVector RelativeLocation; // 0x370(0x0c)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x380(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x390(0x10)

	void K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbcbb4
	void *30399f17ac(); // Function Engine.SceneComponent.*30399f17ac // Final|Native|Public|BlueprintCallable // @ game+0x6bc5f5c
	void K2_SetRelativeTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbc988
	void *a82e4c11f1(bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.*a82e4c11f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbcd8c
	void K2_SetRelativeLocation(); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xd16544
	bool K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb9508
	bool *0281884c9e(); // Function Engine.SceneComponent.*0281884c9e // Final|Native|Public|BlueprintCallable // @ game+0x6bc62cc
	struct FVector *9269d42730(); // Function Engine.SceneComponent.*9269d42730 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6418
	struct FVector *8f25590c73(); // Function Engine.SceneComponent.*8f25590c73 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb25c8
	struct FRotator *431ade8cc7(); // Function Engine.SceneComponent.*431ade8cc7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbaff4
	struct FVector *e1a45b5fe3(); // Function Engine.SceneComponent.*e1a45b5fe3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xd55b68
	bool K2_SetRelativeRotation(); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xd33f04
	bool K2_AddWorldOffset(); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb98a0
	struct TArray<struct FName> *0f8df46b26(); // Function Engine.SceneComponent.*0f8df46b26 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb125c
	bool *cc0c29c29b(); // Function Engine.SceneComponent.*cc0c29c29b // Final|Native|Public|BlueprintCallable // @ game+0x6bc97d4
	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb96d4
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x6bae3b8
	void K2_AddWorldTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb9c50
	void *b4af2a3e8b(enum class *ecdd115207 RotationRule, enum class *ecdd115207 ScaleRule); // Function Engine.SceneComponent.*b4af2a3e8b // Final|Native|Public|BlueprintCallable // @ game+0xddbcc4
	void *63635bbd26(); // Function Engine.SceneComponent.*63635bbd26 // Final|Native|Public|BlueprintCallable // @ game+0x6bc6368
	void OnRep_Visibility(bool Param0); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x6bbe0b4
	void K2_AddLocalTransform(struct FTransform DeltaTransform, bool bSweep); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb92dc
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb825c
	bool *d843f2564c(); // Function Engine.SceneComponent.*d843f2564c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bae5ec
	struct FVector *3e34911a72(); // Function Engine.SceneComponent.*3e34911a72 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc93e0
	bool K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb9104
	struct FVector *dd99459d4b(); // Function Engine.SceneComponent.*dd99459d4b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6574
	struct FName *b499c4ea3e(); // Function Engine.SceneComponent.*b499c4ea3e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb1390
	struct FTransform *5828b2e365(); // Function Engine.SceneComponent.*5828b2e365 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6794
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xe01e9c
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xbc0364
	struct FVector *f756a0f59d(); // Function Engine.SceneComponent.*f756a0f59d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2fcc
	struct USceneComponent* *f54ed8c40b(); // Function Engine.SceneComponent.*f54ed8c40b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb20a8
	int32 *47a7ed7776(); // Function Engine.SceneComponent.*47a7ed7776 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5520
	struct TArray<struct USceneComponent*> *2203da3c3b(); // Function Engine.SceneComponent.*2203da3c3b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5e38
	void *af76098df3(struct USceneComponent* ReturnValue); // Function Engine.SceneComponent.*af76098df3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xf3509c
	void K2_AttachTo(struct USceneComponent* InParent, struct FName InSocketName); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x6bba17c
	void *cae9ec1747(struct FVector ReturnValue); // Function Engine.SceneComponent.*cae9ec1747 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6e08
	void *860e529060(); // Function Engine.SceneComponent.*860e529060 // Final|Native|Public|BlueprintCallable // @ game+0x6bbf738
	void *6899b690c6(bool bNewAbsoluteLocation); // Function Engine.SceneComponent.*6899b690c6 // Final|Native|Public|BlueprintCallable // @ game+0x6bc25c0
	void *91da404789(struct FName SocketName, enum class EAttachmentRule LocationRule, bool ReturnValue); // Function Engine.SceneComponent.*91da404789 // Final|Native|Public|BlueprintCallable // @ game+0x6bba51c
	void *a16ae93b8c(struct FTransform ReturnValue); // Function Engine.SceneComponent.*a16ae93b8c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb63ac
	void *007b399f94(); // Function Engine.SceneComponent.*007b399f94 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb76a0
	void *b9705d1983(); // Function Engine.SceneComponent.*b9705d1983 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb662c
	bool K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbcfbc
	bool *76907d1282(); // Function Engine.SceneComponent.*76907d1282 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbc758
	struct TArray<struct USceneComponent*> *8c7d8b49f7(); // Function Engine.SceneComponent.*8c7d8b49f7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2148
	struct FVector *05a07db4bd(); // Function Engine.SceneComponent.*05a07db4bd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb078
	bool ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x6bca564
	struct FRotator *bac6a64c08(); // Function Engine.SceneComponent.*bac6a64c08 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb66dc
	bool *51f025391d(); // Function Engine.SceneComponent.*51f025391d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e91a3c
	bool K2_SetWorldTransform(); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbd194
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xe01e9c
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xd8e65c
	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb9a78
	void *1f50dc4b23(); // Function Engine.SceneComponent.*1f50dc4b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb61a4
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xddd758
	void K2_GetComponentToWorld(struct FTransform ReturnValue); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb0bc
	void *d6ea9645a8(); // Function Engine.SceneComponent.*d6ea9645a8 // Native|Public|HasDefaults|BlueprintCallable // @ game+0xdff330
	void K2_AddLocalOffset(bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb8f2c
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
// Size: 0x400 (Inherited: 0x3f8)
struct AAkSoundVolumePortal : AActor {
	struct U*d8c6edd270* SoundVolumePortalComponent; // 0x3f8(0x08)
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
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *8e0331d5c2 : 1; // 0xc8(0x01)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneAkAudioRTPCTrack : U*9eee6d071d {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *8e0331d5c2 : 1; // 0xc8(0x01)
};

