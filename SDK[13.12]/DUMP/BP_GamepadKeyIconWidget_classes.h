// WidgetBlueprintGeneratedClass BP_GamepadKeyIconWidget.BP_GamepadKeyIconWidget_C
// Size: 0x590 (Inherited: 0x590)
struct UBP_GamepadKeyIconWidget_C : U*400a0fbc3d {
	bool *3056639d9b; // 0x448(0x01)
	bool *aeb9658d12; // 0x449(0x01)
	struct FName ActionName; // 0x450(0x08)
	enum class EGamepadKeyIconDisplayType DisplayType; // 0x458(0x01)
	float HoldDuration; // 0x45c(0x04)
	bool *d678735f4f; // 0x460(0x01)
	float *5ba614a5a4; // 0x464(0x04)
	float *2ebf41fdbe; // 0x468(0x04)
	struct UImage* DoubleTapImage; // 0x470(0x08)
	struct UImage* HoldTriangleImage; // 0x478(0x08)
	struct UImage* HoldCircleImage; // 0x480(0x08)
	struct UImage* HoldCircleBGImage; // 0x488(0x08)
	struct UImage* HoldCircleEffectImage; // 0x490(0x08)
	struct UProgressBar* HoldBar; // 0x498(0x08)
	struct U*9c8bfa0aee* HoldEffectAnimation; // 0x4a0(0x08)
	bool *6d02f4784b; // 0x4a8(0x01)
	float *f4dde528f7; // 0x4ac(0x04)
	struct FKey *212d7971a3; // 0x4b8(0x18)

	void *ffc521df9b(); // Function TslGame.*400a0fbc3d.*ffc521df9b // Final|Native|Private // @ game+0x5bc6ec4
	void HandleGameUserSettingApplied(); // Function TslGame.*400a0fbc3d.HandleGameUserSettingApplied // Final|Native|Private // @ game+0x5bb4514
	void *4bd46feaf8(); // Function TslGame.*400a0fbc3d.*4bd46feaf8 // Final|Native|Private // @ game+0x5bc6e38
};

