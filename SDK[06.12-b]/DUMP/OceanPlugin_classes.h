// Class OceanPlugin.BuoyancyForceComponent
// Size: 0x530 (Inherited: 0x480)
struct UBuoyancyForceComponent : USceneComponent {
	struct AOceanManager* OceanManager; // 0x478(0x08)
	float MeshDensity; // 0x480(0x04)
	float FluidDensity; // 0x484(0x04)
	float FluidLinearDamping; // 0x488(0x04)
	float FluidAngularDamping; // 0x48c(0x04)
	struct FVector VelocityDamper; // 0x490(0x0c)
	bool ClampMaxVelocity; // 0x49c(0x01)
	float MaxUnderwaterVelocity; // 0x4a0(0x04)
	float TestPointRadius; // 0x4a4(0x04)
	struct TArray<struct FVector> TestPoints; // 0x4a8(0x10)
	bool ApplyForceToBones; // 0x4b8(0x01)
	bool SnapToSurfaceIfNoPhysics; // 0x4b9(0x01)
	bool TwoGerstnerIterations; // 0x4ba(0x01)
	struct TArray<float> PointDensityOverride; // 0x4c0(0x10)
	struct TArray<struct F*2c7209c8e5> BoneOverride; // 0x4d0(0x10)
	bool DrawDebugPoints; // 0x4e0(0x01)
	bool EnableStayUprightConstraint; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float StayUprightStiffness; // 0x4e4(0x04)
	float StayUprightDamping; // 0x4e8(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x4ec(0x0c)
	bool EnableWaveForces; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float WaveForceMultiplier; // 0x4fc(0x04)
	enum class ETickingGroup TickGroup; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float WaveHightMultiplier; // 0x504(0x04)
	bool *996117db25; // 0x508(0x01)
	char pad_509[0x27]; // 0x509(0x27)
};

// Class OceanPlugin.OceanManager
// Size: 0x480 (Inherited: 0x3f8)
struct AOceanManager : AActor {
	bool EnableGerstnerWaves; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FVector2D GlobalWaveDirection; // 0x3fc(0x08)
	float GlobalWaveSpeed; // 0x404(0x04)
	float GlobalWaveAmplitude; // 0x408(0x04)
	float DistanceCheck; // 0x40c(0x04)
	struct TArray<struct F*b74fb89548> WaveClusters; // 0x410(0x10)
	struct TArray<struct F*34238a6751> WaveSetOffsetsOverride; // 0x420(0x10)
	float NetWorkTimeOffset; // 0x430(0x04)
	bool bEnableLandscapeModulation; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float ModulationStartHeight; // 0x438(0x04)
	float ModulationMaxHeight; // 0x43c(0x04)
	float ModulationPower; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct ALandscape* Landscape; // 0x448(0x08)
	struct UTexture2D* HeightmapTexture; // 0x450(0x08)
	char pad_458[0x28]; // 0x458(0x28)

	struct FLinearColor *1c3828ae18(); // Function OceanPlugin.OceanManager.*1c3828ae18 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6979320
	struct FVector *894d0e122f(); // Function OceanPlugin.OceanManager.*894d0e122f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x4ed1a8
	struct UTexture2D* *702ea4d309(); // Function OceanPlugin.OceanManager.*702ea4d309 // Final|Native|Public|BlueprintCallable // @ game+0x6979744
};

