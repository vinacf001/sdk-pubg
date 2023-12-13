// Class MovieSceneTracks.*47ed6a0f2e
// Size: 0xe0 (Inherited: 0xd0)
struct U*47ed6a0f2e : UMovieSceneSection {
	struct FGuid *57f58e8e52; // 0xd0(0x10)
};

// Class MovieSceneTracks.*dedcecbc8c
// Size: 0x100 (Inherited: 0xe0)
struct U*dedcecbc8c : U*47ed6a0f2e {
	struct FName *d0cdbdd0fa; // 0xe0(0x08)
	struct FName *ea2e0abe9d; // 0xe8(0x08)
	char *bf27996300 : 1; // 0xf0(0x01)
	char *3e5bdfe1fa : 1; // 0xf0(0x01)
	char *cc9cbd7408 : 1; // 0xf0(0x01)
	char *9ecfe24832 : 1; // 0xf0(0x01)
	char *881183003a : 1; // 0xf0(0x01)
	char *e5defbbdd2 : 1; // 0xf0(0x01)
	char pad_F0_6 : 2; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// Class MovieSceneTracks.*418509a4fd
// Size: 0x160 (Inherited: 0xe0)
struct U*418509a4fd : U*47ed6a0f2e {
	struct FRichCurve *bf1fbc1df6; // 0xe0(0x70)
	enum class MovieScene3DPathSection_Axis *22ae67a2ac; // 0x150(0x01)
	enum class MovieScene3DPathSection_Axis *28d457f044; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	char bFollow : 1; // 0x154(0x01)
	char *b8708eb9e5 : 1; // 0x154(0x01)
	char *d314ad13a8 : 1; // 0x154(0x01)
	char pad_154_3 : 5; // 0x154(0x01)
	char pad_155[0xb]; // 0x155(0x0b)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> *dc4e129088; // 0xb8(0x10)
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

// Class MovieSceneTracks.*37f054e313
// Size: 0x170 (Inherited: 0xd0)
struct U*37f054e313 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*9953b1ece2 *2763ad7277; // 0xd8(0x70)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct FString> *ace2611655; // 0x158(0x10)
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
	struct FRichCurve *431322e471; // 0xe8(0x70)
	struct FRichCurve *f589f42444; // 0x158(0x70)
	bool *9de8ddd796; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	DelegateProperty *49c893029b; // 0x1d0(0x10)
	struct FMulticastDelegate *19244ea5be; // 0x1e0(0x10)
	struct FMulticastDelegate *ef3b2ee252; // 0x1f0(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *1f7f07fda0; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	bool DefaultValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct F*9953b1ece2 *d3ec0e8326; // 0xe0(0x70)
};

// Class MovieSceneTracks.*aad873c255
// Size: 0x150 (Inherited: 0x150)
struct U*aad873c255 : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*9953b1ece2 *69d8b58fa8; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*1d7ea7eada
// Size: 0x110 (Inherited: 0xd0)
struct U*1d7ea7eada : UMovieSceneSection {
	struct F*1b44c18413 *31fee37d10; // 0xd0(0x20)
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
	struct TArray<struct UMovieSceneSection*> *a092e4d6c1; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xe0 (Inherited: 0xd0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid *bdeb2726f9; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*126fc942fd
// Size: 0x110 (Inherited: 0xd0)
struct U*126fc942fd : UMovieSceneSection {
	struct F*e5b8f89a78 *5b2d992388; // 0xd0(0x20)
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
	struct TArray<struct UMovieSceneSection*> *c12fc8d815; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x2a0 (Inherited: 0xd0)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *6f6a0b9222; // 0xd8(0x70)
	struct FRichCurve *d98e034818; // 0x148(0x70)
	struct FRichCurve *89be386b93; // 0x1b8(0x70)
	struct FRichCurve *491287cf08; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class MovieSceneTracks.*9b1d9641a7
// Size: 0x150 (Inherited: 0xd0)
struct U*9b1d9641a7 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*9953b1ece2 *e2ae9b1757; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*517b24b87b
// Size: 0x1e0 (Inherited: 0xd0)
struct U*517b24b87b : UMovieSceneSection {
	struct F*e8e6462e26 Events; // 0xd0(0x68)
	struct F*51e8524cda EventData; // 0x138(0x20)
	char pad_158[0x88]; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	struct FGuid *cf78fc3f4e; // 0xc8(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char *d81418be8a : 1; // 0xb8(0x01)
	char *4be71478c3 : 1; // 0xb8(0x01)
	enum class *f319d48929 *8beb690027; // 0xbc(0x01)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *aa79e9f954; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*6b5b9c2edd
// Size: 0x160 (Inherited: 0x150)
struct U*6b5b9c2edd : UMovieSceneFloatSection {
	struct FLinearColor *83572fc8a0; // 0x148(0x10)
	char *7160127719 : 1; // 0x158(0x01)
};

// Class MovieSceneTracks.*13b1e4e333
// Size: 0x150 (Inherited: 0x150)
struct U*13b1e4e333 : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.*5752614e64
// Size: 0x150 (Inherited: 0xd0)
struct U*5752614e64 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*9953b1ece2 *c80e68ab95; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*859445d4e0
// Size: 0xf0 (Inherited: 0xd0)
struct U*859445d4e0 : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FName> *5e2147146d; // 0xd8(0x10)
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
	struct TArray<struct F*6decb936f9> *8428f40b35; // 0xd0(0x10)
	struct TArray<struct F*17e2cdf3d1> *b920b21a2c; // 0xe0(0x10)
	struct TArray<struct F*6140021f51> *a3e37a1a3d; // 0xf0(0x10)
};

// Class MovieSceneTracks.*7909cc0548
// Size: 0xd0 (Inherited: 0xc0)
struct U*7909cc0548 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*e8023a43f9
// Size: 0xd0 (Inherited: 0xd0)
struct U*e8023a43f9 : U*7909cc0548 {
	int32 MaterialIndex; // 0xc8(0x04)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneMaterialParameterCollectionTrack : U*7909cc0548 {
	struct UMaterialParameterCollection* MPC; // 0xc8(0x08)
};

// Class MovieSceneTracks.*7586e1f699
// Size: 0xd0 (Inherited: 0xc0)
struct U*7586e1f699 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x140 (Inherited: 0xd0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct F*9953b1ece2 *f99822e699; // 0xd0(0x70)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *57578fc481; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*5f3b3be160
// Size: 0xe0 (Inherited: 0xe0)
struct U*5f3b3be160 : UMovieScenePropertyTrack {
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

// Class MovieSceneTracks.*7b86eb6491
// Size: 0xf0 (Inherited: 0xe0)
struct U*7b86eb6491 : UMovieScenePropertyTrack {
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

// Class MovieSceneTracks.*4472db7881
// Size: 0xe0 (Inherited: 0xe0)
struct U*4472db7881 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*ee74d2c268
// Size: 0xe0 (Inherited: 0xe0)
struct U*ee74d2c268 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32 *829d61e77f; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x190 (Inherited: 0xd0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct F*4787beef47 Params; // 0xd0(0x90)
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
	struct TArray<struct UMovieSceneSection*> *7b0fac4b10; // 0xb8(0x10)
};

// Class MovieSceneTracks.*3a3ab39067
// Size: 0x150 (Inherited: 0xd0)
struct U*3a3ab39067 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*71d5760fff *71d5760fff; // 0xd8(0x78)
};

// Class MovieSceneTracks.*494334d97b
// Size: 0x140 (Inherited: 0xd0)
struct U*494334d97b : UMovieSceneSection {
	struct F*a11faaead1 Parameters; // 0xd0(0x14)
	float StartOffset; // 0xe4(0x04)
	float TimeScale; // 0xe8(0x04)
	float PrerollTime; // 0xec(0x04)
	struct UMovieSceneSequence* *eb65d08751; // 0xf0(0x08)
	struct AActor* *6bfd267c58; // 0xf8(0x1c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString *0b5b8d77ba; // 0x118(0x10)
	struct FDirectoryPath *21e7b3f968; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class MovieSceneTracks.*c50c4cffe8
// Size: 0x150 (Inherited: 0x140)
struct U*c50c4cffe8 : U*494334d97b {
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
	int32 *5d3eeb7788; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
};

