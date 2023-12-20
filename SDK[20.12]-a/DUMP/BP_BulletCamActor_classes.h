// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x410 (Inherited: 0x3e8)
struct ABP_BulletCamActor_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3e8(0x08)
	struct UCameraComponent* Camera; // 0x3f0(0x08)
	struct USpringArmComponent* SpringArm; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x408(0x08)

	void Init(); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_BP_BulletCamActor(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // HasDefaults // @ game+0x3b43ac
};