// Class OceanPlugin.*04b1de8079
// Size: 0x590 (Inherited: 0x480)
struct U*04b1de8079 : USceneComponent {
	bool bUseDrag; // 0x478(0x01)
	bool bDebugOn; // 0x479(0x01)
	struct AOceanManager* TheOcean; // 0x480(0x08)
	float WaterDensity; // 0x488(0x04)
	float Gravity; // 0x48c(0x04)
	float MeshDensity; // 0x490(0x04)
	char pad_496[0x12]; // 0x496(0x12)
	struct UStaticMeshComponent* BuoyantMesh; // 0x4a8(0x08)
	struct FTransform MeshTransform; // 0x4b0(0x30)
	float FalseVolume; // 0x4e0(0x04)
	float BuoyancyReductionCoefficient; // 0x4e4(0x04)
	float BuoyancyPitchReductionCoefficient; // 0x4e8(0x04)
	float DensityCorrection; // 0x4ec(0x04)
	float DensityCorrectionModifier; // 0x4f0(0x04)
	float SubmergedVolume; // 0x4f4(0x04)
	float ImpactCoefficient; // 0x4f8(0x04)
	struct FVector DragCoefficient; // 0x4fc(0x0c)
	struct FVector SuctionCoefficient; // 0x508(0x0c)
	float ViscousDragCoefficient; // 0x514(0x04)
	float MaxSlamAcceleration; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct FVector> AdvancedGridHeight; // 0x520(0x10)
	struct TArray<struct F*e07e7a22bc> SubmergedTris; // 0x530(0x10)
	struct TArray<float> TriSizes; // 0x540(0x10)
	struct TArray<float> TriSubmergedArea; // 0x550(0x10)
	char pad_560[0x30]; // 0x560(0x30)

	struct FVector *ffe94190b2(); // Function OceanPlugin.*04b1de8079.*ffe94190b2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6978d88
	void *be58373037(); // Function OceanPlugin.*04b1de8079.*be58373037 // Final|Native|Public|BlueprintCallable // @ game+0x697943c
	struct FColor *f4cfcb57b2(); // Function OceanPlugin.*04b1de8079.*f4cfcb57b2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6978f80
	float *c69cc008d9(); // Function OceanPlugin.*04b1de8079.*c69cc008d9 // Final|Native|Public|BlueprintCallable // @ game+0x6979e10
	struct F*e07e7a22bc *652a530059(); // Function OceanPlugin.*04b1de8079.*652a530059 // Final|Native|Public|BlueprintCallable // @ game+0x6978c98
	float *9e04bbd795(); // Function OceanPlugin.*04b1de8079.*9e04bbd795 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6979450
	float TriangleArea(); // Function OceanPlugin.*04b1de8079.TriangleArea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x697a168
	struct TArray<struct F*e07e7a22bc> *7dc70432b4(); // Function OceanPlugin.*04b1de8079.*7dc70432b4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6979f0c
};

// Class OceanPlugin.*031136f633
// Size: 0x2d0 (Inherited: 0x250)
struct U*031136f633 : UMovementComponent {
	struct AOceanManager* OceanManager; // 0x248(0x08)
	float MeshDensity; // 0x250(0x04)
	float FluidDensity; // 0x254(0x04)
	float FluidLinearDamping; // 0x258(0x04)
	float FluidAngularDamping; // 0x25c(0x04)
	struct FVector VelocityDamper; // 0x260(0x0c)
	bool ClampMaxVelocity; // 0x26c(0x01)
	float MaxUnderwaterVelocity; // 0x270(0x04)
	float TestPointRadius; // 0x274(0x04)
	struct TArray<struct FVector> TestPoints; // 0x278(0x10)
	struct TArray<float> PointDensityOverride; // 0x288(0x10)
	bool DrawDebugPoints; // 0x298(0x01)
	bool EnableStayUprightConstraint; // 0x299(0x01)
	float StayUprightStiffness; // 0x29c(0x04)
	float StayUprightDamping; // 0x2a0(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x2a4(0x0c)
	bool EnableWaveForces; // 0x2b0(0x01)
	float WaveForceMultiplier; // 0x2b4(0x04)
	char pad_2B8[0x18]; // 0x2b8(0x18)
};

// Class OceanPlugin.*7c7df9189f
// Size: 0xd70 (Inherited: 0xd20)
struct U*7c7df9189f : UDestructibleComponent {
	char pad_D20[0x10]; // 0xd20(0x10)
	struct AOceanManager* OceanManager; // 0xd30(0x08)
	float ChunkDensity; // 0xd38(0x04)
	float FluidDensity; // 0xd3c(0x04)
	float FluidLinearDamping; // 0xd40(0x04)
	float FluidAngularDamping; // 0xd44(0x04)
	struct FVector VelocityDamper; // 0xd48(0x0c)
	bool ClampMaxVelocity; // 0xd54(0x01)
	char pad_D55[0x3]; // 0xd55(0x03)
	float MaxUnderwaterVelocity; // 0xd58(0x04)
	float TestPointRadius; // 0xd5c(0x04)
	bool DrawDebugPoints; // 0xd60(0x01)
	bool EnableWaveForces; // 0xd61(0x01)
	char pad_D62[0x2]; // 0xd62(0x02)
	float WaveForceMultiplier; // 0xd64(0x04)
	float ChunkSleepThreshold; // 0xd68(0x04)
	float ChunkStabilizationThreshold; // 0xd6c(0x04)
};

