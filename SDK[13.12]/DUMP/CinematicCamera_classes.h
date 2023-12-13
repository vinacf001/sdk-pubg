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
	struct F*de1e88281a LookatTrackingSettings; // 0x990(0x30)
	char pad_9C0[0x10]; // 0x9c0(0x10)

	void *800600a97c(); // Function CinematicCamera.CineCameraActor.*800600a97c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x623dc68
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
	struct TArray<struct F*4881a7d8ef> FilmbackPresets; // 0xad0(0x10)
	struct TArray<struct F*62421bcfd0> LensPresets; // 0xae0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xaf0(0x10)
	struct FString DefaultLensPresetName; // 0xb00(0x10)
	float DefaultLensFocalLength; // 0xb10(0x04)
	float DefaultLensFStop; // 0xb14(0x04)
	char pad_B18[0x8]; // 0xb18(0x08)

	void *2e48f4d56f(); // Function CinematicCamera.CineCameraComponent.*2e48f4d56f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x623dca8
	void *3ef1f01f05(); // Function CinematicCamera.CineCameraComponent.*3ef1f01f05 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x623dc80
};

