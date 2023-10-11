// BlueprintGeneratedClass BP_QOL_Marker.BP_QOL_Marker_C
// Size: 0x45c (Inherited: 0x400)
struct ABP_QOL_Marker_C : AActor {
	struct UParticleSystemComponent* ParticleSystem; // 0x400(0x08)
	struct UStaticMeshComponent* Me_Arrow; // 0x408(0x08)
	struct USceneComponent* Scene; // 0x410(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x418(0x08)
	float ArrowScale; // 0x420(0x04)
	struct FLinearColor UP_color; // 0x424(0x10)
	struct FLinearColor DownColor; // 0x434(0x10)
	struct FLinearColor BG_Color; // 0x444(0x10)
	float BG_Spawn; // 0x454(0x04)
	float Turn_Speed; // 0x458(0x04)

	struct TArray<struct FParticleSysParam> UserConstructionScript(); // Function BP_QOL_Marker.BP_QOL_Marker_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x273e04
};

