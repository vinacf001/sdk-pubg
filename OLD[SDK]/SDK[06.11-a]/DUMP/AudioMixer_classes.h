// Class AudioMixer.*6bc7d6794d
// Size: 0xc0 (Inherited: 0x48)
struct U*6bc7d6794d : U*9d605b393c {
	char pad_48[0x50]; // 0x48(0x50)
	struct F*692eb87421 Settings; // 0x98(0x28)

	void *7a752b6a05(struct F*692eb87421 InSettings); // Function AudioMixer.*6bc7d6794d.*7a752b6a05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c7d750
};

// Class AudioMixer.*ebd52a2154
// Size: 0x30 (Inherited: 0x30)
struct U*ebd52a2154 : UBlueprintFunctionLibrary {
};

// Class AudioMixer.*27ef2e7df2
// Size: 0xd0 (Inherited: 0x48)
struct U*27ef2e7df2 : U*9d605b393c {
	char pad_48[0x58]; // 0x48(0x58)
	struct F*561b6a7228 Settings; // 0xa0(0x30)

	float *b9de5b5f7f(); // Function AudioMixer.*27ef2e7df2.*b9de5b5f7f // Final|Native|Public|BlueprintCallable // @ game+0x6c7da78
	struct F*561b6a7228 *7a752b6a05(); // Function AudioMixer.*27ef2e7df2.*7a752b6a05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c7d84c
};

// Class AudioMixer.*57545eb14f
// Size: 0x90 (Inherited: 0x48)
struct U*57545eb14f : U*9d605b393c {
	char pad_48[0x38]; // 0x48(0x38)
	struct F*693d255c9c Settings; // 0x80(0x10)

	struct F*693d255c9c *7a752b6a05(); // Function AudioMixer.*57545eb14f.*7a752b6a05 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6c7d958
};

// Class AudioMixer.*1dda914d34
// Size: 0x330 (Inherited: 0x310)
struct U*1dda914d34 : U*1c122710fb {
	int32 CompressionQuality; // 0xa8(0x04)
	char bLooping : 1; // 0xac(0x01)
	char *be64aba7ee : 1; // 0xac(0x01)
	int32 *05be51c981; // 0xb0(0x04)
	char pad_318_2 : 1; // 0x318(0x01)
	char *a420786d29 : 1; // 0xb4(0x01)
	char *43b02f3d36 : 1; // 0xb4(0x01)
	char *c518c75407 : 1; // 0xb4(0x01)
	char *a0e0d212fb : 1; // 0xb4(0x01)
	enum class ESoundGroup SoundGroup; // 0xb8(0x01)
	struct FString *d281ad91dc; // 0xc0(0x10)
	float *c4abba06f5; // 0xd0(0x04)
	float Volume; // 0xd4(0x04)
	float Pitch; // 0xd8(0x04)
	int32 *4a3d578517; // 0xdc(0x04)
	int32 SampleRate; // 0xe0(0x04)
	int32 *8dd2e02380; // 0xe4(0x04)
	struct TArray<struct F*f405a0a7cd> Subtitles; // 0xe8(0x10)
	struct TArray<struct F*c9e48fc552> *b1536b7bf0; // 0xf8(0x10)
	struct UCurveTable* Curves; // 0x108(0x08)
	struct UCurveTable* *ad24760bdc; // 0x110(0x08)
};

// Class AudioMixer.*f4c0684a9a
// Size: 0x630 (Inherited: 0x470)
struct U*f4c0684a9a : USceneComponent {
	char *6ecc134ca8 : 1; // 0x468(0x01)
	char *0096e20ed8 : 1; // 0x468(0x01)
	char bAllowSpatialization : 1; // 0x468(0x01)
	char bOverrideAttenuation : 1; // 0x468(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x470(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x478(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x5a8(0x08)
	struct USoundClass* SoundClass; // 0x5b0(0x08)
	struct U*96c8a54059* SourceEffectChain; // 0x5b8(0x08)
	float DefaultMasterReverbSendAmount; // 0x5c0(0x04)
	char pad_5C4_4 : 4; // 0x5c4(0x01)
	char pad_5C5[0x3]; // 0x5c5(0x03)
	struct USoundSubmix* SoundSubmix; // 0x5c8(0x08)
	struct TArray<struct F*f4d80fddcb> SoundSubmixSends; // 0x5d0(0x10)
	char pad_5E0[0x8]; // 0x5e0(0x08)
	struct U*1dda914d34* Synth; // 0x5e8(0x08)
	struct UAudioComponent* AudioComponent; // 0x5f0(0x08)
	char pad_5F8[0x38]; // 0x5f8(0x38)

	bool IsPlaying(); // Function AudioMixer.*f4c0684a9a.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6c7d368
	float *017d6601d2(); // Function AudioMixer.*f4c0684a9a.*017d6601d2 // Final|Native|Public|BlueprintCallable // @ game+0x6c7db58
	void Stop(); // Function AudioMixer.*f4c0684a9a.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6c7dc58
	void Start(); // Function AudioMixer.*f4c0684a9a.Start // Final|Native|Public|BlueprintCallable // @ game+0x6c7dc44
};

