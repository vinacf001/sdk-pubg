// Class Paper2D.*5d3297a495
// Size: 0x230 (Inherited: 0x210)
struct U*5d3297a495 : U*54c410c5a3 {
	bool *d95085c6fb; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32 *2dd9ac5ff0; // 0x214(0x04)
	struct FText *134e992bed; // 0x218(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x870 (Inherited: 0x860)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x860(0x08)
	char pad_868[0x8]; // 0x868(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x58 (Inherited: 0x30)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*489eb0edd9> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	struct UPaperSprite* *de27b742a4(); // Function Paper2D.PaperFlipbook.*de27b742a4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8498
	int32 *157a9cef48(); // Function Paper2D.PaperFlipbook.*157a9cef48 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8384
	float *81ac5fe1fe(); // Function Paper2D.PaperFlipbook.*81ac5fe1fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8de4
	int32 *c231f205e6(); // Function Paper2D.PaperFlipbook.*c231f205e6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8050
	bool *5f70e8c64b(); // Function Paper2D.PaperFlipbook.*5f70e8c64b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8e5c
	struct UPaperSprite* *e10762527d(); // Function Paper2D.PaperFlipbook.*e10762527d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d83f8
	int32 *06bf82948b(); // Function Paper2D.PaperFlipbook.*06bf82948b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x644bfc0
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xb50 (Inherited: 0xb00)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *07f2507db0; // 0xb00(0x08)
	struct UMaterialInterface* Material; // 0xb08(0x08)
	float PlayRate; // 0xb10(0x04)
	char bLooping : 1; // 0xb14(0x01)
	char *79e73cc39d : 1; // 0xb14(0x01)
	char *0c34648455 : 1; // 0xb14(0x01)
	char pad_B14_3 : 5; // 0xb14(0x01)
	char pad_B15[0x3]; // 0xb15(0x03)
	float *96b530bb58; // 0xb18(0x04)
	int32 *7278c3ed3c; // 0xb1c(0x04)
	struct FLinearColor SpriteColor; // 0xb20(0x10)
	struct UBodySetup* *d652a4445b; // 0xb30(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xb38(0x10)
	char pad_B48[0x8]; // 0xb48(0x08)

	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x56815dc
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x65d9630
	float *3dc22f4f13(); // Function Paper2D.PaperFlipbookComponent.*3dc22f4f13 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d7ebc
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x65da480
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x65d93e4
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8e20
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8e04
	float *3010a3a8a3(); // Function Paper2D.PaperFlipbookComponent.*3010a3a8a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d7e7c
	float SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x65d9bb4
	int32 *fd0276f280(); // Function Paper2D.PaperFlipbookComponent.*fd0276f280 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d7e9c
	struct UPaperFlipbook* *7159359b4a(); // Function Paper2D.PaperFlipbookComponent.*7159359b4a // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65d7e34
	struct UPaperFlipbook* OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x65d92ec
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x65d9600
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x65d93ac
	struct UMaterialInterface* *6b300cbcd1(); // Function Paper2D.PaperFlipbookComponent.*6b300cbcd1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d85a4
	bool SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x65d9b1c
	bool *bbf462126c(); // Function Paper2D.PaperFlipbookComponent.*bbf462126c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8e3c
	bool SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x65d9cf8
	struct FLinearColor *5f6e7d3500(); // Function Paper2D.PaperFlipbookComponent.*5f6e7d3500 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d9ee8
	float SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x65d9c60
	bool *b8fd8ee9de(); // Function Paper2D.PaperFlipbookComponent.*b8fd8ee9de // Final|Native|Public|BlueprintCallable // @ game+0x65d9de8
	int32 *cd710ae943(); // Function Paper2D.PaperFlipbookComponent.*cd710ae943 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d83a4
	float *9eb8c7e73b(); // Function Paper2D.PaperFlipbookComponent.*9eb8c7e73b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d7e5c
	bool *79b4fa912f(); // Function Paper2D.PaperFlipbookComponent.*79b4fa912f // Native|Public|BlueprintCallable // @ game+0x5e9b974
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperGroupedSpriteActor : AActor {
	struct U*11b81ab22f* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.*11b81ab22f
// Size: 0xb30 (Inherited: 0xb00)
struct U*11b81ab22f : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *5f6de5d74a; // 0xb00(0x10)
	struct TArray<struct F*8d05613588> *5ac63db397; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)

