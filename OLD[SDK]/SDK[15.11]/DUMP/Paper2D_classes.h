// Class Paper2D.*d19db3a036
// Size: 0x230 (Inherited: 0x210)
struct U*d19db3a036 : U*a98ced5fd3 {
	bool *c44297e3bb; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32 *e89ca08e9a; // 0x214(0x04)
	struct FText *51f25007f0; // 0x218(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x880 (Inherited: 0x870)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x870(0x08)
	char pad_878[0x8]; // 0x878(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x58 (Inherited: 0x30)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*15ec5843d3> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *683e716efd(); // Function Paper2D.PaperFlipbook.*683e716efd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690bb80
	void *4a73422e07(); // Function Paper2D.PaperFlipbook.*4a73422e07 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b108
	void *4a5bb800d2(); // Function Paper2D.PaperFlipbook.*4a5bb800d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690add4
	void *4b86e55c9a(); // Function Paper2D.PaperFlipbook.*4b86e55c9a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b234
	void *3e772a8b33(); // Function Paper2D.PaperFlipbook.*3e772a8b33 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b194
	void *72ce475bc8(); // Function Paper2D.PaperFlipbook.*72ce475bc8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x677e538
	void *2a067c1425(); // Function Paper2D.PaperFlipbook.*2a067c1425 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690bbf8
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xaf0 (Inherited: 0xaa0)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *49404ff303; // 0xaa0(0x08)
	struct UMaterialInterface* Material; // 0xaa8(0x08)
	float PlayRate; // 0xab0(0x04)
	char bLooping : 1; // 0xab4(0x01)
	char *fbf73c90fe : 1; // 0xab4(0x01)
	char *68aa6cc295 : 1; // 0xab4(0x01)
	char pad_AB4_3 : 5; // 0xab4(0x01)
	char pad_AB5[0x3]; // 0xab5(0x03)
	float *f633c2258e; // 0xab8(0x04)
	int32 *411c6e6481; // 0xabc(0x04)
	struct FLinearColor SpriteColor; // 0xac0(0x10)
	struct UBodySetup* *9f6a40b802; // 0xad0(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xad8(0x10)
	char pad_AE8[0x8]; // 0xae8(0x08)

