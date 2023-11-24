// BlueprintGeneratedClass BP_MasteryBannerController.BP_MasteryBannerController_C
// Size: 0x478 (Inherited: 0x478)
struct ABP_MasteryBannerController_C : AMasteryBannerController {
	struct FName BannerMaterialSlotName; // 0x3f0(0x08)
	struct FName RankParamName; // 0x3f8(0x08)
	struct FName RankBorderParamName; // 0x400(0x08)
	struct FName PrimaryBannerColorParamName; // 0x408(0x08)
	struct FName SecondaryBannerColorParamName; // 0x410(0x08)
	struct UAnimationAsset* BannerAnimation; // 0x418(0x08)
	struct TMap<int32, struct UTexture*> RankBorderTextures; // 0x420(0x50)
	struct AActor* *f1eb20fd54; // 0x470(0x08)

	bool *4d69f1a667(); // Function TslGame.MasteryBannerController.*4d69f1a667 // Final|Native|Public|BlueprintCallable // @ game+0x567a074
	void *905eb02f88(); // Function TslGame.MasteryBannerController.*905eb02f88 // Final|Native|Public|BlueprintCallable // @ game+0x56635a8
};

