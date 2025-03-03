class CfgPatches
{
	class 34thPRC_OPTRE_Bayonet
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"OPTRE_Plus", //OPeration Trebuchet Plus
			"34thPRC_Overrides"
		};
		units[]={};
	};
};

class CfgVehicles
{
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Stealth_F;
	class OPTRE_bayonet_01: B_Plane_Fighter_01_F
	{
		displayName="F-1X Bayonet";
		scope=2;
		scopeCurator=2;
		faction="OPTRE_UNSC";
		side=1;
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Plus\data\Bayonet\Bayonet_01_fuselage_01_co.paa",
			"OPTRE_Plus\data\Bayonet\Bayonet_01_fuselage_02_co.paa"
		};
		VTOL=1;
		VTOLYawInfluence=1;
		VTOLPitchInfluence=1;
		VTOLRollInfluence=1;
	};
	class  OPTRE_bayonet_02 : OPTRE_bayonet_01
	{
		displayName="F-1X Bayonet(Ins)";
		faction="OPTRE_INS";
		side=0;
		crew="OPTRE_Ins_URF_Pilot";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Plus\data\Bayonet\Bayonet_02_fuselage_01_co.paa",
			"OPTRE_Plus\data\Bayonet\Bayonet_02_fuselage_02_co.paa"
		};
	};
};
