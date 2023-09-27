// Class ActorSequence.ActorSequence
// Size: 0x360 (Inherited: 0x330)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*1eb9bfc2f8 *c2ff1b4e5f; // 0x338(0x20)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x240 (Inherited: 0x200)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings *1f133caf89; // 0x200(0x28)
	struct UActorSequence* Sequence; // 0x228(0x08)
	struct U*fd8e4fbc85* SequencePlayer; // 0x230(0x08)
	bool *df97381279; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class ActorSequence.*fd8e4fbc85
// Size: 0x700 (Inherited: 0x700)
struct U*fd8e4fbc85 : U*c992a80a5e {
};

