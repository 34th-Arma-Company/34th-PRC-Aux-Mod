class 34thPRC_ArmourCustom_ODST2_Vasya_CH252D_CustomVisor_Urban : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban
{
	displayName="[34th] CH252D Urban 'Vasya' (Custom Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourCustom\data\odst2\vasya\urban\vasya_odst_helmet_urban.paa",
		"34thPRC_ArmourCustom\data\odst2\vasya\visor\vasya_odst_visor.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourCustom_ODST2_Yandere_CH252D_CustomVisor_Urban";
		player="vasya";
		camo="urban";
		visor="custom";
	};
};
class 34thPRC_ArmourCustom_ODST2_Vasya_CH252D_CustomVisor_Urban_dp : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban_dp
{
	displayName="[34th] CH252D Urban 'Vasya' (Custom Visor)";
	author="Over Yandere";
	scope=1;
	hiddenSelectionsTextures[]=
	{
		"34thPRC_ArmourCustom\data\odst2\vasya\urban\vasya_odst_helmet_urban.paa",
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
	};
	class ItemInfo:ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};
