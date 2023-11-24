// Class Paper2D.*d19db3a036
// Size: 0x228 (Inherited: 0x208)
struct U*d19db3a036 : U*a98ced5fd3 {
	bool *c44297e3bb; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	int32 *e89ca08e9a; // 0x20c(0x04)
	struct FText *51f25007f0; // 0x210(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x860 (Inherited: 0x850)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x850(0x08)
	char pad_858[0x8]; // 0x858(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*15ec5843d3> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void *683e716efd(); // Function Paper2D.PaperFlipbook.*683e716efd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66fff90
	void *4a73422e07(); // Function Paper2D.PaperFlipbook.*4a73422e07 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff51c
	void *4a5bb800d2(bool bClampToEnds); // Function Paper2D.PaperFlipbook.*4a5bb800d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff1f0
	bool *4b86e55c9a(); // Function Paper2D.PaperFlipbook.*4b86e55c9a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff648
	int32 *3e772a8b33(); // Function Paper2D.PaperFlipbook.*3e772a8b33 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff5a8
	void *72ce475bc8(); // Function Paper2D.PaperFlipbook.*72ce475bc8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6574098
	void *2a067c1425(int32 Index); // Function Paper2D.PaperFlipbook.*2a067c1425 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6700008
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3e8(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xae0 (Inherited: 0xa90)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *49404ff303; // 0xa90(0x08)
	struct UMaterialInterface* Material; // 0xa98(0x08)
	float PlayRate; // 0xaa0(0x04)
	char bLooping : 1; // 0xaa4(0x01)
	char *fbf73c90fe : 1; // 0xaa4(0x01)
	char *68aa6cc295 : 1; // 0xaa4(0x01)
	char pad_AA4_3 : 5; // 0xaa4(0x01)
	char pad_AA5[0x3]; // 0xaa5(0x03)
	float *f633c2258e; // 0xaa8(0x04)
	int32 *411c6e6481; // 0xaac(0x04)
	struct FLinearColor SpriteColor; // 0xab0(0x10)
	struct UBodySetup* *9f6a40b802; // 0xac0(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xac8(0x10)
	char pad_AD8[0x8]; // 0xad8(0x08)

	void GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff53c
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6701610
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x6700558
	void *c8feab0145(); // Function Paper2D.PaperFlipbookComponent.*c8feab0145 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff754
	void *c17fc717bd(); // Function Paper2D.PaperFlipbookComponent.*c17fc717bd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff03c
	void *5796e82d63(int32 NewFramePosition); // Function Paper2D.PaperFlipbookComponent.*5796e82d63 // Final|Native|Public|BlueprintCallable // @ game+0x6700f8c
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x67007d8
	void IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66fffb0
	void *7c50afc426(); // Function Paper2D.PaperFlipbookComponent.*7c50afc426 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66fffe8
	void *08afa86053(); // Function Paper2D.PaperFlipbookComponent.*08afa86053 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff05c
	void SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x6700d58
	void SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6700cc0
	void SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6700e04
	void *f87a337269(); // Function Paper2D.PaperFlipbookComponent.*f87a337269 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670108c
	void *40b39951a3(); // Function Paper2D.PaperFlipbookComponent.*40b39951a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff554
	void IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66fffcc
	void *a358eb0e56(); // Function Paper2D.PaperFlipbookComponent.*a358eb0e56 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff01c
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x67007a8
	void SetPlaybackPosition(float NewPosition); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x6700e9c
	void OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x6700498
	void *8a3ca6cb91(); // Function Paper2D.PaperFlipbookComponent.*8a3ca6cb91 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66fefd4
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x6700590
	void *8405022e55(); // Function Paper2D.PaperFlipbookComponent.*8405022e55 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66feffc
	void *6ee70d4f9d(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.*6ee70d4f9d // Native|Public|BlueprintCallable // @ game+0x5fad788
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperGroupedSpriteActor : AActor {
	struct U*62acd79bfd* RenderComponent; // 0x3e8(0x08)
};

// Class Paper2D.*62acd79bfd
// Size: 0xac0 (Inherited: 0xa90)
struct U*62acd79bfd : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *b25c229efd; // 0xa90(0x10)
	struct TArray<struct F*d073adfbac> *85d67b60ee; // 0xaa0(0x10)
	char pad_AB0[0x10]; // 0xab0(0x10)

	bool *74896c1b04(); // Function Paper2D.*62acd79bfd.*74896c1b04 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff074
	void *a5fc070c25(struct FTransform Transform, bool bWorldSpace); // Function Paper2D.*62acd79bfd.*a5fc070c25 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fe8b4
	int32 *8f18d87416(); // Function Paper2D.*62acd79bfd.*8f18d87416 // Native|Public|BlueprintCallable // @ game+0x67005fc
	void *216377c782(int32 InstanceIndex, bool bMarkRenderStateDirty); // Function Paper2D.*62acd79bfd.*216377c782 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6701628
	void *0d0742ad4f(); // Function Paper2D.*62acd79bfd.*0d0742ad4f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6701570
	void *5d18775563(); // Function Paper2D.*62acd79bfd.*5d18775563 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff05c
	void *f11665ac8b(); // Function Paper2D.*62acd79bfd.*f11665ac8b // Native|Public|BlueprintCallable // @ game+0x58241d0
	void *a236834d4b(int32 InstanceIndex, bool bWorldSpace, bool bTeleport); // Function Paper2D.*62acd79bfd.*a236834d4b // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6701764
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28(0x01)
	bool bEnableTerrainSplineEditing; // 0x29(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class Paper2D.PaperSprite
// Size: 0xc0 (Inherited: 0x28)
struct UPaperSprite : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FVector2D SourceUV; // 0x38(0x08)
	struct FVector2D SourceDimension; // 0x40(0x08)
	struct UTexture2D* SourceTexture; // 0x48(0x08)
	struct TArray<struct UTexture*> *5c621f5ae4; // 0x50(0x10)
	struct FVector2D *cafb311ea2; // 0x60(0x08)
	struct FVector2D *9c6aa9c89d; // 0x68(0x08)
	struct UTexture2D* *fbc107b3f5; // 0x70(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x78(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x80(0x08)
	struct TArray<struct F*7f100e4858> Sockets; // 0x88(0x10)
	enum class ESpriteCollisionMode *03355d6ec4; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float *8c4b2dcc7a; // 0x9c(0x04)
	struct UBodySetup* BodySetup; // 0xa0(0x08)
	int32 *0658231efa; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FVector4> *158262e926; // 0xb0(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x3e8(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*2fdd3af67b
// Size: 0x28 (Inherited: 0x28)
struct U*2fdd3af67b : UBlueprintFunctionLibrary {

	int32 *908d8fcc32(); // Function Paper2D.*2fdd3af67b.*908d8fcc32 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67000ac
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xab0 (Inherited: 0xa90)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xa90(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xa98(0x08)
	struct FLinearColor SpriteColor; // 0xaa0(0x10)

	void *f87a337269(); // Function Paper2D.PaperSpriteComponent.*f87a337269 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6701184
	void *ccf8bc2d08(); // Function Paper2D.PaperSpriteComponent.*ccf8bc2d08 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66fefd4
	struct UPaperSprite* *73296e1372(); // Function Paper2D.PaperSpriteComponent.*73296e1372 // Native|Public|BlueprintCallable // @ game+0x5fad788
};

// Class Paper2D.PaperTerrainActor
// Size: 0x400 (Inherited: 0x3e8)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *e114fdb9eb; // 0x3e8(0x08)
	struct U*8e536803e6* SplineComponent; // 0x3f0(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x9e0 (Inherited: 0x990)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x988(0x08)
	bool bClosedSpline; // 0x990(0x01)
	bool bFilledSpline; // 0x991(0x01)
	struct U*8e536803e6* *2557c283e3; // 0x998(0x08)
	int32 RandomSeed; // 0x9a0(0x04)
	float *99809f19b7; // 0x9a4(0x04)
	struct FLinearColor TerrainColor; // 0x9a8(0x10)
	int32 *f8e649923a; // 0x9b8(0x04)
	enum class ESpriteCollisionMode *03355d6ec4; // 0x9bc(0x01)
	char pad_9BF[0x1]; // 0x9bf(0x01)
	float *ff57d72168; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct UBodySetup* *9f6a40b802; // 0x9c8(0x08)
	char pad_9D0[0x10]; // 0x9d0(0x10)

	void *b95b0bc60e(); // Function Paper2D.PaperTerrainComponent.*b95b0bc60e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670127c
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*fd2037aff1> Rules; // 0x30(0x10)
	struct UPaperSprite* *1e6835bdab; // 0x40(0x08)
};

// Class Paper2D.*8e536803e6
// Size: 0xac0 (Inherited: 0xa80)
struct U*8e536803e6 : USplineComponent {
	char pad_A80[0x40]; // 0xa80(0x40)
};

// Class Paper2D.*aec437fc15
// Size: 0x98 (Inherited: 0x28)
struct U*aec437fc15 : UObject {
	struct FText LayerName; // 0x28(0x18)
	int32 LayerWidth; // 0x40(0x04)
	int32 LayerHeight; // 0x44(0x04)
	char bHiddenInGame : 1; // 0x48(0x01)
	char bLayerCollides : 1; // 0x48(0x01)
	char bOverrideCollisionThickness : 1; // 0x48(0x01)
	char bOverrideCollisionOffset : 1; // 0x48(0x01)
	char pad_48_4 : 4; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float CollisionThicknessOverride; // 0x4c(0x04)
	float CollisionOffsetOverride; // 0x50(0x04)
	struct FLinearColor LayerColor; // 0x54(0x10)
	int32 *5858a43d97; // 0x64(0x04)
	int32 *d2bfabd487; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct F*9e658ab52c> *0175292221; // 0x70(0x10)
	struct UPaperTileSet* TileSet; // 0x80(0x08)
	struct TArray<int32> AllocatedGrid; // 0x88(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xa0 (Inherited: 0x28)
struct UPaperTileMap : UObject {
	int32 MapWidth; // 0x28(0x04)
	int32 MapHeight; // 0x2c(0x04)
	int32 TileWidth; // 0x30(0x04)
	int32 TileHeight; // 0x34(0x04)
	float *8c4b2dcc7a; // 0x38(0x04)
	float *a2c2d3512c; // 0x3c(0x04)
	float *fa5243bcf6; // 0x40(0x04)
	float SeparationPerLayer; // 0x44(0x04)
	struct UPaperTileSet* *a09e973a06; // 0x48(0x20)
	struct UMaterialInterface* Material; // 0x68(0x08)
	struct TArray<struct U*aec437fc15*> TileLayers; // 0x70(0x10)
	float CollisionThickness; // 0x80(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x84(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	int32 HexSideLength; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UBodySetup* BodySetup; // 0x90(0x08)
	int32 *7984ff8fcf; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3e8(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0xae0 (Inherited: 0xa90)
struct UPaperTileMapComponent : UMeshComponent {
	int32 MapWidth; // 0xa90(0x04)
	int32 MapHeight; // 0xa94(0x04)
	int32 TileWidth; // 0xa98(0x04)
	int32 TileHeight; // 0xa9c(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0xaa0(0x08)
	struct UMaterialInterface* Material; // 0xaa8(0x08)
	struct TArray<struct U*aec437fc15*> TileLayers; // 0xab0(0x10)
	struct FLinearColor *baee2e5386; // 0xac0(0x10)
	int32 *c16c77986e; // 0xad0(0x04)
	bool *562918bab8; // 0xad4(0x01)
	char pad_AD5[0x3]; // 0xad5(0x03)
	struct UPaperTileMap* TileMap; // 0xad8(0x08)

	void *ad4d30270a(int32 Layer); // Function Paper2D.PaperTileMapComponent.*ad4d30270a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff2e0
	void *4cc8bdf63e(); // Function Paper2D.PaperTileMapComponent.*4cc8bdf63e // Final|Native|Public|BlueprintCallable // @ game+0x67006a0
	float CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x66fedb0
	void *ef09f5cb6d(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.*ef09f5cb6d // Native|Public|BlueprintCallable // @ game+0x5fad788
	float *8d4fb9483c(int32 Layer); // Function Paper2D.PaperTileMapComponent.*8d4fb9483c // Final|Native|Public|BlueprintCallable // @ game+0x6700934
	void *eb875e8422(); // Function Paper2D.PaperTileMapComponent.*eb875e8422 // Final|Native|Public|BlueprintCallable // @ game+0x66feab0
	void *1ff2f7c3eb(); // Function Paper2D.PaperTileMapComponent.*1ff2f7c3eb // Final|Native|Public|BlueprintCallable // @ game+0x6700430
	void *43fa98f119(); // Function Paper2D.PaperTileMapComponent.*43fa98f119 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66ffbf4
	int32 *4c20ee2797(); // Function Paper2D.PaperTileMapComponent.*4c20ee2797 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff780
	void *d0cd947957(int32 TileX, int32 TileY, int32 LayerIndex); // Function Paper2D.PaperTileMapComponent.*d0cd947957 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66ffc10
	int32 *71e9b55f87(); // Function Paper2D.PaperTileMapComponent.*71e9b55f87 // Final|Native|Public|BlueprintCallable // @ game+0x6701314
	void *584b21b8fd(); // Function Paper2D.PaperTileMapComponent.*584b21b8fd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67014dc
	void *4b41188884(int32 TileX, int32 LayerIndex); // Function Paper2D.PaperTileMapComponent.*4b41188884 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66ffa64
	int32 *4c6ee96bcc(); // Function Paper2D.PaperTileMapComponent.*4c6ee96bcc // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66ff398
	int32 *8b0b40832e(int32 TileY, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.*8b0b40832e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66ff8d4
	void *3bf71f47b3(); // Function Paper2D.PaperTileMapComponent.*3bf71f47b3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6700bb8
	float *a8595f66fd(); // Function Paper2D.PaperTileMapComponent.*a8595f66fd // Final|Native|Public|BlueprintCallable // @ game+0x670082c
	void *72f929e77e(); // Function Paper2D.PaperTileMapComponent.*72f929e77e // Final|Native|Public|BlueprintCallable // @ game+0x67005e8
	void *187a3185ef(); // Function Paper2D.PaperTileMapComponent.*187a3185ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6700534
};

// Class Paper2D.PaperTileSet
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x28(0x08)
	struct UTexture2D* TileSheet; // 0x30(0x08)
	struct F*738db5e91a BorderMargin; // 0x38(0x10)
	struct FIntPoint PerTileSpacing; // 0x48(0x08)
	struct FIntPoint DrawingOffset; // 0x50(0x08)
	int32 *e5e68d865d; // 0x58(0x04)
	int32 *e5af7a8233; // 0x5c(0x04)
	int32 *5858a43d97; // 0x60(0x04)
	int32 *d2bfabd487; // 0x64(0x04)
	struct TArray<struct F*b5a220c0b9> PerTileData; // 0x68(0x10)
	struct TArray<struct F*72d51bb8aa> Terrains; // 0x78(0x10)
	int32 TileWidth; // 0x88(0x04)
	int32 TileHeight; // 0x8c(0x04)
	int32 Margin; // 0x90(0x04)
	int32 Spacing; // 0x94(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	bool BreakTile(); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66feb18
	void *568af304a1(struct F*9e658ab52c Tile); // Function Paper2D.TileMapBlueprintLibrary.*568af304a1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66ffe20
	bool MakeTile(int32 TileIndex); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6700234
	struct F*9e658ab52c *0067d4a39c(); // Function Paper2D.TileMapBlueprintLibrary.*0067d4a39c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66ffed8
};

