class CfgPatches
{
	class 34thPRC_Armour_Standard
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddond[] =
		{
			"A3_Characters_F_EPB", // Vanilla
			"Halo_marine_02", // Misriah Armory Tactical Gear and Equipment
			"MA_Armor"	// Misriah Armory
		};
	};
};
class CfgVehicleClasses
{
	class MA_Soldier_Class;
};
class CfgVehicles
{
	#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	class UniformItem;

	#include "data\config_weapons.hpp"
};
