// Class PrefabAsset.PrefabActor
// Size: 0x420 (Inherited: 0x3f0)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x3f0(0x08)
	struct FText BackupPrefabCopyData; // 0x3f8(0x18)
	bool bKeepMaterialOverrides; // 0x410(0x01)
	bool bKeepTslOverrides; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct U*7593155b31* BuildingHLOD; // 0x418(0x08)

	bool *ca9ace97ac(); // Function PrefabAsset.PrefabActor.*ca9ace97ac // Final|Native|Public|BlueprintCallable // @ game+0x65d68d4
	enum class EComponentMobility *66cdfa68dc(); // Function PrefabAsset.PrefabActor.*66cdfa68dc // Final|Native|Public|BlueprintCallable // @ game+0x65d6840
	struct UPrefabAsset* *69231e5754(); // Function PrefabAsset.PrefabActor.*69231e5754 // Final|Native|Public|BlueprintCallable // @ game+0x65d6820
	bool *6701fbde30(); // Function PrefabAsset.PrefabActor.*6701fbde30 // Final|Native|Public|BlueprintCallable // @ game+0x569d6ec
};

// Class PrefabAsset.PrefabActorHolder
// Size: 0x3f0 (Inherited: 0x3f0)
struct APrefabActorHolder : AActor {
};

// Class PrefabAsset.PrefabLODHolder
// Size: 0x400 (Inherited: 0x3f0)
struct APrefabLODHolder : APrefabActorHolder {
	struct U*7593155b31* HLODParentComponent; // 0x3f0(0x08)
	struct UStaticMesh* LevelLODMesh; // 0x3f8(0x08)
};

// Class PrefabAsset.PrefabAsset
// Size: 0x138 (Inherited: 0x30)
struct UPrefabAsset : UObject {
	struct FGuid *ab9c3f9f59; // 0x30(0x10)
	struct FText PrefabContent; // 0x40(0x18)
	struct FVector PrefabPivot; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString *78e152a1f9; // 0x68(0x10)
	struct TMap<struct FString, struct FStringAssetReference> AssetReferences; // 0x78(0x50)
	int32 NumActors; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FStringAssetReference *ec36852f13; // 0xd0(0x10)
	struct TMap<struct FString, struct F*d0c99cb1dc> *d98e3606eb; // 0xe0(0x50)
	bool *ebe315cf9a; // 0x130(0x01)
	bool *c7a51587e0; // 0x131(0x01)
	bool *cf954345f0; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
};

