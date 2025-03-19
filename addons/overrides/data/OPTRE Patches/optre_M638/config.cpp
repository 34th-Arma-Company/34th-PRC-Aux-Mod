class CfgPatches
{
	class 34thPRC_OPTRE_M638
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"34thPRC_Overrides", "34thPRC_Magazines",
			"A3_Weapons_F", //Arma Weapons_F
			"OPTRE_Weapons_Vehicle", //[Dev] Optre -> OPTRE_Weapons -> Vehicle
		};
		units[]={};
	};
};

class CfgWeapons
{
	class gatling_20mm;
	class OPTRE_M638: gatling_20mm
	{
		magazines[]+=
		{
			"34thPRC_Magazines_2000Rnd_20mmHE",
		};
	};
};
