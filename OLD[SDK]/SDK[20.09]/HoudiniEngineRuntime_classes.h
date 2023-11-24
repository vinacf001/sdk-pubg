// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x58 (Inherited: 0x28)
struct UHoudiniAsset : UObject {
	struct FString *93807a220f; // 0x28(0x10)
	struct U*31e2af0749* *31e2af0749; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x400 (Inherited: 0x3f0)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4a0 (Inherited: 0x28)
struct UHoudiniRuntimeSettings : UObject {
	enum class *50bc741638 SessionType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ServerHost; // 0x30(0x10)
	int32 ServerPort; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ServerPipeName; // 0x48(0x10)
	bool bStartAutomaticServer; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float AutomaticServerTimeout; // 0x5c(0x04)
	bool bShowMultiAssetDialog; // 0x60(0x01)
	bool bPauseCookingOnStart; // 0x61(0x01)
	bool bEnableCooking; // 0x62(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x63(0x01)
	bool bTransformChangeTriggersCooks; // 0x64(0x01)
	bool bDisplaySlateCookingNotifications; // 0x65(0x01)
	bool bCookCurvesOnMouseRelease; // 0x66(0x01)
	char pad_67[0x1]; // 0x67(0x01)
	struct FText TemporaryCookFolder; // 0x68(0x18)
	bool bTreatRampParametersAsMultiparms; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString CollisionGroupNamePrefix; // 0x88(0x10)
	struct FString RenderedCollisionGroupNamePrefix; // 0x98(0x10)
	struct FString UCXCollisionGroupNamePrefix; // 0xa8(0x10)
	struct FString UCXRenderedCollisionGroupNamePrefix; // 0xb8(0x10)
	struct FString SimpleCollisionGroupNamePrefix; // 0xc8(0x10)
	struct FString SimpleRenderedCollisionGroupNamePrefix; // 0xd8(0x10)
	struct FString MarshallingAttributeMaterial; // 0xe8(0x10)
	struct FString MarshallingAttributeMaterialHole; // 0xf8(0x10)
	struct FString MarshallingAttributeInstanceOverride; // 0x108(0x10)
	struct FString MarshallingAttributeFaceSmoothingMask; // 0x118(0x10)
	struct FString MarshallingAttributeLightmapResolution; // 0x128(0x10)
	struct FString MarshallingAttributeGeneratedMeshName; // 0x138(0x10)
	struct FString MarshallingAttributeInputMeshName; // 0x148(0x10)
	struct FString MarshallingAttributeInputSourceFile; // 0x158(0x10)
	float MarshallingSplineResolution; // 0x168(0x04)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x16c(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x16d(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x16e(0x01)
	char pad_16F[0x1]; // 0x16f(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x170(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x174(0x04)
	float GeneratedGeometryScaleFactor; // 0x178(0x04)
	float TransformScaleFactor; // 0x17c(0x04)
	enum class *94bd113afd ImportAxis; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	char bDoubleSidedGeometry : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x188(0x08)
	struct FBodyInstance *2f12898ea3; // 0x190(0x230)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	int32 LightMapResolution; // 0x3c4(0x04)
	float LpvBiasMultiplier; // 0x3c8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3cc(0x04)
	struct F*de38513b35 WalkableSlopeOverride; // 0x3d0(0x10)
	int32 LightMapCoordinateIndex; // 0x3e0(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x3e4(0x01)
	char pad_3E4_1 : 7; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	float StreamingDistanceMultiplier; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UFoliageType_InstancedStaticMesh* *43243c2540; // 0x3f0(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x3f8(0x10)
	bool bUseFullPrecisionUVs; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32 SrcLightmapIndex; // 0x40c(0x04)
	int32 DstLightmapIndex; // 0x410(0x04)
	int32 MinLightmapResolution; // 0x414(0x04)
	bool bRemoveDegenerates; // 0x418(0x01)
	enum class *0ad53bb409 GenerateLightmapUVsFlag; // 0x419(0x01)
	enum class *0ad53bb409 RecomputeNormalsFlag; // 0x41a(0x01)
	enum class *0ad53bb409 RecomputeTangentsFlag; // 0x41b(0x01)
	bool bUseMikkTSpace; // 0x41c(0x01)
	bool bBuildAdjacencyBuffer; // 0x41d(0x01)
	bool bUseCustomHoudiniLocation; // 0x41e(0x01)
	char pad_41F[0x1]; // 0x41f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x420(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct F*394bf1e9ca> CustomHoudiniToolsLocation; // 0x438(0x10)
	int32 CookingThreadStackSize; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x450(0x10)
	struct FString OtlSearchPath; // 0x460(0x10)
	struct FString DsoSearchPath; // 0x470(0x10)
	struct FString ImageDsoSearchPath; // 0x480(0x10)
	struct FString AudioDsoSearchPath; // 0x490(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x12d0 (Inherited: 0xa00)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char *8839fb2ddc : 1; // 0xa00(0x01)
	char pad_A00_1 : 7; // 0xa00(0x01)
	char pad_A01[0x7]; // 0xa01(0x07)
	struct UPhysicalMaterial* *204232cd47; // 0xa08(0x08)
	struct FBodyInstance *2f12898ea3; // 0xa10(0x230)
	enum class ECollisionTraceFlag *be8e09a3cd; // 0xc40(0x01)
	char pad_C41[0x3]; // 0xc41(0x03)
	int32 *9322652be1; // 0xc44(0x04)
	float GeneratedLpvBiasMultiplier; // 0xc48(0x04)
	float *bf4d9b30af; // 0xc4c(0x04)
	struct F*de38513b35 *1a6b38b284; // 0xc50(0x10)
	int32 *22723916d9; // 0xc60(0x04)
	char *0ce4ece21f : 1; // 0xc64(0x01)
	char pad_C64_1 : 7; // 0xc64(0x01)
	char pad_C65[0x3]; // 0xc65(0x03)
	float *3d19e21e6d; // 0xc68(0x04)
	char pad_C6C[0x4]; // 0xc6c(0x04)
	struct UFoliageType_InstancedStaticMesh* *cd4a4ecb96; // 0xc70(0x08)
	struct TArray<struct UAssetUserData*> *84b4b3b9b1; // 0xc78(0x10)
	char pad_C88[0x478]; // 0xc88(0x478)
	struct FText BakeFolder; // 0x1100(0x18)
	struct FText *e3dc78b1b5; // 0x1118(0x18)
	char pad_1130[0x1a0]; // 0x1130(0x1a0)

