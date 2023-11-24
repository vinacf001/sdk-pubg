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
	struct F*d37e1b179c LookatTrackingSettings; // 0x990(0x30)
	char pad_9C0[0x10]; // 0x9c0(0x10)

	void *0bc3971ae9(); // Function CinematicCamera.CineCameraActor.*0bc3971ae9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9775c
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
	struct TArray<struct F*bf7af03fa4> FilmbackPresets; // 0xb30(0x10)
	struct TArray<struct F*7b0c45574e> LensPresets; // 0xb40(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb50(0x10)
	struct FString DefaultLensPresetName; // 0xb60(0x10)
	float DefaultLensFocalLength; // 0xb70(0x04)
	float DefaultLensFStop; // 0xb74(0x04)
	char pad_B78[0x8]; // 0xb78(0x08)

	void *435939b600(); // Function CinematicCamera.CineCameraComponent.*435939b600 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f9779c
	void *5faf310e1d(); // Function CinematicCamera.CineCameraComponent.*5faf310e1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5f97774
};

