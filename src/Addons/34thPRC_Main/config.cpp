class CfgPatches
{
	class 34thPRC_Main
	{
		name = "main";
		author = "34th PRC Modding Team";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"34thPRC_ArmourCustom",
			"34thPRC_ArmourStandard",
			"34thPRC_FactionBrimstone",
			"34thPRC_LoadingScreens",
			"34thPRC_Markers",
			"34thPRC_Overrides",
			"34thPRC_Vehicles",
			"34thPRC_WeaponsStandard",
			"34thPRC_Functions",
		};
		versionAr[] = [MAJOR, MINOR, PATCH];
	};
};

class CfgSettings {
	class CBA {
		class Versioning { // https://github.com/CBATeam/CBA_A3/wiki/Versioning-System
			class 34thPRC_Main {
				main_addon = "34thPRC_Main";
			};
		};
	};
};
