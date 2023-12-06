// Class LevelSequence.LevelSequenceActor
// Size: 0x470 (Inherited: 0x3f8)
struct ALevelSequenceActor : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	bool bAutoPlay; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x408(0x28)
	struct U*a1bc19bb0c* SequencePlayer; // 0x430(0x08)
	struct FStringAssetReference LevelSequence; // 0x438(0x10)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x448(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x458(0x08)
	struct U*acfe1829bf* BindingOverrides; // 0x460(0x08)
	struct ULevelSequenceBurnIn* *dca57915f1; // 0x468(0x08)

	bool *c73d791a06(); // Function LevelSequence.LevelSequenceActor.*c73d791a06 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6179cd0
	struct ULevelSequence* *9acb565127(); // Function LevelSequence.LevelSequenceActor.*9acb565127 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x61799dc
	struct ULevelSequence* *32e6fb0dc9(); // Function LevelSequence.LevelSequenceActor.*32e6fb0dc9 // Final|Native|Public|BlueprintCallable // @ game+0x6179f60
	struct TArray<struct AActor*> *8a97ea28f1(); // Function LevelSequence.LevelSequenceActor.*8a97ea28f1 // Final|Native|Public|BlueprintCallable // @ game+0x6179e70
	struct AActor* RemoveBinding(); // Function LevelSequence.LevelSequenceActor.RemoveBinding // Final|Native|Public|BlueprintCallable // @ game+0x6179a80
	struct FMovieSceneObjectBindingID *1ed84b1a04(); // Function LevelSequence.LevelSequenceActor.*1ed84b1a04 // Final|Native|Public|BlueprintCallable // @ game+0x6179bcc
	void *bb62f73904(); // Function LevelSequence.LevelSequenceActor.*bb62f73904 // Final|Native|Public|BlueprintCallable // @ game+0x6179cbc
	bool *3cf2836b6a(); // Function LevelSequence.LevelSequenceActor.*3cf2836b6a // Final|Native|Public|BlueprintCallable // @ game+0x6179890
};

// Class LevelSequence.LevelSequence
// Size: 0x430 (Inherited: 0x330)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*62e13bb56e *661e025ca5; // 0x338(0x50)
	struct F*dd4f27231a *4d323fd2c7; // 0x388(0x50)
	struct TMap<struct FString, struct F*ca88314d44> PossessedObjects; // 0x3d8(0x50)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class LevelSequence.*a1bc19bb0c
// Size: 0x780 (Inherited: 0x700)
struct U*a1bc19bb0c : U*077b952708 {
	char pad_700[0x20]; // 0x700(0x20)
	struct TArray<struct UObject*> *f04e165ee9; // 0x720(0x10)
	char pad_730[0x50]; // 0x730(0x50)

	struct U*a1bc19bb0c* *b9596838ea(); // Function LevelSequence.*a1bc19bb0c.*b9596838ea // Final|Native|Static|Public|BlueprintCallable // @ game+0xbe6244
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x30)
struct ULevelSequenceBurnInOptions : UObject {
	bool *22fb37623c; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FStringClassReference *a245ce9ae5; // 0x38(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2b0 (Inherited: 0x258)
struct ULevelSequenceBurnIn : UUserWidget {
	struct F*c11ee53966 FrameInformation; // 0x258(0x50)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2a8(0x08)

	struct UClass* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // Native|Event|Public|BlueprintEvent|Const // @ game+0x59af8b4
	struct UObject* SetSettings(); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // Event|Public|BlueprintEvent // @ game+0x22c9a0
};

