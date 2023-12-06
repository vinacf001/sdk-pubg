// BlueprintGeneratedClass CS_Hit.CS_Hit_C
// Size: 0x170 (Inherited: 0x170)
struct UCS_Hit_C : UCameraShake {
	char *a1129bfbd8 : 1; // 0x30(0x01)
	float *a990975726; // 0x34(0x04)
	float *99ca5d8eef; // 0x38(0x04)
	float *f03da12a63; // 0x3c(0x04)
	struct F*f7217abe10 *fbdc439690; // 0x40(0x24)
	struct F*06e6e74a48 *b9e2b7833f; // 0x64(0x24)
	struct F*dc02247a53 *168c6d0348; // 0x88(0x0c)
	float AnimPlayRate; // 0x94(0x04)
	float *be68479f85; // 0x98(0x04)
	float *8b697649b9; // 0x9c(0x04)
	float *b7a23eb463; // 0xa0(0x04)
	float *980c5845a2; // 0xa4(0x04)
	struct UCameraAnim* Anim; // 0xa8(0x08)
	char bRandomAnimSegment : 1; // 0xb0(0x01)
	struct APlayerCameraManager* CameraOwner; // 0xc8(0x08)
	float ShakeScale; // 0x158(0x04)
	float OscillatorTimeRemaining; // 0x15c(0x04)
	struct U*d3f66f5eff* AnimInst; // 0x160(0x08)

	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0xd2f7fc
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ReceivePlayShake(float Scale); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x370fbc
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
};

