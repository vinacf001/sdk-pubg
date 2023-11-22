// Class AudioMixer.*285fe343c3
// Size: 0xb8 (Inherited: 0x40)
struct U*285fe343c3 : U*2213872909 {
	char pad_40[0x50]; // 0x40(0x50)
	struct F*e2c2468cdf Settings; // 0x90(0x28)

	void *f2efbb4285(); // Function AudioMixer.*285fe343c3.*f2efbb4285 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65a951c
};

// Class AudioMixer.*6c198a7349
// Size: 0x28 (Inherited: 0x28)
struct U*6c198a7349 : UBlueprintFunctionLibrary {

	struct UObject* *a082986621(); // Function AudioMixer.*6c198a7349.*a082986621 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a9178
	struct UObject* *6828677f86(); // Function AudioMixer.*6c198a7349.*6828677f86 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a8db4
	void *e169bbb143(); // Function AudioMixer.*6c198a7349.*e169bbb143 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a8fa8
	struct U*a00a72a663* *0324e62620(); // Function AudioMixer.*6c198a7349.*0324e62620 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a8e8c
	struct U*a00a72a663* *f124614771(); // Function AudioMixer.*6c198a7349.*f124614771 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a92a0
	void *cb6fe1eeed(struct UObject* WorldContextObject, int32 EntryIndex); // Function AudioMixer.*6c198a7349.*cb6fe1eeed // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a93b8
	struct U*a00a72a663* *dce20b319a(); // Function AudioMixer.*6c198a7349.*dce20b319a // Final|Native|Static|Public|BlueprintCallable // @ game+0x65a905c
};

// Class AudioMixer.*75a6424cf4
// Size: 0xc8 (Inherited: 0x40)
struct U*75a6424cf4 : U*2213872909 {
	char pad_40[0x58]; // 0x40(0x58)
	struct F*12f9f46849 Settings; // 0x98(0x30)

	void *43118e50e1(); // Function AudioMixer.*75a6424cf4.*43118e50e1 // Final|Native|Public|BlueprintCallable // @ game+0x65a983c
	void *f2efbb4285(); // Function AudioMixer.*75a6424cf4.*f2efbb4285 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65a9614
};

// Class AudioMixer.*5ca0052c34
// Size: 0x88 (Inherited: 0x40)
struct U*5ca0052c34 : U*2213872909 {
	char pad_40[0x38]; // 0x40(0x38)
	struct F*59df2b1c8f Settings; // 0x78(0x10)

	void *f2efbb4285(); // Function AudioMixer.*5ca0052c34.*f2efbb4285 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65a971c
};

// Class AudioMixer.*80611a12e8
// Size: 0x330 (Inherited: 0x310)
struct U*80611a12e8 : U*3e9397310b {
	char pad_310[0x20]; // 0x310(0x20)
};

// Class AudioMixer.*9f489976fb
// Size: 0x620 (Inherited: 0x460)
struct U*9f489976fb : USceneComponent {
	char *70ddd8d1f5 : 1; // 0x458(0x01)
	char *addefcece3 : 1; // 0x458(0x01)
	char bAllowSpatialization : 1; // 0x458(0x01)
	char bOverrideAttenuation : 1; // 0x458(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x460(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x468(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x598(0x08)
	struct USoundClass* SoundClass; // 0x5a0(0x08)
	struct U*a00a72a663* SourceEffectChain; // 0x5a8(0x08)
	float DefaultMasterReverbSendAmount; // 0x5b0(0x04)
	char pad_5B4_4 : 4; // 0x5b4(0x01)
	char pad_5B5[0x3]; // 0x5b5(0x03)
	struct USoundSubmix* SoundSubmix; // 0x5b8(0x08)
	struct TArray<struct F*aa7ad87262> SoundSubmixSends; // 0x5c0(0x10)
	char pad_5D0[0x8]; // 0x5d0(0x08)
	struct U*80611a12e8* Synth; // 0x5d8(0x08)
	struct UAudioComponent* AudioComponent; // 0x5e0(0x08)
	char pad_5E8[0x38]; // 0x5e8(0x38)

	void IsPlaying(); // Function AudioMixer.*9f489976fb.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65a9134
	void Stop(); // Function AudioMixer.*9f489976fb.Stop // Final|Native|Public|BlueprintCallable // @ game+0x65a9a1c
	void *54d15737d0(struct USoundSubmix* Submix); // Function AudioMixer.*9f489976fb.*54d15737d0 // Final|Native|Public|BlueprintCallable // @ game+0x65a991c
	void Start(); // Function AudioMixer.*9f489976fb.Start // Final|Native|Public|BlueprintCallable // @ game+0x65a9a08
};

