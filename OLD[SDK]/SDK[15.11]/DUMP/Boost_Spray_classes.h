// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x44c (Inherited: 0x408)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x408(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x410(0x08)
	struct U*101e19a29a* TslFPPShadowSupport; // 0x418(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x420(0x08)
	struct UAnimSequence* Animation; // 0x428(0x08)
	float Delay; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct F*b2f5f3e08e TimerHandle; // 0x438(0x08)
	struct FVector LocalBaseVelocity; // 0x440(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x21d2c4
	void ReceiveTick(); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_Boost_Spray(); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x21d2c4
};

