// Class AudioMixer.*6bc7d6794d
// Size: 0xc0 (Inherited: 0x48)
struct U*6bc7d6794d : U*9d605b393c {
	char pad_48[0x50]; // 0x48(0x50)
	struct F*692eb87421 Settings; // 0x98(0x28)

	struct F*692eb87421 *7a752b6a05(); // Function AudioMixer.*6bc7d6794d.*7a752b6a05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a1180
};

// Class AudioMixer.*ebd52a2154
// Size: 0x30 (Inherited: 0x30)
struct U*ebd52a2154 : UBlueprintFunctionLibrary {

	int32 *799c819864(); // Function AudioMixer.*ebd52a2154.*799c819864 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a0f04
	struct U*9d605b393c* *071d7d2214(); // Function AudioMixer.*ebd52a2154.*071d7d2214 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a0a18
	struct U*9d605b393c* *f3f1e7ee6e(); // Function AudioMixer.*ebd52a2154.*f3f1e7ee6e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a0ddc
	struct UObject* *a8019898eb(); // Function AudioMixer.*ebd52a2154.*a8019898eb // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a0c0c
	struct F*6fabb3d16e *469f85568e(); // Function AudioMixer.*ebd52a2154.*469f85568e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a0af0
	int32 *63b1227c50(); // Function AudioMixer.*ebd52a2154.*63b1227c50 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a0cc0
	bool *9be96a11f3(); // Function AudioMixer.*ebd52a2154.*9be96a11f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67a101c
};

// Class AudioMixer.*27ef2e7df2
// Size: 0xd0 (Inherited: 0x48)
struct U*27ef2e7df2 : U*9d605b393c {
	char pad_48[0x58]; // 0x48(0x58)
	struct F*561b6a7228 Settings; // 0xa0(0x30)

	float *b9de5b5f7f(); // Function AudioMixer.*27ef2e7df2.*b9de5b5f7f // Final|Native|Public|BlueprintCallable // @ game+0x67a14a8
	struct F*561b6a7228 *7a752b6a05(); // Function AudioMixer.*27ef2e7df2.*7a752b6a05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a127c
};

// Class AudioMixer.*57545eb14f
// Size: 0x90 (Inherited: 0x48)
struct U*57545eb14f : U*9d605b393c {
	char pad_48[0x38]; // 0x48(0x38)
	struct F*693d255c9c Settings; // 0x80(0x10)

	struct F*693d255c9c *7a752b6a05(); // Function AudioMixer.*57545eb14f.*7a752b6a05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67a1388
};

// Class AudioMixer.*1dda914d34
// Size: 0x330 (Inherited: 0x310)
struct U*1dda914d34 : U*1c122710fb {
	char pad_310[0x20]; // 0x310(0x20)
};

// Class AudioMixer.*f4c0684a9a
// Size: 0x640 (Inherited: 0x480)
struct U*f4c0684a9a : USceneComponent {
	char *6ecc134ca8 : 1; // 0x478(0x01)
	char *0096e20ed8 : 1; // 0x478(0x01)
	char bAllowSpatialization : 1; // 0x478(0x01)
	char bOverrideAttenuation : 1; // 0x478(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x480(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x488(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x5b8(0x08)
	struct USoundClass* SoundClass; // 0x5c0(0x08)
	struct U*96c8a54059* SourceEffectChain; // 0x5c8(0x08)
	float DefaultMasterReverbSendAmount; // 0x5d0(0x04)
	char pad_5D4_4 : 4; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct USoundSubmix* SoundSubmix; // 0x5d8(0x08)
	struct TArray<struct F*f4d80fddcb> SoundSubmixSends; // 0x5e0(0x10)
	char pad_5F0[0x8]; // 0x5f0(0x08)
	struct U*1dda914d34* Synth; // 0x5f8(0x08)
	struct UAudioComponent* AudioComponent; // 0x600(0x08)
	char pad_608[0x38]; // 0x608(0x38)

	bool IsPlaying(); // Function AudioMixer.*f4c0684a9a.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67a0d98
	float *017d6601d2(); // Function AudioMixer.*f4c0684a9a.*017d6601d2 // Final|Native|Public|BlueprintCallable // @ game+0x67a1588
	void Stop(); // Function AudioMixer.*f4c0684a9a.Stop // Final|Native|Public|BlueprintCallable // @ game+0x67a1688
	void Start(); // Function AudioMixer.*f4c0684a9a.Start // Final|Native|Public|BlueprintCallable // @ game+0x67a1674
};

