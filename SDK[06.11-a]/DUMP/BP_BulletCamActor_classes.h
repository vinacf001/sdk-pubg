// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x420 (Inherited: 0x3f8)
struct ABP_BulletCamActor_C : AActor {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
	struct UCameraComponent* Camera; // 0x400(0x08)
	struct USpringArmComponent* SpringArm; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x418(0x08)

	struct APlayerController* Init(); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	float ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct APlayerController* ExecuteUbergraph_BP_BulletCamActor(struct FRotator CallFunc__5bcb481f5e_ReturnValue, struct AActor* CallFunc__3dcfe68cdd_ReturnValue, struct FVector CallFunc__b2d1829b71_ReturnValue, bool CallFunc__b1225afff9_ReturnValue, bool CallFunc__05ed8812ea_ReturnValue); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // HasDefaults // @ game+0x370fbc
};