// Class OceanPlugin.BuoyantDestructible
// Size: 0x400 (Inherited: 0x3f8)
struct ABuoyantDestructible : AActor {
	struct U*7c7df9189f* BuoyantDestructibleComponent; // 0x3f8(0x08)
};

// Class OceanPlugin.*7f8c0d756f
// Size: 0xbd0 (Inherited: 0xb60)
struct U*7f8c0d756f : UStaticMeshComponent {
	char pad_B60[0x8]; // 0xb60(0x08)
	bool bVerticalForcesOnly; // 0xb68(0x01)
	bool bUseWaterPatch; // 0xb69(0x01)
	bool bUseStaticForces; // 0xb6a(0x01)
	bool bUseDynamicForces; // 0xb6b(0x01)
	char pad_B6C[0x4]; // 0xb6c(0x04)
	struct AOceanManager* OceanManager; // 0xb70(0x08)
	bool bDrawForceArrows; // 0xb78(0x01)
	bool bDrawWaterline; // 0xb79(0x01)
	bool bDrawVertices; // 0xb7a(0x01)
	bool bDrawTriangles; // 0xb7b(0x01)
	bool bDrawSubtriangles; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	float ForceArrowSize; // 0xb80(0x04)
	bool bOverrideMeshDensity; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	float MeshDensity; // 0xb88(0x04)
	bool bOverrideMass; // 0xb8c(0x01)
	char pad_B8D[0x3]; // 0xb8d(0x03)
	float Mass; // 0xb90(0x04)
	float WaterDensity; // 0xb94(0x04)
	char pad_B98[0x28]; // 0xb98(0x28)
	struct U*69d1e6d681* *7397293f83; // 0xbc0(0x08)
	char pad_BC8[0x8]; // 0xbc8(0x08)
};

// Class OceanPlugin.CustomVehicleController
// Size: 0x7c0 (Inherited: 0x7b0)
struct ACustomVehicleController : APlayerController {
	struct APawn* *940c8ea9b1; // 0x7b0(0x08)
	char pad_7B8[0x8]; // 0x7b8(0x08)

	struct APawn* *d1acab7b7d(); // Function OceanPlugin.CustomVehicleController.*d1acab7b7d // Native|Public|BlueprintCallable // @ game+0x6979074
	void EnableBuoyancy(); // Function OceanPlugin.CustomVehicleController.EnableBuoyancy // Exec|Native|Public // @ game+0x697905c
	void *321b0d9660(); // Function OceanPlugin.CustomVehicleController.*321b0d9660 // Native|Public|BlueprintCallable // @ game+0x6979108
	bool *bb43abe413(); // Function OceanPlugin.CustomVehicleController.*bb43abe413 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6979414
	void DrawBuoyancyPoints(); // Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints // Exec|Native|Public // @ game+0x6978f68
};

// Class OceanPlugin.FishManager
// Size: 0x450 (Inherited: 0x3f8)
struct AFishManager : AActor {
	struct TArray<struct UClass*> flockTypes; // 0x3f8(0x10)
	struct TArray<float> numInFlock; // 0x408(0x10)
	float minZ; // 0x418(0x04)
	float maxZ; // 0x41c(0x04)
	float underwaterBoxLength; // 0x420(0x04)
	bool attachToPlayer; // 0x424(0x01)
	bool DebugMode; // 0x425(0x01)
	char pad_426[0x2]; // 0x426(0x02)
	struct UClass* PlayerType; // 0x428(0x08)
	char pad_430[0x20]; // 0x430(0x20)
};

