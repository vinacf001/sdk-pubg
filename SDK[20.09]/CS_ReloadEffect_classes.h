// BlueprintGeneratedClass CS_ReloadEffect.CS_ReloadEffect_C
// Size: 0x160 (Inherited: 0x160)
struct UCS_ReloadEffect_C : UCameraShake {
	char *1bcf2af904 : 1; // 0x28(0x01)
	float *bf3553f181; // 0x2c(0x04)
	float *3148f5c3c5; // 0x30(0x04)
	float *8698cd9385; // 0x34(0x04)
	struct F*673e053786 *ac240f8630; // 0x38(0x24)
	struct F*eff78d75d0 *b8c7dd6819; // 0x5c(0x24)
	struct F*58787e3608 *511d76dce3; // 0x80(0x0c)
	float AnimPlayRate; // 0x8c(0x04)
	float *5aee86e63b; // 0x90(0x04)
	float *b54198ecd1; // 0x94(0x04)
	float *43bfb06925; // 0x98(0x04)
	float *968bd93263; // 0x9c(0x04)
	struct UCameraAnim* Anim; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	struct APlayerCameraManager* CameraOwner; // 0xc0(0x08)
	float ShakeScale; // 0x148(0x04)
	float OscillatorTimeRemaining; // 0x14c(0x04)
	struct U*de6aae17ea* AnimInst; // 0x150(0x08)

	void ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct F*cfcaca8725 BlueprintUpdateCameraShake(); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x1e037c
	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0xc0d604
};

