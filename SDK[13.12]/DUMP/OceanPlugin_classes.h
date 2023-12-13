// Class OceanPlugin.BuoyancyForceComponent
// Size: 0x520 (Inherited: 0x470)
struct UBuoyancyForceComponent : USceneComponent {
	struct AOceanManager* OceanManager; // 0x468(0x08)
	float MeshDensity; // 0x470(0x04)
	float FluidDensity; // 0x474(0x04)
	float FluidLinearDamping; // 0x478(0x04)
	float FluidAngularDamping; // 0x47c(0x04)
	struct FVector VelocityDamper; // 0x480(0x0c)
	bool ClampMaxVelocity; // 0x48c(0x01)
	float MaxUnderwaterVelocity; // 0x490(0x04)
	float TestPointRadius; // 0x494(0x04)
	struct TArray<struct FVector> TestPoints; // 0x498(0x10)
	bool ApplyForceToBones; // 0x4a8(0x01)
	bool SnapToSurfaceIfNoPhysics; // 0x4a9(0x01)
	bool TwoGerstnerIterations; // 0x4aa(0x01)
	struct TArray<float> PointDensityOverride; // 0x4b0(0x10)
	struct TArray<struct F*2c7209c8e5> BoneOverride; // 0x4c0(0x10)
	bool DrawDebugPoints; // 0x4d0(0x01)
	bool EnableStayUprightConstraint; // 0x4d1(0x01)
	char pad_4D2[0x2]; // 0x4d2(0x02)
	float StayUprightStiffness; // 0x4d4(0x04)
	float StayUprightDamping; // 0x4d8(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x4dc(0x0c)
	bool EnableWaveForces; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	float WaveForceMultiplier; // 0x4ec(0x04)
	enum class ETickingGroup TickGroup; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float WaveHightMultiplier; // 0x4f4(0x04)
	bool *996117db25; // 0x4f8(0x01)
	char pad_4F9[0x27]; // 0x4f9(0x27)
};

// Class OceanPlugin.OceanManager
// Size: 0x478 (Inherited: 0x3f0)
struct AOceanManager : AActor {
	bool EnableGerstnerWaves; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FVector2D GlobalWaveDirection; // 0x3f4(0x08)
	float GlobalWaveSpeed; // 0x3fc(0x04)
	float GlobalWaveAmplitude; // 0x400(0x04)
	float DistanceCheck; // 0x404(0x04)
	struct TArray<struct F*b74fb89548> WaveClusters; // 0x408(0x10)
	struct TArray<struct F*34238a6751> WaveSetOffsetsOverride; // 0x418(0x10)
	float NetWorkTimeOffset; // 0x428(0x04)
	bool bEnableLandscapeModulation; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	float ModulationStartHeight; // 0x430(0x04)
	float ModulationMaxHeight; // 0x434(0x04)
	float ModulationPower; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct ALandscape* Landscape; // 0x440(0x08)
	struct UTexture2D* HeightmapTexture; // 0x448(0x08)
	char pad_450[0x28]; // 0x450(0x28)

	struct FLinearColor *1c3828ae18(); // Function OceanPlugin.OceanManager.*1c3828ae18 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6b3e660
	struct FVector *894d0e122f(); // Function OceanPlugin.OceanManager.*894d0e122f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x33ce54
	struct UTexture2D* *702ea4d309(); // Function OceanPlugin.OceanManager.*702ea4d309 // Final|Native|Public|BlueprintCallable // @ game+0x6b3ea84
};

