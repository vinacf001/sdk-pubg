// BlueprintGeneratedClass BP_ShellEvent_DMR.BP_ShellEvent_DMR_C
// Size: 0x90 (Inherited: 0x90)
struct UBP_ShellEvent_DMR_C : U*2613e93dc1 {
	bool bCheckSurface; // 0x30(0x01)
	struct TMap<enum class EPhysicalSurface, struct UAkAudioEvent*> AkEventSurfaceMap; // 0x38(0x50)
	struct UAkAudioEvent* DefaultEvent; // 0x88(0x08)

	void *482022fc70(struct UObject* InObject, struct FVector InLocation, struct FRotator InRotation, struct UAkAudioEvent* in_pAkEvent, int32 ReturnValue); // Function TslGame.*2613e93dc1.*482022fc70 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x5ba0d40
};

