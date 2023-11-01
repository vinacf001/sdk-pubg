// Class Paper2D.*5d3297a495
// Size: 0x228 (Inherited: 0x208)
struct U*5d3297a495 : U*54c410c5a3 {
	bool *d95085c6fb; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	int32 *2dd9ac5ff0; // 0x20c(0x04)
	struct FText *134e992bed; // 0x210(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x870 (Inherited: 0x860)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x860(0x08)
	char pad_868[0x8]; // 0x868(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*489eb0edd9> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	float *de27b742a4(bool bClampToEnds); // Function Paper2D.PaperFlipbook.*de27b742a4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7a78
	void *157a9cef48(); // Function Paper2D.PaperFlipbook.*157a9cef48 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d794c
	void *81ac5fe1fe(); // Function Paper2D.PaperFlipbook.*81ac5fe1fe // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d83c0
	bool *c231f205e6(); // Function Paper2D.PaperFlipbook.*c231f205e6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7620
	void *5f70e8c64b(); // Function Paper2D.PaperFlipbook.*5f70e8c64b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d8438
	void *e10762527d(); // Function Paper2D.PaperFlipbook.*e10762527d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d79d8
	void *06bf82948b(); // Function Paper2D.PaperFlipbook.*06bf82948b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664a258
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3e8(0x08)
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

	void GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d796c
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x67d8c0c
	void *3dc22f4f13(); // Function Paper2D.PaperFlipbookComponent.*3dc22f4f13 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d748c
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x67d9a54
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x67d89c0
	void IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d83fc
	void IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d83e0
	void *3010a3a8a3(); // Function Paper2D.PaperFlipbookComponent.*3010a3a8a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d744c
	void SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x67d918c
	void *fd0276f280(); // Function Paper2D.PaperFlipbookComponent.*fd0276f280 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d746c
	void *7159359b4a(); // Function Paper2D.PaperFlipbookComponent.*7159359b4a // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67d7404
	void OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x67d88c8
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x67d8bdc
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x67d8988
	void *6b300cbcd1(); // Function Paper2D.PaperFlipbookComponent.*6b300cbcd1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7b84
	void SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x67d90f4
	void *bbf462126c(); // Function Paper2D.PaperFlipbookComponent.*bbf462126c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d8418
	float SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x67d92d0
	void *5f6e7d3500(); // Function Paper2D.PaperFlipbookComponent.*5f6e7d3500 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d94c0
	void SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x67d9238
	int32 *b8fd8ee9de(); // Function Paper2D.PaperFlipbookComponent.*b8fd8ee9de // Final|Native|Public|BlueprintCallable // @ game+0x67d93c0
	void *cd710ae943(); // Function Paper2D.PaperFlipbookComponent.*cd710ae943 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7984
	void *9eb8c7e73b(); // Function Paper2D.PaperFlipbookComponent.*9eb8c7e73b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d742c
	void *79b4fa912f(); // Function Paper2D.PaperFlipbookComponent.*79b4fa912f // Native|Public|BlueprintCallable // @ game+0x608a4a4
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperGroupedSpriteActor : AActor {
	struct U*11b81ab22f* RenderComponent; // 0x3e8(0x08)
};

// Class Paper2D.*11b81ab22f
// Size: 0xb30 (Inherited: 0xb00)
struct U*11b81ab22f : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *5f6de5d74a; // 0xb00(0x10)
	struct TArray<struct F*8d05613588> *5ac63db397; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)

	void *2dba5a4261(); // Function Paper2D.*11b81ab22f.*2dba5a4261 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d99b4
	struct FLinearColor *01fde74119(); // Function Paper2D.*11b81ab22f.*01fde74119 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d6ce0
	void *552630dc35(); // Function Paper2D.*11b81ab22f.*552630dc35 // Native|Public|BlueprintCallable // @ game+0x5818354
	void *7459db3257(struct FTransform NewInstanceTransform, bool bMarkRenderStateDirty); // Function Paper2D.*11b81ab22f.*7459db3257 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67d9ba8
	int32 *4981f52ac4(); // Function Paper2D.*11b81ab22f.*4981f52ac4 // Native|Public|BlueprintCallable // @ game+0x67d8a2c
	struct FTransform *e5295d5ef3(bool bWorldSpace); // Function Paper2D.*11b81ab22f.*e5295d5ef3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67d74a4
	void *1ff5154222(); // Function Paper2D.*11b81ab22f.*1ff5154222 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d748c
	bool *165ff4e8b1(); // Function Paper2D.*11b81ab22f.*165ff4e8b1 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d9a6c
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
	struct TArray<struct UTexture*> *7d2f934b1e; // 0x50(0x10)
	struct FVector2D *cf48dd68e8; // 0x60(0x08)
	struct FVector2D *daea98e6b5; // 0x68(0x08)
	struct UTexture2D* *7e80aabd2a; // 0x70(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x78(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x80(0x08)
	struct TArray<struct F*c0f76242e4> Sockets; // 0x88(0x10)
	enum class ESpriteCollisionMode *a3fcfa90e3; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float *72d61e87a7; // 0x9c(0x04)
	struct UBodySetup* BodySetup; // 0xa0(0x08)
	int32 *ed657c59be; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FVector4> *96e12e6874; // 0xb0(0x10)
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