// Class OceanPlugin.*04b1de8079
// Size: 0x580 (Inherited: 0x470)
struct U*04b1de8079 : USceneComponent {
	bool bUseDrag; // 0x468(0x01)
	bool bDebugOn; // 0x469(0x01)
	struct AOceanManager* TheOcean; // 0x470(0x08)
	float WaterDensity; // 0x478(0x04)
	float Gravity; // 0x47c(0x04)
	float MeshDensity; // 0x480(0x04)
	char pad_486[0x12]; // 0x486(0x12)
	struct UStaticMeshComponent* BuoyantMesh; // 0x498(0x08)
	struct FTransform MeshTransform; // 0x4a0(0x30)
	float FalseVolume; // 0x4d0(0x04)
	float BuoyancyReductionCoefficient; // 0x4d4(0x04)
	float BuoyancyPitchReductionCoefficient; // 0x4d8(0x04)
	float DensityCorrection; // 0x4dc(0x04)
	float DensityCorrectionModifier; // 0x4e0(0x04)
	float SubmergedVolume; // 0x4e4(0x04)
	float ImpactCoefficient; // 0x4e8(0x04)
	struct FVector DragCoefficient; // 0x4ec(0x0c)
	struct FVector SuctionCoefficient; // 0x4f8(0x0c)
	float ViscousDragCoefficient; // 0x504(0x04)
	float MaxSlamAcceleration; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct TArray<struct FVector> AdvancedGridHeight; // 0x510(0x10)
	struct TArray<struct F*e07e7a22bc> SubmergedTris; // 0x520(0x10)
	struct TArray<float> TriSizes; // 0x530(0x10)
	struct TArray<float> TriSubmergedArea; // 0x540(0x10)
	char pad_550[0x30]; // 0x550(0x30)

	struct FVector *ffe94190b2(); // Function OceanPlugin.*04b1de8079.*ffe94190b2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3e0e0
	void *be58373037(); // Function OceanPlugin.*04b1de8079.*be58373037 // Final|Native|Public|BlueprintCallable // @ game+0x6b3e77c
	struct FColor *f4cfcb57b2(); // Function OceanPlugin.*04b1de8079.*f4cfcb57b2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3e2d8
	float *c69cc008d9(); // Function OceanPlugin.*04b1de8079.*c69cc008d9 // Final|Native|Public|BlueprintCallable // @ game+0x6b3f150
	struct F*e07e7a22bc *652a530059(); // Function OceanPlugin.*04b1de8079.*652a530059 // Final|Native|Public|BlueprintCallable // @ game+0x6b3dff0
	float *9e04bbd795(); // Function OceanPlugin.*04b1de8079.*9e04bbd795 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3e790
	float TriangleArea(); // Function OceanPlugin.*04b1de8079.TriangleArea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3f4a8
	struct TArray<struct F*e07e7a22bc> *7dc70432b4(); // Function OceanPlugin.*04b1de8079.*7dc70432b4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3f24c
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
// Size: 0xd60 (Inherited: 0xd10)
struct U*7c7df9189f : UDestructibleComponent {
	char pad_D10[0x10]; // 0xd10(0x10)
	struct AOceanManager* OceanManager; // 0xd20(0x08)
	float ChunkDensity; // 0xd28(0x04)
	float FluidDensity; // 0xd2c(0x04)
	float FluidLinearDamping; // 0xd30(0x04)
	float FluidAngularDamping; // 0xd34(0x04)
	struct FVector VelocityDamper; // 0xd38(0x0c)
	bool ClampMaxVelocity; // 0xd44(0x01)
	char pad_D45[0x3]; // 0xd45(0x03)
	float MaxUnderwaterVelocity; // 0xd48(0x04)
	float TestPointRadius; // 0xd4c(0x04)
	bool DrawDebugPoints; // 0xd50(0x01)
	bool EnableWaveForces; // 0xd51(0x01)
	char pad_D52[0x2]; // 0xd52(0x02)
	float WaveForceMultiplier; // 0xd54(0x04)
	float ChunkSleepThreshold; // 0xd58(0x04)
	float ChunkStabilizationThreshold; // 0xd5c(0x04)
};

// Class OceanPlugin.BuoyantDestructible
// Size: 0x3f8 (Inherited: 0x3f0)
struct ABuoyantDestructible : AActor {
	struct U*7c7df9189f* BuoyantDestructibleComponent; // 0x3f0(0x08)
};

// Class OceanPlugin.*7f8c0d756f
// Size: 0xbc0 (Inherited: 0xb50)
struct U*7f8c0d756f : UStaticMeshComponent {
	char pad_B50[0x8]; // 0xb50(0x08)
	bool bVerticalForcesOnly; // 0xb58(0x01)
	bool bUseWaterPatch; // 0xb59(0x01)
	bool bUseStaticForces; // 0xb5a(0x01)
	bool bUseDynamicForces; // 0xb5b(0x01)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct AOceanManager* OceanManager; // 0xb60(0x08)
	bool bDrawForceArrows; // 0xb68(0x01)
	bool bDrawWaterline; // 0xb69(0x01)
	bool bDrawVertices; // 0xb6a(0x01)
	bool bDrawTriangles; // 0xb6b(0x01)
	bool bDrawSubtriangles; // 0xb6c(0x01)
	char pad_B6D[0x3]; // 0xb6d(0x03)
	float ForceArrowSize; // 0xb70(0x04)
	bool bOverrideMeshDensity; // 0xb74(0x01)
	char pad_B75[0x3]; // 0xb75(0x03)
	float MeshDensity; // 0xb78(0x04)
	bool bOverrideMass; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	float Mass; // 0xb80(0x04)
	float WaterDensity; // 0xb84(0x04)
	char pad_B88[0x28]; // 0xb88(0x28)
	struct U*69d1e6d681* *7397293f83; // 0xbb0(0x08)
	char pad_BB8[0x8]; // 0xbb8(0x08)
};

// Class OceanPlugin.CustomVehicleController
// Size: 0x7b0 (Inherited: 0x7a0)
struct ACustomVehicleController : APlayerController {
	struct APawn* *940c8ea9b1; // 0x7a0(0x08)
	char pad_7A8[0x8]; // 0x7a8(0x08)

