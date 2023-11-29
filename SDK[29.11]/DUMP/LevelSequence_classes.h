// Class LevelSequence.LevelSequenceActor
// Size: 0x468 (Inherited: 0x3f0)
struct ALevelSequenceActor : AActor {
	char pad_3F0[0x8]; // 0x3f0(0x08)
	bool bAutoPlay; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x400(0x28)
	struct U*b57f9fdd62* SequencePlayer; // 0x428(0x08)
	struct FStringAssetReference LevelSequence; // 0x430(0x10)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x440(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x450(0x08)
	struct U*371e05edf3* BindingOverrides; // 0x458(0x08)
	struct ULevelSequenceBurnIn* *f2e6e479dd; // 0x460(0x08)

	struct ULevelSequence* *4309a02430(); // Function LevelSequence.LevelSequenceActor.*4309a02430 // Final|Native|Public|BlueprintCallable // @ game+0x5fa00e4
	struct ULevelSequence* *135e5c2af4(); // Function LevelSequence.LevelSequenceActor.*135e5c2af4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9fb60
	bool *de5d2c23a4(); // Function LevelSequence.LevelSequenceActor.*de5d2c23a4 // Final|Native|Public|BlueprintCallable // @ game+0x5f9fa14
	bool *42fbcc20e0(); // Function LevelSequence.LevelSequenceActor.*42fbcc20e0 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5f9fe54
	void *beb450e3e7(); // Function LevelSequence.LevelSequenceActor.*beb450e3e7 // Final|Native|Public|BlueprintCallable // @ game+0x5f9fe40
	struct FMovieSceneObjectBindingID *c5c6562c08(); // Function LevelSequence.LevelSequenceActor.*c5c6562c08 // Final|Native|Public|BlueprintCallable // @ game+0x5f9fd50
	struct AActor* RemoveBinding(); // Function LevelSequence.LevelSequenceActor.RemoveBinding // Final|Native|Public|BlueprintCallable // @ game+0x5f9fc04
	struct TArray<struct AActor*> *26fe95e554(); // Function LevelSequence.LevelSequenceActor.*26fe95e554 // Final|Native|Public|BlueprintCallable // @ game+0x5f9fff4
};

// Class LevelSequence.LevelSequence
// Size: 0x430 (Inherited: 0x330)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*fd68d45efc *d465997542; // 0x338(0x50)
	struct F*b7de243b84 *e79ab5ead1; // 0x388(0x50)
	struct TMap<struct FString, struct F*4ea68bc3e5> PossessedObjects; // 0x3d8(0x50)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class LevelSequence.*b57f9fdd62
// Size: 0x780 (Inherited: 0x700)
struct U*b57f9fdd62 : U*b09f37ac16 {
	char pad_700[0x20]; // 0x700(0x20)
	struct TArray<struct UObject*> *6a5f5f87f9; // 0x720(0x10)
	char pad_730[0x50]; // 0x730(0x50)

	struct U*b57f9fdd62* *8a43c44cd4(); // Function LevelSequence.*b57f9fdd62.*8a43c44cd4 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbe82b4
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x30)
struct ULevelSequenceBurnInOptions : UObject {
	bool *8e08b25226; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FStringClassReference *fd7e18f312; // 0x38(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2b0 (Inherited: 0x258)
struct ULevelSequenceBurnIn : UUserWidget {
	struct F*33ceb78436 FrameInformation; // 0x258(0x50)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2a8(0x08)

	struct UClass* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // Native|Event|Public|BlueprintEvent|Const // @ game+0x57d6ea8
	struct UObject* SetSettings(); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // Event|Public|BlueprintEvent // @ game+0x1dcd78
};

