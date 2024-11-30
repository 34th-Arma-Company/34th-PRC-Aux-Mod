class CfgPatches
{
	class 34thPRC_ArmourCustom
	{
		author="34th PRC Modding Team";
		units[]={};
		requiredAddons[]=
		{
			//"MA_Armor", //MA_Armor
			"34thPRC_ArmourStandard" //34th PRC Aux Mod
		};
	};
};
class CfgVehicles
{
	//#include "data\config_vehicles.hpp"
};
class CfgWeapons
{
	//Defines for custom ODST vest & helmet
	class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban; //34thPRC_ArmourStandard
	class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban_dp; //34thPRC_ArmourStandard
	class ItemInfo; // ARMA3

	//ODST Vests
	class 34thPRC_ArmourStandard_ODST2_M52_Urban; //34thPRC_ArmourStandard //Variant A / default
	class 34thPRC_ArmourStandard_ODST2_M52_Marksman_Urban; //34thPRC_ArmourStandard //Marksman shoulders and bobs
	class 34thPRC_ArmourStandard_ODST2_M52_CQB_Urban; //34thPRC_ArmourStandard //CQB Shoulders and bobs
	class 34thPRC_ArmourStandard_ODST2_M52_B_Urban; //34thPRC_ArmourStandard //Variant B
	class 34thPRC_ArmourStandard_ODST2_M52_C_Urban; //34thPRC_ArmourStandard //Variant C

	//includes
	#include "data\config_weapons.hpp"
};