	struct APawn* *d1acab7b7d(); // Function OceanPlugin.CustomVehicleController.*d1acab7b7d // Native|Public|BlueprintCallable // @ game+0x6b3e3b4
	void EnableBuoyancy(); // Function OceanPlugin.CustomVehicleController.EnableBuoyancy // Exec|Native|Public // @ game+0x5aed928
	void *321b0d9660(); // Function OceanPlugin.CustomVehicleController.*321b0d9660 // Native|Public|BlueprintCallable // @ game+0x6b3e448
	bool *bb43abe413(); // Function OceanPlugin.CustomVehicleController.*bb43abe413 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6b3e754
	void DrawBuoyancyPoints(); // Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints // Exec|Native|Public // @ game+0x6b3e2c0
};

// Class OceanPlugin.FishManager
// Size: 0x448 (Inherited: 0x3f0)
struct AFishManager : AActor {
	struct TArray<struct UClass*> flockTypes; // 0x3f0(0x10)
	struct TArray<float> numInFlock; // 0x400(0x10)
	float minZ; // 0x410(0x04)
	float maxZ; // 0x414(0x04)
	float underwaterBoxLength; // 0x418(0x04)
	bool attachToPlayer; // 0x41c(0x01)
	bool DebugMode; // 0x41d(0x01)
	char pad_41E[0x2]; // 0x41e(0x02)
	struct UClass* PlayerType; // 0x420(0x08)
	char pad_428[0x20]; // 0x428(0x20)
};

// Class OceanPlugin.FlockFish
// Size: 0x5d0 (Inherited: 0x450)
struct AFlockFish : APawn {
	char pad_450[0x10]; // 0x450(0x10)
	struct USphereComponent* FishInteractionSphere; // 0x460(0x08)
	bool isLeader; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TArray<struct UClass*> enemyTypes; // 0x470(0x10)
	struct TArray<struct UClass*> preyTypes; // 0x480(0x10)
	struct UClass* neighborType; // 0x490(0x08)
	float followDist; // 0x498(0x04)
	float Speed; // 0x49c(0x04)
	float MaxSpeed; // 0x4a0(0x04)
	float turnSpeed; // 0x4a4(0x04)
	float turnFrequency; // 0x4a8(0x04)
	float hungerResetTime; // 0x4ac(0x04)
	float distBehindSpeedUpRange; // 0x4b0(0x04)
	float SeperationDistanceMultiplier; // 0x4b4(0x04)
	float FleeDistanceMultiplier; // 0x4b8(0x04)
	float FleeAccelerationMultiplier; // 0x4bc(0x04)
	float ChaseAccelerationMultiplier; // 0x4c0(0x04)
	float SeekDecelerationMultiplier; // 0x4c4(0x04)
	float AvoidForceMultiplier; // 0x4c8(0x04)
	float AvoidanceForce; // 0x4cc(0x04)
	struct UClass* PlayerType; // 0x4d0(0x08)
	struct FVector underwaterMin; // 0x4d8(0x0c)
	struct FVector underwaterMax; // 0x4e4(0x0c)
	float CustomZSeekMin; // 0x4f0(0x04)
	float CustomZSeekMax; // 0x4f4(0x04)
	float NumNeighborsToEvaluate; // 0x4f8(0x04)
	float UpdateEveryTick; // 0x4fc(0x04)
	char pad_500[0x10]; // 0x500(0x10)
	bool DebugMode; // 0x510(0x01)
	char pad_511[0xbf]; // 0x511(0xbf)

