// Class AkAudio.*fa94dd61eb
// Size: 0x30 (Inherited: 0x30)
struct U*fa94dd61eb : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x410 (Inherited: 0x3f0)
struct AAkAmbientSound : AActor {
	char pad_3F0[0x10]; // 0x3f0(0x10)
	struct UAkComponent* AkComponent; // 0x400(0x08)
	bool AutoPost; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float AutoPlayDistance; // 0x40c(0x04)

	void *cd6e58ba06(); // Function AkAudio.AkAmbientSound.*cd6e58ba06 // Final|Native|Public|BlueprintCallable // @ game+0x6b23868
	void *4b4d181bf3(); // Function AkAudio.AkAmbientSound.*4b4d181bf3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b25404
	void *d63c6fb903(); // Function AkAudio.AkAmbientSound.*d63c6fb903 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b256ec
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

	void *5b28cdf2d7(); // Function AkAudio.AkComponent.*5b28cdf2d7 // Final|Native|Public|BlueprintCallable // @ game+0x6b23604
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5ad45f0
	void Stop(); // Function AkAudio.AkComponent.Stop // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b255ac
	void StopPlayingID(); // Function AkAudio.AkComponent.StopPlayingID // Final|Native|Public|BlueprintCallable // @ game+0x6b25708
	void *e5449e0c23(); // Function AkAudio.AkComponent.*e5449e0c23 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b23db8
	void SetRTPCValue(); // Function AkAudio.AkComponent.SetRTPCValue // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b24cf4
	void *f3d387403a(); // Function AkAudio.AkComponent.*f3d387403a // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b25094
	void *648f21b6ad(); // Function AkAudio.AkComponent.*648f21b6ad // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b25990
	void *a72c7063e0(); // Function AkAudio.AkComponent.*a72c7063e0 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b23bc8
	void *3347f820ef(); // Function AkAudio.AkComponent.*3347f820ef // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b25af8
	void *9e62df1780(); // Function AkAudio.AkComponent.*9e62df1780 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x5a85bc0
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6b24a4c
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6b2383c
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners // BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x6b249b8
	void *cd6e58ba06(); // Function AkAudio.AkComponent.*cd6e58ba06 // Final|Native|Public|BlueprintCallable // @ game+0x6b23894
	void *dc9df620e3(); // Function AkAudio.AkComponent.*dc9df620e3 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b23ce0
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b247a4
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b24b80
	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b25124
	void *fa26d13bc7(); // Function AkAudio.AkComponent.*fa26d13bc7 // Final|BlueprintCosmetic|Native|Public|BlueprintCallable // @ game+0x6b24ae8
};

// Class AkAudio.*937a5fb9d7
// Size: 0x30 (Inherited: 0x30)
struct U*937a5fb9d7 : UBlueprintFunctionLibrary {
};

// Class AkAudio.AkReverbVolume
// Size: 0x460 (Inherited: 0x428)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x428(0x01)
	char pad_428_1 : 7; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct U*19dbea6f8b* AuxBus; // 0x430(0x08)
	struct FString AuxBusName; // 0x438(0x10)
	float SendLevel; // 0x448(0x04)
	float FadeRate; // 0x44c(0x04)
	float Priority; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct AAkReverbVolume* *f751b54f01; // 0x458(0x08)
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
	struct U*9851be14e2* SoundVolumeComponent; // 0x3f0(0x08)
};

// Class AkAudio.*885997a705
// Size: 0x470 (Inherited: 0x470)
struct U*885997a705 : USceneComponent {
	struct FName *cb3fc8827c; // 0x228(0x08)
	char pad_478_0 : 1; // 0x478(0x01)
	char bReplicatesAttachmentReference : 1; // 0x230(0x01)
	char bReplicatesAttachment : 1; // 0x230(0x01)
	char *70c5e7a9b6 : 1; // 0x230(0x01)
	char pad_478_4 : 1; // 0x478(0x01)
	char bAbsoluteLocation : 1; // 0x230(0x01)
	char bAbsoluteRotation : 1; // 0x230(0x01)
	char bAbsoluteScale : 1; // 0x230(0x01)
	char bVisible : 1; // 0x231(0x01)
	char bHiddenInGame : 1; // 0x231(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x231(0x01)
	char *1dac92158a : 1; // 0x231(0x01)
	char bUseAttachParentBound : 1; // 0x231(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x231(0x01)
	char bAbsoluteTranslation : 1; // 0x232(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x234(0x08)
	struct USceneComponent* AttachParent; // 0x240(0x08)
	struct FVector *bf3a460e85; // 0x248(0x0c)
	enum class *92a8d5bca4 DetailMode; // 0x288(0x01)
	struct FVector RelativeScale3D; // 0x2e8(0x0c)
	enum class EComponentMobility Mobility; // 0x2f4(0x01)
	SetProperty *912139fe50; // 0x2f8(0x50)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x348(0x10)
	struct FVector RelativeTranslation; // 0x35c(0x0c)
	struct FRotator RelativeRotation; // 0x368(0x0c)
	struct FVector RelativeLocation; // 0x374(0x0c)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x380(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x390(0x10)

