// Class Paper2D.*f4c499f92d
// Size: 0x230 (Inherited: 0x210)
struct U*f4c499f92d : U*ba54cde862 {
	bool *77472c9994; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32 *674ba71018; // 0x214(0x04)
	struct FText *3c9b656b03; // 0x218(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x890 (Inherited: 0x880)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x880(0x08)
	char pad_888[0x8]; // 0x888(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x58 (Inherited: 0x30)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*8845075921> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *514e573854(); // Function Paper2D.PaperFlipbook.*514e573854 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2410
	void *0275a1f460(); // Function Paper2D.PaperFlipbook.*0275a1f460 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b321c
	void *e2309ad22b(); // Function Paper2D.PaperFlipbook.*e2309ad22b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b27b8
	void *2ee87eec83(); // Function Paper2D.PaperFlipbook.*2ee87eec83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x682edd0
	void *1a93302098(); // Function Paper2D.PaperFlipbook.*1a93302098 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2858
	void *38f4ecdef0(); // Function Paper2D.PaperFlipbook.*38f4ecdef0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2744
	void *12ed393576(); // Function Paper2D.PaperFlipbook.*12ed393576 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b31a4
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x410 (Inherited: 0x408)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x408(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xb50 (Inherited: 0xb00)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *8867325a50; // 0xb00(0x08)
	struct UMaterialInterface* Material; // 0xb08(0x08)
	float PlayRate; // 0xb10(0x04)
	char bLooping : 1; // 0xb14(0x01)
	char *c74475af73 : 1; // 0xb14(0x01)
	char *46bc8732cd : 1; // 0xb14(0x01)
	char pad_B14_3 : 5; // 0xb14(0x01)
	char pad_B15[0x3]; // 0xb15(0x03)
	float *b66a993010; // 0xb18(0x04)
	int32 *2e0c912901; // 0xb1c(0x04)
	struct FLinearColor SpriteColor; // 0xb20(0x10)
	struct UBodySetup* *9dde5f44fc; // 0xb30(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xb38(0x10)
	char pad_B48[0x8]; // 0xb48(0x08)

	void IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b31e0
	void *8ee5853775(); // Function Paper2D.PaperFlipbookComponent.*8ee5853775 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b225c
	void *e33b0eec11(); // Function Paper2D.PaperFlipbookComponent.*e33b0eec11 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69b21f4
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x69b376c
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x69b4840
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x69b37a4
	void *447f9868a0(); // Function Paper2D.PaperFlipbookComponent.*447f9868a0 // Final|Native|Public|BlueprintCallable // @ game+0x69b41a8
	void *92b2288bf0(); // Function Paper2D.PaperFlipbookComponent.*92b2288bf0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b31fc
	void SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x69b3f74
	void OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x69b36ac
	void *4a96a2055b(); // Function Paper2D.PaperFlipbookComponent.*4a96a2055b // Native|Public|BlueprintCallable // @ game+0x6257b40
	void *d5cf505fd0(); // Function Paper2D.PaperFlipbookComponent.*d5cf505fd0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2764
	void *6964647c5d(); // Function Paper2D.PaperFlipbookComponent.*6964647c5d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b42a8
	void GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59ebf7c
	void *faa3dee92c(); // Function Paper2D.PaperFlipbookComponent.*faa3dee92c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b221c
	void *ddd2017b57(); // Function Paper2D.PaperFlipbookComponent.*ddd2017b57 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b223c
	void IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b31c4
	void *6970975b29(); // Function Paper2D.PaperFlipbookComponent.*6970975b29 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b227c
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x69b39f0
	void SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x69b40b8
	void SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x69b4020
	void SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x69b3edc
	void *8d3ec59379(); // Function Paper2D.PaperFlipbookComponent.*8d3ec59379 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2964
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x69b39c0
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x410 (Inherited: 0x408)
struct APaperGroupedSpriteActor : AActor {
	struct U*a6e9926bfc* RenderComponent; // 0x408(0x08)
};

// Class Paper2D.*a6e9926bfc
// Size: 0xb30 (Inherited: 0xb00)
struct U*a6e9926bfc : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *8f070e9069; // 0xb00(0x10)
	struct TArray<struct F*b7da4b8313> *d80da79478; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)

