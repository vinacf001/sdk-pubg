// Class CinematicCamera.CameraRig_Crane
// Size: 0x438 (Inherited: 0x408)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x408(0x04)
	float CraneYaw; // 0x40c(0x04)
	float CraneArmLength; // 0x410(0x04)
	bool bLockMountPitch; // 0x414(0x01)
	bool bLockMountYaw; // 0x415(0x01)
	char pad_416[0x2]; // 0x416(0x02)
	struct USceneComponent* TransformComponent; // 0x418(0x08)
	struct USceneComponent* CraneYawControl; // 0x420(0x08)
	struct USceneComponent* CranePitchControl; // 0x428(0x08)
	struct USceneComponent* CraneCameraMount; // 0x430(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x428 (Inherited: 0x408)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct USceneComponent* TransformComponent; // 0x410(0x08)
	struct USplineComponent* RailSplineComponent; // 0x418(0x08)
	struct USceneComponent* RailCameraMount; // 0x420(0x08)
};

// Class CinematicCamera.CineCameraActor
// Size: 0x9f0 (Inherited: 0x9b0)
struct ACineCameraActor : ACameraActor {
	struct F*9f31387a8a LookatTrackingSettings; // 0x9b0(0x30)
	char pad_9E0[0x10]; // 0x9e0(0x10)

	void *02187828c1(); // Function CinematicCamera.CineCameraActor.*02187828c1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6164d20
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb80 (Inherited: 0xac0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xac0(0x0c)
	struct FCameraLensSettings LensSettings; // 0xacc(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xae0(0x38)
	float CurrentFocalLength; // 0xb18(0x04)
	float CurrentAperture; // 0xb1c(0x04)
	float CurrentFocusDistance; // 0xb20(0x04)
	char pad_B24[0xc]; // 0xb24(0x0c)
	struct TArray<struct F*1f589c3fd8> FilmbackPresets; // 0xb30(0x10)
	struct TArray<struct F*d435738853> LensPresets; // 0xb40(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb50(0x10)
	struct FString DefaultLensPresetName; // 0xb60(0x10)
	float DefaultLensFocalLength; // 0xb70(0x04)
	float DefaultLensFStop; // 0xb74(0x04)
	char pad_B78[0x8]; // 0xb78(0x08)

	void *6fc8abd4b9(); // Function CinematicCamera.CineCameraComponent.*6fc8abd4b9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6164d38
	void *9135357342(); // Function CinematicCamera.CineCameraComponent.*9135357342 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6164d60
};

