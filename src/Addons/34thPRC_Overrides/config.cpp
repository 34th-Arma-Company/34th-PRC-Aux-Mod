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
			"OPTRE_FC_Units_Marines" // OPTRE FC
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
