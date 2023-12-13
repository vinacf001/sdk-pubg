// Class Paper2D.*d53b39580a
// Size: 0x230 (Inherited: 0x210)
struct U*d53b39580a : U*0a49d994d5 {
	bool *3b4ba434ae; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32 *ce50870d93; // 0x214(0x04)
	struct FText *064602220e; // 0x218(0x18)
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
	struct TArray<struct F*e7210f226a> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	struct UPaperSprite* *3a75594228(); // Function Paper2D.PaperFlipbook.*3a75594228 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6a14
	int32 *710df1717b(); // Function Paper2D.PaperFlipbook.*710df1717b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6988
	float *c8fa2e6d54(); // Function Paper2D.PaperFlipbook.*c8fa2e6d54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa7400
	int32 *7205910aff(); // Function Paper2D.PaperFlipbook.*7205910aff // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6654
	struct UPaperSprite* *2e533530ee(); // Function Paper2D.PaperFlipbook.*2e533530ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6ab4
	bool *ce32845398(); // Function Paper2D.PaperFlipbook.*ce32845398 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa7478
	int32 *f176f472c6(); // Function Paper2D.PaperFlipbook.*f176f472c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x69181b8
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xb00 (Inherited: 0xab0)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *3b30e29495; // 0xab0(0x08)
	struct UMaterialInterface* Material; // 0xab8(0x08)
	float PlayRate; // 0xac0(0x04)
	char bLooping : 1; // 0xac4(0x01)
	char *bdac78466e : 1; // 0xac4(0x01)
	char *f7e4f9d69b : 1; // 0xac4(0x01)
	char pad_AC4_3 : 5; // 0xac4(0x01)
	char pad_AC5[0x3]; // 0xac5(0x03)
	float *16d9122694; // 0xac8(0x04)
	int32 *b4a42942da; // 0xacc(0x04)
	struct FLinearColor SpriteColor; // 0xad0(0x10)
	struct UBodySetup* *2edecc9383; // 0xae0(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xae8(0x10)
	char pad_AF8[0x8]; // 0xaf8(0x08)

	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa7420
	bool *de6d50ca38(); // Function Paper2D.PaperFlipbookComponent.*de6d50ca38 // Final|Native|Public|BlueprintCallable // @ game+0x6aa83fc
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x6aa79c8
	struct UPaperFlipbook* OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x6aa7908
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x6aa7a00
	struct UPaperFlipbook* *8ead7f76ab(); // Function Paper2D.PaperFlipbookComponent.*8ead7f76ab // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6aa6438
	bool SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6aa8130
	float *65ef202f2e(); // Function Paper2D.PaperFlipbookComponent.*65ef202f2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa64c0
	bool SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x6aa830c
	float SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x6aa81c8
	float *8029b6696e(); // Function Paper2D.PaperFlipbookComponent.*8029b6696e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6460
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x6aa7c48
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa743c
	struct UMaterialInterface* *e875678780(); // Function Paper2D.PaperFlipbookComponent.*e875678780 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6bc0
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6aa8a84
	float *6abd013643(); // Function Paper2D.PaperFlipbookComponent.*6abd013643 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6480
	float SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6aa8274
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa69a8
	int32 *2d2d897e4d(); // Function Paper2D.PaperFlipbookComponent.*2d2d897e4d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa64a0
	bool *b3b28e404f(); // Function Paper2D.PaperFlipbookComponent.*b3b28e404f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa7458
	bool *b43c1eee52(); // Function Paper2D.PaperFlipbookComponent.*b43c1eee52 // Native|Public|BlueprintCallable // @ game+0x633465c
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x6aa7c18
	int32 *11fc6c1358(); // Function Paper2D.PaperFlipbookComponent.*11fc6c1358 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa69c0
	struct FLinearColor *893c563661(); // Function Paper2D.PaperFlipbookComponent.*893c563661 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa84fc
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperGroupedSpriteActor : AActor {
	struct U*d367093df3* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.*d367093df3
// Size: 0xae0 (Inherited: 0xab0)
struct U*d367093df3 : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *a1faf17977; // 0xab0(0x10)
	struct TArray<struct F*e0b96bd59d> *7f104428ed; // 0xac0(0x10)
	char pad_AD0[0x10]; // 0xad0(0x10)

	bool *481cb515e9(); // Function Paper2D.*d367093df3.*481cb515e9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa8a9c
	int32 *af6477ee17(); // Function Paper2D.*d367093df3.*af6477ee17 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6aa5d18
	bool *765b562637(); // Function Paper2D.*d367093df3.*765b562637 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa64d8
	bool *068cda575c(); // Function Paper2D.*d367093df3.*068cda575c // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6aa8bd8
	void *f58b7ec745(); // Function Paper2D.*d367093df3.*f58b7ec745 // Native|Public|BlueprintCallable // @ game+0x8394d4
	int32 *4b502e7200(); // Function Paper2D.*d367093df3.*4b502e7200 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa64c0
	struct FVector *4d2089df7b(); // Function Paper2D.*d367093df3.*4d2089df7b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa89e4
	bool *e1ee01c104(); // Function Paper2D.*d367093df3.*e1ee01c104 // Native|Public|BlueprintCallable // @ game+0x6aa7a6c
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
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*5da417284b
// Size: 0x30 (Inherited: 0x30)
struct U*5da417284b : UBlueprintFunctionLibrary {
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xad0 (Inherited: 0xab0)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xab0(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xab8(0x08)
	struct FLinearColor SpriteColor; // 0xac0(0x10)

	struct FLinearColor *893c563661(); // Function Paper2D.PaperSpriteComponent.*893c563661 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa85f4
	bool *863c1b7940(); // Function Paper2D.PaperSpriteComponent.*863c1b7940 // Native|Public|BlueprintCallable // @ game+0x633465c
	struct UPaperSprite* *454a3184aa(); // Function Paper2D.PaperSpriteComponent.*454a3184aa // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6aa6438
};

// Class Paper2D.PaperTerrainActor
// Size: 0x408 (Inherited: 0x3f0)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *fd9de42747; // 0x3f0(0x08)
	struct U*9f493cbba3* SplineComponent; // 0x3f8(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x400(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0xa00 (Inherited: 0x9b0)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x9a8(0x08)
	bool bClosedSpline; // 0x9b0(0x01)
	bool bFilledSpline; // 0x9b1(0x01)
	struct U*9f493cbba3* *48ae2f9528; // 0x9b8(0x08)
	int32 RandomSeed; // 0x9c0(0x04)
	float *d1d307ea6c; // 0x9c4(0x04)
	struct FLinearColor TerrainColor; // 0x9c8(0x10)
	int32 *c94fdb6f50; // 0x9d8(0x04)
	enum class ESpriteCollisionMode *06738740fa; // 0x9dc(0x01)
	char pad_9DF[0x1]; // 0x9df(0x01)
	float *5a7063e57a; // 0x9e0(0x04)
	char pad_9E4[0x4]; // 0x9e4(0x04)
	struct UBodySetup* *2edecc9383; // 0x9e8(0x08)
	char pad_9F0[0x10]; // 0x9f0(0x10)

	struct FLinearColor *ea7e0489b4(); // Function Paper2D.PaperTerrainComponent.*ea7e0489b4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa86ec
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*53798110a7> Rules; // 0x38(0x10)
	struct UPaperSprite* *98cc1f9d56; // 0x48(0x08)
};

// Class Paper2D.*9f493cbba3
// Size: 0xae0 (Inherited: 0xaa0)
struct U*9f493cbba3 : USplineComponent {
	struct FSplineCurves *af20761ba1; // 0x9a8(0x60)
	struct FInterpCurveVector SplineInfo; // 0xa08(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa20(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa38(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xa50(0x18)
	bool bAllowSplineEditingPerInstance; // 0xa68(0x01)
	int32 *c94fdb6f50; // 0xa6c(0x04)
	bool *74a06f3a21; // 0xa70(0x01)
	bool *2ae54133a6; // 0xa71(0x01)
	float *de8108c325; // 0xa74(0x04)
	float Duration; // 0xa78(0x04)
	bool bStationaryEndpoints; // 0xa7c(0x01)
	bool *ed5304d631; // 0xa7d(0x01)
	bool *892474e663; // 0xa7e(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xa7f(0x01)
	bool bDrawDebug; // 0xa80(0x01)
	bool *62034b8d2c; // 0xa81(0x01)
	bool bLoopPositionOverride; // 0xa82(0x01)
	float *2dff64e046; // 0xa84(0x04)
	struct FVector DefaultUpVector; // 0xa88(0x0c)

	float *cf680803a3(); // Function Engine.SplineComponent.*cf680803a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68cdfc4
	struct FRotator *a3e04ebb78(); // Function Engine.SplineComponent.*a3e04ebb78 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c98e4
	struct FLinearColor *f915afe236(); // Function Engine.SplineComponent.*f915afe236 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a8bb8
	bool *52e254e8f9(); // Function Engine.SplineComponent.*52e254e8f9 // Final|Native|Public|BlueprintCallable // @ game+0x68c01cc
	float *134a78950f(); // Function Engine.SplineComponent.*134a78950f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3528
	bool *92f2f40b5b(); // Function Engine.SplineComponent.*92f2f40b5b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68b3fec
	struct FRotator *aabffd98cf(); // Function Engine.SplineComponent.*aabffd98cf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3660
	struct FVector *f3814e00f1(); // Function Engine.SplineComponent.*f3814e00f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c9a14
	struct FVector *ea5851529e(); // Function Engine.SplineComponent.*ea5851529e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c9adc
	int32 GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d14d8
	struct FVector *ad1164c994(); // Function Engine.SplineComponent.*ad1164c994 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d06bc
	float *1b9bf47c06(); // Function Engine.SplineComponent.*1b9bf47c06 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d343c
	bool SetSplinePointType(); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x68fb3dc
	struct FVector *ac013a29ee(); // Function Engine.SplineComponent.*ac013a29ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68cdb8c
	struct FVector *fb34d6ec15(); // Function Engine.SplineComponent.*fb34d6ec15 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c9d88
	bool *79c62cca3e(); // Function Engine.SplineComponent.*79c62cca3e // Final|Native|Public|BlueprintCallable // @ game+0x68f406c
	struct FVector *153ec0a3ad(); // Function Engine.SplineComponent.*153ec0a3ad // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3b7c
	float *c39fb27d0a(); // Function Engine.SplineComponent.*c39fb27d0a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c913c
	struct FVector *4e0299c96f(); // Function Engine.SplineComponent.*4e0299c96f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6478
	struct FVector *c219d560c2(); // Function Engine.SplineComponent.*c219d560c2 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4ca4
	struct FVector *83706fa678(); // Function Engine.SplineComponent.*83706fa678 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d736c
	bool *a843ad36b5(); // Function Engine.SplineComponent.*a843ad36b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68fd524
	bool *826b637896(); // Function Engine.SplineComponent.*826b637896 // Final|Native|Public|BlueprintCallable // @ game+0x68ed068
	struct FTransform *04febd64a1(); // Function Engine.SplineComponent.*04febd64a1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d5db8
	enum class ESplinePointType *73fe9828cf(); // Function Engine.SplineComponent.*73fe9828cf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4340
	void *4d7aca9cf9(); // Function Engine.SplineComponent.*4d7aca9cf9 // Final|Native|Public|BlueprintCallable // @ game+0x6907850
	struct FTransform *81f38254ef(); // Function Engine.SplineComponent.*81f38254ef // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d5a98
	struct FVector *282f0d95b1(); // Function Engine.SplineComponent.*282f0d95b1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d09ac
	bool *c90272e158(); // Function Engine.SplineComponent.*c90272e158 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68fc7dc
	struct FVector *c06887c798(); // Function Engine.SplineComponent.*c06887c798 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d06bc
	enum class ESplineCoordinateSpace *aab9f24cfc(); // Function Engine.SplineComponent.*aab9f24cfc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68f38a0
	float *97d19dcf2a(); // Function Engine.SplineComponent.*97d19dcf2a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68ce918
	struct FVector *ef1c9a40e0(); // Function Engine.SplineComponent.*ef1c9a40e0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6ca4
	bool *e05ece5e57(); // Function Engine.SplineComponent.*e05ece5e57 // Final|Native|Public|BlueprintCallable // @ game+0x68f2684
	float *6473859118(); // Function Engine.SplineComponent.*6473859118 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3348
	struct FVector *85900ff67f(); // Function Engine.SplineComponent.*85900ff67f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6f34
	struct FVector *2322fbe20b(); // Function Engine.SplineComponent.*2322fbe20b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68cda8c
	struct FVector *50ee2e4e25(); // Function Engine.SplineComponent.*50ee2e4e25 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68b4178
	struct FVector *a24bcc5994(); // Function Engine.SplineComponent.*a24bcc5994 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d0ca4
	float *90b7823df0(); // Function Engine.SplineComponent.*90b7823df0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c97e0
	struct FVector *e1a48fec25(); // Function Engine.SplineComponent.*e1a48fec25 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6578
	bool *6b6775bd9f(); // Function Engine.SplineComponent.*6b6775bd9f // Final|Native|Public|BlueprintCallable // @ game+0x68f258c
	bool *86e26430bb(); // Function Engine.SplineComponent.*86e26430bb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68f8330
	struct FRotator *e08e3e9858(); // Function Engine.SplineComponent.*e08e3e9858 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d725c
	bool *4ccf21d8b5(); // Function Engine.SplineComponent.*4ccf21d8b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68fc650
	struct FVector *045b3f530f(); // Function Engine.SplineComponent.*045b3f530f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d0da4
	struct FVector *2e3858f9b1(); // Function Engine.SplineComponent.*2e3858f9b1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d0ea0
	struct FRotator *2d313357bc(); // Function Engine.SplineComponent.*2d313357bc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d385c
	struct FVector *17025220de(); // Function Engine.SplineComponent.*17025220de // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d2fcc
	struct FVector *c42fa2dbce(); // Function Engine.SplineComponent.*c42fa2dbce // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d30cc
	struct FVector *23206032f9(); // Function Engine.SplineComponent.*23206032f9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d66ac
	struct FVector *d6f8495c97(); // Function Engine.SplineComponent.*d6f8495c97 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4ba4
	float *3502332269(); // Function Engine.SplineComponent.*3502332269 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d4318
	struct FVector *91fae90d35(); // Function Engine.SplineComponent.*91fae90d35 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6e74
	struct FVector *cfba33f05d(); // Function Engine.SplineComponent.*cfba33f05d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3c50
	struct FVector *8fa5d6c60f(); // Function Engine.SplineComponent.*8fa5d6c60f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3ac4
	struct FRotator *7f66e1fbac(); // Function Engine.SplineComponent.*7f66e1fbac // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d719c
	struct FVector *e8e6a3b352(); // Function Engine.SplineComponent.*e8e6a3b352 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68cdc88
	struct FVector *54fd7af9bc(); // Function Engine.SplineComponent.*54fd7af9bc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c9018
	struct FVector *9117ec8f3d(); // Function Engine.SplineComponent.*9117ec8f3d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6d64
	bool AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68b3ea4
	enum class ESplineCoordinateSpace *a90398e5f8(); // Function Engine.SplineComponent.*a90398e5f8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d0b04
	struct TArray<struct FVector> *ef63e4ad53(); // Function Engine.SplineComponent.*ef63e4ad53 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fb774
	float *c7e0ec4ec0(); // Function Engine.SplineComponent.*c7e0ec4ec0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68d07e0
	struct FVector *d542bd1ed8(); // Function Engine.SplineComponent.*d542bd1ed8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68fe724
	struct FVector *4d353239e7(); // Function Engine.SplineComponent.*4d353239e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68b3e04
	struct FVector *167f699d6d(); // Function Engine.SplineComponent.*167f699d6d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68cb510
	struct FVector *c7ff5ca2be(); // Function Engine.SplineComponent.*c7ff5ca2be // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68cd850
	struct FVector *197e8ca22e(); // Function Engine.SplineComponent.*197e8ca22e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c91e8
	bool *1cb7eba1c5(); // Function Engine.SplineComponent.*1cb7eba1c5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68b3bb8
	struct TArray<struct FVector> *32f0fbfd82(); // Function Engine.SplineComponent.*32f0fbfd82 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fb310
	struct FLinearColor *a2c24d66e7(); // Function Engine.SplineComponent.*a2c24d66e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a8bb8
	bool *7ee73e99c7(); // Function Engine.SplineComponent.*7ee73e99c7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68da010
	struct FTransform *eabc4a062e(); // Function Engine.SplineComponent.*eabc4a062e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c9c00
	bool *cf31a1909e(); // Function Engine.SplineComponent.*cf31a1909e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68fb50c
	struct FVector *914680d4fd(); // Function Engine.SplineComponent.*914680d4fd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d6fec
	struct FVector *c8b1123aa1(); // Function Engine.SplineComponent.*c8b1123aa1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68c96bc
	struct FTransform *44a8c2bd34(); // Function Engine.SplineComponent.*44a8c2bd34 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d5c0c
	struct FVector *15c36c3b51(); // Function Engine.SplineComponent.*15c36c3b51 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3200
	struct FRotator *33d4210dce(); // Function Engine.SplineComponent.*33d4210dce // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68d3760
	bool *3ca671b930(); // Function Engine.SplineComponent.*3ca671b930 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68b3cd4
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
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0xb00 (Inherited: 0xab0)
struct UPaperTileMapComponent : UMeshComponent {
	int32 MapWidth; // 0xab0(0x04)
	int32 MapHeight; // 0xab4(0x04)
	int32 TileWidth; // 0xab8(0x04)
	int32 TileHeight; // 0xabc(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0xac0(0x08)
	struct UMaterialInterface* Material; // 0xac8(0x08)
	struct TArray<struct U*1806723c19*> TileLayers; // 0xad0(0x10)
	struct FLinearColor *f300d632a6; // 0xae0(0x10)
	int32 *53be108996; // 0xaf0(0x04)
	bool *15e56460f7; // 0xaf4(0x01)
	char pad_AF5[0x3]; // 0xaf5(0x03)
	struct UPaperTileMap* TileMap; // 0xaf8(0x08)

	void *550b69cd59(); // Function Paper2D.PaperTileMapComponent.*550b69cd59 // Final|Native|Public|BlueprintCallable // @ game+0x6aa7c9c
	void *249232a0ae(); // Function Paper2D.PaperTileMapComponent.*249232a0ae // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa8028
	void *fff4870577(); // Function Paper2D.PaperTileMapComponent.*fff4870577 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6bec
	void *eee81f1f81(); // Function Paper2D.PaperTileMapComponent.*eee81f1f81 // Final|Native|Public|BlueprintCallable // @ game+0x6aa8784
	void *af4f8cb4e1(); // Function Paper2D.PaperTileMapComponent.*af4f8cb4e1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa79a4
	int32 *ad718400f8(); // Function Paper2D.PaperTileMapComponent.*ad718400f8 // Final|Native|Public|BlueprintCallable // @ game+0x6aa7b10
	bool CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x6aa6214
	struct FLinearColor *d903b2ebcc(); // Function Paper2D.PaperTileMapComponent.*d903b2ebcc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6744
	bool *04ae68e577(); // Function Paper2D.PaperTileMapComponent.*04ae68e577 // Native|Public|BlueprintCallable // @ game+0x633465c
	void *7513384930(); // Function Paper2D.PaperTileMapComponent.*7513384930 // Final|Native|Public|BlueprintCallable // @ game+0x6aa7a58
	struct FVector *e1ca356def(); // Function Paper2D.PaperTileMapComponent.*e1ca356def // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6ed4
	bool *ed1e1a8d37(); // Function Paper2D.PaperTileMapComponent.*ed1e1a8d37 // Final|Native|Public|BlueprintCallable // @ game+0x6aa7da4
	struct FLinearColor *baa679a9df(); // Function Paper2D.PaperTileMapComponent.*baa679a9df // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6aa8950
	void *66d83e263a(); // Function Paper2D.PaperTileMapComponent.*66d83e263a // Final|Native|Public|BlueprintCallable // @ game+0x6aa78a0
	bool *8829b0d964(); // Function Paper2D.PaperTileMapComponent.*8829b0d964 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa7080
	int32 *48550fc9da(); // Function Paper2D.PaperTileMapComponent.*48550fc9da // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6aa6800
	struct FVector *b1dd1430ee(); // Function Paper2D.PaperTileMapComponent.*b1dd1430ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa6d44
	struct U*1806723c19* *e99422e829(); // Function Paper2D.PaperTileMapComponent.*e99422e829 // Final|Native|Public|BlueprintCallable // @ game+0x6aa5f14
	struct FLinearColor *c57693c290(); // Function Paper2D.PaperTileMapComponent.*c57693c290 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6aa7064
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
};

