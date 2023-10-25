// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x420 (Inherited: 0x3f8)
struct ABP_BulletCamActor_C : AActor {
	struct F*abc8f374e0 UberGraphFrame; // 0x3f8(0x08)
	struct UCameraComponent* Camera; // 0x400(0x08)
	struct USpringArmComponent* SpringArm; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x418(0x08)

	struct APlayerController* Init(); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	float ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	bool ExecuteUbergraph_BP_BulletCamActor(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // HasDefaults // @ game+0x2ad9d8
};

