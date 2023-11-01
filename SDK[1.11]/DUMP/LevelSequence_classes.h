// Class LevelSequence.LevelSequenceActor
// Size: 0x460 (Inherited: 0x3e8)
struct ALevelSequenceActor : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	bool bAutoPlay; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings[0x28]; // 0x3f8(0x28)
	struct U*9f9d081882* SequencePlayer[0x08]; // 0x420(0x08)
	struct FStringAssetReference LevelSequence[0x10]; // 0x428(0x10)
	struct TArray<struct AActor*> AdditionalEventReceivers[0x10]; // 0x438(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions[0x08]; // 0x448(0x08)
	struct U*e18a9d1f3d* BindingOverrides[0x08]; // 0x450(0x08)
	struct ULevelSequenceBurnIn* *aadc8c2092[0x08]; // 0x458(0x08)

	void *8357412dde(); // Function LevelSequence.LevelSequenceActor.*8357412dde // Final|Native|Public|BlueprintCallable // @ game+0x6091650
	bool *42b917a781(); // Function LevelSequence.LevelSequenceActor.*42b917a781 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6091370
	struct FMovieSceneObjectBindingID RemoveBinding(); // Function LevelSequence.LevelSequenceActor.RemoveBinding // Final|Native|Public|BlueprintCallable // @ game+0x6091414
	void *5337ad472c(); // Function LevelSequence.LevelSequenceActor.*5337ad472c // Final|Native|Public|BlueprintCallable // @ game+0x6091804
	struct AActor* *1babb0aeb5(); // Function LevelSequence.LevelSequenceActor.*1babb0aeb5 // Final|Native|Public|BlueprintCallable // @ game+0x6091224
	void *e211c1dd18(); // Function LevelSequence.LevelSequenceActor.*e211c1dd18 // Final|Native|Public|BlueprintCallable // @ game+0x60918f4
	void *2c8e0ea925(); // Function LevelSequence.LevelSequenceActor.*2c8e0ea925 // Final|Native|Public|BlueprintCallable // @ game+0x6091560
	void *94dd4fd043(struct FMovieSceneObjectBindingID* Binding); // Function LevelSequence.LevelSequenceActor.*94dd4fd043 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6091664
};

// Class LevelSequence.LevelSequence
// Size: 0x430 (Inherited: 0x330)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene[0x08]; // 0x330(0x08)
	struct F*464c634831 *85d24cd4a7[0x50]; // 0x338(0x50)
	struct F*18b04c0f43 *c5198e938b[0x50]; // 0x388(0x50)
	struct TMap<struct FString, struct F*5f70314217> PossessedObjects[0x50]; // 0x3d8(0x50)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class LevelSequence.*9f9d081882
// Size: 0x780 (Inherited: 0x700)
struct U*9f9d081882 : U*14a032dbde {
	char pad_700[0x20]; // 0x700(0x20)
	struct TArray<struct UObject*> *b6b77940f7[0x10]; // 0x720(0x10)
	char pad_730[0x50]; // 0x730(0x50)

	struct FMovieSceneSequencePlaybackSettings *0423dbb45a(struct UObject** WorldContextObject); // Function LevelSequence.*9f9d081882.*0423dbb45a // Final|Native|Static|Public|BlueprintCallable // @ game+0xc16660
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x48 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool *c814236ff2; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FStringClassReference *be90522cb9[0x10]; // 0x30(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings[0x08]; // 0x40(0x08)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2a8 (Inherited: 0x250)
struct ULevelSequenceBurnIn : UUserWidget {
	struct F*cf8a9c6e3b FrameInformation[0x50]; // 0x250(0x50)
	struct ALevelSequenceActor* LevelSequenceActor[0x08]; // 0x2a0(0x08)

	void GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // Native|Event|Public|BlueprintEvent|Const // @ game+0x58dbd44
	void SetSettings(); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

