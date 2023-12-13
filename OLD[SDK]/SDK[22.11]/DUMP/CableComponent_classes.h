// Class CableComponent.CableActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3e8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb30 (Inherited: 0xa90)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xa90(0x01)
	bool bAttachEnd; // 0xa91(0x01)
	bool bUseLocalSpace; // 0xa92(0x01)
	char pad_A93[0x5]; // 0xa93(0x05)
	struct F*689ecced4f *76b12c74c5; // 0xa98(0x18)
	struct FName *e75771fc47; // 0xab0(0x08)
	struct FName *c9507ea090; // 0xab8(0x08)
	struct FVector EndLocation; // 0xac0(0x0c)
	float CableLength; // 0xacc(0x04)
	int32 NumSegments; // 0xad0(0x04)
	float SubstepTime; // 0xad4(0x04)
	int32 SolverIterations; // 0xad8(0x04)
	bool bEnableStiffness; // 0xadc(0x01)
	bool bUseSubstepping; // 0xadd(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xade(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xadf(0x01)
	bool bEnableCollision; // 0xae0(0x01)
	char pad_AE1[0x3]; // 0xae1(0x03)
	float CollisionFriction; // 0xae4(0x04)
	float LinearDrag; // 0xae8(0x04)
	struct FVector CableForce; // 0xaec(0x0c)
	struct TArray<struct F*f0f77a160b> CustomSocketList; // 0xaf8(0x10)
	float CableGravityScale; // 0xb08(0x04)
	float CableWidth; // 0xb0c(0x04)
	float ExtendBounds; // 0xb10(0x04)
	int32 NumSides; // 0xb14(0x04)
	float TileMaterial; // 0xb18(0x04)
	char pad_B1C[0x14]; // 0xb1c(0x14)

	void *75c87e18dd(); // Function CableComponent.CableComponent.*75c87e18dd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680855c
	void *f56d7f3e59(); // Function CableComponent.CableComponent.*f56d7f3e59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6808544
	void *4ccd85487b(); // Function CableComponent.CableComponent.*4ccd85487b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6808594
	struct AActor* *d5abf623c9(struct FName ComponentProperty); // Function CableComponent.CableComponent.*d5abf623c9 // Final|Native|Public|BlueprintCallable // @ game+0x680865c
};

