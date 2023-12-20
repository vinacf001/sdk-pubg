// Class MovieSceneTracks.*3ddd79b448
// Size: 0xe0 (Inherited: 0xd0)
struct U*3ddd79b448 : UMovieSceneSection {
	struct FGuid *4c1ab6615c; // 0xd0(0x10)
};

// Class MovieSceneTracks.*8f8466b923
// Size: 0x100 (Inherited: 0xe0)
struct U*8f8466b923 : U*3ddd79b448 {
	struct FName *cb3fc8827c; // 0xe0(0x08)
	struct FName *05334d3a77; // 0xe8(0x08)
	char *746a0e364d : 1; // 0xf0(0x01)
	char *524c3d894e : 1; // 0xf0(0x01)
	char *11ab23f76e : 1; // 0xf0(0x01)
	char *49befb5288 : 1; // 0xf0(0x01)
	char *281d82ff53 : 1; // 0xf0(0x01)
	char *c5b23ff5c2 : 1; // 0xf0(0x01)
	char pad_F0_6 : 2; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// Class MovieSceneTracks.*f8b0881a13
// Size: 0x160 (Inherited: 0xe0)
struct U*f8b0881a13 : U*3ddd79b448 {
	struct FRichCurve *3d63b9a91c; // 0xe0(0x70)
	enum class MovieScene3DPathSection_Axis *a2f7e54cd1; // 0x150(0x01)
	enum class MovieScene3DPathSection_Axis *8dce6d92dd; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	char bFollow : 1; // 0x154(0x01)
	char *ae2ab6f58f : 1; // 0x154(0x01)
	char *691d19961c : 1; // 0x154(0x01)
	char pad_154_3 : 5; // 0x154(0x01)
	char pad_155[0xb]; // 0x155(0x0b)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> *43a3b1d033; // 0xb8(0x10)
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

// Class MovieSceneTracks.*4bfb792f2a
// Size: 0x170 (Inherited: 0xd0)
struct U*4bfb792f2a : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*0bb3c50063 *d078646302; // 0xd8(0x70)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct FString> *efd2a92b90; // 0x158(0x10)
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
	struct FRichCurve *9b6fcc7bf8; // 0xe8(0x70)
	struct FRichCurve *5e0d174c92; // 0x158(0x70)
	bool *38bd8081bb; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	DelegateProperty *f3f6bca861; // 0x1d0(0x10)
	struct FMulticastDelegate *3211c963e8; // 0x1e0(0x10)
	struct FMulticastDelegate *a84dd23fd5; // 0x1f0(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *0ad69e98c1; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	bool DefaultValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct F*0bb3c50063 *e26b59082e; // 0xe0(0x70)
};

// Class MovieSceneTracks.*83dc986789
// Size: 0x150 (Inherited: 0x150)
struct U*83dc986789 : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*0bb3c50063 *4abf3e6d9a; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*17ee87eb40
// Size: 0x110 (Inherited: 0xd0)
struct U*17ee87eb40 : UMovieSceneSection {
	struct F*4915aa1936 *7053d48ce7; // 0xd0(0x20)
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
	struct TArray<struct UMovieSceneSection*> *830c6723e2; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xe0 (Inherited: 0xd0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid *135a2db555; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*a9c2058acd
// Size: 0x110 (Inherited: 0xd0)
struct U*a9c2058acd : UMovieSceneSection {
	struct F*ccd4bdcfc2 *aa353f8bc4; // 0xd0(0x20)
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
	struct TArray<struct UMovieSceneSection*> *61af4f09b6; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x2a0 (Inherited: 0xd0)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *d2afe79a88; // 0xd8(0x70)
	struct FRichCurve *792dcb744a; // 0x148(0x70)
	struct FRichCurve *d0ea9dc3cc; // 0x1b8(0x70)
	struct FRichCurve *fccd6d3304; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class MovieSceneTracks.*a5ae01d28d
// Size: 0x150 (Inherited: 0xd0)
struct U*a5ae01d28d : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*0bb3c50063 *b9b0ec48fc; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*4fa2239032
// Size: 0x1e0 (Inherited: 0xd0)
struct U*4fa2239032 : UMovieSceneSection {
	struct F*045276c8aa Events; // 0xd0(0x68)
	struct F*c6539f8b88 EventData; // 0x138(0x20)
	char pad_158[0x88]; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	struct FGuid *62ba5e79b2; // 0xc8(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char *21e23af20d : 1; // 0xb8(0x01)
	char *a622a509be : 1; // 0xb8(0x01)
	enum class *3a3f54ddc4 *40a9c90470; // 0xbc(0x01)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *0796ed81e5; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*a1d991a4c7
// Size: 0x160 (Inherited: 0x150)
struct U*a1d991a4c7 : UMovieSceneFloatSection {
	struct FLinearColor *c5b49359fd; // 0x148(0x10)
	char *b1d853a51c : 1; // 0x158(0x01)
};

// Class MovieSceneTracks.*ea83d76f3d
// Size: 0x150 (Inherited: 0x150)
struct U*ea83d76f3d : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.*9d4eda2c1c
// Size: 0x150 (Inherited: 0xd0)
struct U*9d4eda2c1c : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*0bb3c50063 *121683ced5; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*15125ee164
// Size: 0xf0 (Inherited: 0xd0)
struct U*15125ee164 : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FName> *3dab3d308f; // 0xd8(0x10)
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
	struct TArray<struct F*cd23b8cf6f> *5c8c6d5932; // 0xd0(0x10)
	struct TArray<struct F*ef5e36734e> *5482f60810; // 0xe0(0x10)
	struct TArray<struct F*e3248d6b08> *c8426b5939; // 0xf0(0x10)
};

// Class MovieSceneTracks.*2df8161570
// Size: 0xd0 (Inherited: 0xc0)
struct U*2df8161570 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*83f7a4b779
// Size: 0xd0 (Inherited: 0xd0)
struct U*83f7a4b779 : U*2df8161570 {
	int32 MaterialIndex; // 0xc8(0x04)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneMaterialParameterCollectionTrack : U*2df8161570 {
	struct UMaterialParameterCollection* MPC; // 0xc8(0x08)
};

// Class MovieSceneTracks.*b3be1112ee
// Size: 0xd0 (Inherited: 0xc0)
struct U*b3be1112ee : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x140 (Inherited: 0xd0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct F*0bb3c50063 *53ff26ad92; // 0xd0(0x70)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *e89dbaff73; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*0a4ef8faa9
// Size: 0xe0 (Inherited: 0xe0)
struct U*0a4ef8faa9 : UMovieScenePropertyTrack {
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

// Class MovieSceneTracks.*0e39ea3f49
// Size: 0xf0 (Inherited: 0xe0)
struct U*0e39ea3f49 : UMovieScenePropertyTrack {
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

// Class MovieSceneTracks.*7e49d64132
// Size: 0xe0 (Inherited: 0xe0)
struct U*7e49d64132 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*73e0c617d6
// Size: 0xe0 (Inherited: 0xe0)
struct U*73e0c617d6 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32 *ea7a7a816a; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x190 (Inherited: 0xd0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct F*ab8f40b693 Params; // 0xd0(0x90)
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
	struct TArray<struct UMovieSceneSection*> *8138f929e0; // 0xb8(0x10)
};

// Class MovieSceneTracks.*de7ee90021
// Size: 0x150 (Inherited: 0xd0)
struct U*de7ee90021 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*af85ca4d93 *af85ca4d93; // 0xd8(0x78)
};

// Class MovieSceneTracks.*7a6c383a56
// Size: 0x140 (Inherited: 0xd0)
struct U*7a6c383a56 : UMovieSceneSection {
	struct F*a0d8ec735c Parameters; // 0xd0(0x14)
	float StartOffset; // 0xe4(0x04)
	float TimeScale; // 0xe8(0x04)
	float PrerollTime; // 0xec(0x04)
	struct UMovieSceneSequence* *4233d3a507; // 0xf0(0x08)
	struct AActor* *cdcaa97654; // 0xf8(0x1c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString *78f12b24e4; // 0x118(0x10)
	struct FDirectoryPath *411f902a6c; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class MovieSceneTracks.*ff8f0a42e0
// Size: 0x150 (Inherited: 0x140)
struct U*ff8f0a42e0 : U*7a6c383a56 {
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
	int32 *1dfdfe3190; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
};

