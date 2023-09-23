// BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C
// Size: 0x438 (Inherited: 0x3f0)
struct ABP_ActiveRagdollActor_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f0(0x08)
	struct UBillboardComponent* Billboard; // 0x3f8(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x400(0x08)
	struct UArrowComponent* Arrow; // 0x408(0x08)
	struct UCapsuleComponent* Capsule; // 0x410(0x08)
	struct USceneComponent* Scene; // 0x418(0x08)
	struct FVector ServerPosition; // 0x420(0x0c)
	bool ClientInitialized; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct APlayerPawn_v2_C* ParentRef; // 0x430(0x08)

	void SetServerPos(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	struct USkeletalMeshComponent* InitClient(struct FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc__b5c3a53167_ReturnValue); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void InitServer(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FString ExecuteUbergraph_BP_ActiveRagdollActor(struct FVector CallFunc__e12c397094_ReturnValue, struct FVector CallFunc__72ed3d5557_ReturnValue, float CallFunc__0fd03d50ab_ReturnValue, float CallFunc__ae60dcbe74_ReturnValue); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor // HasDefaults // @ game+0x1e037c
};

