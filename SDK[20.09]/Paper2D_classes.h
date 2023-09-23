// Class Paper2D.*f4c499f92d
// Size: 0x228 (Inherited: 0x208)
struct U*f4c499f92d : U*ba54cde862 {
	bool *77472c9994; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	int32 *674ba71018; // 0x20c(0x04)
	struct FText *3c9b656b03; // 0x210(0x18)
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
	struct TArray<struct F*8845075921> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	bool *514e573854(); // Function Paper2D.PaperFlipbook.*514e573854 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592a0c
	int32 *0275a1f460(); // Function Paper2D.PaperFlipbook.*0275a1f460 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6593824
	void *e2309ad22b(int32 FrameIndex); // Function Paper2D.PaperFlipbook.*e2309ad22b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592dc4
	void *2ee87eec83(); // Function Paper2D.PaperFlipbook.*2ee87eec83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x64100e4
	bool *1a93302098(); // Function Paper2D.PaperFlipbook.*1a93302098 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592e64
	void *38f4ecdef0(); // Function Paper2D.PaperFlipbook.*38f4ecdef0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592d38
	void *12ed393576(); // Function Paper2D.PaperFlipbook.*12ed393576 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65937ac
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x3f0(0x08)
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

	void IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65937e8
	void *8ee5853775(); // Function Paper2D.PaperFlipbookComponent.*8ee5853775 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592858
	void *e33b0eec11(); // Function Paper2D.PaperFlipbookComponent.*e33b0eec11 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65927f0
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x6593d74
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6594e40
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // Final|Native|Public|BlueprintCallable // @ game+0x6593dac
	void *447f9868a0(int32 NewFramePosition); // Function Paper2D.PaperFlipbookComponent.*447f9868a0 // Final|Native|Public|BlueprintCallable // @ game+0x65947ac
	void *92b2288bf0(); // Function Paper2D.PaperFlipbookComponent.*92b2288bf0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6593804
	void SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime // Final|Native|Public|BlueprintCallable // @ game+0x6594578
	void OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // Final|Native|Protected // @ game+0x6593cb4
	void *4a96a2055b(); // Function Paper2D.PaperFlipbookComponent.*4a96a2055b // Native|Public|BlueprintCallable // @ game+0x5e48cd0
	void *d5cf505fd0(); // Function Paper2D.PaperFlipbookComponent.*d5cf505fd0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592d70
	void *6964647c5d(); // Function Paper2D.PaperFlipbookComponent.*6964647c5d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65948ac
	void GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592d58
	void *faa3dee92c(); // Function Paper2D.PaperFlipbookComponent.*faa3dee92c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592818
	void *ddd2017b57(); // Function Paper2D.PaperFlipbookComponent.*ddd2017b57 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592838
	void IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65937cc
	void *6970975b29(); // Function Paper2D.PaperFlipbookComponent.*6970975b29 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592878
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // Final|Native|Public|BlueprintCallable // @ game+0x6593ff8
	void SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x65946bc
	void SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6594624
	void SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x65944e0
	void *8d3ec59379(); // Function Paper2D.PaperFlipbookComponent.*8d3ec59379 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592f70
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // Final|Native|Public|BlueprintCallable // @ game+0x6593fc8
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperGroupedSpriteActor : AActor {
	struct U*a6e9926bfc* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.*a6e9926bfc
// Size: 0xb30 (Inherited: 0xb00)
struct U*a6e9926bfc : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *8f070e9069; // 0xb00(0x10)
	struct TArray<struct F*b7da4b8313> *d80da79478; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)

