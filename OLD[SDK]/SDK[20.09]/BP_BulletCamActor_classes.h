// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x418 (Inherited: 0x3f0)
struct ABP_BulletCamActor_C : AActor {
	struct F*73a77c28fa UberGraphFrame; // 0x3f0(0x08)
	struct UCameraComponent* Camera; // 0x3f8(0x08)
	struct USpringArmComponent* SpringArm; // 0x400(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x408(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x410(0x08)

	void Init(struct ATslWeapon_Trajectory* NewParam); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_BP_BulletCamActor(int32 EntryPoint, struct APlayerController* CallFunc__ac2abd9ff0_ReturnValue, struct AActor* CallFunc__d35e8bc247_ReturnValue, bool CallFunc__b15361c852_ReturnValue); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // HasDefaults // @ game+0x1e037c
};

