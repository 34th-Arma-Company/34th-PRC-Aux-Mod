class CfgPatches
{
	class 34thPRC_ArmourStandard_jumppacks_kjwjetpacks
	{
		author="34th PRC Modding Team";
		addonRootClass="34thPRC_ArmourStandard";
		units[]={};
		requiredAddons[] =
		{
			"34thPRC_Overrides", // 34th PRC Aux Mod
			"OPTRE_Weapons", // OPTRE
			"jen_jetpacks_example", // KJW's Jetpacks
		};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	class jen_jetpacks_example_mk5Jetpack_nato; //KJW's Jetpacks ---> jen_jetpacks_example
	class 34thPRC_ArmourStandard_jumppacks_kjwjetpacks_S9BSOLAJumpJet : jen_jetpacks_example_mk5Jetpack_nato
	{
		displayName="[34th] Series-9[B] SOLA Jump-Jet";
		author="34th PRC - Vasya, Jennderqueer, KJW, & Article 2 Studios";
		picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		scope=2;
		scopeArsenal=2;
		ace_gunbag=1;
		tf_hasLRradio=1;
		tf_range=25000;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		sc_grapplinghook=1;
		model="OPTRE_Weapons\Backpacks\jetpack_on.p3d";
		uniformModel="OPTRE_Weapons\Backpacks\jetpack_on.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_weapons\backpacks\data\jetpack_co.paa"
		};
		maximumLoad=600;
		mass=20;
	};
};
