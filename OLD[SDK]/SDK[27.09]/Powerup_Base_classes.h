// BlueprintGeneratedClass Powerup_Base.Powerup_Base_C
// Size: 0x460 (Inherited: 0x418)
struct APowerup_Base_C : ATslPhysicsBody {
	struct F*73a77c28fa UberGraphFrame; // 0x418(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x420(0x08)
	struct U*499a916cac* TslFPPShadowSupport; // 0x428(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x430(0x08)
	struct UAnimSequence* Animation; // 0x438(0x08)
	float Delay; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct F*9c84e0ea54 TimerHandle; // 0x448(0x08)
	struct FVector LocalBaseVelocity; // 0x450(0x0c)
	float PlayRateScale; // 0x45c(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x22ddc4
	struct FHitResult BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x22ddc4
	struct ATslCharacter* PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	struct F*9c84e0ea54 ExecuteUbergraph_Powerup_Base(); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // HasDefaults // @ game+0x22ddc4
};

