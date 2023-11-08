// Class RoadRuntime.CrossActor
// Size: 0x428 (Inherited: 0x3f8)
struct ACrossActor : AStaticMeshActor {
	struct FString *fe7c187b5e; // 0x3f8(0x10)
	struct TArray<struct F*7263eaa3e8> *5a328fc7cf; // 0x408(0x10)
	struct TArray<struct F*f506fe5f2e> *a5fff62a89; // 0x418(0x10)

	bool *f6d728170a(); // Function RoadRuntime.CrossActor.*f6d728170a // Final|Native|Public|HasDefaults // @ game+0x6817df8
	bool *f9635a76e9(struct FVector Param1, struct FVector Param3); // Function RoadRuntime.CrossActor.*f9635a76e9 // Final|Native|Public|HasDefaults // @ game+0x6818094
	struct FRotator *694e9228d7(struct FVector Param3, bool Param5); // Function RoadRuntime.CrossActor.*694e9228d7 // Final|Native|Public|HasDefaults // @ game+0x6817b5c
	bool *47d697e84b(struct UStaticMesh* Param0); // Function RoadRuntime.CrossActor.*47d697e84b // Final|Native|Public|HasDefaults // @ game+0x6818330
	void *0197816a5c(); // Function RoadRuntime.CrossActor.*0197816a5c // Final|Native|Public // @ game+0x6817b04
};

// Class RoadRuntime.RoadActor
// Size: 0x460 (Inherited: 0x3e8)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *1ab51ba7f6; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FVector LocalOffset; // 0x3ec(0x0c)
	struct FString *fe7c187b5e; // 0x3f8(0x10)
	struct USplineComponent* Spline; // 0x408(0x08)
	int32 *5d3ef60b09; // 0x410(0x04)
	int32 *dfe2620da0; // 0x414(0x04)
	struct UStaticMesh* *e43084367a; // 0x418(0x08)
	struct TArray<struct USplineMeshComponent*> *90f1f9c972; // 0x420(0x10)
	struct TArray<struct F*a6b3620a40> *5a328fc7cf; // 0x430(0x10)
	struct TArray<struct F*96ad294bdd> *a5fff62a89; // 0x440(0x10)
	struct TArray<struct F*9c292078c3> *9fa9d39b38; // 0x450(0x10)
};

