class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban : CH252D_Helmet
{
	displayName="[34th] CH252D Urban (Silver Visor)";
	author="Over Yandere";
	tcp_visrRscTitlesClass = "RscTCPVisrODST";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",
		"\z\34thprc\addons\armour_standard\data\odst2\visor\34th_ODST_Silvervisor.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\34th_odst_helmet.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\34th_odst_visor.rvmat"
	};
	class XtdGearInfo
	{
		model= "34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban";
		camo= "urban";
		visor= "silver";
	};
};
class 34thPRC_ArmourStandard_ODST2_CH252D_RedVisor_Urban : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban
{
	displayName="[34th] CH252D Urban (Red Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",
		"\z\34thprc\addons\armour_standard\data\odst2\visor\34th_ODST_Redvisor.paa"
	};
	class XtdGearInfo
	{
		model= "34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban";
		camo= "urban";
		visor= "red";
	};
};
class 34thPRC_ArmourStandard_ODST2_CH252D_GoldVisor_Urban : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban
{
	displayName="[34th] CH252D Urban (Gold Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",
		"\z\34thprc\addons\armour_standard\data\odst2\visor\34th_ODST_Goldvisor.paa"
	};
	class XtdGearInfo
	{
		model= "34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban";
		camo= "urban";
		visor= "gold";
	};
};
class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban_dp : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban
{
	displayName="[34th] CH252D Urban (Silver Visor)";
	author="Over Yandere";
	scope=1;
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",// Helmet Texture
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa" // Visor Texture
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};
class 34thPRC_ArmourStandard_ODST2_CH252D_RedVisor_Urban_dp : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban
{
	displayName="[34th] CH252D Urban (Red Visor)";
	author="Over Yandere";
	scope=1;
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",// Helmet Texture
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa" // Visor Texture
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};
class 34thPRC_ArmourStandard_ODST2_CH252D_GoldVisor_Urban_dp : 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban
{
	displayName="[34th] CH252D Urban (Gold Visor)";
	author="Over Yandere";
	scope=1;
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Helmet.paa",// Helmet Texture
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa" // Visor Texture
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_Urban : M52_ODST_Vest_Standard_A
{
	displayName="[34th] M52 Combat Armour Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="a";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_Medic_Urban : 34thPRC_ArmourStandard_ODST2_M52_Urban
{
	displayName="[34th] M52 Combat Armour (Corpsman) Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="medic_a";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_B_Urban : M52_ODST_Vest_Standard_B
{
	displayName="[34th] M52-B Combat Armour Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="b";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_B_Medic_Urban : 34thPRC_ArmourStandard_ODST2_M52_B_Urban
{
	displayName="[34th] M52-B Combat Armour (Corpsman) Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="medic_b";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_C_Urban : M52_ODST_Vest_Standard_C
{
	displayName="[34th] M52-C Combat Armour Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="c";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_C_Medic_Urban : 34thPRC_ArmourStandard_ODST2_M52_C_Urban
{
	displayName="[34th] M52-C Combat Armour (Corpsman) Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="medic_c";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_D_Urban : M52_ODST_Vest_Standard_D
{
	displayName="[34th] M52-D Combat Armour Urban";
	author="Over Yandere";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5",
		"Camo6",
		"Camo7",
		"Camo8",
		"Camo9",
		"Camo10",
		"Camo11",
		"Camo12",
		"Camo13",
		"Camo14",
		"Camo15",
		"Camo16",
		"Camo17",
		"Camo18",
		"Camo19",
		"Camo20",
		"Camo21",
		"Camo22",
		"Camo23",
		"Camo24",
		"Camo25",
		"Camo26",
		"Camo27",
		"Camo28",
		"Camo29",
		"CQB_Left",
		"CQB_Right",
		"Marksman_Left",
		"Marksman_Right",
		"LShoulderRadio",
		"RShoulderRadio",
		"WaistSLeft",
		"WaistSRight"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7",
			"Camo8",
			"Camo9",
			"Camo10",
			"Camo11",
			"Camo12",
			"Camo13",
			"Camo14",
			"Camo15",
			"Camo16",
			"Camo17",
			"Camo18",
			"Camo19",
			"Camo20",
			"Camo21",
			"Camo22",
			"Camo23",
			"Camo24",
			"Camo25",
			"Camo26",
			"Camo27",
			"Camo28",
			"Camo29",
			"CQB_Left",
			"CQB_Right",
			"Marksman_Left",
			"Marksman_Right",
			"LShoulderRadio",
			"RShoulderRadio",
			"TorsoPMLeft",
			"TorsoPMRight",
			"WaistSLeft",
			"WaistSRight"
		};
	};
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="d";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_D_Medic_Urban : 34thPRC_ArmourStandard_ODST2_M52_D_Urban
{
	displayName="[34th] M52-D Combat Armour (Corpsman) Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest_Medic.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders_Medic.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="medic_d";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_Marksman_Urban : M52_ODST_Vest_Marksman
{
	displayName="[34th] M52 Combat Armour (Marksman) Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="marksman";
	};
};
class 34thPRC_ArmourStandard_ODST2_M52_CQB_Urban : M52_ODST_Vest_CQB
{
	displayName="[34th] M52 Combat Armour (CQB) Urban";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_CQB.paa", //CQB Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Marksman.paa", //Marksman_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Bracer_Right
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Vest.paa", //ODST_Chest
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Left
		"\z\34thprc\addons\armour_standard\data\odst2\urban\34th_Urban_ODST_Shoulders.paa", //ODST_Right
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
		"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
		"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
	};
	hiddenSelectionsMaterials[]=
	{
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\cqb_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\marksman_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_vest.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
		"\z\34thprc\addons\armour_standard\data\odst2\odst_shoulders.rvmat",
	};
	class XtdGearInfo
	{
		model="34thPRC_ArmourStandard_ODST2_M52_Urban";
		camo="urban";
		variant="cqb";
	};
};
