// Class RoadRuntime.CrossActor
// Size: 0x430 (Inherited: 0x400)
struct ACrossActor : AStaticMeshActor {
	struct FString *239deb22ac; // 0x400(0x10)
	struct TArray<struct F*da3fc6fcb8> *8de59d22d8; // 0x410(0x10)
	struct TArray<struct F*4c7ad277d8> *c25964cb6a; // 0x420(0x10)

	bool *5765e683bb(); // Function RoadRuntime.CrossActor.*5765e683bb // Final|Native|Public|HasDefaults // @ game+0x66f0044
	bool *007ca4fe91(); // Function RoadRuntime.CrossActor.*007ca4fe91 // Final|Native|Public|HasDefaults // @ game+0x66efda8
	void *fd6b0bb66d(); // Function RoadRuntime.CrossActor.*fd6b0bb66d // Final|Native|Public // @ game+0x66efd50
	bool *0838d7e154(); // Function RoadRuntime.CrossActor.*0838d7e154 // Final|Native|Public|HasDefaults // @ game+0x66f057c
	bool *26486b7184(); // Function RoadRuntime.CrossActor.*26486b7184 // Final|Native|Public|HasDefaults // @ game+0x66f02e0
};

// Class RoadRuntime.RoadActor
// Size: 0x468 (Inherited: 0x3f0)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *027ccf2fca; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FVector LocalOffset; // 0x3f4(0x0c)
	struct FString *239deb22ac; // 0x400(0x10)
	struct USplineComponent* Spline; // 0x410(0x08)
	int32 *ca1df9feca; // 0x418(0x04)
	int32 *862dc237ba; // 0x41c(0x04)
	struct UStaticMesh* *7e69c4a8ca; // 0x420(0x08)
	struct TArray<struct USplineMeshComponent*> *22c75f55a4; // 0x428(0x10)
	struct TArray<struct F*6332d153d5> *8de59d22d8; // 0x438(0x10)
	struct TArray<struct F*fc659451b0> *c25964cb6a; // 0x448(0x10)
	struct TArray<struct F*bad823b6c7> *a45e083a01; // 0x458(0x10)
};

