// Class AudioMixer.*f1b96e3e95
// Size: 0xb8 (Inherited: 0x40)
struct U*f1b96e3e95 : U*059f6ca67c {
	char pad_40[0x50]; // 0x40(0x50)
	struct F*a8e749b2bc Settings; // 0x90(0x28)

	void *ff90040cb0(); // Function AudioMixer.*f1b96e3e95.*ff90040cb0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x669290c
};

// Class AudioMixer.*c0e48c9a77
// Size: 0x28 (Inherited: 0x28)
struct U*c0e48c9a77 : UBlueprintFunctionLibrary {

	struct U*065aab1e6f* *cf5764ab40(); // Function AudioMixer.*c0e48c9a77.*cf5764ab40 // Final|Native|Static|Public|BlueprintCallable // @ game+0x669227c
	struct UObject* *b1f44b2538(); // Function AudioMixer.*c0e48c9a77.*b1f44b2538 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66921a4
	void *382e4e45c0(struct UObject* WorldContextObject); // Function AudioMixer.*c0e48c9a77.*382e4e45c0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6692568
	void *8f73b70a22(); // Function AudioMixer.*c0e48c9a77.*8f73b70a22 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6692398
	struct U*065aab1e6f* *4f593531e1(); // Function AudioMixer.*c0e48c9a77.*4f593531e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x669244c
	struct UObject* *ea7e35c193(struct U*065aab1e6f* PresetChain); // Function AudioMixer.*c0e48c9a77.*ea7e35c193 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6692690
	void *8cf353ba06(struct UObject* WorldContextObject, int32 EntryIndex); // Function AudioMixer.*c0e48c9a77.*8cf353ba06 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66927a8
};

// Class AudioMixer.*90f5ea8fea
// Size: 0xc8 (Inherited: 0x40)
struct U*90f5ea8fea : U*059f6ca67c {
	char pad_40[0x58]; // 0x40(0x58)
	struct F*6bc1291df3 Settings; // 0x98(0x30)

	void *508829931e(struct UReverbEffect* InReverbEffect); // Function AudioMixer.*90f5ea8fea.*508829931e // Final|Native|Public|BlueprintCallable // @ game+0x6692c2c
	void *ff90040cb0(); // Function AudioMixer.*90f5ea8fea.*ff90040cb0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6692a04
};

// Class AudioMixer.*076c606631
// Size: 0x88 (Inherited: 0x40)
struct U*076c606631 : U*059f6ca67c {
	char pad_40[0x38]; // 0x40(0x38)
	struct F*68bb90b557 Settings; // 0x78(0x10)

	void *ff90040cb0(); // Function AudioMixer.*076c606631.*ff90040cb0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6692b0c
};

// Class AudioMixer.*4a082db300
// Size: 0x330 (Inherited: 0x310)
struct U*4a082db300 : U*8c9c6f4e51 {
	char pad_310[0x20]; // 0x310(0x20)
};

// Class AudioMixer.*5fbd5ae5d1
// Size: 0x6a0 (Inherited: 0x4d0)
struct U*5fbd5ae5d1 : USceneComponent {
	char *a63857a36e : 1; // 0x4d0(0x01)
	char *0c4faa0861 : 1; // 0x4d0(0x01)
	char bAllowSpatialization : 1; // 0x4d0(0x01)
	char bOverrideAttenuation : 1; // 0x4d0(0x01)
	char pad_4D0_4 : 4; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct USoundAttenuation* AttenuationSettings; // 0x4d8(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4e0(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x610(0x08)
	struct USoundClass* SoundClass; // 0x618(0x08)
	struct U*065aab1e6f* SourceEffectChain; // 0x620(0x08)
	float DefaultMasterReverbSendAmount; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct USoundSubmix* SoundSubmix; // 0x630(0x08)
	struct TArray<struct F*dbabf904cf> SoundSubmixSends; // 0x638(0x10)
	char pad_648[0x8]; // 0x648(0x08)
	struct U*4a082db300* Synth; // 0x650(0x08)
	struct UAudioComponent* AudioComponent; // 0x658(0x08)
	char pad_660[0x40]; // 0x660(0x40)

	void Stop(); // Function AudioMixer.*5fbd5ae5d1.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6692e0c
	void Start(); // Function AudioMixer.*5fbd5ae5d1.Start // Final|Native|Public|BlueprintCallable // @ game+0x6692df8
	void IsPlaying(); // Function AudioMixer.*5fbd5ae5d1.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6692524
	void *b7948a68ed(struct USoundSubmix* Submix); // Function AudioMixer.*5fbd5ae5d1.*b7948a68ed // Final|Native|Public|BlueprintCallable // @ game+0x6692d0c
};

