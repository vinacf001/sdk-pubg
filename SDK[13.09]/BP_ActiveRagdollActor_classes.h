// BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C
// Size: 0x440 (Inherited: 0x3f8)
struct ABP_ActiveRagdollActor_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f8(0x08)
	struct UBillboardComponent* Billboard; // 0x400(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x408(0x08)
	struct UArrowComponent* Arrow; // 0x410(0x08)
	struct UCapsuleComponent* Capsule; // 0x418(0x08)
	struct USceneComponent* Scene; // 0x420(0x08)
	struct FVector ServerPosition; // 0x428(0x0c)
	bool ClientInitialized; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct APlayerPawn_v2_C* ParentRef; // 0x438(0x08)

	void SetServerPos(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos // None // @ game+0x26a108
	void InitClient(struct FVector InVelocity, struct FString CallFunc__edc080a44e_ReturnValue); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient // None // @ game+0x26a108
	void InitServer(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer // None // @ game+0x26a108
	void UserConstructionScript(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay // None // @ game+0x26a108
	void ReceiveTick(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick // None // @ game+0x26a108
	struct FVector ExecuteUbergraph_BP_ActiveRagdollActor(int32 EntryPoint, bool CallFunc__b5c3a53167_ReturnValue2, struct FVector CallFunc_Normal_ReturnValue, float CallFunc__247a76ab00_ReturnValue); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor // None // @ game+0x26a108
};