	void *86505fc22e(); // Function Paper2D.*a6e9926bfc.*86505fc22e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b4858
	void *8079791569(); // Function Paper2D.*a6e9926bfc.*8079791569 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b47a0
	void *6075d3ac8a(); // Function Paper2D.*a6e9926bfc.*6075d3ac8a // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x69b4994
	void *7786d1a996(); // Function Paper2D.*a6e9926bfc.*7786d1a996 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b227c
	void *19b8138a81(); // Function Paper2D.*a6e9926bfc.*19b8138a81 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2294
	void *028d8429ac(); // Function Paper2D.*a6e9926bfc.*028d8429ac // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x69b1ad0
	void *95a4257f8b(); // Function Paper2D.*a6e9926bfc.*95a4257f8b // Native|Public|BlueprintCallable // @ game+0x59b82bc
	void *2a75f57149(); // Function Paper2D.*a6e9926bfc.*2a75f57149 // Native|Public|BlueprintCallable // @ game+0x69b3810
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
	struct TArray<struct UTexture*> *1d9ca63873; // 0x58(0x10)
	struct FVector2D *446229e36a; // 0x68(0x08)
	struct FVector2D *089097d1bb; // 0x70(0x08)
	struct UTexture2D* *f279aa8a38; // 0x78(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x80(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x88(0x08)
	struct TArray<struct F*1e30987aa9> Sockets; // 0x90(0x10)
	enum class ESpriteCollisionMode *01797d5216; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float *65c1e620ea; // 0xa4(0x04)
	struct UBodySetup* BodySetup; // 0xa8(0x08)
	int32 *096fc698e1; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FVector4> *60ce17b215; // 0xb8(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x410 (Inherited: 0x408)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x408(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*081f260c3a
// Size: 0x30 (Inherited: 0x30)
struct U*081f260c3a : UBlueprintFunctionLibrary {

	void *ec2f0799c3(); // Function Paper2D.*081f260c3a.*ec2f0799c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69b32c0
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xb20 (Inherited: 0xb00)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xb00(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xb08(0x08)
	struct FLinearColor SpriteColor; // 0xb10(0x10)

	void *cfd368d0fb(); // Function Paper2D.PaperSpriteComponent.*cfd368d0fb // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69b21f4
	void *6964647c5d(); // Function Paper2D.PaperSpriteComponent.*6964647c5d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b43a4
	void *d73d19ce7c(); // Function Paper2D.PaperSpriteComponent.*d73d19ce7c // Native|Public|BlueprintCallable // @ game+0x6257b40
};

// Class Paper2D.PaperTerrainActor
// Size: 0x420 (Inherited: 0x408)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *841687ea2d; // 0x408(0x08)
	struct U*08f9146694* SplineComponent; // 0x410(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x418(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0xa50 (Inherited: 0xa00)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x9f8(0x08)
	bool bClosedSpline; // 0xa00(0x01)
	bool bFilledSpline; // 0xa01(0x01)
	struct U*08f9146694* *982819f1b0; // 0xa08(0x08)
	int32 RandomSeed; // 0xa10(0x04)
	float *12ed52fa4c; // 0xa14(0x04)
	struct FLinearColor TerrainColor; // 0xa18(0x10)
	int32 *12ac1bfde3; // 0xa28(0x04)
	enum class ESpriteCollisionMode *01797d5216; // 0xa2c(0x01)
	char pad_A2F[0x1]; // 0xa2f(0x01)
	float *f891ed25fe; // 0xa30(0x04)
	char pad_A34[0x4]; // 0xa34(0x04)
	struct UBodySetup* *9dde5f44fc; // 0xa38(0x08)
	char pad_A40[0x10]; // 0xa40(0x10)

	void *100021f3e0(); // Function Paper2D.PaperTerrainComponent.*100021f3e0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b44a0
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*77c32e4b7a> Rules; // 0x38(0x10)
	struct UPaperSprite* *dbbd8b4516; // 0x48(0x08)
};

// Class Paper2D.*08f9146694
// Size: 0xb30 (Inherited: 0xaf0)
struct U*08f9146694 : USplineComponent {
	char pad_AF0[0x40]; // 0xaf0(0x40)
};

// Class Paper2D.*4d58583a43
// Size: 0xa0 (Inherited: 0x30)
struct U*4d58583a43 : UObject {
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
	int32 *d309651bcc; // 0x6c(0x04)
	int32 *4aed544ca7; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct F*a51a01c50a> *c81f2a9882; // 0x78(0x10)
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
	float *65c1e620ea; // 0x40(0x04)
	float *9b0d4f3d14; // 0x44(0x04)
	float *30e82a2432; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	struct UPaperTileSet* *c153af3809; // 0x50(0x20)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct U*4d58583a43*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32 HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32 *7f1006c4f6; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x410 (Inherited: 0x408)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x408(0x08)
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
	struct TArray<struct U*4d58583a43*> TileLayers; // 0xb20(0x10)
	struct FLinearColor *88580d2a33; // 0xb30(0x10)
	int32 *a192dd1207; // 0xb40(0x04)
	bool *a5be54ddff; // 0xb44(0x01)
	char pad_B45[0x3]; // 0xb45(0x03)
	struct UPaperTileMap* TileMap; // 0xb48(0x08)

