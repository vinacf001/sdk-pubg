// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x430 (Inherited: 0x408)
struct ABP_BulletCamActor_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x408(0x08)
	struct UCameraComponent* Camera; // 0x410(0x08)
	struct USpringArmComponent* SpringArm; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x428(0x08)

	struct APlayerController* Init(); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	bool ExecuteUbergraph_BP_BulletCamActor(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // HasDefaults // @ game+0x22ddc4
};

