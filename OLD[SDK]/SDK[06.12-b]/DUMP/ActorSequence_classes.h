// Class ActorSequence.ActorSequence
// Size: 0x360 (Inherited: 0x330)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*299bc15e9c *661e025ca5; // 0x338(0x20)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x240 (Inherited: 0x200)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings *17013ee0de; // 0x200(0x28)
	struct UActorSequence* Sequence; // 0x228(0x08)
	struct U*6f05a24230* SequencePlayer; // 0x230(0x08)
	bool *f0981d3ec8; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class ActorSequence.*6f05a24230
// Size: 0x700 (Inherited: 0x700)
struct U*6f05a24230 : U*077b952708 {
};

