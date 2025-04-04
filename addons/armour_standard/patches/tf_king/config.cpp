class CfgPatches
{
	class 34thPRC_TF_King
	{
		author="34thPRC Mod Dev Team, Yandere";
		addonRootClass="34thPRC_ArmourStandard";
		requiredAddons[]= { "NSWep_Armours", //UNSC NavSpec Weapons -> NavSpecWeapons_Armour
		};
		units[]={};
	};
};

class CfgWeapons
{
	//Armor
	class VestItem;
	class NSWep_Armour_RM_L_ONI;
	class NSWep_Armour_RM_M_ONI;
	class NSWep_Armour_RM_ONI;
	class NSWep_Armour_MM_ONI;

	class 34thPRC_ArmourStandard_TFKing_Light_Armor : NSWep_Armour_RM_L_ONI
	{
		author="Over Yandere";
		displayName="[TFK] M51 Armour (Rifleman / Light / TF King)";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_chest_CO.paa",
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_legs_CO.paa"
		};
	};
	class 34thPRC_ArmourStandard_TFKing_Medium_Armor : NSWep_Armour_RM_M_ONI
	{
		author="Over Yandere";
		displayName="[TFK] M51 Armour (Rifleman / Medium / TF King)";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_chest_CO.paa",
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_legs_CO.paa"
		};
	};

	class 34thPRC_ArmourStandard_TFKing_Heavy_Armor : NSWep_Armour_RM_ONI
	{
		author="Over Yandere";
		displayName="[TFK] M51 Armour (Rifleman / Heavy / TF King)";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_chest_CO.paa",
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_legs_CO.paa"
		};
	};
	class 34thPRC_ArmourStandard_TFKing_Marksman : NSWep_Armour_MM_ONI
	{
		author="Over Yandere";
		displayName="[TFK] M51 Armour (Marksman / TF King)";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_chest_CO.paa",
			"\z\34thprc\addons\armour_standard\patches\tf_king\armor_legs_CO.paa"
		};
	};

	//Headgear
	class HeadgearItem;
	class NSWep_H_CE_FTL_ONI;
	class NSWep_H_CE_CM_ONI;
	class NSWep_H_CE_VAC_ONI;
	class NSWep_H_CE_VAC_CM_ONI;

	class 34thPRC_TFKing_CH251_Helmet_Full : NSWep_H_CE_FTL_ONI
	{
		displayName="[TFK] CH251 Helmet (Full / TF KING)";
		author="Over Yandere";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\helmet_CO.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\EyePiece_ca.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\Vac_Visor_oni_ca.paa"
		};
	};
	class 34thPRC_ArmourStandard_TFKing_Full_Corpsman : NSWep_H_CE_CM_ONI
	{
		displayName="[TFK] CH251 Helmet (Full / Corpsman / TF KING)";
		author="Over Yandere";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\helmet_cm_CO.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\EyePiece_ca.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\Vac_Visor_oni_ca.paa"
		};
	};

	class 34thPRC_ArmourStandard_TFKing_VacSealed : NSWep_H_CE_VAC_ONI
	{
		displayName="[TFK] CH251 Helmet (Vac Sealed / TF KING)";
		author="Over Yandere";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\helmet_CO.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\EyePiece_ca.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\Vac_Visor_oni_co.paa"
		};
	};
	class 34thPRC_ArmourStandard_TFKing_VacSealed_Corpsman : NSWep_H_CE_VAC_CM_ONI
	{
		displayName="[TFK] CH251 Helmet (Vac Sealed / Corpsman / TF KING)";
		author="Over Yandere";
		hiddenSelectionsTextures[]=
		{
			"\z\34thprc\addons\armour_standard\patches\tf_king\helmet_cm_CO.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\EyePiece_ca.paa",
			"NavSpecWep_Armours\CE\textures\variants\Helmet\shared\Vac_Visor_oni_co.paa"
		};
	};
};
