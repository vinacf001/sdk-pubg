// BlueprintGeneratedClass TslParticle_Drone_Repair.TslParticle_Drone_Repair_C
// Size: 0x500 (Inherited: 0x500)
struct ATslParticle_Drone_Repair_C : ATslParticle {
	bool bAutoDestroyOnParticleFinish; // 0x450(0x01)
	bool bAutoPlaySound; // 0x451(0x01)
	bool bWaitForAudioToFinish; // 0x453(0x01)
	struct TArray<struct FParticleParameter> DefaultParameters; // 0x458(0x10)
	enum class EAttachParent AttachParentType; // 0x468(0x01)
	struct FName AttachSocketName; // 0x470(0x08)
	enum class EAttachmentRule AttachLocationRule; // 0x478(0x01)
	enum class EAttachmentRule AttachRotationRule; // 0x479(0x01)
	enum class EAttachmentRule AttachScaleRule; // 0x47a(0x01)
	bool *b4ba070c51; // 0x47b(0x01)
	struct TMap<struct FName, struct FVector> *a7f4a9d12b; // 0x480(0x50)
	enum class EColorBlindType *705e6072b5; // 0x4d0(0x01)
	struct UParticleSystemComponent* ParticleSystem; // 0x4d8(0x08)
	struct UAkComponent* AkSound; // 0x4e0(0x08)

	void *9b2ab018cd(); // Function TslGame.TslParticle.*9b2ab018cd // None // @ game+0x560a658
	void OnParticleFinish(); // Function TslGame.TslParticle.OnParticleFinish // None // @ game+0x7b11c8
	struct FName OnParticleCollide(); // Function TslGame.TslParticle.OnParticleCollide // None // @ game+0x56166ac
	void *3a8b1d6845(struct FName Name); // Function TslGame.TslParticle.*3a8b1d6845 // None // @ game+0x560de10
	struct FVector *2edf3d6883(); // Function TslGame.TslParticle.*2edf3d6883 // None // @ game+0x562a4c8
	struct FVector *c5ff912ed5(struct FVector TraceRay); // Function TslGame.TslParticle.*c5ff912ed5 // None // @ game+0x560df20
	void *18993a3a08(struct FName Name); // Function TslGame.TslParticle.*18993a3a08 // None // @ game+0x560dd20
	void OnParameterUpdated(); // Function TslGame.TslParticle.OnParameterUpdated // None // @ game+0x26a108
	float *02a3c3a0dd(); // Function TslGame.TslParticle.*02a3c3a0dd // None // @ game+0x63f8c8
	void *1ae70a8351(int32 emitterIndex); // Function TslGame.TslParticle.*1ae70a8351 // None // @ game+0x560af70
	void *39759d04d0(bool OutbIsInWater); // Function TslGame.TslParticle.*39759d04d0 // None // @ game+0x560f530
	void *fcf9565906(); // Function TslGame.TslParticle.*fcf9565906 // None // @ game+0x560c844
	void *235a0d3210(); // Function TslGame.TslParticle.*235a0d3210 // None // @ game+0x5600774
};

