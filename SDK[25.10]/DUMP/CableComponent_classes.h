// Class CableComponent.CableActor
// Size: 0x400 (Inherited: 0x3f8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xbb0 (Inherited: 0xb10)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xb10(0x01)
	bool bAttachEnd; // 0xb11(0x01)
	bool bUseLocalSpace; // 0xb12(0x01)
	char pad_B13[0x5]; // 0xb13(0x05)
	struct F*e6c2ea7bad *5322c3e86e; // 0xb18(0x18)
	struct FName *3167e96d80; // 0xb30(0x08)
	struct FName *30da14ab82; // 0xb38(0x08)
	struct FVector EndLocation; // 0xb40(0x0c)
	float CableLength; // 0xb4c(0x04)
	int32 NumSegments; // 0xb50(0x04)
	float SubstepTime; // 0xb54(0x04)
	int32 SolverIterations; // 0xb58(0x04)
	bool bEnableStiffness; // 0xb5c(0x01)
	bool bUseSubstepping; // 0xb5d(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xb5e(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xb5f(0x01)
	bool bEnableCollision; // 0xb60(0x01)
	char pad_B61[0x3]; // 0xb61(0x03)
	float CollisionFriction; // 0xb64(0x04)
	float LinearDrag; // 0xb68(0x04)
	struct FVector CableForce; // 0xb6c(0x0c)
	struct TArray<struct F*74dda64bfe> CustomSocketList; // 0xb78(0x10)
	float CableGravityScale; // 0xb88(0x04)
	float CableWidth; // 0xb8c(0x04)
	float ExtendBounds; // 0xb90(0x04)
	int32 NumSides; // 0xb94(0x04)
	float TileMaterial; // 0xb98(0x04)
	char pad_B9C[0x14]; // 0xb9c(0x14)

	struct AActor* *b9efb1a0e4(); // Function CableComponent.CableComponent.*b9efb1a0e4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6d1d220
	struct FName *2a029da51f(); // Function CableComponent.CableComponent.*2a029da51f // Final|Native|Public|BlueprintCallable // @ game+0x6d1d338
	struct USceneComponent* *8b674a10cf(); // Function CableComponent.CableComponent.*8b674a10cf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6d1d238
	struct TArray<struct FVector> *931cab8e25(); // Function CableComponent.CableComponent.*931cab8e25 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6d1d270
};

