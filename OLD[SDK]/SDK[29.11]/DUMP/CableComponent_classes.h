// Class CableComponent.CableActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f0(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb50 (Inherited: 0xab0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xab0(0x01)
	bool bAttachEnd; // 0xab1(0x01)
	bool bUseLocalSpace; // 0xab2(0x01)
	char pad_AB3[0x5]; // 0xab3(0x05)
	struct F*689ecced4f *76b12c74c5; // 0xab8(0x18)
	struct FName *e75771fc47; // 0xad0(0x08)
	struct FName *c9507ea090; // 0xad8(0x08)
	struct FVector EndLocation; // 0xae0(0x0c)
	float CableLength; // 0xaec(0x04)
	int32 NumSegments; // 0xaf0(0x04)
	float SubstepTime; // 0xaf4(0x04)
	int32 SolverIterations; // 0xaf8(0x04)
	bool bEnableStiffness; // 0xafc(0x01)
	bool bUseSubstepping; // 0xafd(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xafe(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xaff(0x01)
	bool bEnableCollision; // 0xb00(0x01)
	char pad_B01[0x3]; // 0xb01(0x03)
	float CollisionFriction; // 0xb04(0x04)
	float LinearDrag; // 0xb08(0x04)
	struct FVector CableForce; // 0xb0c(0x0c)
	struct TArray<struct F*f0f77a160b> CustomSocketList; // 0xb18(0x10)
	float CableGravityScale; // 0xb28(0x04)
	float CableWidth; // 0xb2c(0x04)
	float ExtendBounds; // 0xb30(0x04)
	int32 NumSides; // 0xb34(0x04)
	float TileMaterial; // 0xb38(0x04)
	char pad_B3C[0x14]; // 0xb3c(0x14)

	struct USceneComponent* *75c87e18dd(); // Function CableComponent.CableComponent.*75c87e18dd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6808064
	struct AActor* *f56d7f3e59(); // Function CableComponent.CableComponent.*f56d7f3e59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x680804c
	struct TArray<struct FVector> *4ccd85487b(); // Function CableComponent.CableComponent.*4ccd85487b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x680809c
	struct FName *d5abf623c9(); // Function CableComponent.CableComponent.*d5abf623c9 // Final|Native|Public|BlueprintCallable // @ game+0x6808164
};

