// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x60 (Inherited: 0x30)
struct UHoudiniAsset : UObject {
	struct FString *2a58834ccb; // 0x30(0x10)
	struct U*ec5706cab5* *ec5706cab5; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x400 (Inherited: 0x3f0)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4c0 (Inherited: 0x30)
struct UHoudiniRuntimeSettings : UObject {
	enum class *ebe1250b57 SessionType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ServerHost; // 0x38(0x10)
	int32 ServerPort; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ServerPipeName; // 0x50(0x10)
	bool bStartAutomaticServer; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AutomaticServerTimeout; // 0x64(0x04)
	bool bShowMultiAssetDialog; // 0x68(0x01)
	bool bPauseCookingOnStart; // 0x69(0x01)
	bool bEnableCooking; // 0x6a(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x6b(0x01)
	bool bTransformChangeTriggersCooks; // 0x6c(0x01)
	bool bDisplaySlateCookingNotifications; // 0x6d(0x01)
	bool bCookCurvesOnMouseRelease; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	struct FText TemporaryCookFolder; // 0x70(0x18)
	bool bTreatRampParametersAsMultiparms; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString CollisionGroupNamePrefix; // 0x90(0x10)
	struct FString RenderedCollisionGroupNamePrefix; // 0xa0(0x10)
	struct FString UCXCollisionGroupNamePrefix; // 0xb0(0x10)
	struct FString UCXRenderedCollisionGroupNamePrefix; // 0xc0(0x10)
	struct FString SimpleCollisionGroupNamePrefix; // 0xd0(0x10)
	struct FString SimpleRenderedCollisionGroupNamePrefix; // 0xe0(0x10)
	struct FString MarshallingAttributeMaterial; // 0xf0(0x10)
	struct FString MarshallingAttributeMaterialHole; // 0x100(0x10)
	struct FString MarshallingAttributeInstanceOverride; // 0x110(0x10)
	struct FString MarshallingAttributeFaceSmoothingMask; // 0x120(0x10)
	struct FString MarshallingAttributeLightmapResolution; // 0x130(0x10)
	struct FString MarshallingAttributeGeneratedMeshName; // 0x140(0x10)
	struct FString MarshallingAttributeInputMeshName; // 0x150(0x10)
	struct FString MarshallingAttributeInputSourceFile; // 0x160(0x10)
	float MarshallingSplineResolution; // 0x170(0x04)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x174(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x175(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x176(0x01)
	char pad_177[0x1]; // 0x177(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x178(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x17c(0x04)
	float GeneratedGeometryScaleFactor; // 0x180(0x04)
	float TransformScaleFactor; // 0x184(0x04)
	enum class *7369bcaa26 ImportAxis; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bDoubleSidedGeometry : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct FBodyInstance *535a473cef; // 0x1a0(0x240)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	int32 LightMapResolution; // 0x3e4(0x04)
	float LpvBiasMultiplier; // 0x3e8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3ec(0x04)
	struct F*705bbdf923 WalkableSlopeOverride; // 0x3f0(0x10)
	int32 LightMapCoordinateIndex; // 0x400(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x404(0x01)
	char pad_404_1 : 7; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	float StreamingDistanceMultiplier; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct UFoliageType_InstancedStaticMesh* *0f26870a30; // 0x410(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x418(0x10)
	bool bUseFullPrecisionUVs; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	int32 SrcLightmapIndex; // 0x42c(0x04)
	int32 DstLightmapIndex; // 0x430(0x04)
	int32 MinLightmapResolution; // 0x434(0x04)
	bool bRemoveDegenerates; // 0x438(0x01)
	enum class *3a458a588c GenerateLightmapUVsFlag; // 0x439(0x01)
	enum class *3a458a588c RecomputeNormalsFlag; // 0x43a(0x01)
	enum class *3a458a588c RecomputeTangentsFlag; // 0x43b(0x01)
	bool bUseMikkTSpace; // 0x43c(0x01)
	bool bBuildAdjacencyBuffer; // 0x43d(0x01)
	bool bUseCustomHoudiniLocation; // 0x43e(0x01)
	char pad_43F[0x1]; // 0x43f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x440(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct TArray<struct F*76d28c568d> CustomHoudiniToolsLocation; // 0x458(0x10)
	int32 CookingThreadStackSize; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x470(0x10)
	struct FString OtlSearchPath; // 0x480(0x10)
	struct FString DsoSearchPath; // 0x490(0x10)
	struct FString ImageDsoSearchPath; // 0x4a0(0x10)
	struct FString AudioDsoSearchPath; // 0x4b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x1290 (Inherited: 0x9b0)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *280802cd79 : 1; // 0x9b0(0x01)
	char pad_9B0_1 : 7; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)
	struct UPhysicalMaterial* *06c42735d9; // 0x9b8(0x08)
	struct FBodyInstance *535a473cef; // 0x9c0(0x240)
	enum class ECollisionTraceFlag *1b8383eea9; // 0xc00(0x01)
	char pad_C01[0x3]; // 0xc01(0x03)
	int32 *4ee1c412c0; // 0xc04(0x04)
	float GeneratedLpvBiasMultiplier; // 0xc08(0x04)
	float *becc1641cf; // 0xc0c(0x04)
	struct F*705bbdf923 *cc3ef0565d; // 0xc10(0x10)
	int32 *3220523b7c; // 0xc20(0x04)
	char *e696be4d69 : 1; // 0xc24(0x01)
	char pad_C24_1 : 7; // 0xc24(0x01)
	char pad_C25[0x3]; // 0xc25(0x03)
	float *3acb6f6af3; // 0xc28(0x04)
	char pad_C2C[0x4]; // 0xc2c(0x04)
	struct UFoliageType_InstancedStaticMesh* *47bb89344d; // 0xc30(0x08)
	struct TArray<struct UAssetUserData*> *6330c3e6b9; // 0xc38(0x10)
	char pad_C48[0x478]; // 0xc48(0x478)
	struct FText BakeFolder; // 0x10c0(0x18)
	struct FText *2b73702190; // 0x10d8(0x18)
	char pad_10F0[0x1a0]; // 0x10f0(0x1a0)

