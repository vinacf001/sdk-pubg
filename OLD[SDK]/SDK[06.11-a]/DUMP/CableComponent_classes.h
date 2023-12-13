// Class CableComponent.CableActor
// Size: 0x400 (Inherited: 0x3f8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb50 (Inherited: 0xab0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xab0(0x01)
	bool bAttachEnd; // 0xab1(0x01)
	bool bUseLocalSpace; // 0xab2(0x01)
	char pad_AB3[0x5]; // 0xab3(0x05)
	struct F*753532701a *4e9bec23f7; // 0xab8(0x18)
	struct FName *a05a60a1cd; // 0xad0(0x08)
	struct FName *b765f226a0; // 0xad8(0x08)
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
	struct TArray<struct F*d8ca8d9763> CustomSocketList; // 0xb18(0x10)
	float CableGravityScale; // 0xb28(0x04)
	float CableWidth; // 0xb2c(0x04)
	float ExtendBounds; // 0xb30(0x04)
	int32 NumSides; // 0xb34(0x04)
	float TileMaterial; // 0xb38(0x04)
	char pad_B3C[0x14]; // 0xb3c(0x14)

	void *964e40b0d6(struct USceneComponent* ReturnValue); // Function CableComponent.CableComponent.*964e40b0d6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ee94a8
	void *18d715e2a2(); // Function CableComponent.CableComponent.*18d715e2a2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6ee94e0
	struct AActor* *56bed28938(); // Function CableComponent.CableComponent.*56bed28938 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6ee9490
	struct FName *b78de2535f(); // Function CableComponent.CableComponent.*b78de2535f // Final|Native|Public|BlueprintCallable // @ game+0x6ee95a8
};

