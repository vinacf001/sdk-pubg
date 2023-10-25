// BlueprintGeneratedClass Powerup_Base.Powerup_Base_C
// Size: 0x450 (Inherited: 0x408)
struct APowerup_Base_C : ATslPhysicsBody {
	struct F*abc8f374e0 UberGraphFrame; // 0x408(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x410(0x08)
	struct U*43a9d0bed0* TslFPPShadowSupport; // 0x418(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x420(0x08)
	struct UAnimSequence* Animation; // 0x428(0x08)
	float Delay; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct F*da672abddc TimerHandle; // 0x438(0x08)
	struct FVector LocalBaseVelocity; // 0x440(0x0c)
	float PlayRateScale; // 0x44c(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x2ad9d8
	struct FHitResult BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x2ad9d8
	struct ATslCharacter* PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2ad9d8
	struct F*da672abddc ExecuteUbergraph_Powerup_Base(); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // HasDefaults // @ game+0x2ad9d8
};