	void GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b128
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x690d204
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x690c148
	void *c8feab0145(); // Function Paper2D.PaperFlipbookComponent.*c8feab0145 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b340
	void *c17fc717bd(); // Function Paper2D.PaperFlipbookComponent.*c17fc717bd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690ac20
	void *5796e82d63(); // Function Paper2D.PaperFlipbookComponent.*5796e82d63 // Final|Native|Public|BlueprintCallable // @ game+0x690cb7c
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x690c3c8
	void IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690bba0
	void *7c50afc426(); // Function Paper2D.PaperFlipbookComponent.*7c50afc426 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690bbd8
	void *08afa86053(); // Function Paper2D.PaperFlipbookComponent.*08afa86053 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690ac40
	void SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x690c948
	void SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x690c8b0
	void SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x690c9f4
	void *f87a337269(); // Function Paper2D.PaperFlipbookComponent.*f87a337269 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x690cc7c
	void *40b39951a3(); // Function Paper2D.PaperFlipbookComponent.*40b39951a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b140
	void IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690bbbc
	void *a358eb0e56(); // Function Paper2D.PaperFlipbookComponent.*a358eb0e56 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690ac00
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x690c398
	void SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x690ca8c
	void OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x690c088
	void *8a3ca6cb91(); // Function Paper2D.PaperFlipbookComponent.*8a3ca6cb91 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x690abb8
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x690c180
	void *8405022e55(); // Function Paper2D.PaperFlipbookComponent.*8405022e55 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690abe0
	void *6ee70d4f9d(); // Function Paper2D.PaperFlipbookComponent.*6ee70d4f9d // Native|Public|BlueprintCallable // @ game+0x61a50b4
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperGroupedSpriteActor : AActor {
	struct U*62acd79bfd* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.*62acd79bfd
// Size: 0xad0 (Inherited: 0xaa0)
struct U*62acd79bfd : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *b25c229efd; // 0xaa0(0x10)
	struct TArray<struct F*d073adfbac> *85d67b60ee; // 0xab0(0x10)
	char pad_AC0[0x10]; // 0xac0(0x10)

	void *74896c1b04(); // Function Paper2D.*62acd79bfd.*74896c1b04 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x690ac58
	void *a5fc070c25(); // Function Paper2D.*62acd79bfd.*a5fc070c25 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x690a498
	void *8f18d87416(); // Function Paper2D.*62acd79bfd.*8f18d87416 // Native|Public|BlueprintCallable // @ game+0x690c1ec
	void *216377c782(); // Function Paper2D.*62acd79bfd.*216377c782 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x690d21c
	void *0d0742ad4f(); // Function Paper2D.*62acd79bfd.*0d0742ad4f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x690d164
	void *5d18775563(); // Function Paper2D.*62acd79bfd.*5d18775563 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690ac40
	void *f11665ac8b(); // Function Paper2D.*62acd79bfd.*f11665ac8b // Native|Public|BlueprintCallable // @ game+0x5a03d78
	void *a236834d4b(); // Function Paper2D.*62acd79bfd.*a236834d4b // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x690d358
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x38 (Inherited: 0x30)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x30(0x01)
	bool bEnableTerrainSplineEditing; // 0x31(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class Paper2D.PaperSprite
// Size: 0xc8 (Inherited: 0x30)
struct UPaperSprite : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FVector2D SourceUV; // 0x40(0x08)
	struct FVector2D SourceDimension; // 0x48(0x08)
	struct UTexture2D* SourceTexture; // 0x50(0x08)
	struct TArray<struct UTexture*> *5c621f5ae4; // 0x58(0x10)
	struct FVector2D *cafb311ea2; // 0x68(0x08)
	struct FVector2D *9c6aa9c89d; // 0x70(0x08)
	struct UTexture2D* *fbc107b3f5; // 0x78(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x80(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x88(0x08)
	struct TArray<struct F*7f100e4858> Sockets; // 0x90(0x10)
	enum class ESpriteCollisionMode *03355d6ec4; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float *8c4b2dcc7a; // 0xa4(0x04)
	struct UBodySetup* BodySetup; // 0xa8(0x08)
	int32 *0658231efa; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FVector4> *158262e926; // 0xb8(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*2fdd3af67b
// Size: 0x30 (Inherited: 0x30)
struct U*2fdd3af67b : UBlueprintFunctionLibrary {

	void *908d8fcc32(); // Function Paper2D.*2fdd3af67b.*908d8fcc32 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x690bc9c
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xac0 (Inherited: 0xaa0)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xaa0(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xaa8(0x08)
	struct FLinearColor SpriteColor; // 0xab0(0x10)

	void *f87a337269(); // Function Paper2D.PaperSpriteComponent.*f87a337269 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x690cd74
	void *ccf8bc2d08(); // Function Paper2D.PaperSpriteComponent.*ccf8bc2d08 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x690abb8
	void *73296e1372(); // Function Paper2D.PaperSpriteComponent.*73296e1372 // Native|Public|BlueprintCallable // @ game+0x61a50b4
};

// Class Paper2D.PaperTerrainActor
// Size: 0x410 (Inherited: 0x3f8)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *e114fdb9eb; // 0x3f8(0x08)
	struct U*8e536803e6* SplineComponent; // 0x400(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x408(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x9f0 (Inherited: 0x9a0)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x998(0x08)
	bool bClosedSpline; // 0x9a0(0x01)
	bool bFilledSpline; // 0x9a1(0x01)
	struct U*8e536803e6* *2557c283e3; // 0x9a8(0x08)
	int32 RandomSeed; // 0x9b0(0x04)
	float *99809f19b7; // 0x9b4(0x04)
	struct FLinearColor TerrainColor; // 0x9b8(0x10)
	int32 *f8e649923a; // 0x9c8(0x04)
	enum class ESpriteCollisionMode *03355d6ec4; // 0x9cc(0x01)
	char pad_9CF[0x1]; // 0x9cf(0x01)
	float *ff57d72168; // 0x9d0(0x04)
	char pad_9D4[0x4]; // 0x9d4(0x04)
	struct UBodySetup* *9f6a40b802; // 0x9d8(0x08)
	char pad_9E0[0x10]; // 0x9e0(0x10)

	void *b95b0bc60e(); // Function Paper2D.PaperTerrainComponent.*b95b0bc60e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x690ce6c
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*fd2037aff1> Rules; // 0x38(0x10)
	struct UPaperSprite* *1e6835bdab; // 0x48(0x08)
};

// Class Paper2D.*8e536803e6
// Size: 0xad0 (Inherited: 0xa90)
struct U*8e536803e6 : USplineComponent {
	char pad_A90[0x40]; // 0xa90(0x40)
};

// Class Paper2D.*aec437fc15
// Size: 0xa0 (Inherited: 0x30)
struct U*aec437fc15 : UObject {
	struct FText LayerName; // 0x30(0x18)
	int32 LayerWidth; // 0x48(0x04)
	int32 LayerHeight; // 0x4c(0x04)
	char bHiddenInGame : 1; // 0x50(0x01)
	char bLayerCollides : 1; // 0x50(0x01)
	char bOverrideCollisionThickness : 1; // 0x50(0x01)
	char bOverrideCollisionOffset : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CollisionThicknessOverride; // 0x54(0x04)
	float CollisionOffsetOverride; // 0x58(0x04)
	struct FLinearColor LayerColor; // 0x5c(0x10)
	int32 *5858a43d97; // 0x6c(0x04)
	int32 *d2bfabd487; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct F*9e658ab52c> *0175292221; // 0x78(0x10)
	struct UPaperTileSet* TileSet; // 0x88(0x08)
	struct TArray<int32> AllocatedGrid; // 0x90(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xa8 (Inherited: 0x30)
struct UPaperTileMap : UObject {
	int32 MapWidth; // 0x30(0x04)
	int32 MapHeight; // 0x34(0x04)
	int32 TileWidth; // 0x38(0x04)
	int32 TileHeight; // 0x3c(0x04)
	float *8c4b2dcc7a; // 0x40(0x04)
	float *a2c2d3512c; // 0x44(0x04)
	float *fa5243bcf6; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	struct UPaperTileSet* *a09e973a06; // 0x50(0x20)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct U*aec437fc15*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32 HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32 *7984ff8fcf; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0xaf0 (Inherited: 0xaa0)
struct UPaperTileMapComponent : UMeshComponent {
	int32 MapWidth; // 0xaa0(0x04)
	int32 MapHeight; // 0xaa4(0x04)
	int32 TileWidth; // 0xaa8(0x04)
	int32 TileHeight; // 0xaac(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0xab0(0x08)
	struct UMaterialInterface* Material; // 0xab8(0x08)
	struct TArray<struct U*aec437fc15*> TileLayers; // 0xac0(0x10)
	struct FLinearColor *baee2e5386; // 0xad0(0x10)
	int32 *c16c77986e; // 0xae0(0x04)
	bool *562918bab8; // 0xae4(0x01)
	char pad_AE5[0x3]; // 0xae5(0x03)
	struct UPaperTileMap* TileMap; // 0xae8(0x08)

	void *ad4d30270a(); // Function Paper2D.PaperTileMapComponent.*ad4d30270a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x690aec4
	void *4cc8bdf63e(); // Function Paper2D.PaperTileMapComponent.*4cc8bdf63e // Final|Native|Public|BlueprintCallable // @ game+0x690c290
	void CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x690a994
	void *ef09f5cb6d(); // Function Paper2D.PaperTileMapComponent.*ef09f5cb6d // Native|Public|BlueprintCallable // @ game+0x61a50b4
	void *8d4fb9483c(); // Function Paper2D.PaperTileMapComponent.*8d4fb9483c // Final|Native|Public|BlueprintCallable // @ game+0x690c524
	void *eb875e8422(); // Function Paper2D.PaperTileMapComponent.*eb875e8422 // Final|Native|Public|BlueprintCallable // @ game+0x690a694
	void *1ff2f7c3eb(); // Function Paper2D.PaperTileMapComponent.*1ff2f7c3eb // Final|Native|Public|BlueprintCallable // @ game+0x690c020
	void *43fa98f119(); // Function Paper2D.PaperTileMapComponent.*43fa98f119 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x690b7e4
	void *4c20ee2797(); // Function Paper2D.PaperTileMapComponent.*4c20ee2797 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690b36c
	void *d0cd947957(); // Function Paper2D.PaperTileMapComponent.*d0cd947957 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x690b800
	void *71e9b55f87(); // Function Paper2D.PaperTileMapComponent.*71e9b55f87 // Final|Native|Public|BlueprintCallable // @ game+0x690cf04
	void *584b21b8fd(); // Function Paper2D.PaperTileMapComponent.*584b21b8fd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x690d0d0
	void *4b41188884(); // Function Paper2D.PaperTileMapComponent.*4b41188884 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x690b654
	void *4c6ee96bcc(); // Function Paper2D.PaperTileMapComponent.*4c6ee96bcc // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x690af80
	void *8b0b40832e(); // Function Paper2D.PaperTileMapComponent.*8b0b40832e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x690b4c4
	void *3bf71f47b3(); // Function Paper2D.PaperTileMapComponent.*3bf71f47b3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x690c7a8
	void *a8595f66fd(); // Function Paper2D.PaperTileMapComponent.*a8595f66fd // Final|Native|Public|BlueprintCallable // @ game+0x690c41c
	void *72f929e77e(); // Function Paper2D.PaperTileMapComponent.*72f929e77e // Final|Native|Public|BlueprintCallable // @ game+0x690c1d8
	void *187a3185ef(); // Function Paper2D.PaperTileMapComponent.*187a3185ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x690c124
};

// Class Paper2D.PaperTileSet
// Size: 0xa0 (Inherited: 0x30)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct F*738db5e91a BorderMargin; // 0x40(0x10)
	struct FIntPoint PerTileSpacing; // 0x50(0x08)
	struct FIntPoint DrawingOffset; // 0x58(0x08)
	int32 *e5e68d865d; // 0x60(0x04)
	int32 *e5af7a8233; // 0x64(0x04)
	int32 *5858a43d97; // 0x68(0x04)
	int32 *d2bfabd487; // 0x6c(0x04)
	struct TArray<struct F*b5a220c0b9> PerTileData; // 0x70(0x10)
	struct TArray<struct F*72d51bb8aa> Terrains; // 0x80(0x10)
	int32 TileWidth; // 0x90(0x04)
	int32 TileHeight; // 0x94(0x04)
	int32 Margin; // 0x98(0x04)
	int32 Spacing; // 0x9c(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	void BreakTile(); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x690a6fc
	void *568af304a1(); // Function Paper2D.TileMapBlueprintLibrary.*568af304a1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x690ba10
	void MakeTile(); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x690be24
	void *0067d4a39c(); // Function Paper2D.TileMapBlueprintLibrary.*0067d4a39c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x690bac8
};

