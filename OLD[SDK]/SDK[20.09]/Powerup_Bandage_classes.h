// BlueprintGeneratedClass Powerup_Bandage.Powerup_Bandage_C
// Size: 0x448 (Inherited: 0x448)
struct APowerup_Bandage_C : APowerup_Base_C {
	struct F*73a77c28fa UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x408(0x08)
	struct U*499a916cac* TslFPPShadowSupport; // 0x410(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x418(0x08)
	struct UAnimSequence* Animation; // 0x420(0x08)
	float Delay; // 0x428(0x04)
	struct F*9c84e0ea54 TimerHandle; // 0x430(0x08)
	struct FVector LocalBaseVelocity; // 0x438(0x0c)
	float PlayRateScale; // 0x444(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x1e037c
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct AActor* OtherActor); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x1e037c
	void PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x1e037c
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	bool ExecuteUbergraph_Powerup_Base(int32 EntryPoint, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, struct UTslCharacterMovement* CallFunc__f56d4a4652_ReturnValue, struct FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, struct ATslCharacter* K2Node_CustomEvent_Char_Ref); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // HasDefaults // @ game+0x1e037c
};

