// BlueprintGeneratedClass BP_QOL_Marker.BP_QOL_Marker_C
// Size: 0x454 (Inherited: 0x3f8)
struct ABP_QOL_Marker_C : AActor {
	struct UParticleSystemComponent* ParticleSystem; // 0x3f8(0x08)
	struct UStaticMeshComponent* Me_Arrow; // 0x400(0x08)
	struct USceneComponent* Scene; // 0x408(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	float ArrowScale; // 0x418(0x04)
	struct FLinearColor UP_color; // 0x41c(0x10)
	struct FLinearColor DownColor; // 0x42c(0x10)
	struct FLinearColor BG_Color; // 0x43c(0x10)
	float BG_Spawn; // 0x44c(0x04)
	float Turn_Speed; // 0x450(0x04)

	struct TArray<struct FParticleSysParam> UserConstructionScript(); // Function BP_QOL_Marker.BP_QOL_Marker_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x2ad9d8
};

