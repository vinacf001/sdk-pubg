// Class AudioMixer.*285fe343c3
// Size: 0xc0 (Inherited: 0x48)
struct U*285fe343c3 : U*2213872909 {
	char pad_48[0x50]; // 0x48(0x50)
	struct F*e2c2468cdf Settings; // 0x98(0x28)

	void *f2efbb4285(); // Function AudioMixer.*285fe343c3.*f2efbb4285 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c6ea8
};

// Class AudioMixer.*6c198a7349
// Size: 0x30 (Inherited: 0x30)
struct U*6c198a7349 : UBlueprintFunctionLibrary {

	void *a082986621(); // Function AudioMixer.*6c198a7349.*a082986621 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c6b04
	void *6828677f86(); // Function AudioMixer.*6c198a7349.*6828677f86 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c6740
	void *e169bbb143(); // Function AudioMixer.*6c198a7349.*e169bbb143 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c6934
	void *0324e62620(); // Function AudioMixer.*6c198a7349.*0324e62620 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c6818
	void *f124614771(); // Function AudioMixer.*6c198a7349.*f124614771 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c6c2c
	void *cb6fe1eeed(); // Function AudioMixer.*6c198a7349.*cb6fe1eeed // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c6d44
	void *dce20b319a(); // Function AudioMixer.*6c198a7349.*dce20b319a // Final|Native|Static|Public|BlueprintCallable // @ game+0x67c69e8
};

// Class AudioMixer.*75a6424cf4
// Size: 0xd0 (Inherited: 0x48)
struct U*75a6424cf4 : U*2213872909 {
	char pad_48[0x58]; // 0x48(0x58)
	struct F*12f9f46849 Settings; // 0xa0(0x30)

	void *43118e50e1(); // Function AudioMixer.*75a6424cf4.*43118e50e1 // Final|Native|Public|BlueprintCallable // @ game+0x67c71d0
	void *f2efbb4285(); // Function AudioMixer.*75a6424cf4.*f2efbb4285 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c6fa4
};

// Class AudioMixer.*5ca0052c34
// Size: 0x90 (Inherited: 0x48)
struct U*5ca0052c34 : U*2213872909 {
	char pad_48[0x38]; // 0x48(0x38)
	struct F*59df2b1c8f Settings; // 0x80(0x10)

	void *f2efbb4285(); // Function AudioMixer.*5ca0052c34.*f2efbb4285 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67c70b0
};

// Class AudioMixer.*80611a12e8
// Size: 0x330 (Inherited: 0x310)
struct U*80611a12e8 : U*3e9397310b {
	char pad_310[0x20]; // 0x310(0x20)
};

// Class AudioMixer.*9f489976fb
// Size: 0x630 (Inherited: 0x470)
struct U*9f489976fb : USceneComponent {
	char *70ddd8d1f5 : 1; // 0x468(0x01)
	char *addefcece3 : 1; // 0x468(0x01)
	char bAllowSpatialization : 1; // 0x468(0x01)
	char bOverrideAttenuation : 1; // 0x468(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x470(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x478(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x5a8(0x08)
	struct USoundClass* SoundClass; // 0x5b0(0x08)
	struct U*a00a72a663* SourceEffectChain; // 0x5b8(0x08)
	float DefaultMasterReverbSendAmount; // 0x5c0(0x04)
	char pad_5C4_4 : 4; // 0x5c4(0x01)
	char pad_5C5[0x3]; // 0x5c5(0x03)
	struct USoundSubmix* SoundSubmix; // 0x5c8(0x08)
	struct TArray<struct F*aa7ad87262> SoundSubmixSends; // 0x5d0(0x10)
	char pad_5E0[0x8]; // 0x5e0(0x08)
	struct U*80611a12e8* Synth; // 0x5e8(0x08)
	struct UAudioComponent* AudioComponent; // 0x5f0(0x08)
	char pad_5F8[0x38]; // 0x5f8(0x38)

	void IsPlaying(); // Function AudioMixer.*9f489976fb.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67c6ac0
	void Stop(); // Function AudioMixer.*9f489976fb.Stop // Final|Native|Public|BlueprintCallable // @ game+0x67c73b0
	void *54d15737d0(); // Function AudioMixer.*9f489976fb.*54d15737d0 // Final|Native|Public|BlueprintCallable // @ game+0x67c72b0
	void Start(); // Function AudioMixer.*9f489976fb.Start // Final|Native|Public|BlueprintCallable // @ game+0x67c739c
};