// Class PrefabAsset.PrefabBuildingCreator
// Size: 0x458 (Inherited: 0x3f0)
struct APrefabBuildingCreator : AActor {
	char pad_3F0[0x8]; // 0x3f0(0x08)
	bool bSpawnInOrder; // 0x3f8(0x01)
	bool bLockConfiguration; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct TArray<struct UPrefabAsset*> PrefabAssetList; // 0x400(0x10)
	struct TArray<struct UPrefabAsset*> PrefabOverrides; // 0x410(0x10)
	bool bUseRoofPrefab; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UPrefabAsset* RoofPrefab; // 0x428(0x08)
	struct AActor* SpawnedRoofPrefab; // 0x430(0x08)
	struct TArray<struct AActor*> SpawnedPrefabActors; // 0x438(0x10)
	float FloorHeight; // 0x448(0x04)
	float BaseOffset; // 0x44c(0x04)
	int32 NumberOfFloors; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// Class PrefabAsset.PrefabComponent
// Size: 0xae0 (Inherited: 0xa00)
struct UPrefabComponent : UPrimitiveComponent {
	char *0c54591e81 : 1; // 0x9f8(0x01)
	char *8a7e1c855f : 1; // 0x9f8(0x01)
	char *76acc1b3c1 : 1; // 0x9f8(0x01)
	struct TMap<struct FString, struct F*d0c99cb1dc> ComponentPrefabOverrideMap; // 0xa00(0x50)
	struct FVector *dce59dcc87; // 0xa50(0x0c)
	struct FVector *44b0c7b72d; // 0xa5c(0x0c)
	char *b6633313e8 : 1; // 0xa68(0x01)
	char pad_A68_4 : 4; // 0xa68(0x01)
	char pad_A69[0x7]; // 0xa69(0x07)
	struct UBlueprint* GeneratedBlueprint; // 0xa70(0x08)
	struct UPrefabAsset* Prefab; // 0xa78(0x08)
	struct TMap<struct FName, struct AActor*> PrefabInstancesMap; // 0xa80(0x50)
	char bTransient : 1; // 0xad0(0x01)
	char pad_AD0_1 : 7; // 0xad0(0x01)
	char pad_AD1[0x3]; // 0xad1(0x03)
	bool bIsBaseBuilding; // 0xad4(0x01)
	char pad_AD5[0x3]; // 0xad5(0x03)
	uint32 HouseID; // 0xad8(0x04)
	bool *c7a51587e0; // 0xadc(0x01)
	char pad_ADD[0x1]; // 0xadd(0x01)
	bool bWasDisconnectedBeforeBake; // 0xade(0x01)
	char pad_ADF[0x1]; // 0xadf(0x01)
};

// Class PrefabAsset.PrefabToolSettings
// Size: 0xc0 (Inherited: 0x30)
struct UPrefabToolSettings : UObject {
	bool bReplaceActorsWithCreatedPrefab; // 0x30(0x01)
	bool bUpdateAllPrefabActorsWhenOpenMap; // 0x31(0x01)
	bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x32(0x01)
	bool bShouldLockAllPrefabsOnMapOpen; // 0x33(0x01)
	bool bUpdatePrefabThumbnailOnSave; // 0x34(0x01)
	char pad_35[0x4]; // 0x35(0x04)
	bool bIsolateWhenEnteringPrefab; // 0x39(0x01)
	bool bExpandComponentDestroyAndConvert; // 0x3a(0x01)
	bool bExpandComponentPivotAndSnap; // 0x3b(0x01)
	bool bExpandComponentCollapse; // 0x3c(0x01)
	bool bExpandComponentTSLSettings; // 0x3d(0x01)
	bool bExpandComponentSelectionSettings; // 0x3e(0x01)
	bool bExpandComponentDestruction; // 0x3f(0x01)
	bool bExpandComponentGeneratedBP; // 0x40(0x01)
	bool bEnablePrefabComponentVisualizer; // 0x41(0x01)
	enum class *9ed1ecb689 PrefabComponentVisualizerType; // 0x42(0x01)
	bool bDisplayPrefabComponentVisualizerEvenNotSelected; // 0x43(0x01)
	struct FColor PrefabViewVisualizerColor; // 0x44(0x04)
	struct FColor PrefabViewVisualizerColorBaseBuilding; // 0x48(0x04)
	struct FColor PrefabViewVisualizerColorDesignItems; // 0x4c(0x04)
	struct FColor TargetActorColor; // 0x50(0x04)
	struct FColor UnLockedConnectedColor; // 0x54(0x04)
	struct FColor LockedConnectedColor; // 0x58(0x04)
	struct FColor UnLockedDisConnectedColor; // 0x5c(0x04)
	struct FColor LockedDisConnectedColor; // 0x60(0x04)
	struct FColor UnLockedNoPrefabAssignedColor; // 0x64(0x04)
	struct FColor LockedNoPrefabAssignedColor; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FStringAssetReference PrefabMaterialPath; // 0x70(0x10)
	struct UMaterial* PrefabMaterial; // 0x80(0x08)
	char pad_88[0x1]; // 0x88(0x01)
	bool bDisableLockPrefabSelectionFeature; // 0x89(0x01)
	char pad_8A[0x30]; // 0x8a(0x30)
	bool bLockPrefabChildSelection; // 0xba(0x01)
	bool bDebugMode; // 0xbb(0x01)
	bool bTransparentvisualizer; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