	struct FVector *2dba5a4261(); // Function Paper2D.*11b81ab22f.*2dba5a4261 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65da3e0
	int32 *01fde74119(); // Function Paper2D.*11b81ab22f.*01fde74119 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d7710
	void *552630dc35(); // Function Paper2D.*11b81ab22f.*552630dc35 // Native|Public|BlueprintCallable // @ game+0x563fbcc
	bool *7459db3257(); // Function Paper2D.*11b81ab22f.*7459db3257 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65da5d4
	bool *4981f52ac4(); // Function Paper2D.*11b81ab22f.*4981f52ac4 // Native|Public|BlueprintCallable // @ game+0x65d9450
	bool *e5295d5ef3(); // Function Paper2D.*11b81ab22f.*e5295d5ef3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d7ed4
	int32 *1ff5154222(); // Function Paper2D.*11b81ab22f.*1ff5154222 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d7ebc
	bool *165ff4e8b1(); // Function Paper2D.*11b81ab22f.*165ff4e8b1 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65da498
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
	struct TArray<struct UTexture*> *7d2f934b1e; // 0x58(0x10)
	struct FVector2D *cf48dd68e8; // 0x68(0x08)
	struct FVector2D *daea98e6b5; // 0x70(0x08)
	struct UTexture2D* *7e80aabd2a; // 0x78(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x80(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x88(0x08)
	struct TArray<struct F*c0f76242e4> Sockets; // 0x90(0x10)
	enum class ESpriteCollisionMode *a3fcfa90e3; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float *72d61e87a7; // 0xa4(0x04)
	struct UBodySetup* BodySetup; // 0xa8(0x08)
	int32 *ed657c59be; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FVector4> *96e12e6874; // 0xb8(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*238da15b50
// Size: 0x30 (Inherited: 0x30)
struct U*238da15b50 : UBlueprintFunctionLibrary {

	struct FSlateBrush *df7004a98e(); // Function Paper2D.*238da15b50.*df7004a98e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65d8f00
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xb20 (Inherited: 0xb00)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xb00(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xb08(0x08)
	struct FLinearColor SpriteColor; // 0xb10(0x10)

	struct FLinearColor *5f6e7d3500(); // Function Paper2D.PaperSpriteComponent.*5f6e7d3500 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d9fe4
	struct UPaperSprite* *c8a24dd75b(); // Function Paper2D.PaperSpriteComponent.*c8a24dd75b // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65d7e34
	bool *6a7a2b4bb4(); // Function Paper2D.PaperSpriteComponent.*6a7a2b4bb4 // Native|Public|BlueprintCallable // @ game+0x5e9b974
};

// Class Paper2D.PaperTerrainActor
// Size: 0x408 (Inherited: 0x3f0)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *22ecb5cdbf; // 0x3f0(0x08)
	struct U*caa1187fc5* SplineComponent; // 0x3f8(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x400(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0xa50 (Inherited: 0xa00)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x9f8(0x08)
	bool bClosedSpline; // 0xa00(0x01)
	bool bFilledSpline; // 0xa01(0x01)
	struct U*caa1187fc5* *8825e4ec83; // 0xa08(0x08)
	int32 RandomSeed; // 0xa10(0x04)
	float *20bff1d4f7; // 0xa14(0x04)
	struct FLinearColor TerrainColor; // 0xa18(0x10)
	int32 *b2fc378f11; // 0xa28(0x04)
	enum class ESpriteCollisionMode *a3fcfa90e3; // 0xa2c(0x01)
	char pad_A2F[0x1]; // 0xa2f(0x01)
	float *0874902f89; // 0xa30(0x04)
	char pad_A34[0x4]; // 0xa34(0x04)
	struct UBodySetup* *d652a4445b; // 0xa38(0x08)
	char pad_A40[0x10]; // 0xa40(0x10)

	struct FLinearColor *fd3e473707(); // Function Paper2D.PaperTerrainComponent.*fd3e473707 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65da0e0
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*60281822b6> Rules; // 0x38(0x10)
	struct UPaperSprite* *7e9a84ad9e; // 0x48(0x08)
};

// Class Paper2D.*caa1187fc5
// Size: 0xb30 (Inherited: 0xaf0)
struct U*caa1187fc5 : USplineComponent {
	char pad_AF0[0x40]; // 0xaf0(0x40)
};

// Class Paper2D.*292d744149
// Size: 0xa0 (Inherited: 0x30)
struct U*292d744149 : UObject {
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
	int32 *12405fcf05; // 0x6c(0x04)
	int32 *5749e18c65; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct F*fda10ad7e1> *e92e172c9d; // 0x78(0x10)
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
	float *72d61e87a7; // 0x40(0x04)
	float *e7f0cd6653; // 0x44(0x04)
	float *85f3fc7b98; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	struct UPaperTileSet* *2f6aac0b16; // 0x50(0x20)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct U*292d744149*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32 HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32 *9f12062bf3; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0xb50 (Inherited: 0xb00)
struct UPaperTileMapComponent : UMeshComponent {
	int32 MapWidth; // 0xb00(0x04)
	int32 MapHeight; // 0xb04(0x04)
	int32 TileWidth; // 0xb08(0x04)
	int32 TileHeight; // 0xb0c(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0xb10(0x08)
	struct UMaterialInterface* Material; // 0xb18(0x08)
	struct TArray<struct U*292d744149*> TileLayers; // 0xb20(0x10)
	struct FLinearColor *2c9b92e666; // 0xb30(0x10)
	int32 *03f2e8513b; // 0xb40(0x04)
	bool *d4c212717f; // 0xb44(0x01)
	char pad_B45[0x3]; // 0xb45(0x03)
	struct UPaperTileMap* TileMap; // 0xb48(0x08)

