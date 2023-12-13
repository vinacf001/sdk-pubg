// Class RoadRuntime.CrossActor
// Size: 0x430 (Inherited: 0x400)
struct ACrossActor : AStaticMeshActor {
	struct FString *fe7c187b5e; // 0x400(0x10)
	struct TArray<struct F*7263eaa3e8> *5a328fc7cf; // 0x410(0x10)
	struct TArray<struct F*f506fe5f2e> *a5fff62a89; // 0x420(0x10)

	bool *f6d728170a(); // Function RoadRuntime.CrossActor.*f6d728170a // Final|Native|Public|HasDefaults // @ game+0x6804340
	bool *f9635a76e9(); // Function RoadRuntime.CrossActor.*f9635a76e9 // Final|Native|Public|HasDefaults // @ game+0x68045dc
	bool *694e9228d7(); // Function RoadRuntime.CrossActor.*694e9228d7 // Final|Native|Public|HasDefaults // @ game+0x68040a4
	bool *47d697e84b(); // Function RoadRuntime.CrossActor.*47d697e84b // Final|Native|Public|HasDefaults // @ game+0x6804878
	void *0197816a5c(); // Function RoadRuntime.CrossActor.*0197816a5c // Final|Native|Public // @ game+0x680404c
};

// Class RoadRuntime.RoadActor
// Size: 0x468 (Inherited: 0x3f0)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *1ab51ba7f6; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FVector LocalOffset; // 0x3f4(0x0c)
	struct FString *fe7c187b5e; // 0x400(0x10)
	struct USplineComponent* Spline; // 0x410(0x08)
	int32 *5d3ef60b09; // 0x418(0x04)
	int32 *dfe2620da0; // 0x41c(0x04)
	struct UStaticMesh* *e43084367a; // 0x420(0x08)
	struct TArray<struct USplineMeshComponent*> *90f1f9c972; // 0x428(0x10)
	struct TArray<struct F*a6b3620a40> *5a328fc7cf; // 0x438(0x10)
	struct TArray<struct F*96ad294bdd> *a5fff62a89; // 0x448(0x10)
	struct TArray<struct F*9c292078c3> *9fa9d39b38; // 0x458(0x10)
};

