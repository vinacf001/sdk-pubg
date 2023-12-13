// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x444 (Inherited: 0x400)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*a6c93df757 UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x408(0x08)
	struct U*210a354f74* TslFPPShadowSupport; // 0x410(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x418(0x08)
	struct UAnimSequence* Animation; // 0x420(0x08)
	float Delay; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct F*2ef3a887d0 TimerHandle; // 0x430(0x08)
	struct FVector LocalBaseVelocity; // 0x438(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void UserConstructionScript(struct FTransform CallFunc_MakeTransform_ReturnValue, struct FHitResult CallFunc_K2_AddLocalTransform_SweepHitResult); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	void ReceiveTick(float DeltaSeconds); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_Boost_Spray(int32 EntryPoint, float K2Node_Event_DeltaSeconds, struct USceneComponent* CallFunc__af76098df3_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct AActor* CallFunc__e22a09fc3d_ReturnValue, bool CallFunc_IsValid_ReturnValue2, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue3, struct U*3df79bdb45* CallFunc__ef5dbfed7f_ReturnValue, bool CallFunc_IsValid_ReturnValue4, bool CallFunc__2ed9c97cc9_ReturnValue); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x20a5d0
};

