// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x454 (Inherited: 0x410)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*abc8f374e0 UberGraphFrame; // 0x410(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x418(0x08)
	struct U*43a9d0bed0* TslFPPShadowSupport; // 0x420(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x428(0x08)
	struct UAnimSequence* Animation; // 0x430(0x08)
	float Delay; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct F*da672abddc TimerHandle; // 0x440(0x08)
	struct FVector LocalBaseVelocity; // 0x448(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	struct FHitResult UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x273e04
	float ReceiveTick(); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x273e04
	bool ExecuteUbergraph_Boost_Spray(); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x273e04
};

