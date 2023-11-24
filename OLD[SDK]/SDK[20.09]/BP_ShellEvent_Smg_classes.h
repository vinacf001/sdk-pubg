// BlueprintGeneratedClass BP_ShellEvent_Smg.BP_ShellEvent_SMG_C
// Size: 0x88 (Inherited: 0x88)
struct UBP_ShellEvent_SMG_C : U*9ca7b4153a {
	bool bCheckSurface; // 0x28(0x01)
	struct TMap<enum class EPhysicalSurface, struct UAkAudioEvent*> AkEventSurfaceMap; // 0x30(0x50)
	struct UAkAudioEvent* DefaultEvent; // 0x80(0x08)

	void *066fa08cc3(struct UObject* InObject, struct FRotator InRotation); // Function TslGame.*9ca7b4153a.*066fa08cc3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x56d44f0
};

