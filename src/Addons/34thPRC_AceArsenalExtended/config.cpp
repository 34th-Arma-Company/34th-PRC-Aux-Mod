class CfgPatches
{
	class 34thPRC_AceArsenalExtended
	{
		author = "34th PRC Modding Team, J.Koko";
		units[] = {};
		requiredAddons[] = {
			"34thPRC_ArmourStandard", // 34th PRC Aux Mod
			"34thPRC_ArmourCustom", //34th PRC Aux Mod
			"aceax_gearinfo" // Ace Arsenal Extended
		};
		skipWhenMissingDependencies = 1;
	};
};

class XtdGearModels
{
	class cfgWeapons
	{
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light
		{
			label = "[34thPRC] Uniforms";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "collar", "variant"};
			class variant
			{
				label = "Variant";
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"light", "medium", "heavy", "shoulderless"};
				class light
				{
					label = "Light";
				};
				class medium
				{
					label = "Medium";
				};
				class heavy
				{
					label = "Heavy";
				};
				class shoulderless
				{
					label = "Shoulderless";
				};
			};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urbanRed", "urbanBlue", "arctic", "arid", "tropic", "woodland"};
				class urbanRed
				{
					label = "Urban Red";
				};
				class urbanBlue
				{
					label = "Urban Blue";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class collar
			{
				label = "Collar";
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"up", "down"};
				class up
				{
					label = "Collar";
				};
				class down
				{
					label = "No Collar";
				};
			};
		};

		//Ma ODST Armor New
		class 34thPRC_ArmourStandard_ODST_M52_Urban
		{
			label = "[34thPRC] ODST Armors";
			author = "34th PRC Modding Team, Over Yandere";
			options[] = {"camo", "medic", "variant"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class medic
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"standard", "isMedic"};
				class standard
				{
					label = "Non-Medic";
				};
				class isMedic
				{
					label = "Medic";
				};
			};
			class variant
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"a", "b", "c", "cqb", "marksman"};
				class a
				{
					label = "M52-A";
				};
				class b
				{
					label = "M52-B";
				};
				class c
				{
					label = "M52-C";
				};
				class cqb
				{
					label = "CQB";
				};
				class marksman
				{
					label = "Marksman";
				};
			};
		};

		//MA ODST Armor (Old)
		class 34thPRC_ArmourStandard_ODST_M56R_Urban
		{
			label = "[34thPRC] ODST Armors";
			author = "34th PRC Modding Team, Over Yandere";
			options[] = {"camo", "medic", "variant"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class medic
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"standard", "isMedic"};
				class standard
				{
					label = "Non-Medic";
				};
				class isMedic
				{
					label = "Medic";
				};
			};
			class variant
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"a", "b", "c", "cqb", "marksman"};
				class a
				{
					label = "M52-A";
				};
				class b
				{
					label = "M52-B";
				};
				class c
				{
					label = "M52-C";
				};
				class cqb
				{
					label = "CQB";
				};
				class marksman
				{
					label = "Marksman";
				};
			};
		};
		//Custom M52 Group 1: Yandere
		class 34thPRC_CustomArmour_ODST_M52_Yandere_Urban
		{
			label = "[34thPRC] ODST Custom Armors";
			author = "34th PRC Modding Team, Over Yandere";
			options[] = {"player", "camo", "medic", "variant"};
			class player
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[]={"yandere"};
				class yandere
				{
					label = "Yandere";
				};
				class Player2
				{
					label = "Player2";
				};
			}
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class medic
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"standard", "isMedic"};
				class standard
				{
					label = "Non-Medic";
				};
				class isMedic
				{
					label = "Medic";
				};
			};
			class variant
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"a", "b", "c", "cqb", "marksman"};
				class a
				{
					label = "M52-A";
				};
				class b
				{
					label = "M52-B";
				};
				class c
				{
					label = "M52-C";
				};
				class cqb
				{
					label = "CQB";
				};
				class marksman
				{
					label = "Marksman";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanRed
		{
			label = "[34thPRC] ODST Uniforms";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urbanRed", "urbanBlue", "arctic", "arid", "tropic", "woodland"};
				class urbanRed
				{
					label = "Urban Red";
				};
				class urbanBlue
				{
					label = "Urban Blue";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};

		// MA CH252 Helmets
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban
		{
			label = "[34thPRC] CH252 Helmets";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "eyewear", "medic"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class eyewear
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"standard", "eyepiece", "visor"};
				class standard
				{
					label = "Standard";
				};
				class eyepiece
				{
					label = "Eyepiece";
				};
				class visor
				{
					label = "Visor";
				};
			};
			class medic
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"false", "true"};
				class false
				{
					label = "Non-Medic";
				};
				class true
				{
					label = "Medic";
				};
			};
		};

		//MA ODST Helmet New
		class 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor
		{
			label = "[34thPRC] ODST CH252D Helmets";
			author = "34th PRC Modding Team, Over Yandere";
			options[] = {"camo", "visor"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"silver", "red", "gold", "dp"};
				class silver
				{
					label = "Silver";
				};
				class maroon
				{
					label = "Red";
				};
				class gold
				{
					label = "Gold";
				};
				class dp
				{
					label = "Depolarized";
				};
			};
		};

		// MA ODST Helmets (Old)
		class 34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor
		{
			label = "[34thPRC] ODST Helmets";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "visor"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"white", "maroon"};
				class white
				{
					label = "White";
				};
				class maroon
				{
					label = "Maroon";
				};
				class gold
				{
					label = "Gold";
				};
			};
		};

		//Custom ODST Helmets Group 1: Yandere,
		class 34thPRC_ArmourStandard_ODST_CH252D_Yandere_Urban_CustomVisor
		{
			label = "[34thPRC] ODST CH252D Custom Helmets";
			author = "34th PRC Modding Team, Over Yandere";
			options[] = {"player","camo", "visor"};
			class player
			{
				alwaysSelectable= 1;
				changeingame =0;
				values[]= {"yandere","player2"};
				class yandere
				{
					label = "Yandere";
				};
				class player2
				{
					label = "Player2";
				};
			};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
			class visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"silver", "red", "gold", "custom", "dp"};
				class silver
				{
					label = "Silver";
				};
				class maroon
				{
					label = "Red";
				};
				class gold
				{
					label = "Gold";
				};
				class custom
				{
					label = "Custom";
				};
				class dp
				{
					label = "Depolarized"
				};
			};
		};

	};

	class cfgVehicles
	{
		class 34thPRC_ArmourStandard_ODST_M56S_Urban
		{
			label = "[34thPRC] M56S ODST Rucksack";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase
		{
			label = "[34thPRC] M56S ODST Guncase";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Medic
		{
			label = "[34thPRC] M56S ODST Medic Rucksack";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Radio
		{
			label = "[34thPRC] M56S ODST Radio Rucksack";
			author = "34th PRC Modding Team";
			options[] = {"camo"};
			class camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urban
				{
					label = "Urban";
				};
				class arctic
				{
					label = "Arctic";
				};
				class arid
				{
					label = "Arid";
				};
				class tropic
				{
					label = "Tropic";
				};
				class woodland
				{
					label = "Woodland";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class cfgWeapons
	{
		// MA Marine Uniforms
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urbanRed";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urbanRed";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "urbanRed";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_NS
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "shoulderless";
			camo = "urbanRed";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urbanRed";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urbanRed";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "urbanRed";
			collar = "down";
		};class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urbanBlue";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urbanBlue";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "urbanBlue";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_NS
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "shoulderless";
			camo = "urbanBlue";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urbanBlue";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urbanBlue";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Blue_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "urbanBlue";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_NS
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "shoulderless";
			camo = "arctic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arctic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arctic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arctic_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arctic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_NS
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "shoulderless";
			camo = "arid";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "arid";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "arid";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Arid_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "arid";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_NS
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "shoulderless";
			camo = "tropic";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "tropic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "tropic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Tropic_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "tropic";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Light
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_NS
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "shoulderless";
			camo = "woodland";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "woodland";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "woodland";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Woodland_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "heavy";
			camo = "woodland";
			collar = "down";
		};

		//MA ODST Vest New
		class 34thPRC_ArmourStandard_ODST_M52_Urban
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="urban";
			medic="standard";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_B_Urban
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="urban";
			medic="standard";
			variant="b";
		};
		class 34thPRC_ArmourStandard_ODST_M52_C_Urban
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="urban";
			medic="standard";
			variant="c";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Marksman_Urban
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="urban";
			medic="standard";
			variant="marksman";
		};
		class 34thPRC_ArmourStandard_ODST_M52_CQB_Urban
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="urban";
			medic="standard";
			variant="cqb";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Medic_Urban
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="urban";
			medic="isMedic";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Arid
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arid";
			medic="standard";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_B_Arid
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arid";
			medic="standard";
			variant="b";
		};
		class 34thPRC_ArmourStandard_ODST_M52_C_Arid
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arid";
			medic="standard";
			variant="c";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Marksman_Arid
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arid";
			medic="standard";
			variant="marksman";
		};
		class 34thPRC_ArmourStandard_ODST_M52_CQB_Arid
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arid";
			medic="standard";
			variant="cqb";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Medic_Arid
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arid";
			medic="isMedic";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Arctic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arctic";
			medic="standard";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_B_Arctic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arctic";
			medic="standard";
			variant="b";
		};
		class 34thPRC_ArmourStandard_ODST_M52_C_Arctic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arctic";
			medic="standard";
			variant="c";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Marksman_Arctic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arctic";
			medic="standard";
			variant="marksman";
		};
		class 34thPRC_ArmourStandard_ODST_M52_CQB_Arctic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arctic";
			medic="standard";
			variant="cqb";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Medic_Arctic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="arctic";
			medic="isMedic";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Tropic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="tropic";
			medic="standard";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_B_Tropic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="tropic";
			medic="standard";
			variant="b";
		};
		class 34thPRC_ArmourStandard_ODST_M52_C_Tropic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="tropic";
			medic="standard";
			variant="c";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Marksman_Tropic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="tropic";
			medic="standard";
			variant="marksman";
		};
		class 34thPRC_ArmourStandard_ODST_M52_CQB_Tropic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="tropic";
			medic="standard";
			variant="cqb";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Medic_Tropic
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="tropic";
			medic="isMedic";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Woodland
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="woodland";
			medic="standard";
			variant="a";
		};
		class 34thPRC_ArmourStandard_ODST_M52_B_Woodland
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="woodland";
			medic="standard";
			variant="b";
		};
		class 34thPRC_ArmourStandard_ODST_M52_C_Woodland
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="woodland";
			medic="standard";
			variant="c";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Marksman_Woodland
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="woodland";
			medic="standard";
			variant="marksman";
		};
		class 34thPRC_ArmourStandard_ODST_M52_CQB_Woodland
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="woodland";
			medic="standard";
			variant="cqb";
		};
		class 34thPRC_ArmourStandard_ODST_M52_Medic_Woodland
		{
			model="34thPRC_ArmourStandard_ODST_M52_Urban";
			camo="woodland";
			medic="isMedic";
			variant="a";
		};

		//M52 Customs
		class 34thPRC_ArmourCustom_ODST_Yandere_M52_Urban
		{
			model="34thPRC_ArmourCustom_ODST_M52_Yandere_Urban";
			player="yandere";
			camo="urban";
			medic="standard";
			variant="a";
		};
		class 34thPRC_ArmourCustom_ODST_Yandere_M52_Marksman_Urban
		{
			model="34thPRC_ArmourCustom_ODST_M52_Yandere_Urban";
			camo="urban";
			medic="standard";
			variant="marksman";
		};
		class 34thPRC_ArmourCustom_ODST_Yandere_M52_CQB_Urban
		{
			model="34thPRC_ArmourCustom_ODST_M52_Yandere_Urban";
			player="yandere";
			camo="urban";
			medic="standard";
			variant="cqb";
		};
		//Medic Yan Here
		class 34thPRC_CustomArmour_ODST_Yandere_M52_Arid
		{
			model="34thPRC_CustomArmour_ODST_M52_Yandere_Urban";
			player="yandere";
			camo="arid";
			medic="standard";
			variant="a";
		}

		// MA ODST Vests (Old)
		class 34thPRC_ArmourStandard_ODST_M56R_Urban
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "standard";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
			medic = "standard";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
			medic = "standard";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
			medic = "standard";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
			medic = "standard";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "isMedic";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
			medic = "isMedic";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
			medic = "isMedic";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Tropic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
			medic = "isMedic";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
			medic = "isMedic";
			shoulders = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Urban_CQB
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "standard";
			shoulders = "cqb";
		};

		// MA ODST Uniforms
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanRed
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "urbanRed";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanBlue
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "urbanBlue";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_Uniform_UrbanRed";
			camo = "woodland";
		};

		// MA CH252 Helmets
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "standard";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "eyepiece";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "visor";
			medic = "false";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Urban_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "urban";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arctic_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arctic";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Arid_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "arid";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Tropic_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "tropic";
			eyewear = "visor";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "standard";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_Medic_EyePiece
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "eyepiece";
			medic = "true";
		};
		class 34thPRC_ArmourStandard_Marines2_CH252_Woodland_Medic_VisorGlasses
		{
			model = "34thPRC_ArmourStandard_Marines2_CH252_Urban";
			camo = "woodland";
			eyewear = "visor";
			medic = "true";
		};

		//MA ODST Helmets CH252D New
		class 34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "urban";
			visor= "silver";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Urban_RedVisor
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "urban";
			visor= "red";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Urban_GoldVisor
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "urban";
			visor= "gold";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Urban_DP
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "urban";
			visor= "dp";
		};
		class 34thPRC_ArmourStandard_ODST_CHCH252D_Arid_SilverVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="arid";
			visor="silver";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arid_RedVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="arid";
			visor="red";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arid_GoldVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="arid";
			visor="gold";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arid_DP
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "arid";
			visor= "dp";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arctic_SilverVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="arctic";
			visor="silver";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arctic_RedVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="arctic";
			visor="red";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arctic_GoldVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="arctic";
			visor="gold";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Arctic_DP
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "arctic";
			visor= "dp";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Tropic_SilverVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="tropic";
			visor="silver";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Tropic_RedVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="tropic";
			visor="red";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Tropic_GoldVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="tropic";
			visor="gold";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Tropic_DP
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "tropic";
			visor= "dp";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Woodland_SilverVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="woodland";
			visor="silver";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Woodland_RedVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="woodland";
			visor="red";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Woodland_GoldVisor
		{
			model="34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo="woodland";
			visor="gold";
		};
		class 34thPRC_ArmourStandard_ODST_CH252D_Woodland_DP
		{
			model= "34thPRC_ArmourStandard_ODST_CH252D_Urban_SilverVisor";
			camo= "woodland";
			visor= "dp";
		};

		//Custom CH252D Helmets, Group 1: Yandere,
		class 34thPRC_ArmourCustom_ODST_CH2552D_Yandere_Urban_CustomVisor
		{
			model="34thPRC_ArmourCustom_ODST_CH2552D_Yandere_Urban_CustomVisor";
			player="yandere";
			camo="urban";
			visor="custom";
		};
		class 34thPRC_ArmourCustom_ODST_CH252D_Yandere_Urban_SilverVisor
		{
			model="34thPRC_ArmourCustom_ODST_CH2552D_Yandere_Urban_CustomVisor";
			player="yandere";
			camo="urban";
			visor="silver";
		};
		class 34thPRC_ArmourCustom_ODST_CH252D_Yandere_Urban_RedVisor
		{
			model="34thPRC_ArmourCustom_ODST_CH2552D_Yandere_Urban_CustomVisor";
			player="yandere";
			camo="urban";
			visor="red";
		};
		class 34thPRC_ArmourCustom_ODST_CH252D_Yandere_Urban_GoldVisor
		{
			model="34thPRC_ArmourCustom_ODST_CH2552D_Yandere_Urban_CustomVisor";
			player="yandere";
			camo="urban";
			visor="gold";
		};
		class 34thPRC_CustomArmour_ODST_CH2552D_Yandere_Arid_CustomVisor
		{
			model="34thPRC_CustomArmour_ODST_CH2552D_Yandere_Urban_CustomVisor";
			player="yandere";
			camo="arid";
			visor="custom";
		};
		class 34thPRC_CustomArmour_ODST_CH252D_Yandere_Arid_SilverVisor
		{
			model="34thPRC_CustomArmour_ODST_CH2552D_Yandere_Urban_CustomVisor";
			player="yandere";
			camo="arid";
			visor="silver";
		};

		// MA ODST Helmets (Old)
		class 34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "urban";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Urban_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "urban";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arctic_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arctic";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arctic_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arctic";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arid_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arid";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Arid_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "arid";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Tropic_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "tropic";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Tropic_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "tropic";
			visor = "maroon";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Woodland_WhiteVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "woodland";
			visor = "white";
		};
		class 34thPRC_ArmourStandard_ODST_M56SR_Woodland_MarooonVisor
		{
			model = "34thPRC_ArmourStandard_ODST_M56SR_Urban_WhiteVisor";
			camo = "woodland";
			visor = "maroon";
		};
	};

	class cfgVehicles
	{
		class 34thPRC_ArmourStandard_ODST_M56S_Urban
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban";
			camo = "woodland";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Tropic_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland_Guncase
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Guncase";
			camo = "woodland";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_tropic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Medic";
			camo = "woodland";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Urban_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "urban";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arctic_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Arid_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Tropic_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_M56S_Woodland_Radio
		{
			model = "34thPRC_ArmourStandard_ODST_M56S_Urban_Radio";
			camo = "woodland";
		};
	};
};
