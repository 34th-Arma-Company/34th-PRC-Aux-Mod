#define _ARMA_

class CfgPatches
{
	class aceax_misriahpatch_34thprc
	{
		author = "34th PRC Modding Team, J.Koko";
		units[] = {};
		requiredAddons[] = {};
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
				values[] = {"light", "medium", "heavy"};
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
		class 34thPRC_ArmourStandard_ODST_M56R_Urban
		{
			label = "[34thPRC] ODST Armors";
			author = "34th PRC Modding Team, J. Koko";
			options[] = {"camo", "medic"};
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
					label = "Non Medic";
				};
				class isMedic
				{
					label = "Medic";
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
				values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
				class urbanRed
				{
					label = "Red";
				};
				class urbanBlue
				{
					label = "Blue";
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
			camo = "urban";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urban";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urban";
			collar = "up";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urban";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Medium_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "medium";
			camo = "urban";
			collar = "down";
		};
		class 34thPRC_ArmourStandard_Marines2_Uniform_Urban_Heavy_NoCollar
		{
			model = "34thPRC_ArmourStandard_Marines2_Uniform_Urban_Light";
			variant = "light";
			camo = "urban";
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
			variant = "light";
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
			variant = "light";
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
			variant = "light";
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
			variant = "light";
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
			variant = "light";
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
			variant = "light";
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
			variant = "light";
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
			variant = "light";
			camo = "woodland";
			collar = "down";
		};

		// MA ODST Vests
		class 34thPRC_ArmourStandard_ODST_M56R_Urban
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "standard";
		};
		class 34thPRC_ArmourStandard_ODST_M56R_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
			medic = "standard";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Urban_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urban";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Arctic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Arid_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Tropic_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
			medic = "isMedic";
		}
		class 34thPRC_ArmourStandard_ODST_M56R_Woodland_Medic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
			medic = "isMedic";
		}

		// MA ODST Uniforms
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanRed
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urbanRed";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_UrbanBlue
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "urbanBlue";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Arctic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arctic";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Arid
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "arid";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Tropic
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "tropic";
		};
		class 34thPRC_ArmourStandard_ODST_Uniform_Woodland
		{
			model = "34thPRC_ArmourStandard_ODST_M56R_Urban";
			camo = "woodland";
		};
	};
};