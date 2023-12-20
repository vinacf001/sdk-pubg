// Class PrefabAsset.PrefabActor
// Size: 0x418 (Inherited: 0x3e8)
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x3e8(0x08)
	struct FText BackupPrefabCopyData; // 0x3f0(0x18)
	bool bKeepMaterialOverrides; // 0x408(0x01)
	bool bKeepTslOverrides; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct U*f720ae3ffb* BuildingHLOD; // 0x410(0x08)

	void *fae53a886c(); // Function PrefabAsset.PrefabActor.*fae53a886c // Final|Native|Public|BlueprintCallable // @ game+0x6dc9b84
	void *dcdd606e61(); // Function PrefabAsset.PrefabActor.*dcdd606e61 // Final|Native|Public|BlueprintCallable // @ game+0x5dee178
	void *5a4e9de26a(); // Function PrefabAsset.PrefabActor.*5a4e9de26a // Final|Native|Public|BlueprintCallable // @ game+0x6dc9c38
	void *9dc3ed0312(); // Function PrefabAsset.PrefabActor.*9dc3ed0312 // Final|Native|Public|BlueprintCallable // @ game+0x6dc9ba4
};

// Class PrefabAsset.PrefabActorHolder
// Size: 0x3e8 (Inherited: 0x3e8)
struct APrefabActorHolder : AActor {
};

// Class PrefabAsset.PrefabLODHolder
// Size: 0x3f8 (Inherited: 0x3e8)
struct APrefabLODHolder : APrefabActorHolder {
	struct U*f720ae3ffb* HLODParentComponent; // 0x3e8(0x08)
	struct UStaticMesh* LevelLODMesh; // 0x3f0(0x08)
};

// Class PrefabAsset.PrefabAsset
// Size: 0x138 (Inherited: 0x30)
struct UPrefabAsset : UObject {
	struct FGuid *14be3a73c7; // 0x30(0x10)
	struct FText PrefabContent; // 0x40(0x18)
	struct FVector PrefabPivot; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString *77e421946e; // 0x68(0x10)
	struct TMap<struct FString, struct FStringAssetReference> AssetReferences; // 0x78(0x50)
	int32 NumActors; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FStringAssetReference *706a093d0f; // 0xd0(0x10)
	struct TMap<struct FString, struct F*f4c50b3a3b> *8a50b4b763; // 0xe0(0x50)
	bool *ce24084ce3; // 0x130(0x01)
	bool *d691e2d1b2; // 0x131(0x01)
	bool *6481a7e832; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
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
// Size: 0xa90 (Inherited: 0x9b0)
struct UPrefabComponent : UPrimitiveComponent {
	char *7c5802b281 : 1; // 0x9a8(0x01)
	char *bcd7297999 : 1; // 0x9a8(0x01)
	char *1d321fd59a : 1; // 0x9a8(0x01)
	struct TMap<struct FString, struct F*f4c50b3a3b> ComponentPrefabOverrideMap; // 0x9b0(0x50)
	struct FVector *12e73d6622; // 0xa00(0x0c)
	struct FVector *b34a0dd0d4; // 0xa0c(0x0c)
	char *cf7c5ea78f : 1; // 0xa18(0x01)
	char pad_A18_4 : 4; // 0xa18(0x01)
	char pad_A19[0x7]; // 0xa19(0x07)
	struct UBlueprint* GeneratedBlueprint; // 0xa20(0x08)
	struct UPrefabAsset* Prefab; // 0xa28(0x08)
	struct TMap<struct FName, struct AActor*> PrefabInstancesMap; // 0xa30(0x50)
	char bTransient : 1; // 0xa80(0x01)
	char pad_A80_1 : 7; // 0xa80(0x01)
	char pad_A81[0x3]; // 0xa81(0x03)
	bool bIsBaseBuilding; // 0xa84(0x01)
	char pad_A85[0x3]; // 0xa85(0x03)
	uint32 HouseID; // 0xa88(0x04)
	bool *d691e2d1b2; // 0xa8c(0x01)
	char pad_A8D[0x1]; // 0xa8d(0x01)
	bool bWasDisconnectedBeforeBake; // 0xa8e(0x01)
	char pad_A8F[0x1]; // 0xa8f(0x01)
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
	enum class *cc8151a8a3 PrefabComponentVisualizerType; // 0x42(0x01)
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