	void OnEndOverlap(); // Function OceanPlugin.FlockFish.OnEndOverlap // Final|Native|Protected // @ game+0x6b3ed64
	void OnBeginOverlap(); // Function OceanPlugin.FlockFish.OnBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x6b3eb14
};

// Class OceanPlugin.*461f525006
// Size: 0x490 (Inherited: 0x470)
struct U*461f525006 : USceneComponent {
	bool UpdateInEditor; // 0x468(0x01)
	enum class EFollowMethod FollowMethod; // 0x469(0x01)
	float GridSnapSize; // 0x46c(0x04)
	float MaxLookAtDistance; // 0x470(0x04)
	bool ScaleByDistance; // 0x474(0x01)
	float ScaleDistanceFactor; // 0x478(0x04)
	float ScaleStartDistance; // 0x47c(0x04)
	float ScaleMin; // 0x480(0x04)
	float ScaleMax; // 0x484(0x04)
	char pad_48B[0x5]; // 0x48b(0x05)
};

// Class OceanPlugin.OceanMeshComponent
// Size: 0x9e0 (Inherited: 0x9b0)
struct UOceanMeshComponent : UPrimitiveComponent {
	struct UStaticMesh* SourceMesh; // 0x9a8(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x9b0(0x08)
	struct UMaterialInterface* LODMaterial; // 0x9b8(0x08)
	struct UMaterialInterface* SimpleMaterial; // 0x9c0(0x08)
	struct FVector BoundsExtent; // 0x9c8(0x0c)
	float LODTransitionStart; // 0x9d4(0x04)
	float LODTransitionEnd; // 0x9d8(0x04)

