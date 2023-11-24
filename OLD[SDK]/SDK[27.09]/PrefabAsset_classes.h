// Class PrefabAsset.PrefabActor
// Size: 0x438 (Inherited: 0x408)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x408(0x08)
	struct FText BackupPrefabCopyData; // 0x410(0x18)
	bool bKeepMaterialOverrides; // 0x428(0x01)
	bool bKeepTslOverrides; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct U*65fe268759* BuildingHLOD; // 0x430(0x08)

	void *5175f529f5(); // Function PrefabAsset.PrefabActor.*5175f529f5 // Final|Native|Public|BlueprintCallable // @ game+0x69b0c94
	void *2440bfc1b6(); // Function PrefabAsset.PrefabActor.*2440bfc1b6 // Final|Native|Public|BlueprintCallable // @ game+0x5a0769c
	void *be7b0d0791(); // Function PrefabAsset.PrefabActor.*be7b0d0791 // Final|Native|Public|BlueprintCallable // @ game+0x69b0c00
	void *974d2a98c1(); // Function PrefabAsset.PrefabActor.*974d2a98c1 // Final|Native|Public|BlueprintCallable // @ game+0x69b0be0
};

// Class PrefabAsset.PrefabActorHolder
// Size: 0x408 (Inherited: 0x408)
struct APrefabActorHolder : AActor {
};

// Class PrefabAsset.PrefabLODHolder
// Size: 0x418 (Inherited: 0x408)
struct APrefabLODHolder : APrefabActorHolder {
	struct U*65fe268759* HLODParentComponent; // 0x408(0x08)
	struct UStaticMesh* LevelLODMesh; // 0x410(0x08)
};

// Class PrefabAsset.PrefabAsset
// Size: 0x138 (Inherited: 0x30)
struct UPrefabAsset : UObject {
	struct FGuid *b9c34774dc; // 0x30(0x10)
	struct FText PrefabContent; // 0x40(0x18)
	struct FVector PrefabPivot; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString *327654e071; // 0x68(0x10)
	struct TMap<struct FString, struct FStringAssetReference> AssetReferences; // 0x78(0x50)
	int32 NumActors; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FStringAssetReference *ccf006fe3e; // 0xd0(0x10)
	struct TMap<struct FString, struct F*f3ec451ec7> *865b64f290; // 0xe0(0x50)
	bool *20b23df91d; // 0x130(0x01)
	bool *c7dcf22c82; // 0x131(0x01)
	bool *06e2de619c; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
};

// Class PrefabAsset.PrefabBuildingCreator
// Size: 0x470 (Inherited: 0x408)
struct APrefabBuildingCreator : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	bool bSpawnInOrder; // 0x410(0x01)
	bool bLockConfiguration; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct TArray<struct UPrefabAsset*> PrefabAssetList; // 0x418(0x10)
	struct TArray<struct UPrefabAsset*> PrefabOverrides; // 0x428(0x10)
	bool bUseRoofPrefab; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UPrefabAsset* RoofPrefab; // 0x440(0x08)
	struct AActor* SpawnedRoofPrefab; // 0x448(0x08)
	struct TArray<struct AActor*> SpawnedPrefabActors; // 0x450(0x10)
	float FloorHeight; // 0x460(0x04)
	float BaseOffset; // 0x464(0x04)
	int32 NumberOfFloors; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
};

// Class PrefabAsset.PrefabComponent
// Size: 0xae0 (Inherited: 0xa00)
struct UPrefabComponent : UPrimitiveComponent {
	char *48780ee637 : 1; // 0x9f8(0x01)
	char *0180783a2f : 1; // 0x9f8(0x01)
	char *2e5aabe093 : 1; // 0x9f8(0x01)
	struct TMap<struct FString, struct F*f3ec451ec7> ComponentPrefabOverrideMap; // 0xa00(0x50)
	struct FVector *1a50398c74; // 0xa50(0x0c)
	struct FVector *2c624734a2; // 0xa5c(0x0c)
	char *e11000b2fb : 1; // 0xa68(0x01)
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
	bool *c7dcf22c82; // 0xadc(0x01)
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
	enum class *82089f54f6 PrefabComponentVisualizerType; // 0x42(0x01)
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

