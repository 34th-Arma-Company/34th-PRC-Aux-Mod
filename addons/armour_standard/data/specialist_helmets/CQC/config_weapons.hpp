class 34thPRC_ArmourStandard_CQC_Helmet_Urban : 34thPRC_ArmourStandard_Marines2_CH252_Urban
{
	displayName="[34th] CQC Helmet Urban";
	author="Yandere";
	model="MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_helmet_urban_CO.paa",
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_visor_CO.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\helmet.rvmat",
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\visor.rvmat"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="cqc";
		camo="urban";
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\CQC\CQC_Helmet.p3d";
	};
};
class 34thPRC_ArmourStandard_CQC_Helmet_Arid : 34thPRC_ArmourStandard_CQC_Helmet_Urban
{
	displayName="[34th] CQC Helmet Arid";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_helmet_arid_CO.paa",
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_visor_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="cqc";
		camo="arid";
	};
};
class 34thPRC_ArmourStandard_CQC_Helmet_Arctic : 34thPRC_ArmourStandard_CQC_Helmet_Urban
{
	displayName="[34th] CQC Helmet Arctic";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_helmet_arctic_CO.paa",
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_visor_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="cqc";
		camo="arctic";
	};
};
class 34thPRC_ArmourStandard_CQC_Helmet_Tropic : 34thPRC_ArmourStandard_CQC_Helmet_Urban
{
	displayName="[34th] CQC Helmet Tropic";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_helmet_tropic_CO.paa",
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_visor_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="cqc";
		camo="tropic";
	};
};
class 34thPRC_ArmourStandard_CQC_Helmet_Woodland : 34thPRC_ArmourStandard_CQC_Helmet_Urban
{
	displayName="[34th] CQC Helmet Woodland";
	author="Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_helmet_woodland_CO.paa",
		"\z\34thprc\addons\armour_standard\data\specialist_helmets\CQC\cqc_visor_CO.paa"
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_EOD_Helmet_Urban";
		helmet="cqc";
		camo="woodland";
	};
};
