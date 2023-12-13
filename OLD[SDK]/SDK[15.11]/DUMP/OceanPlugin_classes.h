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
	struct TArray<struct F*fce3234f1d> BoneOverride; // 0x4c0(0x10)
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
	bool *f588f0c9ab; // 0x4f8(0x01)
	char pad_4F9[0x27]; // 0x4f9(0x27)
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
	struct TArray<struct F*05a1c7cb7b> WaveClusters; // 0x410(0x10)
	struct TArray<struct F*535b9127b3> WaveSetOffsetsOverride; // 0x420(0x10)
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

	void *bc13c1bc75(); // Function OceanPlugin.OceanManager.*bc13c1bc75 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x69a18ec
	void *2f9df9694e(); // Function OceanPlugin.OceanManager.*2f9df9694e // Final|Native|Public|BlueprintCallable // @ game+0x69a1d10
	void *cca8ca0c1f(); // Function OceanPlugin.OceanManager.*cca8ca0c1f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670240
};

// Class OceanPlugin.*3514da26a1
// Size: 0x580 (Inherited: 0x470)
struct U*3514da26a1 : USceneComponent {
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
	struct TArray<struct F*263eeda478> SubmergedTris; // 0x520(0x10)
	struct TArray<float> TriSizes; // 0x530(0x10)
	struct TArray<float> TriSubmergedArea; // 0x540(0x10)
	char pad_550[0x30]; // 0x550(0x30)

	void *d50f5ebbe9(); // Function OceanPlugin.*3514da26a1.*d50f5ebbe9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a154c
	void *9f85407194(); // Function OceanPlugin.*3514da26a1.*9f85407194 // Final|Native|Public|BlueprintCallable // @ game+0x69a1a08
	void *96aabe154c(); // Function OceanPlugin.*3514da26a1.*96aabe154c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a24d8
	void *5dfdd4ca90(); // Function OceanPlugin.*3514da26a1.*5dfdd4ca90 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a1354
	void TriangleArea(); // Function OceanPlugin.*3514da26a1.TriangleArea // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a2734
	void *aed982231b(); // Function OceanPlugin.*3514da26a1.*aed982231b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a1a1c
	void *828aa4acbe(); // Function OceanPlugin.*3514da26a1.*828aa4acbe // Final|Native|Public|BlueprintCallable // @ game+0x69a1264
	void *a2a1952f4f(); // Function OceanPlugin.*3514da26a1.*a2a1952f4f // Final|Native|Public|BlueprintCallable // @ game+0x69a23dc
};

