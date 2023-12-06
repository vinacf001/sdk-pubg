// BlueprintGeneratedClass BP_MasteryBannerController.BP_MasteryBannerController_C
// Size: 0x480 (Inherited: 0x480)
struct ABP_MasteryBannerController_C : AMasteryBannerController {
	struct FName BannerMaterialSlotName; // 0x3f8(0x08)
	struct FName RankParamName; // 0x400(0x08)
	struct FName RankBorderParamName; // 0x408(0x08)
	struct FName PrimaryBannerColorParamName; // 0x410(0x08)
	struct FName SecondaryBannerColorParamName; // 0x418(0x08)
	struct UAnimationAsset* BannerAnimation; // 0x420(0x08)
	struct TMap<int32, struct UTexture*> RankBorderTextures; // 0x428(0x50)
	struct AActor* *1f4d77f0fb; // 0x478(0x08)

	void *c858fad523(); // Function TslGame.MasteryBannerController.*c858fad523 // Final|Native|Public|BlueprintCallable // @ game+0x5e35ebc
	void *00cc072bbb(bool PlayAnimation, bool ShowBackgroundScene); // Function TslGame.MasteryBannerController.*00cc072bbb // Final|Native|Public|BlueprintCallable // @ game+0x5e4c1d0
};

