// BlueprintGeneratedClass BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C
// Size: 0x498 (Inherited: 0x3f8)
struct ABP_Sky_Sphere_Desert_07_C : AActor {
	struct UStaticMeshComponent* Sky Sphere mesh; // 0x3f8(0x08)
	struct USceneComponent* Base; // 0x400(0x08)
	struct UMaterialInstanceDynamic* Sky material; // 0x408(0x08)
	bool Refresh material; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct ADirectionalLight* Directional light actor; // 0x418(0x08)
	bool Colors determined by sun position; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float Sun height; // 0x424(0x04)
	float Sun brightness; // 0x428(0x04)
	float Horizon falloff; // 0x42c(0x04)
	struct FLinearColor Zenith color; // 0x430(0x10)
	struct FLinearColor Horizon color; // 0x440(0x10)
	struct FLinearColor Cloud color; // 0x450(0x10)
	struct FLinearColor Overall color; // 0x460(0x10)
	float Cloud speed; // 0x470(0x04)
	float Cloud opacity; // 0x474(0x04)
	float Stars brightness; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct U*594e4d7ca9* Horizon color curve; // 0x480(0x08)
	struct U*594e4d7ca9* Zenith color curve; // 0x488(0x08)
	struct U*594e4d7ca9* Cloud color curve; // 0x490(0x08)

	struct FLinearColor UpdateSunDirection(); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UpdateSunDirection // Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
	struct FLinearColor UserConstructionScript(); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
};