// Class OceanPlugin.*ef603f93f9
// Size: 0x2d0 (Inherited: 0x250)
struct U*ef603f93f9 : UMovementComponent {
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

// Class OceanPlugin.*28ce2f6d84
// Size: 0xd50 (Inherited: 0xd00)
struct U*28ce2f6d84 : UDestructibleComponent {
	char pad_D00[0x10]; // 0xd00(0x10)
	struct AOceanManager* OceanManager; // 0xd10(0x08)
	float ChunkDensity; // 0xd18(0x04)
	float FluidDensity; // 0xd1c(0x04)
	float FluidLinearDamping; // 0xd20(0x04)
	float FluidAngularDamping; // 0xd24(0x04)
	struct FVector VelocityDamper; // 0xd28(0x0c)
	bool ClampMaxVelocity; // 0xd34(0x01)
	char pad_D35[0x3]; // 0xd35(0x03)
	float MaxUnderwaterVelocity; // 0xd38(0x04)
	float TestPointRadius; // 0xd3c(0x04)
	bool DrawDebugPoints; // 0xd40(0x01)
	bool EnableWaveForces; // 0xd41(0x01)
	char pad_D42[0x2]; // 0xd42(0x02)
	float WaveForceMultiplier; // 0xd44(0x04)
	float ChunkSleepThreshold; // 0xd48(0x04)
	float ChunkStabilizationThreshold; // 0xd4c(0x04)
};

// Class OceanPlugin.BuoyantDestructible
// Size: 0x400 (Inherited: 0x3f8)
struct ABuoyantDestructible : AActor {
	struct U*28ce2f6d84* BuoyantDestructibleComponent; // 0x3f8(0x08)
};

// Class OceanPlugin.*6e6f3e7947
// Size: 0xbb0 (Inherited: 0xb40)
struct U*6e6f3e7947 : UStaticMeshComponent {
	char pad_B40[0x8]; // 0xb40(0x08)
	bool bVerticalForcesOnly; // 0xb48(0x01)
	bool bUseWaterPatch; // 0xb49(0x01)
	bool bUseStaticForces; // 0xb4a(0x01)
	bool bUseDynamicForces; // 0xb4b(0x01)
	char pad_B4C[0x4]; // 0xb4c(0x04)
	struct AOceanManager* OceanManager; // 0xb50(0x08)
	bool bDrawForceArrows; // 0xb58(0x01)
	bool bDrawWaterline; // 0xb59(0x01)
	bool bDrawVertices; // 0xb5a(0x01)
	bool bDrawTriangles; // 0xb5b(0x01)
	bool bDrawSubtriangles; // 0xb5c(0x01)
	char pad_B5D[0x3]; // 0xb5d(0x03)
	float ForceArrowSize; // 0xb60(0x04)
	bool bOverrideMeshDensity; // 0xb64(0x01)
	char pad_B65[0x3]; // 0xb65(0x03)
	float MeshDensity; // 0xb68(0x04)
	bool bOverrideMass; // 0xb6c(0x01)
	char pad_B6D[0x3]; // 0xb6d(0x03)
	float Mass; // 0xb70(0x04)
	float WaterDensity; // 0xb74(0x04)
	char pad_B78[0x28]; // 0xb78(0x28)
	struct U*627c83eda0* *def5f06c89; // 0xba0(0x08)
	char pad_BA8[0x8]; // 0xba8(0x08)
};

// Class OceanPlugin.CustomVehicleController
// Size: 0x7c0 (Inherited: 0x7b0)
struct ACustomVehicleController : APlayerController {
	struct APawn* *cfc6c1a349; // 0x7b0(0x08)
	char pad_7B8[0x8]; // 0x7b8(0x08)

	void *cc9c61c338(); // Function OceanPlugin.CustomVehicleController.*cc9c61c338 // Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69a19e0
	void *e88e2e3b2d(); // Function OceanPlugin.CustomVehicleController.*e88e2e3b2d // Native|Public|BlueprintCallable // @ game+0x69a16d4
	void *7dbe8d7d9f(); // Function OceanPlugin.CustomVehicleController.*7dbe8d7d9f // Native|Public|BlueprintCallable // @ game+0x69a1640
	void DrawBuoyancyPoints(); // Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints // Exec|Native|Public // @ game+0x69a1534
	void EnableBuoyancy(); // Function OceanPlugin.CustomVehicleController.EnableBuoyancy // Exec|Native|Public // @ game+0x69a1628
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
// Size: 0x5d8 (Inherited: 0x458)
struct AFlockFish : APawn {
	char pad_458[0x10]; // 0x458(0x10)
	struct USphereComponent* FishInteractionSphere; // 0x468(0x08)
	bool isLeader; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct TArray<struct UClass*> enemyTypes; // 0x478(0x10)
	struct TArray<struct UClass*> preyTypes; // 0x488(0x10)
	struct UClass* neighborType; // 0x498(0x08)
	float followDist; // 0x4a0(0x04)
	float Speed; // 0x4a4(0x04)
	float MaxSpeed; // 0x4a8(0x04)
	float turnSpeed; // 0x4ac(0x04)
	float turnFrequency; // 0x4b0(0x04)
	float hungerResetTime; // 0x4b4(0x04)
	float distBehindSpeedUpRange; // 0x4b8(0x04)
	float SeperationDistanceMultiplier; // 0x4bc(0x04)
	float FleeDistanceMultiplier; // 0x4c0(0x04)
	float FleeAccelerationMultiplier; // 0x4c4(0x04)
	float ChaseAccelerationMultiplier; // 0x4c8(0x04)
	float SeekDecelerationMultiplier; // 0x4cc(0x04)
	float AvoidForceMultiplier; // 0x4d0(0x04)
	float AvoidanceForce; // 0x4d4(0x04)
	struct UClass* PlayerType; // 0x4d8(0x08)
	struct FVector underwaterMin; // 0x4e0(0x0c)
	struct FVector underwaterMax; // 0x4ec(0x0c)
	float CustomZSeekMin; // 0x4f8(0x04)
	float CustomZSeekMax; // 0x4fc(0x04)
	float NumNeighborsToEvaluate; // 0x500(0x04)
	float UpdateEveryTick; // 0x504(0x04)
	char pad_508[0x10]; // 0x508(0x10)
	bool DebugMode; // 0x518(0x01)
	char pad_519[0xbf]; // 0x519(0xbf)