	void *6549d698f1(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*6549d698f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x676c98c
};

// Class HoudiniEngineRuntime.*49d0847695
// Size: 0xd0 (Inherited: 0x28)
struct U*49d0847695 : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class HoudiniEngineRuntime.*7ca87db113
// Size: 0xa0 (Inherited: 0x28)
struct U*7ca87db113 : UObject {
	char pad_28[0x78]; // 0x28(0x78)
};

// Class HoudiniEngineRuntime.*5710129a72
// Size: 0x180 (Inherited: 0xa0)
struct U*5710129a72 : U*7ca87db113 {
	char pad_A0[0xe0]; // 0xa0(0xe0)
};

// Class HoudiniEngineRuntime.*1b1b00a0d7
// Size: 0x1a0 (Inherited: 0x28)
struct U*1b1b00a0d7 : UObject {
	char pad_28[0x178]; // 0x28(0x178)
};

// Class HoudiniEngineRuntime.*656b7997f1
// Size: 0x230 (Inherited: 0xa0)
struct U*656b7997f1 : U*7ca87db113 {
	char pad_A0[0x190]; // 0xa0(0x190)
};

// Class HoudiniEngineRuntime.*22b51864b4
// Size: 0xa0 (Inherited: 0xa0)
struct U*22b51864b4 : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*2d17d3981f
// Size: 0xd8 (Inherited: 0xa0)
struct U*2d17d3981f : U*7ca87db113 {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.*a992589925
// Size: 0xb0 (Inherited: 0xa0)
struct U*a992589925 : U*7ca87db113 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*6d09dd239e
// Size: 0xc8 (Inherited: 0xa0)
struct U*6d09dd239e : U*7ca87db113 {
	char pad_A0[0x28]; // 0xa0(0x28)
};

// Class HoudiniEngineRuntime.*343082fe94
// Size: 0xd8 (Inherited: 0xa0)
struct U*343082fe94 : U*7ca87db113 {
	char pad_A0[0x38]; // 0xa0(0x38)
};

// Class HoudiniEngineRuntime.*a0dabf2822
// Size: 0xa0 (Inherited: 0xa0)
struct U*a0dabf2822 : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*f64b6b7fea
// Size: 0xa0 (Inherited: 0xa0)
struct U*f64b6b7fea : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*cb5659bb90
// Size: 0xd0 (Inherited: 0xa0)
struct U*cb5659bb90 : U*7ca87db113 {
	char pad_A0[0x30]; // 0xa0(0x30)
};

// Class HoudiniEngineRuntime.*20f8dc9b4c
// Size: 0xa0 (Inherited: 0xa0)
struct U*20f8dc9b4c : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*7e4574ec29
// Size: 0xb0 (Inherited: 0xa0)
struct U*7e4574ec29 : U*7ca87db113 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*1d31d2af17
// Size: 0xb0 (Inherited: 0xa8)
struct U*1d31d2af17 : UCurveFloat {
	struct FRichCurve *2d625a83c8; // 0x30(0x70)
	bool *2df1ab8272; // 0xa0(0x01)

