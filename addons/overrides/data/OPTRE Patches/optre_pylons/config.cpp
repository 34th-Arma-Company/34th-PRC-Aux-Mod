class CfgPatches
{
	class 34thPRC_OPTRE_Falcon
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"34thPRC_Overrides",
			"OPTRE_Weapons_Vehicle", //Optre -> OPTRE_Weapons -> Vehicle
		};
		units[]={};
	};
};

class CfgWeapons
{
	class missiles_SCALPEL;
	class OPTRE_missiles_Jackknife: missiles_SCALPEL
	{
		magazines[]+=
		{
			"34thPRC_8Rnd_Jackknife_missile",
		};
	};
	class missiles_titan;
	class OPTRE_missiles_Scorpion: missiles_titan
	{
		magazines[]+=
		{
			"34th_8Rnd_Scorpion_missiles",
		};
	};
};
