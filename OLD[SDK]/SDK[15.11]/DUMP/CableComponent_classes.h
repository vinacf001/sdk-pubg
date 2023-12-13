// Class CableComponent.CableActor
// Size: 0x400 (Inherited: 0x3f8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb40 (Inherited: 0xaa0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xaa0(0x01)
	bool bAttachEnd; // 0xaa1(0x01)
	bool bUseLocalSpace; // 0xaa2(0x01)
	char pad_AA3[0x5]; // 0xaa3(0x05)
	struct F*689ecced4f *76b12c74c5; // 0xaa8(0x18)
	struct FName *e75771fc47; // 0xac0(0x08)
	struct FName *c9507ea090; // 0xac8(0x08)
	struct FVector EndLocation; // 0xad0(0x0c)
	float CableLength; // 0xadc(0x04)
	int32 NumSegments; // 0xae0(0x04)
	float SubstepTime; // 0xae4(0x04)
	int32 SolverIterations; // 0xae8(0x04)
	bool bEnableStiffness; // 0xaec(0x01)
	bool bUseSubstepping; // 0xaed(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xaee(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xaef(0x01)
	bool bEnableCollision; // 0xaf0(0x01)
	char pad_AF1[0x3]; // 0xaf1(0x03)
	float CollisionFriction; // 0xaf4(0x04)
	float LinearDrag; // 0xaf8(0x04)
	struct FVector CableForce; // 0xafc(0x0c)
	struct TArray<struct F*f0f77a160b> CustomSocketList; // 0xb08(0x10)
	float CableGravityScale; // 0xb18(0x04)
	float CableWidth; // 0xb1c(0x04)
	float ExtendBounds; // 0xb20(0x04)
	int32 NumSides; // 0xb24(0x04)
	float TileMaterial; // 0xb28(0x04)
	char pad_B2C[0x14]; // 0xb2c(0x14)

	void *75c87e18dd(); // Function CableComponent.CableComponent.*75c87e18dd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a2bbf0
	void *f56d7f3e59(); // Function CableComponent.CableComponent.*f56d7f3e59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a2bbd8
	void *4ccd85487b(); // Function CableComponent.CableComponent.*4ccd85487b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6a2bc28
	void *d5abf623c9(); // Function CableComponent.CableComponent.*d5abf623c9 // Final|Native|Public|BlueprintCallable // @ game+0x6a2bcf0
};

