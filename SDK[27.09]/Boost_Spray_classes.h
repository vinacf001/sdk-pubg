// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x45c (Inherited: 0x418)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*73a77c28fa UberGraphFrame; // 0x418(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x420(0x08)
	struct U*499a916cac* TslFPPShadowSupport; // 0x428(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x430(0x08)
	struct UAnimSequence* Animation; // 0x438(0x08)
	float Delay; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct F*9c84e0ea54 TimerHandle; // 0x448(0x08)
	struct FVector LocalBaseVelocity; // 0x450(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FHitResult UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22ddc4
	float ReceiveTick(); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22ddc4
	bool ExecuteUbergraph_Boost_Spray(); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x22ddc4
};

