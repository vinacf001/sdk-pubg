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
	struct F*de1e88281a LookatTrackingSettings; // 0x9a0(0x30)
	char pad_9D0[0x10]; // 0x9d0(0x10)

	struct UCineCameraComponent* *800600a97c(); // Function CinematicCamera.CineCameraActor.*800600a97c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6084394
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
	struct TArray<struct F*4881a7d8ef> FilmbackPresets; // 0xae0(0x10)
	struct TArray<struct F*62421bcfd0> LensPresets; // 0xaf0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb00(0x10)
	struct FString DefaultLensPresetName; // 0xb10(0x10)
	float DefaultLensFocalLength; // 0xb20(0x04)
	float DefaultLensFStop; // 0xb24(0x04)
	char pad_B28[0x8]; // 0xb28(0x08)

	float *2e48f4d56f(); // Function CinematicCamera.CineCameraComponent.*2e48f4d56f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60843d4
	float *3ef1f01f05(); // Function CinematicCamera.CineCameraComponent.*3ef1f01f05 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x60843ac
};

