// BlueprintGeneratedClass BP_FlashBangCaptureActor_v2.BP_FlashBangCaptureActor_v2_C
// Size: 0x428 (Inherited: 0x428)
struct ABP_FlashBangCaptureActor_v2_C : AFlashBangCaptureActor {
	struct USceneComponent* SceneRootComponent; // 0x3f0(0x08)
	struct USceneCaptureComponent2D* SceneCapture; // 0x3f8(0x08)
	struct APawn* *290abcc906; // 0x400(0x08)
	struct UTextureRenderTarget2D* *7f462ccf76; // 0x408(0x08)
	int32 *5234f14a85; // 0x410(0x04)

	void CaptureScreen(); // Function TslGame.FlashBangCaptureActor.CaptureScreen // Final|Native|Public // @ game+0x5b1675c
	void *496651faf3(bool bDoDelay, float CaptureDelay, struct APawn* PlayerRef, struct UTextureRenderTarget2D* RenderTexture, struct FPostProcessSettings PP_Settings); // Function TslGame.FlashBangCaptureActor.*496651faf3 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x5b164b0
};

