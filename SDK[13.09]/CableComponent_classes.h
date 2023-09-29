// Class CableComponent.CableActor
// Size: 0x400 (Inherited: 0x3f8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb90 (Inherited: 0xaf0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xaf0(0x01)
	bool bAttachEnd; // 0xaf1(0x01)
	bool bUseLocalSpace; // 0xaf2(0x01)
	char pad_AF3[0x5]; // 0xaf3(0x05)
	struct F*9c3d74819a *6e71b33c23; // 0xaf8(0x18)
	struct FName *1efa6a8977; // 0xb10(0x08)
	struct FName *c1affd44a6; // 0xb18(0x08)
	struct FVector EndLocation; // 0xb20(0x0c)
	float CableLength; // 0xb2c(0x04)
	int32 NumSegments; // 0xb30(0x04)
	float SubstepTime; // 0xb34(0x04)
	int32 SolverIterations; // 0xb38(0x04)
	bool bEnableStiffness; // 0xb3c(0x01)
	bool bUseSubstepping; // 0xb3d(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xb3e(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xb3f(0x01)
	bool bEnableCollision; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	float CollisionFriction; // 0xb44(0x04)
	float LinearDrag; // 0xb48(0x04)
	struct FVector CableForce; // 0xb4c(0x0c)
	struct TArray<struct F*650e3d85d4> CustomSocketList; // 0xb58(0x10)
	float CableGravityScale; // 0xb68(0x04)
	float CableWidth; // 0xb6c(0x04)
	float ExtendBounds; // 0xb70(0x04)
	int32 NumSides; // 0xb74(0x04)
	float TileMaterial; // 0xb78(0x04)
	char pad_B7C[0x14]; // 0xb7c(0x14)

	void *9b4f891d4b(); // Function CableComponent.CableComponent.*9b4f891d4b // None // @ game+0x6684428
	void *b64a31c5dd(); // Function CableComponent.CableComponent.*b64a31c5dd // None // @ game+0x6684478
	struct FName *5f07df3aeb(); // Function CableComponent.CableComponent.*5f07df3aeb // None // @ game+0x6684540
	void *c59a3fc0a3(); // Function CableComponent.CableComponent.*c59a3fc0a3 // None // @ game+0x6684440
};

