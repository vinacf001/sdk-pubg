// BlueprintGeneratedClass Powerup_Bandage.Powerup_Bandage_C
// Size: 0x448 (Inherited: 0x448)
struct APowerup_Bandage_C : APowerup_Base_C {
	struct F*a6c93df757 UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x408(0x08)
	struct U*210a354f74* TslFPPShadowSupport; // 0x410(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x418(0x08)
	struct UAnimSequence* Animation; // 0x420(0x08)
	float Delay; // 0x428(0x04)
	struct F*2ef3a887d0 TimerHandle; // 0x430(0x08)
	struct FVector LocalBaseVelocity; // 0x438(0x0c)
	float PlayRateScale; // 0x444(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct FHitResult BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // HasOutParms|BlueprintEvent // @ game+0x20a5d0
	struct ATslCharacter* PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	struct ATslCharacter* ExecuteUbergraph_Powerup_Base(bool K2Node_DynamicCast_bSuccess, struct UTslCharacterMovement* CallFunc__62cd8daba9_ReturnValue, struct FVector CallFunc__acefb24eae_ReturnValue, struct FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue, struct FVector CallFunc__1429d76ba8_ReturnValue, struct ATslCharacter* K2Node_CustomEvent_Char_Ref, float CallFunc__4b739b8a26_ReturnValue, float CallFunc__ace9454687_ReturnValue, float CallFunc__9e9f800a8e_ReturnValue, bool CallFunc_IsValid_ReturnValue, DelegateProperty _d8b1f23a78_OutputDelegate, struct F*2ef3a887d0 CallFunc__324576f467_ReturnValue); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // HasDefaults // @ game+0x20a5d0
};

