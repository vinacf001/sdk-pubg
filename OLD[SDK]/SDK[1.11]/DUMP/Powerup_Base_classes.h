// BlueprintGeneratedClass Powerup_Base.Powerup_Base_C
// Size: 0x440 (Inherited: 0x3f8)
struct APowerup_Base_C : ATslPhysicsBody {
	struct F*abc8f374e0 UberGraphFrame; // 0x3f8(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x400(0x08)
	struct U*43a9d0bed0* TslFPPShadowSupport; // 0x408(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x410(0x08)
	struct UAnimSequence* Animation; // 0x418(0x08)
	float Delay; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct F*da672abddc TimerHandle; // 0x428(0x08)
	struct FVector LocalBaseVelocity; // 0x430(0x0c)
	float PlayRateScale; // 0x43c(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FVector BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	DelegateProperty ExecuteUbergraph_Powerup_Base(struct FHitResult _9c8a0f6927_Hit, struct USceneComponent* CallFunc__21f58f1be6_ReturnValue, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, struct UTslCharacterMovement* CallFunc__e2ac0149c6_ReturnValue); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // HasDefaults // @ game+0x2cd4ac
};

