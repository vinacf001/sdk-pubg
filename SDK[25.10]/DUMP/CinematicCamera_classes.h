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
	struct F*d37e1b179c LookatTrackingSettings; // 0x9a0(0x30)
	char pad_9D0[0x10]; // 0x9d0(0x10)

	struct UCineCameraComponent* *0bc3971ae9(); // Function CinematicCamera.CineCameraActor.*0bc3971ae9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6398ecc
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb90 (Inherited: 0xad0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xad0(0x0c)
	struct FCameraLensSettings LensSettings; // 0xadc(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xaf0(0x38)
	float CurrentFocalLength; // 0xb28(0x04)
	float CurrentAperture; // 0xb2c(0x04)
	float CurrentFocusDistance; // 0xb30(0x04)
	char pad_B34[0xc]; // 0xb34(0x0c)
	struct TArray<struct F*bf7af03fa4> FilmbackPresets; // 0xb40(0x10)
	struct TArray<struct F*7b0c45574e> LensPresets; // 0xb50(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb60(0x10)
	struct FString DefaultLensPresetName; // 0xb70(0x10)
	float DefaultLensFocalLength; // 0xb80(0x04)
	float DefaultLensFStop; // 0xb84(0x04)
	char pad_B88[0x8]; // 0xb88(0x08)

	float *435939b600(); // Function CinematicCamera.CineCameraComponent.*435939b600 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6398f0c
	float *5faf310e1d(); // Function CinematicCamera.CineCameraComponent.*5faf310e1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6398ee4
};

