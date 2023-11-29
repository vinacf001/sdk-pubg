// Class CinematicCamera.CameraRig_Crane
// Size: 0x420 (Inherited: 0x3f0)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3f0(0x04)
	float CraneYaw; // 0x3f4(0x04)
	float CraneArmLength; // 0x3f8(0x04)
	bool bLockMountPitch; // 0x3fc(0x01)
	bool bLockMountYaw; // 0x3fd(0x01)
	char pad_3FE[0x2]; // 0x3fe(0x02)
	struct USceneComponent* TransformComponent; // 0x400(0x08)
	struct USceneComponent* CraneYawControl; // 0x408(0x08)
	struct USceneComponent* CranePitchControl; // 0x410(0x08)
	struct USceneComponent* CraneCameraMount; // 0x418(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x410 (Inherited: 0x3f0)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct USceneComponent* TransformComponent; // 0x3f8(0x08)
	struct USplineComponent* RailSplineComponent; // 0x400(0x08)
	struct USceneComponent* RailCameraMount; // 0x408(0x08)
};

// Class CinematicCamera.CineCameraActor
// Size: 0x9d0 (Inherited: 0x990)
struct ACineCameraActor : ACameraActor {
	struct F*69a8d4adc4 LookatTrackingSettings; // 0x990(0x30)
	char pad_9C0[0x10]; // 0x9c0(0x10)

	struct UCineCameraComponent* *22083f365e(); // Function CinematicCamera.CineCameraActor.*22083f365e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaccb8
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb30 (Inherited: 0xa70)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa70(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa7c(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xa90(0x38)
	float CurrentFocalLength; // 0xac8(0x04)
	float CurrentAperture; // 0xacc(0x04)
	float CurrentFocusDistance; // 0xad0(0x04)
	char pad_AD4[0xc]; // 0xad4(0x0c)
	struct TArray<struct F*7cf7ea4908> FilmbackPresets; // 0xae0(0x10)
	struct TArray<struct F*5f97372596> LensPresets; // 0xaf0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb00(0x10)
	struct FString DefaultLensPresetName; // 0xb10(0x10)
	float DefaultLensFocalLength; // 0xb20(0x04)
	float DefaultLensFStop; // 0xb24(0x04)
	char pad_B28[0x8]; // 0xb28(0x08)

	float *d714267012(); // Function CinematicCamera.CineCameraComponent.*d714267012 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaccf8
	float *9ac94752ac(); // Function CinematicCamera.CineCameraComponent.*9ac94752ac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5eaccd0
};

