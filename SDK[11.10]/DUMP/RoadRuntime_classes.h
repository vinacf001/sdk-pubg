// Class RoadRuntime.CrossActor
// Size: 0x440 (Inherited: 0x410)
struct ACrossActor : AStaticMeshActor {
	struct FString *239deb22ac; // 0x410(0x10)
	struct TArray<struct F*da3fc6fcb8> *8de59d22d8; // 0x420(0x10)
	struct TArray<struct F*4c7ad277d8> *c25964cb6a; // 0x430(0x10)

	bool *5765e683bb(); // Function RoadRuntime.CrossActor.*5765e683bb // Final|Native|Public|HasDefaults // @ game+0x69bf730
	bool *007ca4fe91(); // Function RoadRuntime.CrossActor.*007ca4fe91 // Final|Native|Public|HasDefaults // @ game+0x69bf494
	void *fd6b0bb66d(); // Function RoadRuntime.CrossActor.*fd6b0bb66d // Final|Native|Public // @ game+0x69bf43c
	bool *0838d7e154(); // Function RoadRuntime.CrossActor.*0838d7e154 // Final|Native|Public|HasDefaults // @ game+0x69bfc68
	bool *26486b7184(); // Function RoadRuntime.CrossActor.*26486b7184 // Final|Native|Public|HasDefaults // @ game+0x69bf9cc
};

// Class RoadRuntime.RoadActor
// Size: 0x478 (Inherited: 0x400)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *027ccf2fca; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector LocalOffset; // 0x404(0x0c)
	struct FString *239deb22ac; // 0x410(0x10)
	struct USplineComponent* Spline; // 0x420(0x08)
	int32 *ca1df9feca; // 0x428(0x04)
	int32 *862dc237ba; // 0x42c(0x04)
	struct UStaticMesh* *7e69c4a8ca; // 0x430(0x08)
	struct TArray<struct USplineMeshComponent*> *22c75f55a4; // 0x438(0x10)
	struct TArray<struct F*6332d153d5> *8de59d22d8; // 0x448(0x10)
	struct TArray<struct F*fc659451b0> *c25964cb6a; // 0x458(0x10)
	struct TArray<struct F*bad823b6c7> *a45e083a01; // 0x468(0x10)
};