	float *f3987cbe77(); // Function Engine.CurveFloat.*f3987cbe77 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x94405c
	float *1bf4f700b6(); // Function Engine.CurveFloat.*1bf4f700b6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638e0b4
};

// Class HoudiniEngineRuntime.*0ef274f4ec
// Size: 0x208 (Inherited: 0x1f0)
struct U*0ef274f4ec : U*1fa4fa0482 {
	struct FRichCurve *87b8344682[0x04]; // 0x30(0x1c0)

	float *5d9d78cb4c(); // Function Engine.*1fa4fa0482.*5d9d78cb4c // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x64110a8
};

// Class HoudiniEngineRuntime.*6d4b1184a2
// Size: 0xc8 (Inherited: 0xb0)
struct U*6d4b1184a2 : U*7e4574ec29 {
	char pad_B0[0x18]; // 0xb0(0x18)
};

// Class HoudiniEngineRuntime.*35830b6ccf
// Size: 0xa0 (Inherited: 0xa0)
struct U*35830b6ccf : U*7ca87db113 {
};

// Class HoudiniEngineRuntime.*ea42fc3194
// Size: 0xb0 (Inherited: 0xa0)
struct U*ea42fc3194 : U*7ca87db113 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*d25a644b64
// Size: 0xb0 (Inherited: 0xa0)
struct U*d25a644b64 : U*7ca87db113 {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class HoudiniEngineRuntime.*e2b4d0409b
// Size: 0x200 (Inherited: 0x1f0)
struct U*e2b4d0409b : UActorComponent {
	struct F*64c6f9629b PrimaryComponentTick; // 0x110(0x58)
	struct TArray<struct FName> ComponentTags; // 0x168(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x178(0x10)
	char pad_268_0 : 3; // 0x268(0x01)
	char bReplicates : 1; // 0x188(0x01)
	char bNetAddressable : 1; // 0x188(0x01)
	char *d9de2ce983 : 1; // 0x188(0x01)
	char bCreatedByConstructionScript : 1; // 0x18a(0x01)
	char bInstanceComponent : 1; // 0x18a(0x01)
	char bAutoActivate : 1; // 0x18a(0x01)
	char *eedbc91ee9 : 1; // 0x18a(0x01)
	char *8016acb0c2 : 1; // 0x18a(0x01)
	struct FGuid DestructibleId; // 0x18c(0x10)
	bool bIsDestroyedVersion; // 0x19c(0x01)
	char *cb59e077f1 : 1; // 0x1a0(0x01)
	char bIsEditorOnly : 1; // 0x1a0(0x01)
	enum class EComponentCreationMethod CreationMethod; // 0x1a5(0x01)
	enum class EPendingCreationType *a029c1f885; // 0x1a6(0x01)
	struct TArray<struct FSimpleMemberReference> *1c5b1ecf7e; // 0x1b0(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1d0(0x10)
	char *6583edce58 : 1; // 0x1e9(0x01)

