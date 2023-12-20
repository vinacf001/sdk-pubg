// BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C
// Size: 0x430 (Inherited: 0x3e8)
struct ABP_ActiveRagdollActor_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3e8(0x08)
	struct UBillboardComponent* Billboard; // 0x3f0(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x3f8(0x08)
	struct UArrowComponent* Arrow; // 0x400(0x08)
	struct UCapsuleComponent* Capsule; // 0x408(0x08)
	struct USceneComponent* Scene; // 0x410(0x08)
	struct FVector ServerPosition; // 0x418(0x0c)
	bool ClientInitialized; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct APlayerPawn_v2_C* ParentRef; // 0x428(0x08)

	void SetServerPos(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void InitClient(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void InitServer(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_BP_ActiveRagdollActor(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor // HasDefaults // @ game+0x3b43ac
};

