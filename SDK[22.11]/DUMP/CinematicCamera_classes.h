// Class CinematicCamera.CameraRig_Crane
// Size: 0x418 (Inherited: 0x3e8)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3e8(0x04)
	float CraneYaw; // 0x3ec(0x04)
	float CraneArmLength; // 0x3f0(0x04)
	bool bLockMountPitch; // 0x3f4(0x01)
	bool bLockMountYaw; // 0x3f5(0x01)
	char pad_3F6[0x2]; // 0x3f6(0x02)
	struct USceneComponent* TransformComponent; // 0x3f8(0x08)
	struct USceneComponent* CraneYawControl; // 0x400(0x08)
	struct USceneComponent* CranePitchControl; // 0x408(0x08)
	struct USceneComponent* CraneCameraMount; // 0x410(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x408 (Inherited: 0x3e8)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct USceneComponent* TransformComponent; // 0x3f0(0x08)
	struct USplineComponent* RailSplineComponent; // 0x3f8(0x08)
	struct USceneComponent* RailCameraMount; // 0x400(0x08)
};

// Class CinematicCamera.CineCameraActor
// Size: 0x9d0 (Inherited: 0x990)
struct ACineCameraActor : ACameraActor {
	struct F*69a8d4adc4 LookatTrackingSettings; // 0x990(0x30)
	char pad_9C0[0x10]; // 0x9c0(0x10)

	void *22083f365e(); // Function CinematicCamera.CineCameraActor.*22083f365e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb3d5c
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb10 (Inherited: 0xa50)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa50(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa5c(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xa70(0x38)
	float CurrentFocalLength; // 0xaa8(0x04)
	float CurrentAperture; // 0xaac(0x04)
	float CurrentFocusDistance; // 0xab0(0x04)
	char pad_AB4[0xc]; // 0xab4(0x0c)
	struct TArray<struct F*7cf7ea4908> FilmbackPresets; // 0xac0(0x10)
	struct TArray<struct F*5f97372596> LensPresets; // 0xad0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xae0(0x10)
	struct FString DefaultLensPresetName; // 0xaf0(0x10)
	float DefaultLensFocalLength; // 0xb00(0x04)
	float DefaultLensFStop; // 0xb04(0x04)
	char pad_B08[0x8]; // 0xb08(0x08)

	void *d714267012(); // Function CinematicCamera.CineCameraComponent.*d714267012 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb3d9c
	void *9ac94752ac(); // Function CinematicCamera.CineCameraComponent.*9ac94752ac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eb3d74
};

