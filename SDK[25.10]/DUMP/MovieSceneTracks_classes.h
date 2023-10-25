// Class MovieSceneTracks.*655652a152
// Size: 0xe0 (Inherited: 0xd0)
struct U*655652a152 : UMovieSceneSection {
	struct FGuid *80e1c02e1a; // 0xd0(0x10)
};

// Class MovieSceneTracks.*63609a2c0e
// Size: 0x100 (Inherited: 0xe0)
struct U*63609a2c0e : U*655652a152 {
	struct FName *d373ab65c0; // 0xe0(0x08)
	struct FName *1a9619f01d; // 0xe8(0x08)
	char *2d4f0cdf60 : 1; // 0xf0(0x01)
	char *8db13478a4 : 1; // 0xf0(0x01)
	char *160a7fd2f7 : 1; // 0xf0(0x01)
	char *9a08950ec0 : 1; // 0xf0(0x01)
	char *60f3095ee2 : 1; // 0xf0(0x01)
	char *fa45b47e4b : 1; // 0xf0(0x01)
	char pad_F0_6 : 2; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// Class MovieSceneTracks.*d4bc644f51
// Size: 0x160 (Inherited: 0xe0)
struct U*d4bc644f51 : U*655652a152 {
	struct FRichCurve *ef9296323d; // 0xe0(0x70)
	enum class MovieScene3DPathSection_Axis *6e33a8f5ac; // 0x150(0x01)
	enum class MovieScene3DPathSection_Axis *0d7fbce3eb; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	char bFollow : 1; // 0x154(0x01)
	char *2ca662263e : 1; // 0x154(0x01)
	char *b6ecafb608 : 1; // 0x154(0x01)
	char pad_154_3 : 5; // 0x154(0x01)
	char pad_155[0xb]; // 0x155(0x0b)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> *82c5729088; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x4d0 (Inherited: 0xd0)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x03]; // 0xd8(0x150)
	struct FRichCurve Rotation[0x03]; // 0x228(0x150)
	struct FRichCurve Scale[0x03]; // 0x378(0x150)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class MovieSceneTracks.*539faa5c1a
// Size: 0x170 (Inherited: 0xd0)
struct U*539faa5c1a : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*a422f9d4ff *90771a3ffe; // 0xd8(0x70)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct FString> *7ad6383a5a; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x200 (Inherited: 0xd0)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xd0(0x08)
	float StartOffset; // 0xd8(0x04)
	float AudioStartTime; // 0xdc(0x04)
	float AudioDilationFactor; // 0xe0(0x04)
	float AudioVolume; // 0xe4(0x04)
	struct FRichCurve *66201586d9; // 0xe8(0x70)
	struct FRichCurve *a785000e4c; // 0x158(0x70)
	bool *ef89b4e1fa; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	DelegateProperty *2b3f413ec8; // 0x1d0(0x10)
	struct FMulticastDelegate *319260c8a8; // 0x1e0(0x10)
	struct FMulticastDelegate *ad534c7196; // 0x1f0(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *c29301c4d4; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	bool DefaultValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct F*a422f9d4ff *e769e648e6; // 0xe0(0x70)
};

// Class MovieSceneTracks.*86cc021c81
// Size: 0x150 (Inherited: 0x150)
struct U*86cc021c81 : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*a422f9d4ff *1c59b21309; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*e84d3815fa
// Size: 0x110 (Inherited: 0xd0)
struct U*e84d3815fa : UMovieSceneSection {
	struct F*8d8f974b0b *16df726153; // 0xd0(0x20)
	struct UCameraAnim* CameraAnim; // 0xf0(0x08)
	float PlayRate; // 0xf8(0x04)
	float PlayScale; // 0xfc(0x04)
	float BlendInTime; // 0x100(0x04)
	float BlendOutTime; // 0x104(0x04)
	bool bLooping; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *b1a8a95e0f; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xe0 (Inherited: 0xd0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid *a2333c5817; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*1552c9999f
// Size: 0x110 (Inherited: 0xd0)
struct U*1552c9999f : UMovieSceneSection {
	struct F*99422fccd2 *4928b8dcbb; // 0xd0(0x20)
	struct UClass* ShakeClass; // 0xf0(0x08)
	float PlayScale; // 0xf8(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *37e30fde27; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x2a0 (Inherited: 0xd0)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *ce07ec0a99; // 0xd8(0x70)
	struct FRichCurve *ecb940efc5; // 0x148(0x70)
	struct FRichCurve *48d16680d2; // 0x1b8(0x70)
	struct FRichCurve *7b49fabe25; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class MovieSceneTracks.*4f79b7d540
// Size: 0x150 (Inherited: 0xd0)
struct U*4f79b7d540 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*a422f9d4ff *0df0f3f9db; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*f4d5ee3c4c
// Size: 0x1e0 (Inherited: 0xd0)
struct U*f4d5ee3c4c : UMovieSceneSection {
	struct F*3bbfdcfb3f Events; // 0xd0(0x68)
	struct F*127da3598a EventData; // 0x138(0x20)
	char pad_158[0x88]; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	struct FGuid *bdbe008281; // 0xc8(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char *0aa83bc524 : 1; // 0xb8(0x01)
	char *1d2a54934d : 1; // 0xb8(0x01)
	enum class *da81803555 *432c6ed6ea; // 0xbc(0x01)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *e7fc2b8ab7; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*5b6b7d83ec
// Size: 0x160 (Inherited: 0x150)
struct U*5b6b7d83ec : UMovieSceneFloatSection {
	struct FLinearColor *59ad6910df; // 0x148(0x10)
	char *f42de07281 : 1; // 0x158(0x01)
};

// Class MovieSceneTracks.*2f0dbb4e45
// Size: 0x150 (Inherited: 0x150)
struct U*2f0dbb4e45 : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.*a420432707
// Size: 0x150 (Inherited: 0xd0)
struct U*a420432707 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*a422f9d4ff *03937a0b98; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*9688205de6
// Size: 0xf0 (Inherited: 0xd0)
struct U*9688205de6 : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FName> *33f67d2b24; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct FName PropertyName; // 0xb8(0x08)
	struct FString PropertyPath; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x100 (Inherited: 0xd0)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct F*298ca1f497> *fb84226b65; // 0xd0(0x10)
	struct TArray<struct F*21fbc1ac13> *2b4145058d; // 0xe0(0x10)
	struct TArray<struct F*df788b5612> *cf54cc898d; // 0xf0(0x10)
};

// Class MovieSceneTracks.*771ec893c5
// Size: 0xd0 (Inherited: 0xc0)
struct U*771ec893c5 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*71b5fb040b
// Size: 0xd0 (Inherited: 0xd0)
struct U*71b5fb040b : U*771ec893c5 {
	int32 MaterialIndex; // 0xc8(0x04)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneMaterialParameterCollectionTrack : U*771ec893c5 {
	struct UMaterialParameterCollection* MPC; // 0xc8(0x08)
};

// Class MovieSceneTracks.*ccac1ec2a7
// Size: 0xd0 (Inherited: 0xc0)
struct U*ccac1ec2a7 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x140 (Inherited: 0xd0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct F*a422f9d4ff *e0ead3eac1; // 0xd0(0x70)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *7e7d3ed6bd; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*965ac1f43b
// Size: 0xe0 (Inherited: 0xe0)
struct U*965ac1f43b : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class MovieSceneTracks.*3acd364788
// Size: 0xf0 (Inherited: 0xe0)
struct U*3acd364788 : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.*4c5af0ddb4
// Size: 0xe0 (Inherited: 0xe0)
struct U*4c5af0ddb4 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*5d49aac43f
// Size: 0xe0 (Inherited: 0xe0)
struct U*5d49aac43f : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32 *57fdae08aa; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x190 (Inherited: 0xd0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct F*8ed3cfc9a1 Params; // 0xd0(0x90)
	struct UAnimSequence* AnimSequence; // 0x160(0x08)
	struct UAnimSequenceBase* Animation; // 0x168(0x08)
	float StartOffset; // 0x170(0x04)
	float EndOffset; // 0x174(0x04)
	float PlayRate; // 0x178(0x04)
	char bReverse : 1; // 0x17c(0x01)
	char pad_17C_1 : 7; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FName SlotName; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *1a0bbe09b9; // 0xb8(0x10)
};

// Class MovieSceneTracks.*c11069c536
// Size: 0x150 (Inherited: 0xd0)
struct U*c11069c536 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*754bde3481 *754bde3481; // 0xd8(0x78)
};

// Class MovieSceneTracks.*8125bd491e
// Size: 0x140 (Inherited: 0xd0)
struct U*8125bd491e : UMovieSceneSection {
	struct F*2c37a623a9 Parameters; // 0xd0(0x14)
	float StartOffset; // 0xe4(0x04)
	float TimeScale; // 0xe8(0x04)
	float PrerollTime; // 0xec(0x04)
	struct UMovieSceneSequence* *1642d070d3; // 0xf0(0x08)
	struct AActor* *bcd80804ce; // 0xf8(0x1c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString *c9f07539cd; // 0x118(0x10)
	struct FDirectoryPath *7f737f65d6; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class MovieSceneTracks.*4f7a717dba
// Size: 0x150 (Inherited: 0x140)
struct U*4f7a717dba : U*8125bd491e {
	struct FText DisplayName; // 0x138(0x18)
};

// Class MovieSceneTracks.MovieSceneSubTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x2a0 (Inherited: 0xd0)
struct UMovieSceneVectorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Curves[0x04]; // 0xd8(0x1c0)
	int32 *30caac472e; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
};