// Class Paper2D.*238da15b50
// Size: 0x28 (Inherited: 0x28)
struct U*238da15b50 : UBlueprintFunctionLibrary {

	void *df7004a98e(struct UPaperSprite* Sprite, int32 Height); // Function Paper2D.*238da15b50.*df7004a98e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d84dc
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xb20 (Inherited: 0xb00)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xb00(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xb08(0x08)
	struct FLinearColor SpriteColor; // 0xb10(0x10)

	void *5f6e7d3500(); // Function Paper2D.PaperSpriteComponent.*5f6e7d3500 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d95bc
	void *c8a24dd75b(); // Function Paper2D.PaperSpriteComponent.*c8a24dd75b // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67d7404
	void *6a7a2b4bb4(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.*6a7a2b4bb4 // Native|Public|BlueprintCallable // @ game+0x608a4a4
};

// Class Paper2D.PaperTerrainActor
// Size: 0x400 (Inherited: 0x3e8)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *22ecb5cdbf; // 0x3e8(0x08)
	struct U*caa1187fc5* SplineComponent; // 0x3f0(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x3f8(0x08)
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

	void *fd3e473707(); // Function Paper2D.PaperTerrainComponent.*fd3e473707 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d96b8
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*60281822b6> Rules; // 0x30(0x10)
	struct UPaperSprite* *7e9a84ad9e; // 0x40(0x08)
};

// Class Paper2D.*caa1187fc5
// Size: 0xb30 (Inherited: 0xaf0)
struct U*caa1187fc5 : USplineComponent {
	char pad_AF0[0x40]; // 0xaf0(0x40)
};

// Class Paper2D.*292d744149
// Size: 0x98 (Inherited: 0x28)
struct U*292d744149 : UObject {
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
	int32 *12405fcf05; // 0x64(0x04)
	int32 *5749e18c65; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct F*fda10ad7e1> *e92e172c9d; // 0x70(0x10)
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
	float *72d61e87a7; // 0x38(0x04)
	float *e7f0cd6653; // 0x3c(0x04)
	float *85f3fc7b98; // 0x40(0x04)
	float SeparationPerLayer; // 0x44(0x04)
	struct UPaperTileSet* *2f6aac0b16; // 0x48(0x20)
	struct UMaterialInterface* Material; // 0x68(0x08)
	struct TArray<struct U*292d744149*> TileLayers; // 0x70(0x10)
	float CollisionThickness; // 0x80(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x84(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	int32 HexSideLength; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UBodySetup* BodySetup; // 0x90(0x08)
	int32 *9f12062bf3; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3e8(0x08)
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