	int32 *2c228a11cd(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*2c228a11cd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c95048
};

// Class HoudiniEngineRuntime.*a158847e50
// Size: 0xd8 (Inherited: 0x30)
struct U*a158847e50 : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class HoudiniEngineRuntime.*e5a8ae97a6
// Size: 0xa8 (Inherited: 0x30)
struct U*e5a8ae97a6 : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class HoudiniEngineRuntime.*2f92fea044
// Size: 0x190 (Inherited: 0xa8)
struct U*2f92fea044 : U*e5a8ae97a6 {
	char pad_A8[0xe8]; // 0xa8(0xe8)
};

// Class HoudiniEngineRuntime.*fc350292f7
// Size: 0x1b0 (Inherited: 0x30)
struct U*fc350292f7 : UObject {
	char pad_30[0x180]; // 0x30(0x180)
};

// Class HoudiniEngineRuntime.*58212c0807
// Size: 0x240 (Inherited: 0xa8)
struct U*58212c0807 : U*e5a8ae97a6 {
	char pad_A8[0x198]; // 0xa8(0x198)
};

// Class HoudiniEngineRuntime.*079b15df98
// Size: 0xa8 (Inherited: 0xa8)
struct U*079b15df98 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*0600bcbfa0
// Size: 0xe0 (Inherited: 0xa8)
struct U*0600bcbfa0 : U*e5a8ae97a6 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*8546d214d6
// Size: 0xb8 (Inherited: 0xa8)
struct U*8546d214d6 : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*106046733d
// Size: 0xd0 (Inherited: 0xa8)
struct U*106046733d : U*e5a8ae97a6 {
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class HoudiniEngineRuntime.*9d76c3c61d
// Size: 0xe0 (Inherited: 0xa8)
struct U*9d76c3c61d : U*e5a8ae97a6 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*3836f20dc6
// Size: 0xa8 (Inherited: 0xa8)
struct U*3836f20dc6 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*67bcab0bdb
// Size: 0xa8 (Inherited: 0xa8)
struct U*67bcab0bdb : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*b4819aad00
// Size: 0xd8 (Inherited: 0xa8)
struct U*b4819aad00 : U*e5a8ae97a6 {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class HoudiniEngineRuntime.*597fe490c7
// Size: 0xa8 (Inherited: 0xa8)
struct U*597fe490c7 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*329f7f31e8
// Size: 0xb8 (Inherited: 0xa8)
struct U*329f7f31e8 : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*f78481bb1c
// Size: 0xb8 (Inherited: 0xb0)
struct U*f78481bb1c : UCurveFloat {
	struct FRichCurve *0796ed81e5; // 0x38(0x70)
	bool *ee37441e4d; // 0xa8(0x01)

