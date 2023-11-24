// BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C
// Size: 0x448 (Inherited: 0x400)
struct ABP_ActiveRagdollActor_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x400(0x08)
	struct UBillboardComponent* Billboard; // 0x408(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x410(0x08)
	struct UArrowComponent* Arrow; // 0x418(0x08)
	struct UCapsuleComponent* Capsule; // 0x420(0x08)
	struct USceneComponent* Scene; // 0x428(0x08)
	struct FVector ServerPosition; // 0x430(0x0c)
	bool ClientInitialized; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct APlayerPawn_v2_C* ParentRef; // 0x440(0x08)

	void SetServerPos(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FVector InitClient(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FVector InitServer(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void UserConstructionScript(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	float ReceiveTick(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x273e04
	struct FVector ExecuteUbergraph_BP_ActiveRagdollActor(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor // HasDefaults // @ game+0x273e04
};

