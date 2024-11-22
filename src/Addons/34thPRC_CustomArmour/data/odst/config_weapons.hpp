//Includes
class 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor; //34thPRC_ArmourStandard
class 34thPRC_ArmourStandard_ODST_M52_Urban; //34thPRC_ArmourStandard
class 34thPRC_ArmourStandard_ODST_M52_Marksman_Urban; //34thPRC_ArmourStandard
class 34thPRC_ArmourStandard_ODST_M52_CQB_Urban;


//Yandere Custom, Helmets -> Armors
class 34thPRC_CustomArmour_ODST_CH2552D_Yandere_Urban_CustomVisor : 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor
{
	displayName="[34th] CH252D 'Yandere' Urban (Custom Visor)";
	author="Over Yandere";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_helmet_urban.paa",
		"34thPRC_CustomArmour\data\odst\yandere\yandere_odst_visor.paa"
	};
};
class 34thPRC_CustomArmour_ODST_CH252D_Yandere_Urban_SilverVisor : 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor
{
    displayName="[34th] CH252D Urban 'Yandere' (Silver Visor)";
    author="Over Yandere";
    hiddenSelectionsTextures[]=
    {
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_helmet_urban.paa",
        "34thPRC_ArmourStandard\data\odst2\visor\34th_ODST_Silvervisor.paa"
    };
};
class 34thPRC_CustomArmour_ODST_CH252D_Yandere_Urban_RedVisor : 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor
{
	displayName="[34th] CH252D Urban 'Yandere' (Red Visor)";
    author="Over Yandere";
    hiddenSelectionsTextures[]=
    {
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_helmet_urban.paa",
        "34thPRC_ArmourStandard\data\odst2\visor\34th_ODST_Redvisor.paa"
    };
}
class 34thPRC_CustomArmour_ODST_CH252D_Yandere_Urban_GoldVisor : 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor
{
	displayName="[34th] CH252D Urban 'Yandere' (Gold Visor)";
    author="Over Yandere";
    hiddenSelectionsTextures[]=
    {
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_helmet_urban.paa",
        "34thPRC_ArmourStandard\data\odst2\visor\34th_ODST_Goldvisor.paa"
    };
}
class 34thPRC_CustomArmour_ODST_M52_Yandere_Urban : 34thPRC_ArmourStandard_ODST_M52_Urban
{
    displayName="[34th] M52 Combat Armour 'Yandere' Urban";
    author="Over Yandere";
    hiddenSelectionsTextures[]=
    {
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_cqb_urban.paa", //CQB Left
    	"34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_cqb_urban.paa", //CQB Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_marksman_urban.paa", //Marksman_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_marksman_urban.paa", //Marksman_Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Bracer_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Bracer_Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Chest
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_shoulders_urban.paa", //ODST_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_shoulders_urban.paa", //ODST_Right
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
};
class 34thPRC_CustomArmour_ODST_M52_Marksman_Yandere_Urban : 34thPRC_ArmourStandard_ODST_M52_Marksman_Urban
{
    displayName="[34th] M52 Combat Armour 'Yandere' Urban";
    author="Over Yandere";
    hiddenSelectionsTextures[]=
    {
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_cqb_urban.paa", //CQB Left
    	"34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_cqb_urban.paa", //CQB Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_marksman_urban.paa", //Marksman_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_marksman_urban.paa", //Marksman_Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Bracer_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Bracer_Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Chest
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_shoulders_urban.paa", //ODST_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_shoulders_urban.paa", //ODST_Right
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
};
class 34thPRC_CustomArmour_ODST_M52_CQB_Yandere_Urban : 34thPRC_ArmourStandard_ODST_M52_CQB_Urban
{
    displayName="[34th] M52 Combat Armour 'Yandere' Urban";
    author="Over Yandere";
    hiddenSelectionsTextures[]=
    {
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_cqb_urban.paa", //CQB Left
    	"34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_cqb_urban.paa", //CQB Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_marksman_urban.paa", //Marksman_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_marksman_urban.paa", //Marksman_Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Bracer_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Bracer_Right
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_vest_urban.paa", //ODST_Chest
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_shoulders_urban.paa", //ODST_Left
        "34thPRC_CustomArmour\data\odst\yandere\urban\yandere_odst_shoulders_urban.paa", //ODST_Right
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
};