	void *fbdb4c18aa(); // Function OceanPlugin.OceanMeshComponent.*fbdb4c18aa // Final|Native|Public|BlueprintCallable // @ game+0x6b3f074
	void *1a7a26da76(); // Function OceanPlugin.OceanMeshComponent.*1a7a26da76 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6b3eee0
};

// Class OceanPlugin.TimeManager
// Size: 0x4b8 (Inherited: 0x3f0)
struct ATimeManager : AActor {
	struct F*7bcf749d5f CurrentLocalTime; // 0x3f0(0x1c)
	float Latitude; // 0x40c(0x04)
	float Longitude; // 0x410(0x04)
	int32 OffsetUTC; // 0x414(0x04)
	int32 OffsetDST; // 0x418(0x04)
	bool bAllowDaylightSavings; // 0x41c(0x01)
	bool bDaylightSavingsActive; // 0x41d(0x01)
	char pad_41E[0x2]; // 0x41e(0x02)
	float TimeScaleMultiplier; // 0x420(0x04)
	float SolarTime; // 0x424(0x04)
	float LocalClockTime; // 0x428(0x04)
	float TimeCorrection; // 0x42c(0x04)
	int32 LSTM; // 0x430(0x04)
	int32 DayOfYear; // 0x434(0x04)
	float EoT; // 0x438(0x04)
	float SolarAltAngle; // 0x43c(0x04)
	float SolarDeclination; // 0x440(0x04)
	float SolarAzimuth; // 0x444(0x04)
	float SolarHRA; // 0x448(0x04)
	float SiderealTime; // 0x44c(0x04)
	float LunarAltAngle; // 0x450(0x04)
	float LunarHRA; // 0x454(0x04)
	float LunarDeclination; // 0x458(0x04)
	float LunarAzimuth; // 0x45c(0x04)
	float LunarRightAsc; // 0x460(0x04)
	float LunarElapsedDays; // 0x464(0x04)
	float EcLongitude; // 0x468(0x04)
	float EcLatitude; // 0x46c(0x04)
	float EcDistance; // 0x470(0x04)
	float PartL; // 0x474(0x04)
	float PartM; // 0x478(0x04)
	float PartF; // 0x47c(0x04)
	char pad_480[0x38]; // 0x480(0x38)

	void *306dd3c6d1(struct FRotator ReturnValue); // Function OceanPlugin.TimeManager.*306dd3c6d1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3e1e8
	void *5db3db8fe2(float ReturnValue); // Function OceanPlugin.TimeManager.*5db3db8fe2 // Final|Native|Public|BlueprintCallable // @ game+0x6b3e640
	void *2321f82271(float Time); // Function OceanPlugin.TimeManager.*2321f82271 // Final|Native|Public|BlueprintCallable // @ game+0x6b3efdc
	void *592962c014(float ReturnValue); // Function OceanPlugin.TimeManager.*592962c014 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6b3e534
	void *94a14fdf84(struct F*7bcf749d5f Time); // Function OceanPlugin.TimeManager.*94a14fdf84 // Final|Native|Public|BlueprintCallable // @ game+0x6b3e94c
	void *5b01d7fee6(struct FRotator ReturnValue); // Function OceanPlugin.TimeManager.*5b01d7fee6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6b3e28c
	void IsLeapYear(int32 Year, bool ReturnValue); // Function OceanPlugin.TimeManager.IsLeapYear // Final|Native|Public|BlueprintCallable // @ game+0x6b3e9f8
	void *a56622ddb5(float DeltaSeconds); // Function OceanPlugin.TimeManager.*a56622ddb5 // Final|Native|Public|BlueprintCallable // @ game+0x6b3e8b4
	void *76542102ca(int32 Year, int32 Month, int32 ReturnValue); // Function OceanPlugin.TimeManager.*76542102ca // Final|Native|Public|BlueprintCallable // @ game+0x6b3e56c
	void *82a2815834(float ReturnValue); // Function OceanPlugin.TimeManager.*82a2815834 // Final|Native|Public|BlueprintCallable // @ game+0x6b3e21c
	void GetDayOfYear(struct F*7bcf749d5f Time, int32 ReturnValue); // Function OceanPlugin.TimeManager.GetDayOfYear // Final|Native|Public|BlueprintCallable // @ game+0x6b3e460
	void *9a573b70cf(float ReturnValue); // Function OceanPlugin.TimeManager.*9a573b70cf // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6b3e88c
	void *ffba4de573(int32 Year, int32 ReturnValue); // Function OceanPlugin.TimeManager.*ffba4de573 // Final|Native|Public|BlueprintCallable // @ game+0x68c35e8
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

