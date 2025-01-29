class DMNS_M96_LAW; //DMNS_M96_LAW comes from DMNS_Weapons.pbo
class TCF_M96_LAW: DMNS_M96_LAW //TCF_M96_LAW comes from TCF_WEAPONRY.pbo
{
	model="DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
	uniformModel="DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
	picture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
	UiPicture="\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
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
	};
}
class ACE_TCF_M96_LAW_used_F: TCF_M96_LAW
	{
		model = "DMNS\Weapons\Launchers\DMNS_M96_LAW_loaded.p3d";
		uniformModel="DMNS\Weapons\Launchers\DMNS_M96_LAW_used.p3d";
		picture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
		UiPicture = "\DMNS\Weapons\Launchers\Data\Law_Icon.paa";
	};