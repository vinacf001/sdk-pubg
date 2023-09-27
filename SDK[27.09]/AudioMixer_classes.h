// Class AudioMixer.*406b5d6f6d
// Size: 0xc0 (Inherited: 0x48)
struct U*406b5d6f6d : U*8379a39c46 {
	char pad_48[0x50]; // 0x48(0x50)
	struct F*5826fb0ba7 Settings; // 0x98(0x28)

	void *26ae821fd2(); // Function AudioMixer.*406b5d6f6d.*26ae821fd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68761fc
};

// Class AudioMixer.*8ca6bcee47
// Size: 0x30 (Inherited: 0x30)
struct U*8ca6bcee47 : UBlueprintFunctionLibrary {

	void *e2e53e9f90(); // Function AudioMixer.*8ca6bcee47.*e2e53e9f90 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6875c88
	void *c1f741433d(); // Function AudioMixer.*8ca6bcee47.*c1f741433d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6875d3c
	void *167be73534(); // Function AudioMixer.*8ca6bcee47.*167be73534 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6875f80
	void *3ddc56065c(); // Function AudioMixer.*8ca6bcee47.*3ddc56065c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6876098
	void *3c56f18199(); // Function AudioMixer.*8ca6bcee47.*3c56f18199 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6875b6c
	void *637daca813(); // Function AudioMixer.*8ca6bcee47.*637daca813 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6875a94
	void *db5f44ef44(); // Function AudioMixer.*8ca6bcee47.*db5f44ef44 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6875e58
};

// Class AudioMixer.*afb83b30f8
// Size: 0xd0 (Inherited: 0x48)
struct U*afb83b30f8 : U*8379a39c46 {
	char pad_48[0x58]; // 0x48(0x58)
	struct F*c4002c4ee6 Settings; // 0xa0(0x30)

	void *26ae821fd2(); // Function AudioMixer.*afb83b30f8.*26ae821fd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68762f8
	void *651dd57833(); // Function AudioMixer.*afb83b30f8.*651dd57833 // Final|Native|Public|BlueprintCallable // @ game+0x6876524
};

// Class AudioMixer.*1d2d735737
// Size: 0x90 (Inherited: 0x48)
struct U*1d2d735737 : U*8379a39c46 {
	char pad_48[0x38]; // 0x48(0x38)
	struct F*822fec0c5a Settings; // 0x80(0x10)

	void *26ae821fd2(); // Function AudioMixer.*1d2d735737.*26ae821fd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6876404
};

// Class AudioMixer.*ac88a7c271
// Size: 0x330 (Inherited: 0x310)
struct U*ac88a7c271 : U*4a2c8ddd5c {
	char pad_310[0x20]; // 0x310(0x20)
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

	void Stop(); // Function AudioMixer.*9aa8179e28.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6876704
	void *172bd6cd1a(); // Function AudioMixer.*9aa8179e28.*172bd6cd1a // Final|Native|Public|BlueprintCallable // @ game+0x6876604
	void Start(); // Function AudioMixer.*9aa8179e28.Start // Final|Native|Public|BlueprintCallable // @ game+0x68766f0
	void IsPlaying(); // Function AudioMixer.*9aa8179e28.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6875e14
};

