// BlueprintGeneratedClass Powerup_Base.Powerup_Base_C
// Size: 0x440 (Inherited: 0x3f8)
struct APowerup_Base_C : ATslPhysicsBody {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x3f8(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x400(0x08)
	struct U*101e19a29a* TslFPPShadowSupport; // 0x408(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x410(0x08)
	struct UAnimSequence* Animation; // 0x418(0x08)
	float Delay; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct F*b2f5f3e08e TimerHandle; // 0x428(0x08)
	struct FVector LocalBaseVelocity; // 0x430(0x0c)
	float PlayRateScale; // 0x43c(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x32e590
	struct UPrimitiveComponent* BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct FVector NormalImpulse); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x32e590
	void PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x32e590
	struct ATslCharacter* ExecuteUbergraph_Powerup_Base(struct AActor* _516b964bc3_OtherActor, struct UPrimitiveComponent* _516b964bc3_OtherComp, struct FHitResult _516b964bc3_Hit, struct USceneComponent* CallFunc__0f883d6ef4_ReturnValue, float CallFunc__aa1f1a3bef_ReturnValue); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // HasDefaults // @ game+0x32e590
};

