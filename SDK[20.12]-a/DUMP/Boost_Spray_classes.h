// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x43c (Inherited: 0x3f8)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*a6c93df757 UberGraphFrame; // 0x3f8(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x400(0x08)
	struct U*210a354f74* TslFPPShadowSupport; // 0x408(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x410(0x08)
	struct UAnimSequence* Animation; // 0x418(0x08)
	float Delay; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct F*2ef3a887d0 TimerHandle; // 0x428(0x08)
	struct FVector LocalBaseVelocity; // 0x430(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x3b43ac
	void ReceiveTick(); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_Boost_Spray(); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x3b43ac
};

