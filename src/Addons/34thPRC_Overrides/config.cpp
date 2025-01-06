class CfgPatches
{
	class 34thPRC_Overrides
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[] =
		{
			"A3_Characters_F", // Vanilla
			"DMNS_Vehicles_Bulldog", // UNSC Foundries
			"DMNS_Vehicles_M511_Springbok", // UNSC Foundries
			"19_UNSC_Weapons", // UNSC Foundries
			"OPTRE_UNSC_Units_Army", // OPTRE
			"OPTRE_FC_Units_Marines", // OPTRE FC
			"OPTRE_Weapons", // OPTRE
			"Split_Weapons_Ammo", // UNSC Foundries
			"Misriah_Armory_Weapons", // Misriah Armory
			"ace_grenades", // ACE
			"ace_huntir", // ACE
			"19thMD_Vests_Kelp", // UNSC Foundries
			"PhoenixSystems_Exosuits", // E.P.S.M ExoMod Remastered
			"NSWep_Weapons", //UNSC Naval Special Weapons
			"1st_MEU_patch_weapons", //1st MEU
		};
	};
};
class CfgVehicles
{
	#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	#include "data\config_weapons.hpp"
};
class CfgMagazines
{
	#include "data\config_magazines.hpp"
};
class CfgMagazineWells
{
	class UNSC_145x114_4rnd
	{
		19_UNSC_Weapons[]=
		{
			"4Rnd_145x114_srs99_apfsds",
			"4Rnd_145x114_srs99_hvap",
			"4Rnd_145x114_srs99_heap",
			"4Rnd_145x114_srs99_apfsds_tracer",
			"4Rnd_145x114_srs99_hvap_tracer",
			"4Rnd_145x114_srs99_heap_tracer"
		};
	};
};
