/*class CfgPatches
{
	class 34thPRC_Overrides_M96_Law
	{
		//dlc="34thPRC";
		addonRootClass="34PRC_Overrides";
		units[]={};
		weapons[]=
		{
			"34th_M96_LAW",
		};
		//requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Exp",
			"TCF_WEAPONRY",
		};
		author="DemonicOnPc";
		magazines[]={};
	};
};*/
class TCF_M96_LAW; //TCF Weaponry PBO
class ACE_TCF_M96_LAW_ready_F; //TCF Weaponry PBO
class DMNS_M96_LAW; //UNSC Foundries Weapons
// Community Base Addons
class CBA_DisposableLaunchers
{
	ACE_34th_M96_LAW_Ready_F[]=
	{
		"34th_M96_LAW",
		"ACE_34th_M96_LAW_Ready_F"
	};
};
class 34th_M96_LAW: TCF_M96_LAW
{
	author="DemonicOnPc";
	scope=2;
	scopeArsenal=2;
	baseWeapon="34th_M96_LAW";
	displayName="M96 LAW MK VI[B]";
	model="DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
	uniformModel="DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
	picture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
	UiPicture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
	maxZeroing=500;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: CowsSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			displayName = $STR_A3_CowsSlot0;
			compatibleitems[]=
			{
				"optic_Nightstalker",//VANILLA START
				"optic_MRCO",
				"optic_aco",
				"optic_ACO_grn",
				"optic_aco_smg",
				"optic_ACO_grn_smg",
				"optic_hamr",
				"optic_Arco_blk_F",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Holosight_smg_blk_F"//VANILLA END
			};
			iconPosition[]={0.5,0.30000001};
		};
		mass=145;
	};
};
class ACE_34th_M96_LAW_Ready_F: 34th_M96_LAW
{
	author="DemonicOnPc";
	scope=1;
	scopeArsenal=1;
	baseWeapon="34th_M96_LAW";
	magazines[]=
	{
		"TCF_M96_HEAT"
	};
	class EventHandlers
	{
		fired="_this call CBA_fnc_firedDisposable";
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass=55;
	};
};
class ACE_34th_M96_LAW_Used_F: 34th_M96_LAW
{
	author="DemonicOnPc";
	scope=1;
	scopeArsenal=1;
	baseWeapon="34th_M96_LAW";
	model="DMNS\Weapons\Launchers\DMNS_M96_LAW_Used.p3d";
	displayName="M96 LAW - Mk VI[B] (Used)";
	descriptionShort="A used up M96 LAW - Mk VI launcher";
	weaponPoolAvailable=0;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass=55;
	};
};
