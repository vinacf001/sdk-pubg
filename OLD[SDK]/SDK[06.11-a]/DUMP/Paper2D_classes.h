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

	void *3a75594228(struct UPaperSprite* ReturnValue); // Function Paper2D.PaperFlipbook.*3a75594228 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3104
	void *710df1717b(int32 ReturnValue); // Function Paper2D.PaperFlipbook.*710df1717b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3078
	void *c8fa2e6d54(); // Function Paper2D.PaperFlipbook.*c8fa2e6d54 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3af0
	int32 *7205910aff(); // Function Paper2D.PaperFlipbook.*7205910aff // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2d44
	struct UPaperSprite* *2e533530ee(); // Function Paper2D.PaperFlipbook.*2e533530ee // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc31a4
	bool *ce32845398(); // Function Paper2D.PaperFlipbook.*ce32845398 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3b68
	int32 *f176f472c6(); // Function Paper2D.PaperFlipbook.*f176f472c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c34768
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3f8(0x08)
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

	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3b10
	bool *de6d50ca38(); // Function Paper2D.PaperFlipbookComponent.*de6d50ca38 // Final|Native|Public|BlueprintCallable // @ game+0x6dc4aec
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x6dc40b8
	struct UPaperFlipbook* OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x6dc3ff8
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x6dc40f0
	struct UPaperFlipbook* *8ead7f76ab(); // Function Paper2D.PaperFlipbookComponent.*8ead7f76ab // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6dc2b28
	bool SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6dc4820
	float *65ef202f2e(); // Function Paper2D.PaperFlipbookComponent.*65ef202f2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2bb0
	bool SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x6dc49fc
	float SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x6dc48b8
	float *8029b6696e(); // Function Paper2D.PaperFlipbookComponent.*8029b6696e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2b50
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x6dc4338
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3b2c
	struct UMaterialInterface* *e875678780(); // Function Paper2D.PaperFlipbookComponent.*e875678780 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc32b0
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6dc5174
	float *6abd013643(); // Function Paper2D.PaperFlipbookComponent.*6abd013643 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2b70
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6dc4964
	void GetPlayRate(float ReturnValue); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3098
	void *2d2d897e4d(); // Function Paper2D.PaperFlipbookComponent.*2d2d897e4d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2b90
	void *b3b28e404f(); // Function Paper2D.PaperFlipbookComponent.*b3b28e404f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3b48
	void *b43c1eee52(struct UPaperFlipbook* NewFlipbook, bool ReturnValue); // Function Paper2D.PaperFlipbookComponent.*b43c1eee52 // Native|Public|BlueprintCallable // @ game+0x663ac24
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x6dc4308
	void *11fc6c1358(); // Function Paper2D.PaperFlipbookComponent.*11fc6c1358 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc30b0
	void *893c563661(); // Function Paper2D.PaperFlipbookComponent.*893c563661 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc4bec
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x400 (Inherited: 0x3f8)
struct APaperGroupedSpriteActor : AActor {
	struct U*d367093df3* RenderComponent; // 0x3f8(0x08)
};