	int32 *9ad0633976(); // Function Paper2D.PaperTileMapComponent.*9ad0633976 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67d77c8
	void *5e25a3a7f4(); // Function Paper2D.PaperTileMapComponent.*5e25a3a7f4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d8964
	void *131682e066(); // Function Paper2D.PaperTileMapComponent.*131682e066 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67d8024
	void *7382fce36e(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.*7382fce36e // Native|Public|BlueprintCallable // @ game+0x608a4a4
	int32 *54285638f3(); // Function Paper2D.PaperTileMapComponent.*54285638f3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7710
	struct FLinearColor *e333b71ddc(); // Function Paper2D.PaperTileMapComponent.*e333b71ddc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d8fec
	void *0c53d4d6f3(int32 TileX, int32 LayerIndex); // Function Paper2D.PaperTileMapComponent.*0c53d4d6f3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7e94
	float *24bf4e0464(); // Function Paper2D.PaperTileMapComponent.*24bf4e0464 // Final|Native|Public|BlueprintCallable // @ game+0x67d8c60
	void *4c97c70a76(); // Function Paper2D.PaperTileMapComponent.*4c97c70a76 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67d991c
	void *ae2b77509e(); // Function Paper2D.PaperTileMapComponent.*ae2b77509e // Final|Native|Public|BlueprintCallable // @ game+0x67d8860
	void *b6f21d1446(); // Function Paper2D.PaperTileMapComponent.*b6f21d1446 // Final|Native|Public|BlueprintCallable // @ game+0x67d8ad0
	void *e44e13e6bb(); // Function Paper2D.PaperTileMapComponent.*e44e13e6bb // Final|Native|Public|BlueprintCallable // @ game+0x67d8a18
	int32 CreateNewTileMap(float PixelsPerUnrealUnit); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x67d71e0
	float *0e13b29ec1(int32 Layer, bool bOverrideThickness); // Function Paper2D.PaperTileMapComponent.*0e13b29ec1 // Final|Native|Public|BlueprintCallable // @ game+0x67d8d68
	int32 *fa9647197a(int32 Layer); // Function Paper2D.PaperTileMapComponent.*fa9647197a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7bb0
	void *de8b8b70aa(int32 X, int32 Layer); // Function Paper2D.PaperTileMapComponent.*de8b8b70aa // Final|Native|Public|BlueprintCallable // @ game+0x67d9750
	int32 *bb9febbb2c(); // Function Paper2D.PaperTileMapComponent.*bb9febbb2c // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x67d8040
	void *c7eab51d1a(int32 TileY, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.*c7eab51d1a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67d7d04
	void *2fe3f6a648(); // Function Paper2D.PaperTileMapComponent.*2fe3f6a648 // Final|Native|Public|BlueprintCallable // @ game+0x67d6edc
};

// Class Paper2D.PaperTileSet
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x28(0x08)
	struct UTexture2D* TileSheet; // 0x30(0x08)
	struct F*3aa79f8329 BorderMargin; // 0x38(0x10)
	struct FIntPoint PerTileSpacing; // 0x48(0x08)
	struct FIntPoint DrawingOffset; // 0x50(0x08)
	int32 *9078fc69de; // 0x58(0x04)
	int32 *f3a0a0b0b3; // 0x5c(0x04)
	int32 *12405fcf05; // 0x60(0x04)
	int32 *5749e18c65; // 0x64(0x04)
	struct TArray<struct F*f278ae409e> PerTileData; // 0x68(0x10)
	struct TArray<struct F*0483626ec2> Terrains; // 0x78(0x10)
	int32 TileWidth; // 0x88(0x04)
	int32 TileHeight; // 0x8c(0x04)
	int32 Margin; // 0x90(0x04)
	int32 Spacing; // 0x94(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	void *701556a708(struct F*fda10ad7e1 Tile); // Function Paper2D.TileMapBlueprintLibrary.*701556a708 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67d8250
	struct F*fda10ad7e1 *260f100803(); // Function Paper2D.TileMapBlueprintLibrary.*260f100803 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d8308
	struct UPaperTileSet* BreakTile(bool bFlipH); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67d6f48
	bool MakeTile(struct UPaperTileSet* TileSet); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67d8664
};

