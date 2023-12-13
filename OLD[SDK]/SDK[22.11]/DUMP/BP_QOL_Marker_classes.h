// BlueprintGeneratedClass BP_QOL_Marker.BP_QOL_Marker_C
// Size: 0x444 (Inherited: 0x3e8)
struct ABP_QOL_Marker_C : AActor {
	struct UParticleSystemComponent* ParticleSystem; // 0x3e8(0x08)
	struct UStaticMeshComponent* Me_Arrow; // 0x3f0(0x08)
	struct USceneComponent* Scene; // 0x3f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x400(0x08)
	float ArrowScale; // 0x408(0x04)
	struct FLinearColor UP_color; // 0x40c(0x10)
	struct FLinearColor DownColor; // 0x41c(0x10)
	struct FLinearColor BG_Color; // 0x42c(0x10)
	float BG_Spawn; // 0x43c(0x04)
	float Turn_Speed; // 0x440(0x04)

	struct FParticleSysParam UserConstructionScript(struct FVector CallFunc_MakeVector_ReturnValue2, struct FColor CallFunc__225eea7d1d_ReturnValue, struct FVector CallFunc__952704bc11_ReturnValue); // Function BP_QOL_Marker.BP_QOL_Marker_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
};