	float *602c42cae2(); // Function Engine.CurveFloat.*602c42cae2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896998
	float *9da493fa7f(); // Function Engine.CurveFloat.*9da493fa7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb6ded4
};

// Class HoudiniEngineRuntime.*0ab0077549
// Size: 0x210 (Inherited: 0x1f8)
struct U*0ab0077549 : U*22e8771771 {
	struct FRichCurve *a77b996849[0x04]; // 0x38(0x1c0)

	void *727a052ce8(); // Function Engine.*22e8771771.*727a052ce8 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x691917c
};

// Class HoudiniEngineRuntime.*0f83beabbc
// Size: 0xd0 (Inherited: 0xb8)
struct U*0f83beabbc : U*329f7f31e8 {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class HoudiniEngineRuntime.*6105637337
// Size: 0xa8 (Inherited: 0xa8)
struct U*6105637337 : U*e5a8ae97a6 {
};

// Class HoudiniEngineRuntime.*7096e81dac
// Size: 0xb8 (Inherited: 0xa8)
struct U*7096e81dac : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*e93c4dadd8
// Size: 0xb8 (Inherited: 0xa8)
struct U*e93c4dadd8 : U*e5a8ae97a6 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*efdc0ca135
// Size: 0x210 (Inherited: 0x200)
struct U*efdc0ca135 : UActorComponent {
	struct F*8d4039fc59 PrimaryComponentTick; // 0x120(0x58)
	struct TArray<struct FName> ComponentTags; // 0x178(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x188(0x10)
	char pad_278_0 : 3; // 0x278(0x01)
	char bReplicates : 1; // 0x198(0x01)
	char bNetAddressable : 1; // 0x198(0x01)
	char *42cccbce92 : 1; // 0x198(0x01)
	char bCreatedByConstructionScript : 1; // 0x19a(0x01)
	char bInstanceComponent : 1; // 0x19a(0x01)
	char bAutoActivate : 1; // 0x19a(0x01)
	char *37789dceb0 : 1; // 0x19a(0x01)
	char *d6b476b16b : 1; // 0x19a(0x01)
	struct FGuid DestructibleId; // 0x19c(0x10)
	bool bIsDestroyedVersion; // 0x1ac(0x01)
	char *5a62c75e8c : 1; // 0x1b0(0x01)
	char bIsEditorOnly : 1; // 0x1b0(0x01)
	enum class EComponentCreationMethod CreationMethod; // 0x1b5(0x01)
	enum class EPendingCreationType *4795e00ee8; // 0x1b6(0x01)
	struct TArray<struct FSimpleMemberReference> *98e040a793; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1d0(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1e0(0x10)
	char *195141a832 : 1; // 0x1f9(0x01)

	void *61bb7392aa(); // Function Engine.ActorComponent.*61bb7392aa // Native|Public|BlueprintCallable // @ game+0x68a6244
	void *05866bcfcb(); // Function Engine.ActorComponent.*05866bcfcb // Final|Native|Public|BlueprintCallable // @ game+0x68a9f44
	void Activate(); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0xe76c58
	void *c4952b0099(); // Function Engine.ActorComponent.*c4952b0099 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896200
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0x6323a08
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Final|Native|Public // @ game+0x68a1b90
	void *f52554acee(); // Function Engine.ActorComponent.*f52554acee // Final|Native|Public|BlueprintCallable // @ game+0x68a8a88
	void *541a06a744(); // Function Engine.ActorComponent.*541a06a744 // Native|Public|BlueprintCallable // @ game+0x68a30f0
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *814a121c39(); // Function Engine.ActorComponent.*814a121c39 // Final|Native|Public|BlueprintCallable // @ game+0x68ac164
	void *0d0c513b2c(); // Function Engine.ActorComponent.*0d0c513b2c // Native|Public|BlueprintCallable // @ game+0x68a3218
	void *9eb2ac36d0(); // Function Engine.ActorComponent.*9eb2ac36d0 // Native|Public|BlueprintCallable // @ game+0x5b4fe54
	void *6f8bd4c74b(); // Function Engine.ActorComponent.*6f8bd4c74b // Native|Public|BlueprintCallable // @ game+0x68a6e3c
	void *e22a09fc3d(); // Function Engine.ActorComponent.*e22a09fc3d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xccfa04
	void IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5b4fe6c
	void *d4c659a949(); // Function Engine.ActorComponent.*d4c659a949 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68911b0
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x688dbd0
	void *f221ff8513(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.*f221ff8513 // Native|Public|BlueprintCallable // @ game+0x688dc64
	void *2e369dcd8d(bool ReturnValue); // Function Engine.ActorComponent.*2e369dcd8d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b27c
	void *32ee7138ab(bool bTickableWhenPaused); // Function Engine.ActorComponent.*32ee7138ab // Final|Native|Public|BlueprintCallable // @ game+0x68ac288
	void *581f8985e1(struct UObject* Object); // Function Engine.ActorComponent.*581f8985e1 // Final|Native|Public|BlueprintCallable // @ game+0x689e568
	void *77f9b41839(bool bEnabled); // Function Engine.ActorComponent.*77f9b41839 // Native|Public|BlueprintCallable // @ game+0x68a89f0
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *3ae845f2b7(bool ReturnValue); // Function Engine.ActorComponent.*3ae845f2b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b3c0
	void ReceiveTick(float DeltaSeconds); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniEngineConvertBgeoCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniEngineConvertBgeoDirCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
};

// Class HoudiniEngineRuntime.*d2a8fc0d18
// Size: 0x520 (Inherited: 0x470)
struct U*d2a8fc0d18 : USceneComponent {
	char pad_470[0xa8]; // 0x470(0xa8)
	enum class EHoudiniHandleType *6611dacee8; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
};

// Class HoudiniEngineRuntime.*fd3e8065b0
// Size: 0x480 (Inherited: 0x470)
struct U*fd3e8065b0 : USceneComponent {
	struct UObject* *9535e818e4; // 0x468(0x08)
	struct TArray<struct AActor*> Instances; // 0x470(0x10)
};

// Class HoudiniEngineRuntime.*2c09f19639
// Size: 0x490 (Inherited: 0x470)
struct U*2c09f19639 : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x468(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x478(0x08)
	struct UStaticMesh* InstancedMesh; // 0x480(0x08)
};

// Class HoudiniEngineRuntime.*b972adde1c
// Size: 0x570 (Inherited: 0x470)
struct U*b972adde1c : USceneComponent {
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
	char pad_547[0x29]; // 0x547(0x29)

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

// Class HoudiniEngineRuntime.*019cd8baad
// Size: 0xd0 (Inherited: 0x30)
struct U*019cd8baad : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

