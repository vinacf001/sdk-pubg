// WidgetBlueprintGeneratedClass BP_GamepadKeyIconWidget.BP_GamepadKeyIconWidget_C
// Size: 0x510 (Inherited: 0x510)
struct UBP_GamepadKeyIconWidget_C : U*f50ba61dee {
	bool *273148d9d0; // 0x440(0x01)
	bool *9465a2d88a; // 0x441(0x01)
	struct FName ActionName; // 0x448(0x08)
	enum class EGamepadKeyIconDisplayType *b159113adc; // 0x450(0x01)
	float HoldDuration; // 0x454(0x04)
	bool *728779d6da; // 0x458(0x01)
	float *e6827efdde; // 0x45c(0x04)
	float *cd85ff2959; // 0x460(0x04)
	struct UImage* DoubleTapImage; // 0x468(0x08)
	struct UImage* HoldTriangleImage; // 0x470(0x08)
	struct UImage* HoldCircleImage; // 0x478(0x08)
	struct UImage* HoldCircleBGImage; // 0x480(0x08)
	struct UImage* HoldCircleEffectImage; // 0x488(0x08)
	struct UProgressBar* HoldBar; // 0x490(0x08)
	struct U*6b11b3bf02* HoldEffectAnimation; // 0x498(0x08)
	bool *5ef1855baa; // 0x4a0(0x01)
	float *d993157579; // 0x4a4(0x04)
	struct FKey *b17c33af76; // 0x4b0(0x18)

	void *c39e69150d(); // Function TslGame.*f50ba61dee.*c39e69150d // Final|Native|Private // @ game+0x56f3a70
	void *9c98421d97(); // Function TslGame.*f50ba61dee.*9c98421d97 // Final|Native|Private // @ game+0x56f3c20
	void HandleGameUserSettingApplied(); // Function TslGame.*f50ba61dee.HandleGameUserSettingApplied // Final|Native|Private // @ game+0x56e21b8
};

