// Class MovieSceneTracks.*fa4fc38818
// Size: 0xe0 (Inherited: 0xd0)
struct U*fa4fc38818 : UMovieSceneSection {
	struct FGuid *64436b0cf3; // 0xd0(0x10)
};

// Class MovieSceneTracks.*746387bce7
// Size: 0x100 (Inherited: 0xe0)
struct U*746387bce7 : U*fa4fc38818 {
	struct FName *055f551900; // 0xe0(0x08)
	struct FName *a4c1211f17; // 0xe8(0x08)
	char *11c5ec156e : 1; // 0xf0(0x01)
	char *d70cf700b6 : 1; // 0xf0(0x01)
	char *8d4d0bc9a6 : 1; // 0xf0(0x01)
	char *5c94567c4c : 1; // 0xf0(0x01)
	char *a44078fefc : 1; // 0xf0(0x01)
	char *64ed7cc90b : 1; // 0xf0(0x01)
	char pad_F0_6 : 2; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// Class MovieSceneTracks.*e50d1a234f
// Size: 0x160 (Inherited: 0xe0)
struct U*e50d1a234f : U*fa4fc38818 {
	struct FRichCurve *42993f6508; // 0xe0(0x70)
	enum class MovieScene3DPathSection_Axis *dcdb80cdcf; // 0x150(0x01)
	enum class MovieScene3DPathSection_Axis *b7de8813ba; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	char bFollow : 1; // 0x154(0x01)
	char *3c7b58347f : 1; // 0x154(0x01)
	char *ae43a0eb39 : 1; // 0x154(0x01)
	char pad_154_3 : 5; // 0x154(0x01)
	char pad_155[0xb]; // 0x155(0x0b)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> *3200c68797; // 0xb8(0x10)
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

// Class MovieSceneTracks.*8143b1df1e
// Size: 0x170 (Inherited: 0xd0)
struct U*8143b1df1e : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5d74728a19 *a75ca7d740; // 0xd8(0x70)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct FString> *5661938b9f; // 0x158(0x10)
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
	struct FRichCurve *148eafd7f3; // 0xe8(0x70)
	struct FRichCurve *bc8e2145da; // 0x158(0x70)
	bool *cf7d228117; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	DelegateProperty *6c1db6614a; // 0x1d0(0x10)
	struct FMulticastDelegate *fd14034d1b; // 0x1e0(0x10)
	struct FMulticastDelegate *f2fb9b17fd; // 0x1f0(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *a40bc73c96; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneBoolSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	bool DefaultValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct F*5d74728a19 *425e77dd15; // 0xe0(0x70)
};

// Class MovieSceneTracks.*4a58fd32df
// Size: 0x150 (Inherited: 0x150)
struct U*4a58fd32df : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5d74728a19 *cb6637f951; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*bc37e320ea
// Size: 0x110 (Inherited: 0xd0)
struct U*bc37e320ea : UMovieSceneSection {
	struct F*0e4a918a02 *428359d334; // 0xd0(0x20)
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
	struct TArray<struct UMovieSceneSection*> *936737fd2b; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xe0 (Inherited: 0xd0)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid *910b6593fe; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*cd81047ef5
// Size: 0x110 (Inherited: 0xd0)
struct U*cd81047ef5 : UMovieSceneSection {
	struct F*96b9dab213 *db6894b6a9; // 0xd0(0x20)
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
	struct TArray<struct UMovieSceneSection*> *e2791d6917; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x2a0 (Inherited: 0xd0)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *27e6f842d3; // 0xd8(0x70)
	struct FRichCurve *b83b3df190; // 0x148(0x70)
	struct FRichCurve *8f28636e1f; // 0x1b8(0x70)
	struct FRichCurve *c02750cfe0; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class MovieSceneTracks.*ac9a5af78c
// Size: 0x150 (Inherited: 0xd0)
struct U*ac9a5af78c : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5d74728a19 *cc9e20575f; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*676ad291c5
// Size: 0x1e0 (Inherited: 0xd0)
struct U*676ad291c5 : UMovieSceneSection {
	struct F*bb614fb6c5 Events; // 0xd0(0x68)
	struct F*6cafaee3b9 EventData; // 0x138(0x20)
	char pad_158[0x88]; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	struct FGuid *33d6d55a00; // 0xc8(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xe0 (Inherited: 0xc0)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char *f910bc4e96 : 1; // 0xb8(0x01)
	char *3b4aa2c40a : 1; // 0xb8(0x01)
	enum class *49e1f639c8 *f56bf60158; // 0xbc(0x01)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x150 (Inherited: 0xd0)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *2d625a83c8; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*737fd78fa2
// Size: 0x160 (Inherited: 0x150)
struct U*737fd78fa2 : UMovieSceneFloatSection {
	struct FLinearColor *43c44276e7; // 0x148(0x10)
	char *a7d566211e : 1; // 0x158(0x01)
};

// Class MovieSceneTracks.*7df9aa45b5
// Size: 0x150 (Inherited: 0x150)
struct U*7df9aa45b5 : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.*b68ed1847b
// Size: 0x150 (Inherited: 0xd0)
struct U*b68ed1847b : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5d74728a19 *ca52fcc29e; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*73ffc68f39
// Size: 0xf0 (Inherited: 0xd0)
struct U*73ffc68f39 : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FName> *af908a77c5; // 0xd8(0x10)
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
	struct TArray<struct F*87a8276e8e> *689d774ebb; // 0xd0(0x10)
	struct TArray<struct F*f613d01826> *df4fea345d; // 0xe0(0x10)
	struct TArray<struct F*e1567a4e2e> *56deb15425; // 0xf0(0x10)
};

// Class MovieSceneTracks.*be5e5f7e3e
// Size: 0xd0 (Inherited: 0xc0)
struct U*be5e5f7e3e : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.*7876a2c33b
// Size: 0xd0 (Inherited: 0xd0)
struct U*7876a2c33b : U*be5e5f7e3e {
	int32 MaterialIndex; // 0xc8(0x04)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xd0 (Inherited: 0xd0)
struct UMovieSceneMaterialParameterCollectionTrack : U*be5e5f7e3e {
	struct UMaterialParameterCollection* MPC; // 0xc8(0x08)
};

// Class MovieSceneTracks.*90334850d8
// Size: 0xd0 (Inherited: 0xc0)
struct U*90334850d8 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x140 (Inherited: 0xd0)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct F*5d74728a19 *baa8468f2e; // 0xd0(0x70)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *a655e64f90; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*31c76a8aea
// Size: 0xe0 (Inherited: 0xe0)
struct U*31c76a8aea : UMovieScenePropertyTrack {
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

// Class MovieSceneTracks.*0dd872a24f
// Size: 0xf0 (Inherited: 0xe0)
struct U*0dd872a24f : UMovieScenePropertyTrack {
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

// Class MovieSceneTracks.*56bd8f0c88
// Size: 0xe0 (Inherited: 0xe0)
struct U*56bd8f0c88 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*901e94d983
// Size: 0xe0 (Inherited: 0xe0)
struct U*901e94d983 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32 *4c8968a7e5; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x190 (Inherited: 0xd0)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct F*6d99390fca Params; // 0xd0(0x90)
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
	struct TArray<struct UMovieSceneSection*> *a9087e1f54; // 0xb8(0x10)
};

// Class MovieSceneTracks.*1f3354da9e
// Size: 0x150 (Inherited: 0xd0)
struct U*1f3354da9e : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*bff53d7b09 *bff53d7b09; // 0xd8(0x78)
};

// Class MovieSceneTracks.*fff8fa0297
// Size: 0x140 (Inherited: 0xd0)
struct U*fff8fa0297 : UMovieSceneSection {
	struct F*dcce9ef5e1 Parameters; // 0xd0(0x14)
	float StartOffset; // 0xe4(0x04)
	float TimeScale; // 0xe8(0x04)
	float PrerollTime; // 0xec(0x04)
	struct UMovieSceneSequence* *9048b8e5f1; // 0xf0(0x08)
	struct AActor* *53f40af013; // 0xf8(0x1c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString *a9e6e03030; // 0x118(0x10)
	struct FDirectoryPath *dab2a8f5ad; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class MovieSceneTracks.*3f38edfa9b
// Size: 0x150 (Inherited: 0x140)
struct U*3f38edfa9b : U*fff8fa0297 {
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
	int32 *8215ca4afc; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
};

