// Class LevelSequence.LevelSequenceActor
// Size: 0x470 (Inherited: 0x3f8)
struct ALevelSequenceActor : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	bool bAutoPlay; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x408(0x28)
	struct U*70e7f9f22c* SequencePlayer; // 0x430(0x08)
	struct FStringAssetReference LevelSequence; // 0x438(0x10)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x448(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x458(0x08)
	struct U*1d756e9d11* BindingOverrides; // 0x460(0x08)
	struct ULevelSequenceBurnIn* *03040606d1; // 0x468(0x08)

	struct TArray<struct AActor*> *742696fe50(); // Function LevelSequence.LevelSequenceActor.*742696fe50 // None // @ game+0x5e45b18
	void *4bb7b3e8a6(); // Function LevelSequence.LevelSequenceActor.*4bb7b3e8a6 // None // @ game+0x5e45b04
	void *b7e63dd87e(); // Function LevelSequence.LevelSequenceActor.*b7e63dd87e // None // @ game+0x5e45cb8
	void *9e35ddd5ac(); // Function LevelSequence.LevelSequenceActor.*9e35ddd5ac // None // @ game+0x5e45a14
	void *6e5254c196(); // Function LevelSequence.LevelSequenceActor.*6e5254c196 // None // @ game+0x5e45da8
	bool *e3de6aa751(); // Function LevelSequence.LevelSequenceActor.*e3de6aa751 // None // @ game+0x5e45824
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.RemoveBinding // None // @ game+0x5e458c8
	void *4c6f007778(struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.*4c6f007778 // None // @ game+0x5e456d8
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

	void *c862cc2969(struct UObject* WorldContextObject, struct FMovieSceneSequencePlaybackSettings Settings); // Function LevelSequence.*70e7f9f22c.*c862cc2969 // None // @ game+0x8befc8
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x48 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool *0c7b351ec1; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FStringClassReference *9f0f23cc10; // 0x30(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x40(0x08)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2a8 (Inherited: 0x250)
struct ULevelSequenceBurnIn : UUserWidget {
	struct F*bc40c72930 FrameInformation; // 0x250(0x50)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2a0(0x08)

	void SetSettings(); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // None // @ game+0x26a108
	void GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // None // @ game+0x5671914
};

