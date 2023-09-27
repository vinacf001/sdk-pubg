// BlueprintGeneratedClass BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C
// Size: 0x4a8 (Inherited: 0x408)
struct ABP_Sky_Sphere_Desert_07_C : AActor {
	struct UStaticMeshComponent* Sky Sphere mesh; // 0x408(0x08)
	struct USceneComponent* Base; // 0x410(0x08)
	struct UMaterialInstanceDynamic* Sky material; // 0x418(0x08)
	bool Refresh material; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct ADirectionalLight* Directional light actor; // 0x428(0x08)
	bool Colors determined by sun position; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float Sun height; // 0x434(0x04)
	float Sun brightness; // 0x438(0x04)
	float Horizon falloff; // 0x43c(0x04)
	struct FLinearColor Zenith color; // 0x440(0x10)
	struct FLinearColor Horizon color; // 0x450(0x10)
	struct FLinearColor Cloud color; // 0x460(0x10)
	struct FLinearColor Overall Color; // 0x470(0x10)
	float Cloud speed; // 0x480(0x04)
	float Cloud opacity; // 0x484(0x04)
	float Stars brightness; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct U*1fa4fa0482* Horizon color curve; // 0x490(0x08)
	struct U*1fa4fa0482* Zenith color curve; // 0x498(0x08)
	struct U*1fa4fa0482* Cloud color curve; // 0x4a0(0x08)

	struct FLinearColor UpdateSunDirection(); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UpdateSunDirection // Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
	struct FLinearColor UserConstructionScript(); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x22ddc4
};

