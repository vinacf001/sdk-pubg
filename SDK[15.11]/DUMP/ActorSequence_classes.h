// Class ActorSequence.ActorSequence
// Size: 0x360 (Inherited: 0x330)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*eff8335965 *d465997542; // 0x338(0x20)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x240 (Inherited: 0x200)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings *ac26c294a7; // 0x200(0x28)
	struct UActorSequence* Sequence; // 0x228(0x08)
	struct U*48ad3a1279* SequencePlayer; // 0x230(0x08)
	bool *48b90a7939; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class ActorSequence.*48ad3a1279
// Size: 0x700 (Inherited: 0x700)
struct U*48ad3a1279 : U*b09f37ac16 {
};

