// Class LevelSequence.LevelSequenceActor
// Size: 0x480 (Inherited: 0x408)
struct ALevelSequenceActor : AActor {
	char pad_408[0x8]; // 0x408(0x08)
	bool bAutoPlay; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x418(0x28)
	struct U*70e7f9f22c* SequencePlayer; // 0x440(0x08)
	struct FStringAssetReference LevelSequence; // 0x448(0x10)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x458(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x468(0x08)
	struct U*1d756e9d11* BindingOverrides; // 0x470(0x08)
	struct ULevelSequenceBurnIn* *03040606d1; // 0x478(0x08)

	void *742696fe50(); // Function LevelSequence.LevelSequenceActor.*742696fe50 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x625f660
	void *4bb7b3e8a6(); // Function LevelSequence.LevelSequenceActor.*4bb7b3e8a6 // Final|Native|Public|BlueprintCallable // @ game+0x625f64c
	void *b7e63dd87e(); // Function LevelSequence.LevelSequenceActor.*b7e63dd87e // Final|Native|Public|BlueprintCallable // @ game+0x625f800
	void *9e35ddd5ac(); // Function LevelSequence.LevelSequenceActor.*9e35ddd5ac // Final|Native|Public|BlueprintCallable // @ game+0x625f55c
	void *6e5254c196(); // Function LevelSequence.LevelSequenceActor.*6e5254c196 // Final|Native|Public|BlueprintCallable // @ game+0x625f8f0
	void *e3de6aa751(); // Function LevelSequence.LevelSequenceActor.*e3de6aa751 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x625f36c
	void RemoveBinding(); // Function LevelSequence.LevelSequenceActor.RemoveBinding // Final|Native|Public|BlueprintCallable // @ game+0x625f410
	void *4c6f007778(); // Function LevelSequence.LevelSequenceActor.*4c6f007778 // Final|Native|Public|BlueprintCallable // @ game+0x625f220
};

// Class LevelSequence.LevelSequence
// Size: 0x430 (Inherited: 0x330)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*4dbebbd2ce *c2ff1b4e5f; // 0x338(0x50)
	struct F*eefc5802d4 *0c1e097ef5; // 0x388(0x50)
	struct TMap<struct FString, struct F*7feae1615c> PossessedObjects; // 0x3d8(0x50)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class LevelSequence.*70e7f9f22c
// Size: 0x780 (Inherited: 0x700)
struct U*70e7f9f22c : U*c992a80a5e {
	char pad_700[0x20]; // 0x700(0x20)
	struct TArray<struct UObject*> *4ff198162a; // 0x720(0x10)
	char pad_730[0x50]; // 0x730(0x50)

	void *c862cc2969(); // Function LevelSequence.*70e7f9f22c.*c862cc2969 // Final|Native|Static|Public|BlueprintCallable // @ game+0x8f9ce0
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x30)
struct ULevelSequenceBurnInOptions : UObject {
	bool *0c7b351ec1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FStringClassReference *9f0f23cc10; // 0x38(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2b0 (Inherited: 0x258)
struct ULevelSequenceBurnIn : UUserWidget {
	struct F*bc40c72930 FrameInformation; // 0x258(0x50)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2a8(0x08)

	void SetSettings(); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // Event|Public|BlueprintEvent // @ game+0x22ddc4
	void GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // Native|Event|Public|BlueprintEvent|Const // @ game+0x5a6e40c
};