	void *b3ab644ab0(); // Function Engine.ActorComponent.*b3ab644ab0 // Native|Public|BlueprintCallable // @ game+0x639e998
	void *7fc2785714(); // Function Engine.ActorComponent.*7fc2785714 // Native|Public|BlueprintCallable // @ game+0x639ae94
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Final|Native|Public // @ game+0x6399758
	void AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x63849b8
	void Activate(); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0xc1f2b8
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0x8e93c0
	void *7e6bf7eb55(); // Function Engine.ActorComponent.*7e6bf7eb55 // Final|Native|Public|BlueprintCallable // @ game+0x63a1b84
	void *eda0f1fdef(); // Function Engine.ActorComponent.*eda0f1fdef // Final|Native|Public|BlueprintCallable // @ game+0x63a3d58
	void IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x639293c
	void *7af955f165(); // Function Engine.ActorComponent.*7af955f165 // Native|Public|BlueprintCallable // @ game+0x639afbc
	void *b6de83bb83(); // Function Engine.ActorComponent.*b6de83bb83 // Native|Public|BlueprintCallable // @ game+0x5e38004
	void ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *d30428cd54(); // Function Engine.ActorComponent.*d30428cd54 // Final|Native|Public|BlueprintCallable // @ game+0x63a3c34
	void *ef1420b078(); // Function Engine.ActorComponent.*ef1420b078 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d94c
	bool *cc59ee805b(); // Function Engine.ActorComponent.*cc59ee805b // Native|Public|BlueprintCallable // @ game+0x639dda0
	void *7664b363a1(); // Function Engine.ActorComponent.*7664b363a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb0ed1c
	void *70313663c3(); // Function Engine.ActorComponent.*70313663c3 // Final|Native|Public|BlueprintCallable // @ game+0x63a05e4
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *9ffc398f85(); // Function Engine.ActorComponent.*9ffc398f85 // Native|Public|BlueprintCallable // @ game+0x6384ae0
	void *65f31f10a3(); // Function Engine.ActorComponent.*65f31f10a3 // Native|Public|BlueprintCallable // @ game+0x63a054c
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *db9ec7e456(); // Function Engine.ActorComponent.*db9ec7e456 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63929fc
	void *baf5caeb25(); // Function Engine.ActorComponent.*baf5caeb25 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392b14
	void *298b7db98d(); // Function Engine.ActorComponent.*298b7db98d // Final|Native|Public|BlueprintCallable // @ game+0x6395d3c
	struct FName *d920280472(); // Function Engine.ActorComponent.*d920280472 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63886f8
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniEngineConvertBgeoCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniEngineConvertBgeoDirCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class HoudiniEngineRuntime.*757d92f217
// Size: 0x590 (Inherited: 0x4d0)
struct U*757d92f217 : USceneComponent {
	char pad_4D0[0xb0]; // 0x4d0(0xb0)
	enum class EHoudiniHandleType *6350cb5a66; // 0x580(0x01)
	char pad_581[0xf]; // 0x581(0x0f)
};

// Class HoudiniEngineRuntime.*c03f511763
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*c03f511763 : USceneComponent {
	struct UObject* *7898a8d882; // 0x4d0(0x08)
	struct TArray<struct AActor*> Instances; // 0x4d8(0x10)
	char pad_4E8[0x8]; // 0x4e8(0x08)
};

// Class HoudiniEngineRuntime.*177b28cef9
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*177b28cef9 : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x4d0(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x4e0(0x08)
	struct UStaticMesh* InstancedMesh; // 0x4e8(0x08)
};

// Class HoudiniEngineRuntime.*40ebb285b6
// Size: 0x5d0 (Inherited: 0x4d0)
struct U*40ebb285b6 : USceneComponent {
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
	char pad_5A7[0x29]; // 0x5a7(0x29)

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

// Class HoudiniEngineRuntime.*055562dd89
// Size: 0xc8 (Inherited: 0x28)
struct U*055562dd89 : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

