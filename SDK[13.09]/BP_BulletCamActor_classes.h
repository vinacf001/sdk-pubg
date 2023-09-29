// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x420 (Inherited: 0x3f8)
struct ABP_BulletCamActor_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f8(0x08)
	struct UCameraComponent* Camera; // 0x400(0x08)
	struct USpringArmComponent* SpringArm; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x418(0x08)

	void Init(); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init // None // @ game+0x26a108
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick // None // @ game+0x26a108
	bool ExecuteUbergraph_BP_BulletCamActor(float K2Node_Event_DeltaSeconds, struct FRotator CallFunc__fc109c2499_ReturnValue, struct FVector CallFunc__09e1442c0b_ReturnValue); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // None // @ game+0x26a108
};

