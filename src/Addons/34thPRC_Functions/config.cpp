class CfgPatches
{
	class 34thPRC_Functions
	{
		author="34th PRC Modding Team";
		requiredAddons[]=
		{
			"A3_Characters_F", "A3_Weapons_F", "A3_Data_F", "A3_Anims_F", "A3_UI_F", //Base Arma
			"ace_common",
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class 1st_meu_airburst_functions_preinit
	{
		init="call compile preprocessFileLineNumbers '1st_meu_functions\airburst\xeh_preinit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class 1st_meu_airburst_functions_postinit
	{
		init="call compile preprocessFileLineNumbers '1st_meu_functions\airburst\xeh_postinit.sqf'";
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_fcs
	{
		init="call compile preprocessFileLineNumbers '1st_meu_functions\airburst\xeh_prestart.sqf'";
	};
};
