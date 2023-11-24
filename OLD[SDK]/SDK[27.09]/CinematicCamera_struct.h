// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	None,
	Manual,
	Tracking,
	ECameraFocusMethod_MAX,
};

// ScriptStruct CinematicCamera.*9f31387a8a
// Size: 0x30 (Inherited: 0x00)
struct F*9f31387a8a {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bDrawDebugLookAtTrackingPosition : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LookAtTrackingInterpSpeed; // 0x04(0x04)
	char pad_8[0x10]; // 0x08(0x10)
	struct AActor* ActorToTrack; // 0x18(0x08)
	struct FVector RelativeOffset; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x38 (Inherited: 0x00)
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ManualFocusDistance; // 0x04(0x04)
	struct F*b41c203689 TrackingFocusSettings; // 0x08(0x18)
	char bDrawDebugFocusPlane : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FColor *b0498cfde6; // 0x24(0x04)
	char bSmoothFocusChanges : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float FocusSmoothingInterpSpeed; // 0x2c(0x04)
	float FocusOffset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct CinematicCamera.*b41c203689
// Size: 0x18 (Inherited: 0x00)
struct F*b41c203689 {
	struct AActor* ActorToTrack; // 0x00(0x08)
	struct FVector RelativeOffset; // 0x08(0x0c)
	char bDrawDebugTrackingFocusPoint : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct CinematicCamera.*d435738853
// Size: 0x28 (Inherited: 0x00)
struct F*d435738853 {
	struct FString Name; // 0x00(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x14 (Inherited: 0x00)
struct FCameraLensSettings {
	float MinFocalLength; // 0x00(0x04)
	float MaxFocalLength; // 0x04(0x04)
	float MinFStop; // 0x08(0x04)
	float MaxFStop; // 0x0c(0x04)
	float MinimumFocusDistance; // 0x10(0x04)
};

// ScriptStruct CinematicCamera.*1f589c3fd8
// Size: 0x20 (Inherited: 0x00)
struct F*1f589c3fd8 {
	struct FString Name; // 0x00(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0x0c (Inherited: 0x00)
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
	float SensorAspectRatio; // 0x08(0x04)
};

