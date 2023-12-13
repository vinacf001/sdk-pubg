// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x44c (Inherited: 0x408)
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*a6c93df757 UberGraphFrame; // 0x408(0x08)
	struct USphereComponent* SmallRadiusSphere; // 0x410(0x08)
	struct U*210a354f74* TslFPPShadowSupport; // 0x418(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x420(0x08)
	struct UAnimSequence* Animation; // 0x428(0x08)
	float Delay; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct F*2ef3a887d0 TimerHandle; // 0x438(0x08)
	struct FVector LocalBaseVelocity; // 0x440(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void ReceiveTick(float DeltaSeconds); // Function Boost_Spray.Boost_Spray_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool ExecuteUbergraph_Boost_Spray(int32 EntryPoint, float K2Node_Event_DeltaSeconds); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x370fbc
};

