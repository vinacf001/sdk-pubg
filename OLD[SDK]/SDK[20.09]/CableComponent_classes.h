// Class CableComponent.CableActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f0(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xba0 (Inherited: 0xb00)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xb00(0x01)
	bool bAttachEnd; // 0xb01(0x01)
	bool bUseLocalSpace; // 0xb02(0x01)
	char pad_B03[0x5]; // 0xb03(0x05)
	struct F*9c3d74819a *6e71b33c23; // 0xb08(0x18)
	struct FName *1efa6a8977; // 0xb20(0x08)
	struct FName *c1affd44a6; // 0xb28(0x08)
	struct FVector EndLocation; // 0xb30(0x0c)
	float CableLength; // 0xb3c(0x04)
	int32 NumSegments; // 0xb40(0x04)
	float SubstepTime; // 0xb44(0x04)
	int32 SolverIterations; // 0xb48(0x04)
	bool bEnableStiffness; // 0xb4c(0x01)
	bool bUseSubstepping; // 0xb4d(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xb4e(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xb4f(0x01)
	bool bEnableCollision; // 0xb50(0x01)
	char pad_B51[0x3]; // 0xb51(0x03)
	float CollisionFriction; // 0xb54(0x04)
	float LinearDrag; // 0xb58(0x04)
	struct FVector CableForce; // 0xb5c(0x0c)
	struct TArray<struct F*650e3d85d4> CustomSocketList; // 0xb68(0x10)
	float CableGravityScale; // 0xb78(0x04)
	float CableWidth; // 0xb7c(0x04)
	float ExtendBounds; // 0xb80(0x04)
	int32 NumSides; // 0xb84(0x04)
	float TileMaterial; // 0xb88(0x04)
	char pad_B8C[0x14]; // 0xb8c(0x14)

	void *9b4f891d4b(); // Function CableComponent.CableComponent.*9b4f891d4b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ac84c
	void *b64a31c5dd(); // Function CableComponent.CableComponent.*b64a31c5dd // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66ac89c
	struct FName *5f07df3aeb(); // Function CableComponent.CableComponent.*5f07df3aeb // Final|Native|Public|BlueprintCallable // @ game+0x66ac964
	void *c59a3fc0a3(); // Function CableComponent.CableComponent.*c59a3fc0a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ac864
};

