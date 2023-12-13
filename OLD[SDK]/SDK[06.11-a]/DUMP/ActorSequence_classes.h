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
	struct FMulticastDelegate OnPlay; // 0x378(0x10)
	struct FMulticastDelegate OnStop; // 0x388(0x10)
	struct FMulticastDelegate OnPause; // 0x398(0x10)
	char *2e44ab1b7e : 1; // 0x3a8(0x01)
	char *bdac78466e : 1; // 0x3a8(0x01)
	char *41a9c2b291 : 1; // 0x3a8(0x01)
	struct UMovieSceneSequence* Sequence; // 0x3b0(0x08)
	float *f591e2b673; // 0x3b8(0x04)
	float StartTime; // 0x3bc(0x04)
	float *6962c2e26e; // 0x3c0(0x04)
	int32 *615e67ef66; // 0x3c4(0x04)
	struct FMovieSceneSequencePlaybackSettings *17013ee0de; // 0x3d8(0x28)

	void *db13708ed5(float ReturnValue); // Function MovieScene.*077b952708.*db13708ed5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e54
	void Stop(); // Function MovieScene.*077b952708.Stop // Final|Native|Public|BlueprintCallable // @ game+0x64730f4
	void PlayReverse(); // Function MovieScene.*077b952708.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x6472eb8
	void Pause(); // Function MovieScene.*077b952708.Pause // Final|Native|Public|BlueprintCallable // @ game+0x6472e88
	void Play(); // Function MovieScene.*077b952708.Play // Final|Native|Public|BlueprintCallable // @ game+0x6472e9c
	void *33ff4dc197(float NewEndTime); // Function MovieScene.*077b952708.*33ff4dc197 // Final|Native|Public|BlueprintCallable // @ game+0x6473004
	void *e619608247(float ReturnValue); // Function MovieScene.*077b952708.*e619608247 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472de8
	void SetPlayRate(); // Function MovieScene.*077b952708.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x6472ed4
	void *369f181ebb(); // Function MovieScene.*077b952708.*369f181ebb // Final|Native|Public|BlueprintCallable // @ game+0x6472c98
	void *b45e0dc9b9(struct TArray<struct UObject*> ReturnValue); // Function MovieScene.*077b952708.*b45e0dc9b9 // Final|Native|Public|BlueprintCallable // @ game+0x6472cc4
	void GetPlayRate(float ReturnValue); // Function MovieScene.*077b952708.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e0c
	void *b0a7ef1c52(); // Function MovieScene.*077b952708.*b0a7ef1c52 // Final|Native|Public|BlueprintCallable // @ game+0x64730e0
	void *299565d7ba(); // Function MovieScene.*077b952708.*299565d7ba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e24
	void IsPlaying(bool ReturnValue); // Function MovieScene.*077b952708.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e6c
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.*077b952708.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x6472f6c
	void *af322aa928(); // Function MovieScene.*077b952708.*af322aa928 // Final|Native|Public|BlueprintCallable // @ game+0xe7b4ac
	void *65ef202f2e(); // Function MovieScene.*077b952708.*65ef202f2e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6472e3c
};