// Class OceanPlugin.FlockFish
// Size: 0x5e0 (Inherited: 0x460)
struct AFlockFish : APawn {
	char pad_460[0x10]; // 0x460(0x10)
	struct USphereComponent* FishInteractionSphere; // 0x470(0x08)
	bool isLeader; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TArray<struct UClass*> enemyTypes; // 0x480(0x10)
	struct TArray<struct UClass*> preyTypes; // 0x490(0x10)
	struct UClass* neighborType; // 0x4a0(0x08)
	float followDist; // 0x4a8(0x04)
	float Speed; // 0x4ac(0x04)
	float MaxSpeed; // 0x4b0(0x04)
	float turnSpeed; // 0x4b4(0x04)
	float turnFrequency; // 0x4b8(0x04)
	float hungerResetTime; // 0x4bc(0x04)
	float distBehindSpeedUpRange; // 0x4c0(0x04)
	float SeperationDistanceMultiplier; // 0x4c4(0x04)
	float FleeDistanceMultiplier; // 0x4c8(0x04)
	float FleeAccelerationMultiplier; // 0x4cc(0x04)
	float ChaseAccelerationMultiplier; // 0x4d0(0x04)
	float SeekDecelerationMultiplier; // 0x4d4(0x04)
	float AvoidForceMultiplier; // 0x4d8(0x04)
	float AvoidanceForce; // 0x4dc(0x04)
	struct UClass* PlayerType; // 0x4e0(0x08)
	struct FVector underwaterMin; // 0x4e8(0x0c)
	struct FVector underwaterMax; // 0x4f4(0x0c)
	float CustomZSeekMin; // 0x500(0x04)
	float CustomZSeekMax; // 0x504(0x04)
	float NumNeighborsToEvaluate; // 0x508(0x04)
	float UpdateEveryTick; // 0x50c(0x04)
	char pad_510[0x10]; // 0x510(0x10)
	bool DebugMode; // 0x520(0x01)
	char pad_521[0xbf]; // 0x521(0xbf)

	int32 OnEndOverlap(); // Function OceanPlugin.FlockFish.OnEndOverlap // Final|Native|Protected // @ game+0x6979a24
	struct FHitResult OnBeginOverlap(); // Function OceanPlugin.FlockFish.OnBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x69797d4
};

// Class OceanPlugin.*461f525006
// Size: 0x4a0 (Inherited: 0x480)
struct U*461f525006 : USceneComponent {
	bool UpdateInEditor; // 0x478(0x01)
	enum class EFollowMethod FollowMethod; // 0x479(0x01)
	float GridSnapSize; // 0x47c(0x04)
	float MaxLookAtDistance; // 0x480(0x04)
	bool ScaleByDistance; // 0x484(0x01)
	float ScaleDistanceFactor; // 0x488(0x04)
	float ScaleStartDistance; // 0x48c(0x04)
	float ScaleMin; // 0x490(0x04)
	float ScaleMax; // 0x494(0x04)
	char pad_49B[0x5]; // 0x49b(0x05)
};

// Class OceanPlugin.OceanMeshComponent
// Size: 0x9f0 (Inherited: 0x9c0)
struct UOceanMeshComponent : UPrimitiveComponent {
	struct UStaticMesh* SourceMesh; // 0x9b8(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x9c0(0x08)
	struct UMaterialInterface* LODMaterial; // 0x9c8(0x08)
	struct UMaterialInterface* SimpleMaterial; // 0x9d0(0x08)
	struct FVector BoundsExtent; // 0x9d8(0x0c)
	float LODTransitionStart; // 0x9e4(0x04)
	float LODTransitionEnd; // 0x9e8(0x04)

	float *fbdb4c18aa(); // Function OceanPlugin.OceanMeshComponent.*fbdb4c18aa // Final|Native|Public|BlueprintCallable // @ game+0x6979d34
	struct FVector *1a7a26da76(); // Function OceanPlugin.OceanMeshComponent.*1a7a26da76 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6979ba0
};