	void *8cc8c66b48(); // Function Paper2D.PaperTileMapComponent.*8cc8c66b48 // Final|Native|Public|BlueprintCallable // @ game+0x69b1ccc
	void *1520c20ec7(); // Function Paper2D.PaperTileMapComponent.*1520c20ec7 // Final|Native|Public|BlueprintCallable // @ game+0x69b3a44
	void *5b103d117d(); // Function Paper2D.PaperTileMapComponent.*5b103d117d // Final|Native|Public|BlueprintCallable // @ game+0x69b3b4c
	void *e6f009610e(); // Function Paper2D.PaperTileMapComponent.*e6f009610e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2e08
	void *341f716e54(); // Function Paper2D.PaperTileMapComponent.*341f716e54 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2ae8
	void *b71d16b417(); // Function Paper2D.PaperTileMapComponent.*b71d16b417 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b4708
	void *dec7c879cd(); // Function Paper2D.PaperTileMapComponent.*dec7c879cd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2c78
	void *1a967930fa(); // Function Paper2D.PaperTileMapComponent.*1a967930fa // Final|Native|Public|BlueprintCallable // @ game+0x69b3644
	void *e2659a1ad7(); // Function Paper2D.PaperTileMapComponent.*e2659a1ad7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2e24
	void *aa797d7fdf(); // Function Paper2D.PaperTileMapComponent.*aa797d7fdf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69b3dd0
	void *23c8e4af62(); // Function Paper2D.PaperTileMapComponent.*23c8e4af62 // Final|Native|Public|BlueprintCallable // @ game+0x69b4538
	void *0d5028284a(); // Function Paper2D.PaperTileMapComponent.*0d5028284a // Final|Native|Public|BlueprintCallable // @ game+0x69b37fc
	void CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x69b1fd0
	void *0ceed5fa6a(); // Function Paper2D.PaperTileMapComponent.*0ceed5fa6a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2500
	void *28f3d9ed76(); // Function Paper2D.PaperTileMapComponent.*28f3d9ed76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b3748
	void *e344d50a43(); // Function Paper2D.PaperTileMapComponent.*e344d50a43 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69b2990
	void *94f14e7e15(); // Function Paper2D.PaperTileMapComponent.*94f14e7e15 // Native|Public|BlueprintCallable // @ game+0x6257b40
	void *b5c5881e0c(); // Function Paper2D.PaperTileMapComponent.*b5c5881e0c // Final|Native|Public|BlueprintCallable // @ game+0x69b38b4
	void *50af5e9519(); // Function Paper2D.PaperTileMapComponent.*50af5e9519 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x69b25bc
};

// Class Paper2D.PaperTileSet
// Size: 0xa0 (Inherited: 0x30)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct F*1b3579c3f8 BorderMargin; // 0x40(0x10)
	struct FIntPoint PerTileSpacing; // 0x50(0x08)
	struct FIntPoint DrawingOffset; // 0x58(0x08)
	int32 *a6c66f2556; // 0x60(0x04)
	int32 *3089ee6ce0; // 0x64(0x04)
	int32 *d309651bcc; // 0x68(0x04)
	int32 *4aed544ca7; // 0x6c(0x04)
	struct TArray<struct F*08b3c71ebb> PerTileData; // 0x70(0x10)
	struct TArray<struct F*adc681947c> Terrains; // 0x80(0x10)
	int32 TileWidth; // 0x90(0x04)
	int32 TileHeight; // 0x94(0x04)
	int32 Margin; // 0x98(0x04)
	int32 Spacing; // 0x9c(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	void *2f1915a7a0(); // Function Paper2D.TileMapBlueprintLibrary.*2f1915a7a0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x69b3034
	void MakeTile(); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69b3448
	void *c29b0cb4ef(); // Function Paper2D.TileMapBlueprintLibrary.*c29b0cb4ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x69b30ec
	void BreakTile(); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x69b1d38
};

