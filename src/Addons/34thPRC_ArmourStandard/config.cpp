class CfgPatches
{
	class 34thPRC_ArmourStandard
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[] =
		{
			"A3_Characters_F", // Vanilla
			"A3_Characters_F_EPB", // Vanilla
			"Halo_marine_02", // Misriah Armory Tactical Gear and Equipment
			"MA_Armor",	// Misriah Armory
			"34thPRC_Overrides" // 34th PRC Aux Mod
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
