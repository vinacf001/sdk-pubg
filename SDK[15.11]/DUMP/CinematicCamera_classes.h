// Class CinematicCamera.CameraRig_Crane
// Size: 0x428 (Inherited: 0x3f8)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x3f8(0x04)
	float CraneYaw; // 0x3fc(0x04)
	float CraneArmLength; // 0x400(0x04)
	bool bLockMountPitch; // 0x404(0x01)
	bool bLockMountYaw; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	struct USceneComponent* TransformComponent; // 0x408(0x08)
	struct USceneComponent* CraneYawControl; // 0x410(0x08)
	struct USceneComponent* CranePitchControl; // 0x418(0x08)
	struct USceneComponent* CraneCameraMount; // 0x420(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x418 (Inherited: 0x3f8)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct USceneComponent* TransformComponent; // 0x400(0x08)
	struct USplineComponent* RailSplineComponent; // 0x408(0x08)
	struct USceneComponent* RailCameraMount; // 0x410(0x08)
};

// Class CinematicCamera.CineCameraActor
// Size: 0x9e0 (Inherited: 0x9a0)
struct ACineCameraActor : ACameraActor {
	struct F*69a8d4adc4 LookatTrackingSettings; // 0x9a0(0x30)
	char pad_9D0[0x10]; // 0x9d0(0x10)

	void *22083f365e(); // Function CinematicCamera.CineCameraActor.*22083f365e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60b0f9c
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb20 (Inherited: 0xa60)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa60(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa6c(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xa80(0x38)
	float CurrentFocalLength; // 0xab8(0x04)
	float CurrentAperture; // 0xabc(0x04)
	float CurrentFocusDistance; // 0xac0(0x04)
	char pad_AC4[0xc]; // 0xac4(0x0c)
	struct TArray<struct F*7cf7ea4908> FilmbackPresets; // 0xad0(0x10)
	struct TArray<struct F*5f97372596> LensPresets; // 0xae0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xaf0(0x10)
	struct FString DefaultLensPresetName; // 0xb00(0x10)
	float DefaultLensFocalLength; // 0xb10(0x04)
	float DefaultLensFStop; // 0xb14(0x04)
	char pad_B18[0x8]; // 0xb18(0x08)

	void *d714267012(); // Function CinematicCamera.CineCameraComponent.*d714267012 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60b0fdc
	void *9ac94752ac(); // Function CinematicCamera.CineCameraComponent.*9ac94752ac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60b0fb4
};

