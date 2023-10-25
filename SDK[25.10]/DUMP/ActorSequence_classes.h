// Class ActorSequence.ActorSequence
// Size: 0x360 (Inherited: 0x330)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*476b0d3797 *85d24cd4a7; // 0x338(0x20)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x240 (Inherited: 0x200)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings *71e043bb6c; // 0x200(0x28)
	struct UActorSequence* Sequence; // 0x228(0x08)
	struct U*f15b355656* SequencePlayer; // 0x230(0x08)
	bool *48ea1b0937; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
};

// Class ActorSequence.*f15b355656
// Size: 0x700 (Inherited: 0x700)
struct U*f15b355656 : U*14a032dbde {
};