	void K2_SetWorldLocation(); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a0770
	void *30399f17ac(); // Function Engine.SceneComponent.*30399f17ac // Final|Native|Public|BlueprintCallable // @ game+0x68a9a9c
	void K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a0544
	void *a82e4c11f1(); // Function Engine.SceneComponent.*a82e4c11f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a0948
	void K2_SetRelativeLocation(); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xc78dc8
	void K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689d084
	void *0281884c9e(bool ShouldReplicate); // Function Engine.SceneComponent.*0281884c9e // Final|Native|Public|BlueprintCallable // @ game+0x68a9e0c
	void *9269d42730(struct FVector ReturnValue); // Function Engine.SceneComponent.*9269d42730 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6899fcc
	void *8f25590c73(struct FVector ReturnValue); // Function Engine.SceneComponent.*8f25590c73 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6896218
	void *431ade8cc7(struct FRotator ReturnValue); // Function Engine.SceneComponent.*431ade8cc7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689eb5c
	void *e1a45b5fe3(struct FVector ReturnValue); // Function Engine.SceneComponent.*e1a45b5fe3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xcb8b48
	void K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3cd610
	void K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689d41c
	void *0f8df46b26(struct TArray<struct FName> ReturnValue); // Function Engine.SceneComponent.*0f8df46b26 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6894eb4
	void *cc0c29c29b(struct USceneComponent* InParent, struct FName InSocketName, bool ReturnValue); // Function Engine.SceneComponent.*cc0c29c29b // Final|Native|Public|BlueprintCallable // @ game+0x68ad32c
	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689d250
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x6892028
	void K2_AddWorldTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689d7cc
	void *b4af2a3e8b(enum class *ecdd115207 LocationRule, enum class *ecdd115207 RotationRule, enum class *ecdd115207 ScaleRule, bool bCallModify); // Function Engine.SceneComponent.*b4af2a3e8b // Final|Native|Public|BlueprintCallable // @ game+0xd373a4
	void *63635bbd26(bool ShouldReplicate); // Function Engine.SceneComponent.*63635bbd26 // Final|Native|Public|BlueprintCallable // @ game+0x68a9ea8
	void OnRep_Visibility(bool Param0); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x68a1c70
	void K2_AddLocalTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689ce58
	void IsVisible(bool ReturnValue); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689bdd8
	void *d843f2564c(); // Function Engine.SceneComponent.*d843f2564c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689225c
	void *3e34911a72(); // Function Engine.SceneComponent.*3e34911a72 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68acf20
	void K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689cc80
	void *dd99459d4b(); // Function Engine.SceneComponent.*dd99459d4b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689a128
	void *b499c4ea3e(); // Function Engine.SceneComponent.*b499c4ea3e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6894fe8
	void *5828b2e365(); // Function Engine.SceneComponent.*5828b2e365 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689a348
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xd5c578
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xc198c0
	void *f756a0f59d(); // Function Engine.SceneComponent.*f756a0f59d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6896c1c
	void *f54ed8c40b(); // Function Engine.SceneComponent.*f54ed8c40b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6895cf8
	void *47a7ed7776(); // Function Engine.SceneComponent.*47a7ed7776 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6899170
	void *2203da3c3b(); // Function Engine.SceneComponent.*2203da3c3b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68999ec
	void *af76098df3(); // Function Engine.SceneComponent.*af76098df3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xe87edc
	void K2_AttachTo(); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x689dcf8
	void *cae9ec1747(); // Function Engine.SceneComponent.*cae9ec1747 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689a9bc
	void *860e529060(); // Function Engine.SceneComponent.*860e529060 // Final|Native|Public|BlueprintCallable // @ game+0x68a32f4
	void *6899b690c6(); // Function Engine.SceneComponent.*6899b690c6 // Final|Native|Public|BlueprintCallable // @ game+0x68a6100
	void *91da404789(); // Function Engine.SceneComponent.*91da404789 // Final|Native|Public|BlueprintCallable // @ game+0x689e098
	void *a16ae93b8c(); // Function Engine.SceneComponent.*a16ae93b8c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6899f60
	void *007b399f94(); // Function Engine.SceneComponent.*007b399f94 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b254
	void *b9705d1983(); // Function Engine.SceneComponent.*b9705d1983 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689a1e0
	void K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a0b78
	void *76907d1282(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.*76907d1282 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a0314
	void *8c7d8b49f7(bool bIncludeAllDescendants, struct TArray<struct USceneComponent*> Children); // Function Engine.SceneComponent.*8c7d8b49f7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6895d98
	void *05a07db4bd(struct FVector ReturnValue); // Function Engine.SceneComponent.*05a07db4bd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689ebe0
	void ToggleVisibility(bool bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x68ae0bc
	void *bac6a64c08(struct FName InSocketName, struct FRotator ReturnValue); // Function Engine.SceneComponent.*bac6a64c08 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689a290
	void *51f025391d(struct FName BoneName, bool ReturnValue); // Function Engine.SceneComponent.*51f025391d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b942b8
	void K2_SetWorldTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a0d50
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xd5c578
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xce84f4
	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689d5f4
	void *1f50dc4b23(struct APhysicsVolume* ReturnValue); // Function Engine.SceneComponent.*1f50dc4b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6899d58
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xd38680
	void K2_GetComponentToWorld(struct FTransform ReturnValue); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689ec24
	void *d6ea9645a8(struct FVector NewScale3D); // Function Engine.SceneComponent.*d6ea9645a8 // Native|Public|HasDefaults|BlueprintCallable // @ game+0xd59f0c
	void K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689caa8
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
// Size: 0x3f8 (Inherited: 0x3f0)
struct AAkSoundVolumePortal : AActor {
	struct U*d8c6edd270* SoundVolumePortalComponent; // 0x3f0(0x08)
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