	void OnEndOverlap(); // Function OceanPlugin.FlockFish.OnEndOverlap // Final|Native|Protected // @ game+0x69a1ff0
	void OnBeginOverlap(); // Function OceanPlugin.FlockFish.OnBeginOverlap // Final|Native|Protected|HasOutParms // @ game+0x69a1da0
};

// Class OceanPlugin.*9b1d418a4e
// Size: 0x490 (Inherited: 0x470)
struct U*9b1d418a4e : USceneComponent {
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
// Size: 0x9d0 (Inherited: 0x9a0)
struct UOceanMeshComponent : UPrimitiveComponent {
	struct UStaticMesh* SourceMesh; // 0x998(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x9a0(0x08)
	struct UMaterialInterface* LODMaterial; // 0x9a8(0x08)
	struct UMaterialInterface* SimpleMaterial; // 0x9b0(0x08)
	struct FVector BoundsExtent; // 0x9b8(0x0c)
	float LODTransitionStart; // 0x9c4(0x04)
	float LODTransitionEnd; // 0x9c8(0x04)

	void *6ace248513(); // Function OceanPlugin.OceanMeshComponent.*6ace248513 // Final|Native|Public|BlueprintCallable // @ game+0x69a2300
	void *7453946f33(); // Function OceanPlugin.OceanMeshComponent.*7453946f33 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x69a216c
};

// Class OceanPlugin.TimeManager
// Size: 0x4c0 (Inherited: 0x3f8)
struct ATimeManager : AActor {
	struct F*e79c431be3 CurrentLocalTime; // 0x3f8(0x1c)
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

	void GetDayOfYear(); // Function OceanPlugin.TimeManager.GetDayOfYear // Final|Native|Public|BlueprintCallable // @ game+0x69a16ec
	void *662d401aa9(); // Function OceanPlugin.TimeManager.*662d401aa9 // Final|Native|Public|BlueprintCallable // @ game+0x69a18cc
	void *f48e922afd(); // Function OceanPlugin.TimeManager.*f48e922afd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a1500
	void *a59c0b00be(); // Function OceanPlugin.TimeManager.*a59c0b00be // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69a1b18
	void *923b519da4(); // Function OceanPlugin.TimeManager.*923b519da4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x69a145c
	void *dc4646d597(); // Function OceanPlugin.TimeManager.*dc4646d597 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x69a17c0
	void IsLeapYear(); // Function OceanPlugin.TimeManager.IsLeapYear // Final|Native|Public|BlueprintCallable // @ game+0x69a1c84
	void *c1eaf299ba(); // Function OceanPlugin.TimeManager.*c1eaf299ba // Final|Native|Public|BlueprintCallable // @ game+0x69a1bd8
	void *28dce5f162(); // Function OceanPlugin.TimeManager.*28dce5f162 // Final|Native|Public|BlueprintCallable // @ game+0x69a1490
	void *68b7d984ac(); // Function OceanPlugin.TimeManager.*68b7d984ac // Final|Native|Public|BlueprintCallable // @ game+0x69a1b40
	void *da07f331f7(); // Function OceanPlugin.TimeManager.*da07f331f7 // Final|Native|Public|BlueprintCallable // @ game+0x69a2268
	void *fdd15d99a3(); // Function OceanPlugin.TimeManager.*fdd15d99a3 // Final|Native|Public|BlueprintCallable // @ game+0x69a17f8
	void *fe8603affc(); // Function OceanPlugin.TimeManager.*fe8603affc // Final|Native|Public|BlueprintCallable // @ game+0x6729c88
};

// Class OceanPlugin.*627c83eda0
// Size: 0x280 (Inherited: 0x200)
struct U*627c83eda0 : UActorComponent {
	float DesiredCellSize; // 0x200(0x04)
	bool bOnlyCollidingComponents; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float GridSizeMultiplier; // 0x208(0x04)
	bool bDrawUsedTriangles; // 0x20c(0x01)
	bool bDrawHeightmap; // 0x20d(0x01)
	char pad_20E[0x62]; // 0x20e(0x62)
	struct AOceanManager* *0ca02823cc; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
};

