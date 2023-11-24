// Class PrefabAsset.PrefabActor
// Size: 0x418 (Inherited: 0x3e8)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x3e8(0x08)
	struct FText BackupPrefabCopyData; // 0x3f0(0x18)
	bool bKeepMaterialOverrides; // 0x408(0x01)
	bool bKeepTslOverrides; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct U*7593155b31* BuildingHLOD; // 0x410(0x08)

	struct UPrefabAsset* *ca9ace97ac(); // Function PrefabAsset.PrefabActor.*ca9ace97ac // Final|Native|Public|BlueprintCallable // @ game+0x67d5ea4
	void *66cdfa68dc(); // Function PrefabAsset.PrefabActor.*66cdfa68dc // Final|Native|Public|BlueprintCallable // @ game+0x67d5e10
	void *69231e5754(); // Function PrefabAsset.PrefabActor.*69231e5754 // Final|Native|Public|BlueprintCallable // @ game+0x67d5df0
	void *6701fbde30(); // Function PrefabAsset.PrefabActor.*6701fbde30 // Final|Native|Public|BlueprintCallable // @ game+0x5875e0c
};

// Class PrefabAsset.PrefabActorHolder
// Size: 0x3e8 (Inherited: 0x3e8)
struct APrefabActorHolder : AActor {
};

// Class PrefabAsset.PrefabLODHolder
// Size: 0x3f8 (Inherited: 0x3e8)
struct APrefabLODHolder : APrefabActorHolder {
	struct U*7593155b31* HLODParentComponent; // 0x3e8(0x08)
	struct UStaticMesh* LevelLODMesh; // 0x3f0(0x08)
};

// Class PrefabAsset.PrefabAsset
// Size: 0x130 (Inherited: 0x28)
struct UPrefabAsset : UObject {
	struct FGuid *ab9c3f9f59; // 0x28(0x10)
	struct FText PrefabContent; // 0x38(0x18)
	struct FVector PrefabPivot; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString *78e152a1f9; // 0x60(0x10)
	struct TMap<struct FString, struct FStringAssetReference> AssetReferences; // 0x70(0x50)
	int32 NumActors; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FStringAssetReference *ec36852f13; // 0xc8(0x10)
	struct TMap<struct FString, struct F*d0c99cb1dc> *d98e3606eb; // 0xd8(0x50)
	bool *ebe315cf9a; // 0x128(0x01)
	bool *c7a51587e0; // 0x129(0x01)
	bool *cf954345f0; // 0x12a(0x01)
	char pad_12B[0x5]; // 0x12b(0x05)
};

// Class PrefabAsset.PrefabBuildingCreator
// Size: 0x450 (Inherited: 0x3e8)
struct APrefabBuildingCreator : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	bool bSpawnInOrder; // 0x3f0(0x01)
	bool bLockConfiguration; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct TArray<struct UPrefabAsset*> PrefabAssetList; // 0x3f8(0x10)
	struct TArray<struct UPrefabAsset*> PrefabOverrides; // 0x408(0x10)
	bool bUseRoofPrefab; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UPrefabAsset* RoofPrefab; // 0x420(0x08)
	struct AActor* SpawnedRoofPrefab; // 0x428(0x08)
	struct TArray<struct AActor*> SpawnedPrefabActors; // 0x430(0x10)
	float FloorHeight; // 0x440(0x04)
	float BaseOffset; // 0x444(0x04)
	int32 NumberOfFloors; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
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
// Size: 0xb8 (Inherited: 0x28)
struct UPrefabToolSettings : UObject {
	bool bReplaceActorsWithCreatedPrefab; // 0x28(0x01)
	bool bUpdateAllPrefabActorsWhenOpenMap; // 0x29(0x01)
	bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x2a(0x01)
	bool bShouldLockAllPrefabsOnMapOpen; // 0x2b(0x01)
	bool bUpdatePrefabThumbnailOnSave; // 0x2c(0x01)
	char pad_2D[0x4]; // 0x2d(0x04)
	bool bIsolateWhenEnteringPrefab; // 0x31(0x01)
	bool bExpandComponentDestroyAndConvert; // 0x32(0x01)
	bool bExpandComponentPivotAndSnap; // 0x33(0x01)
	bool bExpandComponentCollapse; // 0x34(0x01)
	bool bExpandComponentTSLSettings; // 0x35(0x01)
	bool bExpandComponentSelectionSettings; // 0x36(0x01)
	bool bExpandComponentDestruction; // 0x37(0x01)
	bool bExpandComponentGeneratedBP; // 0x38(0x01)
	bool bEnablePrefabComponentVisualizer; // 0x39(0x01)
	enum class *9ed1ecb689 PrefabComponentVisualizerType; // 0x3a(0x01)
	bool bDisplayPrefabComponentVisualizerEvenNotSelected; // 0x3b(0x01)
	struct FColor PrefabViewVisualizerColor; // 0x3c(0x04)
	struct FColor PrefabViewVisualizerColorBaseBuilding; // 0x40(0x04)
	struct FColor PrefabViewVisualizerColorDesignItems; // 0x44(0x04)
	struct FColor TargetActorColor; // 0x48(0x04)
	struct FColor UnLockedConnectedColor; // 0x4c(0x04)
	struct FColor LockedConnectedColor; // 0x50(0x04)
	struct FColor UnLockedDisConnectedColor; // 0x54(0x04)
	struct FColor LockedDisConnectedColor; // 0x58(0x04)
	struct FColor UnLockedNoPrefabAssignedColor; // 0x5c(0x04)
	struct FColor LockedNoPrefabAssignedColor; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FStringAssetReference PrefabMaterialPath; // 0x68(0x10)
	struct UMaterial* PrefabMaterial; // 0x78(0x08)
	char pad_80[0x1]; // 0x80(0x01)
	bool bDisableLockPrefabSelectionFeature; // 0x81(0x01)
	char pad_82[0x30]; // 0x82(0x30)
	bool bLockPrefabChildSelection; // 0xb2(0x01)
	bool bDebugMode; // 0xb3(0x01)
	bool bTransparentvisualizer; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
};

