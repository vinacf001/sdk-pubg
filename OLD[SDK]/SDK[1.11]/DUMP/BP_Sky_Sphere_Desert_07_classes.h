// BlueprintGeneratedClass BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C
// Size: 0x488 (Inherited: 0x3e8)
struct ABP_Sky_Sphere_Desert_07_C : AActor {
	struct UStaticMeshComponent* Sky Sphere mesh; // 0x3e8(0x08)
	struct USceneComponent* Base; // 0x3f0(0x08)
	struct UMaterialInstanceDynamic* Sky material; // 0x3f8(0x08)
	bool Refresh material; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct ADirectionalLight* Directional light actor; // 0x408(0x08)
	bool Colors determined by sun position; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float Sun height; // 0x414(0x04)
	float Sun brightness; // 0x418(0x04)
	float Horizon falloff; // 0x41c(0x04)
	struct FLinearColor Zenith color; // 0x420(0x10)
	struct FLinearColor Horizon color; // 0x430(0x10)
	struct FLinearColor Cloud color; // 0x440(0x10)
	struct FLinearColor Overall color; // 0x450(0x10)
	float Cloud speed; // 0x460(0x04)
	float Cloud opacity; // 0x464(0x04)
	float Stars brightness; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct U*594e4d7ca9* Horizon color curve; // 0x470(0x08)
	struct U*594e4d7ca9* Zenith color curve; // 0x478(0x08)
	struct U*594e4d7ca9* Cloud color curve; // 0x480(0x08)

	struct FLinearColor UpdateSunDirection(struct FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Pitch, struct FLinearColor CallFunc__09b6f902bd_ReturnValue2); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UpdateSunDirection // Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
	struct FVector UserConstructionScript(struct FLinearColor CallFunc__09b6f902bd_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc__2e702cd268_ReturnValue, struct FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2cd4ac
};

