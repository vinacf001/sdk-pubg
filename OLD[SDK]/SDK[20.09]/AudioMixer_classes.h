// Class AudioMixer.*406b5d6f6d
// Size: 0xb8 (Inherited: 0x40)
struct U*406b5d6f6d : U*8379a39c46 {
	char pad_40[0x50]; // 0x40(0x50)
	struct F*5826fb0ba7 Settings; // 0x90(0x28)

	void *26ae821fd2(); // Function AudioMixer.*406b5d6f6d.*26ae821fd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6457030
};

// Class AudioMixer.*8ca6bcee47
// Size: 0x28 (Inherited: 0x28)
struct U*8ca6bcee47 : UBlueprintFunctionLibrary {
};

// Class AudioMixer.*afb83b30f8
// Size: 0xc8 (Inherited: 0x40)
struct U*afb83b30f8 : U*8379a39c46 {
	char pad_40[0x58]; // 0x40(0x58)
	struct F*c4002c4ee6 Settings; // 0x98(0x30)

	void *26ae821fd2(); // Function AudioMixer.*afb83b30f8.*26ae821fd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6457128
	void *651dd57833(struct UReverbEffect* InReverbEffect); // Function AudioMixer.*afb83b30f8.*651dd57833 // Final|Native|Public|BlueprintCallable // @ game+0x6457350
};

// Class AudioMixer.*1d2d735737
// Size: 0x88 (Inherited: 0x40)
struct U*1d2d735737 : U*8379a39c46 {
	char pad_40[0x38]; // 0x40(0x38)
	struct F*822fec0c5a Settings; // 0x78(0x10)

	void *26ae821fd2(); // Function AudioMixer.*1d2d735737.*26ae821fd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6457230
};

// Class AudioMixer.*ac88a7c271
// Size: 0x330 (Inherited: 0x310)
struct U*ac88a7c271 : U*4a2c8ddd5c {
	int32 CompressionQuality; // 0xa0(0x04)
	char bLooping : 1; // 0xa4(0x01)
	char *edbf2ee878 : 1; // 0xa4(0x01)
	int32 *c616dc1f0a; // 0xa8(0x04)
	char pad_318_2 : 1; // 0x318(0x01)
	char *8a3cc4a7c8 : 1; // 0xac(0x01)
	char *e0b2b13598 : 1; // 0xac(0x01)
	char *ee39d4b19b : 1; // 0xac(0x01)
	char *bf7c1f8eeb : 1; // 0xac(0x01)
	enum class ESoundGroup SoundGroup; // 0xb0(0x01)
	struct FString *622c8764d8; // 0xb8(0x10)
	float *e293256a55; // 0xc8(0x04)
	float Volume; // 0xcc(0x04)
	float Pitch; // 0xd0(0x04)
	int32 *7907ef25cf; // 0xd4(0x04)
	int32 SampleRate; // 0xd8(0x04)
	int32 *3f11b6faa6; // 0xdc(0x04)
	struct TArray<struct F*cc00d9579b> Subtitles; // 0xe0(0x10)
	struct TArray<struct F*3f2b6dfbf7> *42066ff8d0; // 0xf0(0x10)
	struct UCurveTable* Curves; // 0x100(0x08)
	struct UCurveTable* *b3add4c6d5; // 0x108(0x08)
};

// Class AudioMixer.*9aa8179e28
// Size: 0x6a0 (Inherited: 0x4d0)
struct U*9aa8179e28 : USceneComponent {
	char *2e8753955a : 1; // 0x4d0(0x01)
	char *d6fc981176 : 1; // 0x4d0(0x01)
	char bAllowSpatialization : 1; // 0x4d0(0x01)
	char bOverrideAttenuation : 1; // 0x4d0(0x01)
	char pad_4D0_4 : 4; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct USoundAttenuation* AttenuationSettings; // 0x4d8(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4e0(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x610(0x08)
	struct USoundClass* SoundClass; // 0x618(0x08)
	struct U*844cf37c90* SourceEffectChain; // 0x620(0x08)
	float DefaultMasterReverbSendAmount; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct USoundSubmix* SoundSubmix; // 0x630(0x08)
	struct TArray<struct F*3da6da8223> SoundSubmixSends; // 0x638(0x10)
	char pad_648[0x8]; // 0x648(0x08)
	struct U*ac88a7c271* Synth; // 0x650(0x08)
	struct UAudioComponent* AudioComponent; // 0x658(0x08)
	char pad_660[0x40]; // 0x660(0x40)

	void Stop(); // Function AudioMixer.*9aa8179e28.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6457530
	void *172bd6cd1a(struct USoundSubmix* Submix); // Function AudioMixer.*9aa8179e28.*172bd6cd1a // Final|Native|Public|BlueprintCallable // @ game+0x6457430
	void Start(); // Function AudioMixer.*9aa8179e28.Start // Final|Native|Public|BlueprintCallable // @ game+0x645751c
	void IsPlaying(); // Function AudioMixer.*9aa8179e28.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6456c48
};

