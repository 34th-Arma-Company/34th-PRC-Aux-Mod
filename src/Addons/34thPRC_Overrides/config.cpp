class CfgPatches
{
	class 34thPRC_Overrides
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[] =
		{
			"DMNS_Vehicles_Bulldog", // UNSC Foundries
			"DMNS_Vehicles_M511_Springbok" // UNSC Foundries
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
