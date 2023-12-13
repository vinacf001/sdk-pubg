// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x444 (Inherited: 0x400)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x400(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x408(0x08)
	struct U*101e19a29a* TslFPPShadowSupport; // 0x410(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x418(0x08)
	struct UAnimSequence* Animation; // 0x420(0x08)
	float Delay; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct F*b2f5f3e08e TimerHandle; // 0x430(0x08)
	struct FVector LocalBaseVelocity; // 0x438(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	struct FHitResult UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x1dcd78
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1dcd78
	float ReceiveTick(); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1dcd78
	bool ExecuteUbergraph_Boost_Spray(); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x1dcd78
};

