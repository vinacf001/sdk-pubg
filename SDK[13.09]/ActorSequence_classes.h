// Class ActorSequence.ActorSequence
// Size: 0x360 (Inherited: 0x330)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*1eb9bfc2f8 *c2ff1b4e5f; // 0x338(0x20)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x230 (Inherited: 0x1f0)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings *1f133caf89; // 0x1f0(0x28)
	struct UActorSequence* Sequence; // 0x218(0x08)
	struct U*fd8e4fbc85* SequencePlayer; // 0x220(0x08)
	bool *df97381279; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
};

// Class ActorSequence.*fd8e4fbc85
// Size: 0x700 (Inherited: 0x700)
struct U*fd8e4fbc85 : U*c992a80a5e {
	struct FMulticastDelegate OnPlay; // 0x370(0x10)
	struct FMulticastDelegate OnStop; // 0x380(0x10)
	struct FMulticastDelegate OnPause; // 0x390(0x10)
	char *2a032012a4 : 1; // 0x3a0(0x01)
	char *c74475af73 : 1; // 0x3a0(0x01)
	char *3d373b0a13 : 1; // 0x3a0(0x01)
	struct UMovieSceneSequence* Sequence; // 0x3a8(0x08)
	float *2bb06f91ab; // 0x3b0(0x04)
	float StartTime; // 0x3b4(0x04)
	float *a5e35cc094; // 0x3b8(0x04)
	int32 *6238e92459; // 0x3bc(0x04)
	struct FMovieSceneSequencePlaybackSettings *1f133caf89; // 0x3d0(0x28)

	void Stop(); // Function MovieScene.*c992a80a5e.Stop // None // @ game+0x8bf238
	void *90ef13c7e8(); // Function MovieScene.*c992a80a5e.*90ef13c7e8 // None // @ game+0x5c98ea8
	void SetPlaybackPosition(); // Function MovieScene.*c992a80a5e.SetPlaybackPosition // None // @ game+0xc8a0e0
	struct FMovieSceneObjectBindingID *726aef7834(); // Function MovieScene.*c992a80a5e.*726aef7834 // None // @ game+0x5c98d18
	void *66dd39edcc(); // Function MovieScene.*c992a80a5e.*66dd39edcc // None // @ game+0x5c98ef0
	void *1ab067b5fe(); // Function MovieScene.*c992a80a5e.*1ab067b5fe // None // @ game+0x5c98e3c
	void SetPlayRate(); // Function MovieScene.*c992a80a5e.SetPlayRate // None // @ game+0x5c98fa4
	void Pause(); // Function MovieScene.*c992a80a5e.Pause // None // @ game+0x5c98edc
	void *ed91657adb(); // Function MovieScene.*c992a80a5e.*ed91657adb // None // @ game+0x5c99118
	void IsPlaying(); // Function MovieScene.*c992a80a5e.IsPlaying // None // @ game+0x5c98ec0
	void *84b1451f3a(); // Function MovieScene.*c992a80a5e.*84b1451f3a // None // @ game+0x5c98cec
	void *697a521358(); // Function MovieScene.*c992a80a5e.*697a521358 // None // @ game+0x5c98e78
	void Play(); // Function MovieScene.*c992a80a5e.Play // None // @ game+0xcbb934
	void *6970975b29(); // Function MovieScene.*c992a80a5e.*6970975b29 // None // @ game+0x5c98e90
	void PlayReverse(); // Function MovieScene.*c992a80a5e.PlayReverse // None // @ game+0x5c98f88
	void GetPlayRate(); // Function MovieScene.*c992a80a5e.GetPlayRate // None // @ game+0x5c98e60
	void *3370c5db82(float NewStartTime); // Function MovieScene.*c992a80a5e.*3370c5db82 // None // @ game+0x5c9903c
};

