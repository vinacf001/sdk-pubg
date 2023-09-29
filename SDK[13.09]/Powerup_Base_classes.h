// BlueprintGeneratedClass Powerup_Base.Powerup_Base_C
// Size: 0x450 (Inherited: 0x408)
struct APowerup_Base_C : ATslPhysicsBody {
	struct F*73a77c28fa UberGraphFrame; // 0x408(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x410(0x08)
	struct U*499a916cac* TslFPPShadowSupport; // 0x418(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x420(0x08)
	struct UAnimSequence* Animation; // 0x428(0x08)
	float Delay; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct F*9c84e0ea54 TimerHandle; // 0x438(0x08)
	struct FVector LocalBaseVelocity; // 0x440(0x0c)
	float PlayRateScale; // 0x44c(0x04)

	void CleanupTimers(); // Function Powerup_Base.Powerup_Base_C.CleanupTimers // None // @ game+0x26a108
	void UserConstructionScript(); // Function Powerup_Base.Powerup_Base_C.UserConstructionScript // None // @ game+0x26a108
	void ReceiveDestroyed(); // Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed // None // @ game+0x26a108
	struct UPrimitiveComponent* BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct FVector NormalImpulse); // Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // None // @ game+0x26a108
	void PlayAnim(); // Function Powerup_Base.Powerup_Base_C.PlayAnim // None // @ game+0x26a108
	void Drop(); // Function Powerup_Base.Powerup_Base_C.Drop // None // @ game+0x26a108
	void ReceiveBeginPlay(); // Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay // None // @ game+0x26a108
	struct FVector ExecuteUbergraph_Powerup_Base(struct UPrimitiveComponent* _05982889a1_HitComponent, struct FVector _05982889a1_NormalImpulse, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc__121df85c09_ReturnValue, float CallFunc__917c13b33f_ReturnValue, DelegateProperty _37b0074df2_OutputDelegate); // Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base // None // @ game+0x26a108
};