	bool *86505fc22e(); // Function Paper2D.*a6e9926bfc.*86505fc22e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6594e58
	void *8079791569(); // Function Paper2D.*a6e9926bfc.*8079791569 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6594da0
	void *6075d3ac8a(struct FTransform NewInstanceTransform, bool bMarkRenderStateDirty); // Function Paper2D.*a6e9926bfc.*6075d3ac8a // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6594f94
	void *7786d1a996(); // Function Paper2D.*a6e9926bfc.*7786d1a996 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592878
	int32 *19b8138a81(struct FTransform OutInstanceTransform); // Function Paper2D.*a6e9926bfc.*19b8138a81 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6592890
	struct FLinearColor *028d8429ac(struct FTransform Transform); // Function Paper2D.*a6e9926bfc.*028d8429ac // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65920cc
	void *95a4257f8b(); // Function Paper2D.*a6e9926bfc.*95a4257f8b // Native|Public|BlueprintCallable // @ game+0x55c3ec0
	void *2a75f57149(int32 InstanceIndex); // Function Paper2D.*a6e9926bfc.*2a75f57149 // Native|Public|BlueprintCallable // @ game+0x6593e18
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
	struct TArray<struct UTexture*> *1d9ca63873; // 0x50(0x10)
	struct FVector2D *446229e36a; // 0x60(0x08)
	struct FVector2D *089097d1bb; // 0x68(0x08)
	struct UTexture2D* *f279aa8a38; // 0x70(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x78(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x80(0x08)
	struct TArray<struct F*1e30987aa9> Sockets; // 0x88(0x10)
	enum class ESpriteCollisionMode *01797d5216; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float *65c1e620ea; // 0x9c(0x04)
	struct UBodySetup* BodySetup; // 0xa0(0x08)
	int32 *096fc698e1; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FVector4> *60ce17b215; // 0xb0(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x3f0(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*081f260c3a
// Size: 0x28 (Inherited: 0x28)
struct U*081f260c3a : UBlueprintFunctionLibrary {
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xb20 (Inherited: 0xb00)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xb00(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xb08(0x08)
	struct FLinearColor SpriteColor; // 0xb10(0x10)

	void *cfd368d0fb(); // Function Paper2D.PaperSpriteComponent.*cfd368d0fb // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65927f0
	void *6964647c5d(); // Function Paper2D.PaperSpriteComponent.*6964647c5d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65949a8
	void *d73d19ce7c(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.*d73d19ce7c // Native|Public|BlueprintCallable // @ game+0x5e48cd0
};

// Class Paper2D.PaperTerrainActor
// Size: 0x408 (Inherited: 0x3f0)
struct APaperTerrainActor : AActor {
	struct USceneComponent* *841687ea2d; // 0x3f0(0x08)
	struct U*08f9146694* SplineComponent; // 0x3f8(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x400(0x08)
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

	void *100021f3e0(); // Function Paper2D.PaperTerrainComponent.*100021f3e0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6594aa4
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*77c32e4b7a> Rules; // 0x30(0x10)
	struct UPaperSprite* *dbbd8b4516; // 0x40(0x08)
};

// Class Paper2D.*08f9146694
// Size: 0xb30 (Inherited: 0xaf0)
struct U*08f9146694 : USplineComponent {
	struct FSplineCurves *5d0c3695ca; // 0x9f8(0x60)
	struct FInterpCurveVector SplineInfo; // 0xa58(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa70(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa88(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xaa0(0x18)
	bool bAllowSplineEditingPerInstance; // 0xab8(0x01)
	int32 *12ac1bfde3; // 0xabc(0x04)
	bool *0fe780b02b; // 0xac0(0x01)
	bool *ebdb0cb481; // 0xac1(0x01)
	float *5deaafa98f; // 0xac4(0x04)
	float Duration; // 0xac8(0x04)
	bool bStationaryEndpoints; // 0xacc(0x01)
	bool *90c9232a35; // 0xacd(0x01)
	bool *cfa2a7f9d6; // 0xace(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xacf(0x01)
	bool bDrawDebug; // 0xad0(0x01)
	bool *f088e06431; // 0xad1(0x01)
	bool bLoopPositionOverride; // 0xad2(0x01)
	float *0c6302c5b8; // 0xad4(0x04)
	struct FVector DefaultUpVector; // 0xad8(0x0c)

	bool *f521037389(); // Function Engine.SplineComponent.*f521037389 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c1a20
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63c9704
	void *f2d9795463(bool bInClosedLoop); // Function Engine.SplineComponent.*f2d9795463 // Final|Native|Public|BlueprintCallable // @ game+0x63ea2f4
	void *279afd97e4(); // Function Engine.SplineComponent.*279afd97e4 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63f358c
	void *61729ae40b(float Distance); // Function Engine.SplineComponent.*61729ae40b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb4bc
	void *14c6ac2ad7(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*14c6ac2ad7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63ce260
	bool *8e0da38491(); // Function Engine.SplineComponent.*8e0da38491 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cd880
	void *2442c3cfda(); // Function Engine.SplineComponent.*2442c3cfda // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63ab684
	void *0d1539b16e(int32 Index); // Function Engine.SplineComponent.*0d1539b16e // Final|Native|Public|BlueprintCallable // @ game+0x63e4d28
	bool *0bd297ec0c(); // Function Engine.SplineComponent.*0bd297ec0c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c90cc
	void *715e15771d(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*715e15771d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cca8c
	int32 *eaeef389ef(); // Function Engine.SplineComponent.*eaeef389ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63c8a0c
	enum class ESplineCoordinateSpace *482c918b00(); // Function Engine.SplineComponent.*482c918b00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb1a4
	void *8168c7d440(int32 PointIndex, struct FVector InLeaveTangent); // Function Engine.SplineComponent.*8168c7d440 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63f45fc
	bool *0535ea2b38(); // Function Engine.SplineComponent.*0535ea2b38 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb384
	void *5bc3f87938(float Distance); // Function Engine.SplineComponent.*5bc3f87938 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cea8c
	void *c031841270(); // Function Engine.SplineComponent.*c031841270 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cef84
	bool *37ea769ce6(); // Function Engine.SplineComponent.*37ea769ce6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cbaac
	float *8342ca28b4(); // Function Engine.SplineComponent.*8342ca28b4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cec5c
	void *93e1ad9183(); // Function Engine.SplineComponent.*93e1ad9183 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63cc174
	void *b2051880fc(); // Function Engine.SplineComponent.*b2051880fc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb9d8
	enum class ESplineCoordinateSpace *53522ec073(); // Function Engine.SplineComponent.*53522ec073 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c1704
	void *7241eb6d5b(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*7241eb6d5b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cc98c
	enum class ESplineCoordinateSpace *8e2c528b3c(int32 PointIndex); // Function Engine.SplineComponent.*8e2c528b3c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63f4470
	bool *ae66b82b13(); // Function Engine.SplineComponent.*ae66b82b13 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cd9f4
	void *561d92dd32(); // Function Engine.SplineComponent.*561d92dd32 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c57b4
	enum class ESplineCoordinateSpace *1e53d88498(); // Function Engine.SplineComponent.*1e53d88498 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c88e8
	enum class ESplineCoordinateSpace AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63ab970
	void *ace558dfb0(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*ace558dfb0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c1008
	void *9bc798c6dd(); // Function Engine.SplineComponent.*9bc798c6dd // Final|Native|Public|BlueprintCallable // @ game+0x63b7c7c
	float *a497bf4f60(); // Function Engine.SplineComponent.*a497bf4f60 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63c6908
	void *93587c57a4(); // Function Engine.SplineComponent.*93587c57a4 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63ab7a0
	void *eb8b8b03c8(float Time); // Function Engine.SplineComponent.*eb8b8b03c8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cedd4
	enum class ESplineCoordinateSpace *2a5354556b(); // Function Engine.SplineComponent.*2a5354556b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63caf28
	void *b2334fe3c5(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*b2334fe3c5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c1600
	enum class ESplineCoordinateSpace *a4b5846717(struct FVector Position); // Function Engine.SplineComponent.*a4b5846717 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63abab8
	void *8e0b29167c(); // Function Engine.SplineComponent.*8e0b29167c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63d1d64
	void *e4d7315f08(int32 PointIndex, struct FVector Tangent); // Function Engine.SplineComponent.*e4d7315f08 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c8d30
	void *d0fbe1200b(); // Function Engine.SplineComponent.*d0fbe1200b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63a0714
	int32 *f936f6802a(); // Function Engine.SplineComponent.*f936f6802a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63c5f28
	float *0008f1c73b(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*0008f1c73b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb6b8
	void *d5b3bb04f1(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*d5b3bb04f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c1ba8
	int32 *4dcb5b3bb8(); // Function Engine.SplineComponent.*4dcb5b3bb8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63f6564
	struct FVector *267f16087a(); // Function Engine.SplineComponent.*267f16087a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c0f5c
	void *1ccda6641b(int32 PointIndex); // Function Engine.SplineComponent.*1ccda6641b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63ced1c
	void *841cb0b102(); // Function Engine.SplineComponent.*841cb0b102 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63abc44
	enum class ESplineCoordinateSpace *b6f1ea618d(); // Function Engine.SplineComponent.*b6f1ea618d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63f3324
	void *f5754b1a86(int32 PointIndex); // Function Engine.SplineComponent.*f5754b1a86 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c8fd0
	enum class ESplineCoordinateSpace *6f43d569e7(); // Function Engine.SplineComponent.*6f43d569e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63f0060
	enum class ESplineCoordinateSpace *68e4d63e31(); // Function Engine.SplineComponent.*68e4d63e31 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c88e8
	void *78cf24de3f(float Distance); // Function Engine.SplineComponent.*78cf24de3f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c8ed0
	bool *8b89c44917(); // Function Engine.SplineComponent.*8b89c44917 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cdba0
	void *34595addba(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*34595addba // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c5af0
	void *817d1e31e3(); // Function Engine.SplineComponent.*817d1e31e3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x63f3128
	enum class ESplineCoordinateSpace *ca13fcab0a(); // Function Engine.SplineComponent.*ca13fcab0a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c0e38
	void *57c75d8184(float Distance); // Function Engine.SplineComponent.*57c75d8184 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cae28
	void *0764c61ef4(float Distance); // Function Engine.SplineComponent.*0764c61ef4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb920
	void *805ba4563a(); // Function Engine.SplineComponent.*805ba4563a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63ab8d0
	struct FVector *b4f2515961(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*b4f2515961 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63f534c
	void *24ae13b599(struct FVector WorldLocation); // Function Engine.SplineComponent.*24ae13b599 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c1834
	int32 *b7c16d3638(); // Function Engine.SplineComponent.*b7c16d3638 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63cc19c
	void *25df325ea2(); // Function Engine.SplineComponent.*25df325ea2 // Final|Native|Public|BlueprintCallable // @ game+0x63ff754
	void *ce1badd0f1(int32 PointIndex); // Function Engine.SplineComponent.*ce1badd0f1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63ce360
	void SetSplinePointType(enum class ESplinePointType Type); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x63f31f4
	enum class ESplineCoordinateSpace *81a349303e(); // Function Engine.SplineComponent.*81a349303e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb5bc
	void *2fbe7e676d(); // Function Engine.SplineComponent.*2fbe7e676d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63a0714
	void *175855f7ad(); // Function Engine.SplineComponent.*175855f7ad // Final|Native|Public|BlueprintCallable // @ game+0x63ebd0c
	bool *04eb39a8ec(); // Function Engine.SplineComponent.*04eb39a8ec // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cf044
	float *597a0fd09e(); // Function Engine.SplineComponent.*597a0fd09e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cf154
	void *f0e4b56ae4(bool bUseConstantVelocity); // Function Engine.SplineComponent.*f0e4b56ae4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63ceb4c
	bool *938009a2b9(); // Function Engine.SplineComponent.*938009a2b9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb05c
	struct FVector *4b9fad82e6(); // Function Engine.SplineComponent.*4b9fad82e6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63eb520
	void *f4221d3f9b(float Distance); // Function Engine.SplineComponent.*f4221d3f9b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c59f0
	void *092a5c45dd(); // Function Engine.SplineComponent.*092a5c45dd // Final|Native|Public|BlueprintCallable // @ game+0x63ea1fc
	enum class ESplineCoordinateSpace *6f307b627d(); // Function Engine.SplineComponent.*6f307b627d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c18fc
	void *b923bdee7e(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*b923bdee7e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63cb298
	bool *7ed08d336d(); // Function Engine.SplineComponent.*7ed08d336d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63ce494
	bool *17cdd5e7dd(); // Function Engine.SplineComponent.*17cdd5e7dd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c5bec
	void *6b603f80ab(struct FVector WorldLocation); // Function Engine.SplineComponent.*6b603f80ab // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c14dc
	struct FVector *0997d90b54(); // Function Engine.SplineComponent.*0997d90b54 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c8bd8
	int32 *5387c29b2a(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*5387c29b2a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63c34a8
};

// Class Paper2D.*4d58583a43
// Size: 0x98 (Inherited: 0x28)
struct U*4d58583a43 : UObject {
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
	int32 *d309651bcc; // 0x64(0x04)
	int32 *4aed544ca7; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct F*a51a01c50a> *c81f2a9882; // 0x70(0x10)
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
	float *65c1e620ea; // 0x38(0x04)
	float *9b0d4f3d14; // 0x3c(0x04)
	float *30e82a2432; // 0x40(0x04)
	float SeparationPerLayer; // 0x44(0x04)
	struct UPaperTileSet* *c153af3809; // 0x48(0x20)
	struct UMaterialInterface* Material; // 0x68(0x08)
	struct TArray<struct U*4d58583a43*> TileLayers; // 0x70(0x10)
	float CollisionThickness; // 0x80(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x84(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	int32 HexSideLength; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UBodySetup* BodySetup; // 0x90(0x08)
	int32 *7f1006c4f6; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
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
	struct TArray<struct U*4d58583a43*> TileLayers; // 0xb20(0x10)
	struct FLinearColor *88580d2a33; // 0xb30(0x10)
	int32 *a192dd1207; // 0xb40(0x04)
	bool *a5be54ddff; // 0xb44(0x01)
	char pad_B45[0x3]; // 0xb45(0x03)
	struct UPaperTileMap* TileMap; // 0xb48(0x08)

	void *8cc8c66b48(); // Function Paper2D.PaperTileMapComponent.*8cc8c66b48 // Final|Native|Public|BlueprintCallable // @ game+0x65922c8
	void *1520c20ec7(float Thickness); // Function Paper2D.PaperTileMapComponent.*1520c20ec7 // Final|Native|Public|BlueprintCallable // @ game+0x659404c
	float *5b103d117d(int32 Layer, bool bOverrideThickness); // Function Paper2D.PaperTileMapComponent.*5b103d117d // Final|Native|Public|BlueprintCallable // @ game+0x6594154
	void *e6f009610e(); // Function Paper2D.PaperTileMapComponent.*e6f009610e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6593410
	void *341f716e54(int32 TileY, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.*341f716e54 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65930f0
	void *b71d16b417(); // Function Paper2D.PaperTileMapComponent.*b71d16b417 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6594d08
	bool *dec7c879cd(); // Function Paper2D.PaperTileMapComponent.*dec7c879cd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6593280
	void *1a967930fa(); // Function Paper2D.PaperTileMapComponent.*1a967930fa // Final|Native|Public|BlueprintCallable // @ game+0x6593c4c
	int32 *e2659a1ad7(int32 TileX); // Function Paper2D.PaperTileMapComponent.*e2659a1ad7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x659342c
	struct FLinearColor *aa797d7fdf(); // Function Paper2D.PaperTileMapComponent.*aa797d7fdf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65943d8
	void *23c8e4af62(int32 Y); // Function Paper2D.PaperTileMapComponent.*23c8e4af62 // Final|Native|Public|BlueprintCallable // @ game+0x6594b3c
	void *0d5028284a(); // Function Paper2D.PaperTileMapComponent.*0d5028284a // Final|Native|Public|BlueprintCallable // @ game+0x6593e04
	int32 CreateNewTileMap(float PixelsPerUnrealUnit); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // Final|Native|Public|BlueprintCallable // @ game+0x65925cc
	void *0ceed5fa6a(); // Function Paper2D.PaperTileMapComponent.*0ceed5fa6a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6592afc
	void *28f3d9ed76(); // Function Paper2D.PaperTileMapComponent.*28f3d9ed76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6593d50
	int32 *e344d50a43(); // Function Paper2D.PaperTileMapComponent.*e344d50a43 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6592f9c
	void *94f14e7e15(); // Function Paper2D.PaperTileMapComponent.*94f14e7e15 // Native|Public|BlueprintCallable // @ game+0x5e48cd0
	int32 *b5c5881e0c(); // Function Paper2D.PaperTileMapComponent.*b5c5881e0c // Final|Native|Public|BlueprintCallable // @ game+0x6593ebc
	int32 *50af5e9519(); // Function Paper2D.PaperTileMapComponent.*50af5e9519 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6592bb4
};

// Class Paper2D.PaperTileSet
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x28(0x08)
	struct UTexture2D* TileSheet; // 0x30(0x08)
	struct F*1b3579c3f8 BorderMargin; // 0x38(0x10)
	struct FIntPoint PerTileSpacing; // 0x48(0x08)
	struct FIntPoint DrawingOffset; // 0x50(0x08)
	int32 *a6c66f2556; // 0x58(0x04)
	int32 *3089ee6ce0; // 0x5c(0x04)
	int32 *d309651bcc; // 0x60(0x04)
	int32 *4aed544ca7; // 0x64(0x04)
	struct TArray<struct F*08b3c71ebb> PerTileData; // 0x68(0x10)
	struct TArray<struct F*adc681947c> Terrains; // 0x78(0x10)
	int32 TileWidth; // 0x88(0x04)
	int32 TileHeight; // 0x8c(0x04)
	int32 Margin; // 0x90(0x04)
	int32 Spacing; // 0x94(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {
};

