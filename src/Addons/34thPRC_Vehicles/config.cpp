class CfgPatches
{
	class 34thPRC_Vehicles
	{
		author="34th PRC Modding Team";
		units[]=
		{
			"34thPRC_Vehicles_Scorpion"
		};
		requiredAddons[] =
		{
			"34thPRC_FactionBrimstone", // 34th PRC Aux Mod
			"DMNS_Vehicles_M808B", // UNSC Foundries
		};
	};
};
class CfgVehicles
{
	#include "data\config_vehicles.hpp"
};
