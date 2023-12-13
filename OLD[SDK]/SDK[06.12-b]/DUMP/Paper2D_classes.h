// Class Paper2D.*d53b39580a
// Size: 0x230 (Inherited: 0x210)
struct U*d53b39580a : U*0a49d994d5 {
	bool *3b4ba434ae; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32 *ce50870d93; // 0x214(0x04)
	struct FText *064602220e; // 0x218(0x18)
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
	struct TArray<struct F*e7210f226a> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	struct UPaperSprite* *3a75594228(); // Function Paper2D.PaperFlipbook.*3a75594228 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e52d8
	int32 *710df1717b(); // Function Paper2D.PaperFlipbook.*710df1717b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e524c
	float *c8fa2e6d54(); // Function Paper2D.PaperFlipbook.*c8fa2e6d54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5cc4
	int32 *7205910aff(); // Function Paper2D.PaperFlipbook.*7205910aff // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4f18
	struct UPaperSprite* *2e533530ee(); // Function Paper2D.PaperFlipbook.*2e533530ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5378
	bool *ce32845398(); // Function Paper2D.PaperFlipbook.*ce32845398 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5d3c
	int32 *f176f472c6(); // Function Paper2D.PaperFlipbook.*f176f472c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6758f78
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xb10 (Inherited: 0xac0)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *3b30e29495; // 0xac0(0x08)
	struct UMaterialInterface* Material; // 0xac8(0x08)
	float PlayRate; // 0xad0(0x04)
	char bLooping : 1; // 0xad4(0x01)
	char *bdac78466e : 1; // 0xad4(0x01)
	char *f7e4f9d69b : 1; // 0xad4(0x01)
	char pad_AD4_3 : 5; // 0xad4(0x01)
	char pad_AD5[0x3]; // 0xad5(0x03)
	float *16d9122694; // 0xad8(0x04)
	int32 *b4a42942da; // 0xadc(0x04)
	struct FLinearColor SpriteColor; // 0xae0(0x10)
	struct UBodySetup* *2edecc9383; // 0xaf0(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xaf8(0x10)
	char pad_B08[0x8]; // 0xb08(0x08)

	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5ce4
	bool *de6d50ca38(); // Function Paper2D.PaperFlipbookComponent.*de6d50ca38 // Final|Native|Public|BlueprintCallable // @ game+0x68e6cc0
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x68e628c
	struct UPaperFlipbook* OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x68e61cc
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x68e62c4
	struct UPaperFlipbook* *8ead7f76ab(); // Function Paper2D.PaperFlipbookComponent.*8ead7f76ab // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68e4cfc
	bool SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x68e69f4
	float *65ef202f2e(); // Function Paper2D.PaperFlipbookComponent.*65ef202f2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d84
	bool SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x68e6bd0
	float SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x68e6a8c
	float *8029b6696e(); // Function Paper2D.PaperFlipbookComponent.*8029b6696e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d24
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x68e650c
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5d00
	struct UMaterialInterface* *e875678780(); // Function Paper2D.PaperFlipbookComponent.*e875678780 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5484
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x68e7348
	float *6abd013643(); // Function Paper2D.PaperFlipbookComponent.*6abd013643 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d44
	float SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x68e6b38
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e526c
	int32 *2d2d897e4d(); // Function Paper2D.PaperFlipbookComponent.*2d2d897e4d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d64
	bool *b3b28e404f(); // Function Paper2D.PaperFlipbookComponent.*b3b28e404f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5d1c
	bool *b43c1eee52(); // Function Paper2D.PaperFlipbookComponent.*b43c1eee52 // Native|Public|BlueprintCallable // @ game+0x6172a2c
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x68e64dc
	int32 *11fc6c1358(); // Function Paper2D.PaperFlipbookComponent.*11fc6c1358 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5284
	struct FLinearColor *893c563661(); // Function Paper2D.PaperFlipbookComponent.*893c563661 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e6dc0
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperGroupedSpriteActor : AActor {
	struct U*d367093df3* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.*d367093df3
// Size: 0xaf0 (Inherited: 0xac0)
struct U*d367093df3 : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *a1faf17977; // 0xac0(0x10)
	struct TArray<struct F*e0b96bd59d> *7f104428ed; // 0xad0(0x10)
	char pad_AE0[0x10]; // 0xae0(0x10)

	bool *481cb515e9(); // Function Paper2D.*d367093df3.*481cb515e9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e7360
	int32 *af6477ee17(); // Function Paper2D.*d367093df3.*af6477ee17 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68e45dc
	bool *765b562637(); // Function Paper2D.*d367093df3.*765b562637 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d9c
	bool *068cda575c(); // Function Paper2D.*d367093df3.*068cda575c // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68e749c
	void *f58b7ec745(); // Function Paper2D.*d367093df3.*f58b7ec745 // Native|Public|BlueprintCallable // @ game+0x939440
	int32 *4b502e7200(); // Function Paper2D.*d367093df3.*4b502e7200 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e4d84
	struct FVector *4d2089df7b(); // Function Paper2D.*d367093df3.*4d2089df7b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e72a8
	bool *e1ee01c104(); // Function Paper2D.*d367093df3.*e1ee01c104 // Native|Public|BlueprintCallable // @ game+0x68e6330
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
	struct TArray<struct UTexture*> *26e99cbdb7; // 0x58(0x10)
	struct FVector2D *ef0905a432; // 0x68(0x08)
	struct FVector2D *4707bc0fd9; // 0x70(0x08)
	struct UTexture2D* *235963137d; // 0x78(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x80(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x88(0x08)
	struct TArray<struct F*7c91a9303f> Sockets; // 0x90(0x10)
	enum class ESpriteCollisionMode *06738740fa; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float *fc82d2d0a1; // 0xa4(0x04)
	struct UBodySetup* BodySetup; // 0xa8(0x08)
	int32 *67f3767561; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FVector4> *38136fc6dd; // 0xb8(0x10)
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

// Class Paper2D.*5da417284b
// Size: 0x30 (Inherited: 0x30)
struct U*5da417284b : UBlueprintFunctionLibrary {

	struct FSlateBrush *211fa70f21(); // Function Paper2D.*5da417284b.*211fa70f21 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68e5de0
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xae0 (Inherited: 0xac0)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xac0(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xac8(0x08)
	struct FLinearColor SpriteColor; // 0xad0(0x10)

	struct FLinearColor *893c563661(); // Function Paper2D.PaperSpriteComponent.*893c563661 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e6eb8
	bool *863c1b7940(); // Function Paper2D.PaperSpriteComponent.*863c1b7940 // Native|Public|BlueprintCallable // @ game+0x6172a2c
	struct UPaperSprite* *454a3184aa(); // Function Paper2D.PaperSpriteComponent.*454a3184aa // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x68e4cfc
};

// Class Paper2D.PaperTerrainActor
// Size: 0x410 (Inherited: 0x3f8)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *fd9de42747; // 0x3f8(0x08)
	struct U*9f493cbba3* SplineComponent; // 0x400(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x408(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0xa10 (Inherited: 0x9c0)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x9b8(0x08)
	bool bClosedSpline; // 0x9c0(0x01)
	bool bFilledSpline; // 0x9c1(0x01)
	struct U*9f493cbba3* *48ae2f9528; // 0x9c8(0x08)
	int32 RandomSeed; // 0x9d0(0x04)
	float *d1d307ea6c; // 0x9d4(0x04)
	struct FLinearColor TerrainColor; // 0x9d8(0x10)
	int32 *c94fdb6f50; // 0x9e8(0x04)
	enum class ESpriteCollisionMode *06738740fa; // 0x9ec(0x01)
	char pad_9EF[0x1]; // 0x9ef(0x01)
	float *5a7063e57a; // 0x9f0(0x04)
	char pad_9F4[0x4]; // 0x9f4(0x04)
	struct UBodySetup* *2edecc9383; // 0x9f8(0x08)
	char pad_A00[0x10]; // 0xa00(0x10)

	struct FLinearColor *ea7e0489b4(); // Function Paper2D.PaperTerrainComponent.*ea7e0489b4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e6fb0
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*53798110a7> Rules; // 0x38(0x10)
	struct UPaperSprite* *98cc1f9d56; // 0x48(0x08)
};

// Class Paper2D.*9f493cbba3
// Size: 0xaf0 (Inherited: 0xab0)
struct U*9f493cbba3 : USplineComponent {
	char pad_AB0[0x40]; // 0xab0(0x40)
};

// Class Paper2D.*1806723c19
// Size: 0xa0 (Inherited: 0x30)
struct U*1806723c19 : UObject {
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
	int32 *d6b555f13b; // 0x6c(0x04)
	int32 *17d4eb83d4; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct F*bd8bd247f1> *cf66d1a56b; // 0x78(0x10)
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
	float *fc82d2d0a1; // 0x40(0x04)
	float *35e785a0da; // 0x44(0x04)
	float *81d84872b2; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	struct UPaperTileSet* *92a26ecab6; // 0x50(0x20)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct U*1806723c19*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32 HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32 *527cde6d7a; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0xb10 (Inherited: 0xac0)
struct UPaperTileMapComponent : UMeshComponent {
	int32 MapWidth; // 0xac0(0x04)
	int32 MapHeight; // 0xac4(0x04)
	int32 TileWidth; // 0xac8(0x04)
	int32 TileHeight; // 0xacc(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0xad0(0x08)
	struct UMaterialInterface* Material; // 0xad8(0x08)
	struct TArray<struct U*1806723c19*> TileLayers; // 0xae0(0x10)
	struct FLinearColor *f300d632a6; // 0xaf0(0x10)
	int32 *53be108996; // 0xb00(0x04)
	bool *15e56460f7; // 0xb04(0x01)
	char pad_B05[0x3]; // 0xb05(0x03)
	struct UPaperTileMap* TileMap; // 0xb08(0x08)

	bool *550b69cd59(); // Function Paper2D.PaperTileMapComponent.*550b69cd59 // Final|Native|Public|BlueprintCallable // @ game+0x68e6560
	int32 *249232a0ae(); // Function Paper2D.PaperTileMapComponent.*249232a0ae // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e68ec
	struct F*bd8bd247f1 *fff4870577(); // Function Paper2D.PaperTileMapComponent.*fff4870577 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e54b0
	struct F*bd8bd247f1 *eee81f1f81(); // Function Paper2D.PaperTileMapComponent.*eee81f1f81 // Final|Native|Public|BlueprintCallable // @ game+0x68e7048
	bool *af4f8cb4e1(); // Function Paper2D.PaperTileMapComponent.*af4f8cb4e1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68e6268
	int32 *ad718400f8(); // Function Paper2D.PaperTileMapComponent.*ad718400f8 // Final|Native|Public|BlueprintCallable // @ game+0x68e63d4
	bool CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x68e4ad8
	struct FLinearColor *d903b2ebcc(); // Function Paper2D.PaperTileMapComponent.*d903b2ebcc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5008
	bool *04ae68e577(); // Function Paper2D.PaperTileMapComponent.*04ae68e577 // Native|Public|BlueprintCallable // @ game+0x6172a2c
	void *7513384930(); // Function Paper2D.PaperTileMapComponent.*7513384930 // Final|Native|Public|BlueprintCallable // @ game+0x68e631c
	struct FVector *e1ca356def(); // Function Paper2D.PaperTileMapComponent.*e1ca356def // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5798
	bool *ed1e1a8d37(); // Function Paper2D.PaperTileMapComponent.*ed1e1a8d37 // Final|Native|Public|BlueprintCallable // @ game+0x68e6668
	struct FLinearColor *baa679a9df(); // Function Paper2D.PaperTileMapComponent.*baa679a9df // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68e7214
	void *66d83e263a(); // Function Paper2D.PaperTileMapComponent.*66d83e263a // Final|Native|Public|BlueprintCallable // @ game+0x68e6164
	bool *8829b0d964(); // Function Paper2D.PaperTileMapComponent.*8829b0d964 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5944
	int32 *48550fc9da(); // Function Paper2D.PaperTileMapComponent.*48550fc9da // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68e50c4
	struct FVector *b1dd1430ee(); // Function Paper2D.PaperTileMapComponent.*b1dd1430ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5608
	struct U*1806723c19* *e99422e829(); // Function Paper2D.PaperTileMapComponent.*e99422e829 // Final|Native|Public|BlueprintCallable // @ game+0x68e47d8
	struct FLinearColor *c57693c290(); // Function Paper2D.PaperTileMapComponent.*c57693c290 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68e5928
};

// Class Paper2D.PaperTileSet
// Size: 0xa0 (Inherited: 0x30)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct F*d956ea8104 BorderMargin; // 0x40(0x10)
	struct FIntPoint PerTileSpacing; // 0x50(0x08)
	struct FIntPoint DrawingOffset; // 0x58(0x08)
	int32 *2182776409; // 0x60(0x04)
	int32 *1b9124737c; // 0x64(0x04)
	int32 *d6b555f13b; // 0x68(0x04)
	int32 *17d4eb83d4; // 0x6c(0x04)
	struct TArray<struct F*cc6140b829> PerTileData; // 0x70(0x10)
	struct TArray<struct F*36739a42d9> Terrains; // 0x80(0x10)
	int32 TileWidth; // 0x90(0x04)
	int32 TileHeight; // 0x94(0x04)
	int32 Margin; // 0x98(0x04)
	int32 Spacing; // 0x9c(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	bool BreakTile(); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x68e4840
	struct F*bd8bd247f1 MakeTile(); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68e5f68
	struct FTransform *50c46a6535(); // Function Paper2D.TileMapBlueprintLibrary.*50c46a6535 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x68e5b54
	struct FName *b543902cf2(); // Function Paper2D.TileMapBlueprintLibrary.*b543902cf2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x68e5c0c
};

