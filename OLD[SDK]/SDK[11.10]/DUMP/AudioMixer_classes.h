// Class AudioMixer.*f1b96e3e95
// Size: 0xc0 (Inherited: 0x48)
struct U*f1b96e3e95 : U*059f6ca67c {
	char pad_48[0x50]; // 0x48(0x50)
	struct F*a8e749b2bc Settings; // 0x98(0x28)

	struct F*a8e749b2bc *ff90040cb0(); // Function AudioMixer.*f1b96e3e95.*ff90040cb0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x675ceb0
};

// Class AudioMixer.*c0e48c9a77
// Size: 0x30 (Inherited: 0x30)
struct U*c0e48c9a77 : UBlueprintFunctionLibrary {

	struct F*3340ad61dc *cf5764ab40(); // Function AudioMixer.*c0e48c9a77.*cf5764ab40 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675c820
	struct U*059f6ca67c* *b1f44b2538(); // Function AudioMixer.*c0e48c9a77.*b1f44b2538 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675c748
	struct U*059f6ca67c* *382e4e45c0(); // Function AudioMixer.*c0e48c9a77.*382e4e45c0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675cb0c
	struct UObject* *8f73b70a22(); // Function AudioMixer.*c0e48c9a77.*8f73b70a22 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675c93c
	int32 *4f593531e1(); // Function AudioMixer.*c0e48c9a77.*4f593531e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675c9f0
	int32 *ea7e35c193(); // Function AudioMixer.*c0e48c9a77.*ea7e35c193 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675cc34
	bool *8cf353ba06(); // Function AudioMixer.*c0e48c9a77.*8cf353ba06 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675cd4c
};

// Class AudioMixer.*90f5ea8fea
// Size: 0xd0 (Inherited: 0x48)
struct U*90f5ea8fea : U*059f6ca67c {
	char pad_48[0x58]; // 0x48(0x58)
	struct F*6bc1291df3 Settings; // 0xa0(0x30)

	float *508829931e(); // Function AudioMixer.*90f5ea8fea.*508829931e // Final|Native|Public|BlueprintCallable // @ game+0x675d1d8
	struct F*6bc1291df3 *ff90040cb0(); // Function AudioMixer.*90f5ea8fea.*ff90040cb0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x675cfac
};

// Class AudioMixer.*076c606631
// Size: 0x90 (Inherited: 0x48)
struct U*076c606631 : U*059f6ca67c {
	char pad_48[0x38]; // 0x48(0x38)
	struct F*68bb90b557 Settings; // 0x80(0x10)

	struct F*68bb90b557 *ff90040cb0(); // Function AudioMixer.*076c606631.*ff90040cb0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x675d0b8
};

// Class AudioMixer.*4a082db300
// Size: 0x330 (Inherited: 0x310)
struct U*4a082db300 : U*8c9c6f4e51 {
	char pad_310[0x20]; // 0x310(0x20)
};

// Class AudioMixer.*5fbd5ae5d1
// Size: 0x6b0 (Inherited: 0x4e0)
struct U*5fbd5ae5d1 : USceneComponent {
	char *a63857a36e : 1; // 0x4e0(0x01)
	char *0c4faa0861 : 1; // 0x4e0(0x01)
	char bAllowSpatialization : 1; // 0x4e0(0x01)
	char bOverrideAttenuation : 1; // 0x4e0(0x01)
	char pad_4E0_4 : 4; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct USoundAttenuation* AttenuationSettings; // 0x4e8(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4f0(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x620(0x08)
	struct USoundClass* SoundClass; // 0x628(0x08)
	struct U*065aab1e6f* SourceEffectChain; // 0x630(0x08)
	float DefaultMasterReverbSendAmount; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct USoundSubmix* SoundSubmix; // 0x640(0x08)
	struct TArray<struct F*dbabf904cf> SoundSubmixSends; // 0x648(0x10)
	char pad_658[0x8]; // 0x658(0x08)
	struct U*4a082db300* Synth; // 0x660(0x08)
	struct UAudioComponent* AudioComponent; // 0x668(0x08)
	char pad_670[0x40]; // 0x670(0x40)

	void Stop(); // Function AudioMixer.*5fbd5ae5d1.Stop // Final|Native|Public|BlueprintCallable // @ game+0x675d3b8
	void Start(); // Function AudioMixer.*5fbd5ae5d1.Start // Final|Native|Public|BlueprintCallable // @ game+0x675d3a4
	bool IsPlaying(); // Function AudioMixer.*5fbd5ae5d1.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675cac8
	float *b7948a68ed(); // Function AudioMixer.*5fbd5ae5d1.*b7948a68ed // Final|Native|Public|BlueprintCallable // @ game+0x675d2b8
};