	int32 *9ad0633976(); // Function Paper2D.PaperTileMapComponent.*9ad0633976 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65d81fc
	bool *5e25a3a7f4(); // Function Paper2D.PaperTileMapComponent.*5e25a3a7f4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d9388
	struct FLinearColor *131682e066(); // Function Paper2D.PaperTileMapComponent.*131682e066 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8a48
	bool *7382fce36e(); // Function Paper2D.PaperTileMapComponent.*7382fce36e // Native|Public|BlueprintCallable // @ game+0x5e9b974
	struct FLinearColor *54285638f3(); // Function Paper2D.PaperTileMapComponent.*54285638f3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8140
	int32 *e333b71ddc(); // Function Paper2D.PaperTileMapComponent.*e333b71ddc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d9a10
	struct FVector *0c53d4d6f3(); // Function Paper2D.PaperTileMapComponent.*0c53d4d6f3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d88b8
	bool *24bf4e0464(); // Function Paper2D.PaperTileMapComponent.*24bf4e0464 // Final|Native|Public|BlueprintCallable // @ game+0x65d9684
	struct FLinearColor *4c97c70a76(); // Function Paper2D.PaperTileMapComponent.*4c97c70a76 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65da348
	void *ae2b77509e(); // Function Paper2D.PaperTileMapComponent.*ae2b77509e // Final|Native|Public|BlueprintCallable // @ game+0x65d9284
	int32 *b6f21d1446(); // Function Paper2D.PaperTileMapComponent.*b6f21d1446 // Final|Native|Public|BlueprintCallable // @ game+0x65d94f4
	void *e44e13e6bb(); // Function Paper2D.PaperTileMapComponent.*e44e13e6bb // Final|Native|Public|BlueprintCallable // @ game+0x65d943c
	bool CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x65d7c10
	bool *0e13b29ec1(); // Function Paper2D.PaperTileMapComponent.*0e13b29ec1 // Final|Native|Public|BlueprintCallable // @ game+0x65d978c
	struct F*fda10ad7e1 *fa9647197a(); // Function Paper2D.PaperTileMapComponent.*fa9647197a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d85d0
	struct F*fda10ad7e1 *de8b8b70aa(); // Function Paper2D.PaperTileMapComponent.*de8b8b70aa // Final|Native|Public|BlueprintCallable // @ game+0x65da178
	bool *bb9febbb2c(); // Function Paper2D.PaperTileMapComponent.*bb9febbb2c // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8a64
	struct FVector *c7eab51d1a(); // Function Paper2D.PaperTileMapComponent.*c7eab51d1a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d8728
	struct U*292d744149* *2fe3f6a648(); // Function Paper2D.PaperTileMapComponent.*2fe3f6a648 // Final|Native|Public|BlueprintCallable // @ game+0x65d790c
};

// Class Paper2D.PaperTileSet
// Size: 0xa0 (Inherited: 0x30)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct F*3aa79f8329 BorderMargin; // 0x40(0x10)
	struct FIntPoint PerTileSpacing; // 0x50(0x08)
	struct FIntPoint DrawingOffset; // 0x58(0x08)
	int32 *9078fc69de; // 0x60(0x04)
	int32 *f3a0a0b0b3; // 0x64(0x04)
	int32 *12405fcf05; // 0x68(0x04)
	int32 *5749e18c65; // 0x6c(0x04)
	struct TArray<struct F*f278ae409e> PerTileData; // 0x70(0x10)
	struct TArray<struct F*0483626ec2> Terrains; // 0x80(0x10)
	int32 TileWidth; // 0x90(0x04)
	int32 TileHeight; // 0x94(0x04)
	int32 Margin; // 0x98(0x04)
	int32 Spacing; // 0x9c(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FTransform *701556a708(); // Function Paper2D.TileMapBlueprintLibrary.*701556a708 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65d8c74
	struct FName *260f100803(); // Function Paper2D.TileMapBlueprintLibrary.*260f100803 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65d8d2c
	bool BreakTile(); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65d7978
	struct F*fda10ad7e1 MakeTile(); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65d9088
};

