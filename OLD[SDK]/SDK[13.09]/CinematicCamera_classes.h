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
	struct F*9f31387a8a LookatTrackingSettings; // 0x9a0(0x30)
	char pad_9D0[0x10]; // 0x9d0(0x10)

	void *02187828c1(); // Function CinematicCamera.CineCameraActor.*02187828c1 // None // @ game+0x5d56554
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb70 (Inherited: 0xab0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xab0(0x0c)
	struct FCameraLensSettings LensSettings; // 0xabc(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xad0(0x38)
	float CurrentFocalLength; // 0xb08(0x04)
	float CurrentAperture; // 0xb0c(0x04)
	float CurrentFocusDistance; // 0xb10(0x04)
	char pad_B14[0xc]; // 0xb14(0x0c)
	struct TArray<struct F*1f589c3fd8> FilmbackPresets; // 0xb20(0x10)
	struct TArray<struct F*d435738853> LensPresets; // 0xb30(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb40(0x10)
	struct FString DefaultLensPresetName; // 0xb50(0x10)
	float DefaultLensFocalLength; // 0xb60(0x04)
	float DefaultLensFStop; // 0xb64(0x04)
	char pad_B68[0x8]; // 0xb68(0x08)

	void *6fc8abd4b9(); // Function CinematicCamera.CineCameraComponent.*6fc8abd4b9 // None // @ game+0x5d5656c
	void *9135357342(); // Function CinematicCamera.CineCameraComponent.*9135357342 // None // @ game+0x5d56594
};