// Class Paper2D.*d367093df3
// Size: 0xae0 (Inherited: 0xab0)
struct U*d367093df3 : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *a1faf17977; // 0xab0(0x10)
	struct TArray<struct F*e0b96bd59d> *7f104428ed; // 0xac0(0x10)
	char pad_AD0[0x10]; // 0xad0(0x10)

	bool *481cb515e9(); // Function Paper2D.*d367093df3.*481cb515e9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc518c
	bool *af6477ee17(struct FLinearColor Color, int32 ReturnValue); // Function Paper2D.*d367093df3.*af6477ee17 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6dc2408
	void *765b562637(int32 InstanceIndex); // Function Paper2D.*d367093df3.*765b562637 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2bc8
	void *068cda575c(int32 InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty); // Function Paper2D.*d367093df3.*068cda575c // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6dc52c8
	void *f58b7ec745(); // Function Paper2D.*d367093df3.*f58b7ec745 // Native|Public|BlueprintCallable // @ game+0xa3390c
	void *4b502e7200(int32 ReturnValue); // Function Paper2D.*d367093df3.*4b502e7200 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2bb0
	void *4d2089df7b(struct FVector WorldSpaceSortAxis); // Function Paper2D.*d367093df3.*4d2089df7b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc50d4
	void *e1ee01c104(); // Function Paper2D.*d367093df3.*e1ee01c104 // Native|Public|BlueprintCallable // @ game+0x6dc415c
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
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xad0 (Inherited: 0xab0)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xab0(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xab8(0x08)
	struct FLinearColor SpriteColor; // 0xac0(0x10)

	void *893c563661(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.*893c563661 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc4ce4
	void *863c1b7940(); // Function Paper2D.PaperSpriteComponent.*863c1b7940 // Native|Public|BlueprintCallable // @ game+0x663ac24
	void *454a3184aa(); // Function Paper2D.PaperSpriteComponent.*454a3184aa // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6dc2b28
};

// Class Paper2D.PaperTerrainActor
// Size: 0x410 (Inherited: 0x3f8)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *fd9de42747; // 0x3f8(0x08)
	struct U*9f493cbba3* SplineComponent; // 0x400(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x408(0x08)
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

	void *ea7e0489b4(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.*ea7e0489b4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc4ddc
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

	float *cf680803a3(); // Function Engine.SplineComponent.*cf680803a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bea540
	void *a3e04ebb78(struct FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace, struct FRotator ReturnValue); // Function Engine.SplineComponent.*a3e04ebb78 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be5e90
	void *f915afe236(); // Function Engine.SplineComponent.*f915afe236 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bc5078
	void *52e254e8f9(); // Function Engine.SplineComponent.*52e254e8f9 // Final|Native|Public|BlueprintCallable // @ game+0x6bdc674
	void *134a78950f(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity, float ReturnValue); // Function Engine.SplineComponent.*134a78950f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bef9bc
	void *92f2f40b5b(bool bUpdateSpline); // Function Engine.SplineComponent.*92f2f40b5b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bd0494
	void *aabffd98cf(float Distance, enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*aabffd98cf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6befaf4
	void *f3814e00f1(); // Function Engine.SplineComponent.*f3814e00f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be5fc0
	void *ea5851529e(struct FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace, struct FVector ReturnValue); // Function Engine.SplineComponent.*ea5851529e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be6088
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6beda24
	struct FVector *ad1164c994(); // Function Engine.SplineComponent.*ad1164c994 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6becc08
	float *1b9bf47c06(); // Function Engine.SplineComponent.*1b9bf47c06 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bef8d0
	bool SetSplinePointType(); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x6c178e8
	struct FVector *ac013a29ee(); // Function Engine.SplineComponent.*ac013a29ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bea108
	struct FVector *fb34d6ec15(); // Function Engine.SplineComponent.*fb34d6ec15 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be6334
	bool *79c62cca3e(); // Function Engine.SplineComponent.*79c62cca3e // Final|Native|Public|BlueprintCallable // @ game+0x6c1057c
	struct FVector *153ec0a3ad(); // Function Engine.SplineComponent.*153ec0a3ad // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf0010
	float *c39fb27d0a(); // Function Engine.SplineComponent.*c39fb27d0a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be56e8
	struct FVector *4e0299c96f(); // Function Engine.SplineComponent.*4e0299c96f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf298c
	float *c219d560c2(enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity, struct FVector ReturnValue); // Function Engine.SplineComponent.*c219d560c2 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf11d0
	void *83706fa678(); // Function Engine.SplineComponent.*83706fa678 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf3880
	void *a843ad36b5(struct FVector InUpVector, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.*a843ad36b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c19a30
	void *826b637896(); // Function Engine.SplineComponent.*826b637896 // Final|Native|Public|BlueprintCallable // @ game+0x6c0957c
	void *04febd64a1(enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity, bool bUseScale, struct FTransform ReturnValue); // Function Engine.SplineComponent.*04febd64a1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf22cc
	void *73fe9828cf(); // Function Engine.SplineComponent.*73fe9828cf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf07d4
	void *4d7aca9cf9(); // Function Engine.SplineComponent.*4d7aca9cf9 // Final|Native|Public|BlueprintCallable // @ game+0x6c23d5c
	void *81f38254ef(float Distance, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.*81f38254ef // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf1fac
	struct FVector *282f0d95b1(); // Function Engine.SplineComponent.*282f0d95b1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6becef8
	bool *c90272e158(); // Function Engine.SplineComponent.*c90272e158 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c18ce8
	struct FVector *c06887c798(); // Function Engine.SplineComponent.*c06887c798 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6becc08
	enum class ESplineCoordinateSpace *aab9f24cfc(); // Function Engine.SplineComponent.*aab9f24cfc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c0fdb0
	float *97d19dcf2a(); // Function Engine.SplineComponent.*97d19dcf2a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6beae7c
	struct FVector *ef1c9a40e0(); // Function Engine.SplineComponent.*ef1c9a40e0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf31b8
	bool *e05ece5e57(); // Function Engine.SplineComponent.*e05ece5e57 // Final|Native|Public|BlueprintCallable // @ game+0x6c0eb94
	float *6473859118(); // Function Engine.SplineComponent.*6473859118 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bef7dc
	struct FVector *85900ff67f(); // Function Engine.SplineComponent.*85900ff67f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf3448
	void *2322fbe20b(float Distance, enum class ESplineCoordinateSpace CoordinateSpace, struct FVector ReturnValue); // Function Engine.SplineComponent.*2322fbe20b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bea008
	void *50ee2e4e25(); // Function Engine.SplineComponent.*50ee2e4e25 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bd0620
	void *a24bcc5994(struct FVector ReturnValue); // Function Engine.SplineComponent.*a24bcc5994 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bed1f0
	void *90b7823df0(struct FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*90b7823df0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be5d8c
	void *e1a48fec25(struct FVector ReturnValue); // Function Engine.SplineComponent.*e1a48fec25 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf2a8c
	void *6b6775bd9f(bool bInClosedLoop, bool bUpdateSpline); // Function Engine.SplineComponent.*6b6775bd9f // Final|Native|Public|BlueprintCallable // @ game+0x6c0ea9c
	void *86e26430bb(bool bUpdateSpline); // Function Engine.SplineComponent.*86e26430bb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c14840
	void *e08e3e9858(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.*e08e3e9858 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf3770
	bool *4ccf21d8b5(); // Function Engine.SplineComponent.*4ccf21d8b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c18b5c
	struct FVector *045b3f530f(); // Function Engine.SplineComponent.*045b3f530f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bed2f0
	struct FVector *2e3858f9b1(); // Function Engine.SplineComponent.*2e3858f9b1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bed3ec
	struct FRotator *2d313357bc(); // Function Engine.SplineComponent.*2d313357bc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6befcf0
	struct FVector *17025220de(); // Function Engine.SplineComponent.*17025220de // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bef460
	struct FVector *c42fa2dbce(); // Function Engine.SplineComponent.*c42fa2dbce // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bef560
	struct FVector *23206032f9(); // Function Engine.SplineComponent.*23206032f9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf2bc0
	enum class ESplineCoordinateSpace *d6f8495c97(struct FVector ReturnValue); // Function Engine.SplineComponent.*d6f8495c97 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf10d0
	void *3502332269(float ReturnValue); // Function Engine.SplineComponent.*3502332269 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf07ac
	void *91fae90d35(); // Function Engine.SplineComponent.*91fae90d35 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf3388
	void *cfba33f05d(bool bUseConstantVelocity, struct FVector ReturnValue); // Function Engine.SplineComponent.*cfba33f05d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf00e4
	void *8fa5d6c60f(float Distance); // Function Engine.SplineComponent.*8fa5d6c60f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6beff58
	void *7f66e1fbac(); // Function Engine.SplineComponent.*7f66e1fbac // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf36b0
	void *e8e6a3b352(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.*e8e6a3b352 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bea204
	void *54fd7af9bc(struct FVector ReturnValue); // Function Engine.SplineComponent.*54fd7af9bc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be55c4
	void *9117ec8f3d(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.*9117ec8f3d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf3278
	bool AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bd034c
	enum class ESplineCoordinateSpace *a90398e5f8(); // Function Engine.SplineComponent.*a90398e5f8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bed050
	struct TArray<struct FVector> *ef63e4ad53(); // Function Engine.SplineComponent.*ef63e4ad53 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c17c80
	float *c7e0ec4ec0(); // Function Engine.SplineComponent.*c7e0ec4ec0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6becd2c
	struct FVector *d542bd1ed8(); // Function Engine.SplineComponent.*d542bd1ed8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6c1ac30
	struct FVector *4d353239e7(); // Function Engine.SplineComponent.*4d353239e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bd02ac
	struct FVector *167f699d6d(); // Function Engine.SplineComponent.*167f699d6d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be7abc
	struct FVector *c7ff5ca2be(); // Function Engine.SplineComponent.*c7ff5ca2be // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be9dcc
	struct FVector *197e8ca22e(); // Function Engine.SplineComponent.*197e8ca22e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be5794
	bool *1cb7eba1c5(); // Function Engine.SplineComponent.*1cb7eba1c5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6bd0060
	void *32f0fbfd82(struct TArray<struct FVector> Points); // Function Engine.SplineComponent.*32f0fbfd82 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c1781c
	void *a2c24d66e7(); // Function Engine.SplineComponent.*a2c24d66e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bc5078
	void *7ee73e99c7(); // Function Engine.SplineComponent.*7ee73e99c7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf6524
	void *eabc4a062e(struct FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale, struct FTransform ReturnValue); // Function Engine.SplineComponent.*eabc4a062e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be61ac
	void *cf31a1909e(bool bUpdateSpline); // Function Engine.SplineComponent.*cf31a1909e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c17a18
	void *914680d4fd(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.*914680d4fd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf3500
	void *c8b1123aa1(struct FVector ReturnValue); // Function Engine.SplineComponent.*c8b1123aa1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6be5c68
	void *44a8c2bd34(int32 PointIndex, enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*44a8c2bd34 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bf2120
	struct FVector *15c36c3b51(); // Function Engine.SplineComponent.*15c36c3b51 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bef694
	struct FRotator *33d4210dce(); // Function Engine.SplineComponent.*33d4210dce // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6befbf4
	bool *3ca671b930(); // Function Engine.SplineComponent.*3ca671b930 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6bd017c
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

	void *550b69cd59(bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.*550b69cd59 // Final|Native|Public|BlueprintCallable // @ game+0x6dc438c
	void *249232a0ae(struct FLinearColor NewColor, int32 Layer); // Function Paper2D.PaperTileMapComponent.*249232a0ae // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc4718
	void *fff4870577(struct F*bd8bd247f1 ReturnValue); // Function Paper2D.PaperTileMapComponent.*fff4870577 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc32dc
	void *eee81f1f81(int32 X, int32 Y); // Function Paper2D.PaperTileMapComponent.*eee81f1f81 // Final|Native|Public|BlueprintCallable // @ game+0x6dc4e74
	void *af4f8cb4e1(); // Function Paper2D.PaperTileMapComponent.*af4f8cb4e1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc4094
	int32 *ad718400f8(); // Function Paper2D.PaperTileMapComponent.*ad718400f8 // Final|Native|Public|BlueprintCallable // @ game+0x6dc4200
	bool CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x6dc2904
	struct FLinearColor *d903b2ebcc(); // Function Paper2D.PaperTileMapComponent.*d903b2ebcc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc2e34
	bool *04ae68e577(); // Function Paper2D.PaperTileMapComponent.*04ae68e577 // Native|Public|BlueprintCallable // @ game+0x663ac24
	void *7513384930(); // Function Paper2D.PaperTileMapComponent.*7513384930 // Final|Native|Public|BlueprintCallable // @ game+0x6dc4148
	struct FVector *e1ca356def(); // Function Paper2D.PaperTileMapComponent.*e1ca356def // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc35c4
	bool *ed1e1a8d37(); // Function Paper2D.PaperTileMapComponent.*ed1e1a8d37 // Final|Native|Public|BlueprintCallable // @ game+0x6dc4494
	void *baa679a9df(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.*baa679a9df // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6dc5040
	void *66d83e263a(); // Function Paper2D.PaperTileMapComponent.*66d83e263a // Final|Native|Public|BlueprintCallable // @ game+0x6dc3f90
	void *8829b0d964(int32 TileX, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.*8829b0d964 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3770
	void *48550fc9da(int32 MapWidth, int32 MapHeight); // Function Paper2D.PaperTileMapComponent.*48550fc9da // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6dc2ef0
	void *b1dd1430ee(int32 LayerIndex, bool bWorldSpace, struct FVector ReturnValue); // Function Paper2D.PaperTileMapComponent.*b1dd1430ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3434
	void *e99422e829(); // Function Paper2D.PaperTileMapComponent.*e99422e829 // Final|Native|Public|BlueprintCallable // @ game+0x6dc2604
	void *c57693c290(); // Function Paper2D.PaperTileMapComponent.*c57693c290 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6dc3754
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