// Class OceanPlugin.TimeManager
// Size: 0x4c0 (Inherited: 0x3f8)
struct ATimeManager : AActor {
	struct F*7bcf749d5f CurrentLocalTime; // 0x3f8(0x1c)
	float Latitude; // 0x414(0x04)
	float Longitude; // 0x418(0x04)
	int32 OffsetUTC; // 0x41c(0x04)
	int32 OffsetDST; // 0x420(0x04)
	bool bAllowDaylightSavings; // 0x424(0x01)
	bool bDaylightSavingsActive; // 0x425(0x01)
	char pad_426[0x2]; // 0x426(0x02)
	float TimeScaleMultiplier; // 0x428(0x04)
	float SolarTime; // 0x42c(0x04)
	float LocalClockTime; // 0x430(0x04)
	float TimeCorrection; // 0x434(0x04)
	int32 LSTM; // 0x438(0x04)
	int32 DayOfYear; // 0x43c(0x04)
	float EoT; // 0x440(0x04)
	float SolarAltAngle; // 0x444(0x04)
	float SolarDeclination; // 0x448(0x04)
	float SolarAzimuth; // 0x44c(0x04)
	float SolarHRA; // 0x450(0x04)
	float SiderealTime; // 0x454(0x04)
	float LunarAltAngle; // 0x458(0x04)
	float LunarHRA; // 0x45c(0x04)
	float LunarDeclination; // 0x460(0x04)
	float LunarAzimuth; // 0x464(0x04)
	float LunarRightAsc; // 0x468(0x04)
	float LunarElapsedDays; // 0x46c(0x04)
	float EcLongitude; // 0x470(0x04)
	float EcLatitude; // 0x474(0x04)
	float EcDistance; // 0x478(0x04)
	float PartL; // 0x47c(0x04)
	float PartM; // 0x480(0x04)
	float PartF; // 0x484(0x04)
	char pad_488[0x38]; // 0x488(0x38)

	struct FRotator *306dd3c6d1(); // Function OceanPlugin.TimeManager.*306dd3c6d1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6978e90
	float *5db3db8fe2(); // Function OceanPlugin.TimeManager.*5db3db8fe2 // Final|Native|Public|BlueprintCallable // @ game+0x6979300
	float *2321f82271(); // Function OceanPlugin.TimeManager.*2321f82271 // Final|Native|Public|BlueprintCallable // @ game+0x6979c9c
	float *592962c014(); // Function OceanPlugin.TimeManager.*592962c014 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69791f4
	struct F*7bcf749d5f *94a14fdf84(); // Function OceanPlugin.TimeManager.*94a14fdf84 // Final|Native|Public|BlueprintCallable // @ game+0x697960c
	struct FRotator *5b01d7fee6(); // Function OceanPlugin.TimeManager.*5b01d7fee6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6978f34
	bool IsLeapYear(); // Function OceanPlugin.TimeManager.IsLeapYear // Final|Native|Public|BlueprintCallable // @ game+0x69796b8
	float *a56622ddb5(); // Function OceanPlugin.TimeManager.*a56622ddb5 // Final|Native|Public|BlueprintCallable // @ game+0x6979574
	int32 *76542102ca(); // Function OceanPlugin.TimeManager.*76542102ca // Final|Native|Public|BlueprintCallable // @ game+0x697922c
	float *82a2815834(); // Function OceanPlugin.TimeManager.*82a2815834 // Final|Native|Public|BlueprintCallable // @ game+0x6978ec4
	int32 GetDayOfYear(); // Function OceanPlugin.TimeManager.GetDayOfYear // Final|Native|Public|BlueprintCallable // @ game+0x6979120
	float *9a573b70cf(); // Function OceanPlugin.TimeManager.*9a573b70cf // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x697954c
	int32 *ffba4de573(); // Function OceanPlugin.TimeManager.*ffba4de573 // Final|Native|Public|BlueprintCallable // @ game+0x67045b8
};

// Class OceanPlugin.*69d1e6d681
// Size: 0x280 (Inherited: 0x200)
struct U*69d1e6d681 : UActorComponent {
	float DesiredCellSize; // 0x200(0x04)
	bool bOnlyCollidingComponents; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float GridSizeMultiplier; // 0x208(0x04)
	bool bDrawUsedTriangles; // 0x20c(0x01)
	bool bDrawHeightmap; // 0x20d(0x01)
	char pad_20E[0x62]; // 0x20e(0x62)
	struct AOceanManager* *1c2d7d4de0; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
};

