class CfgPatches
{
	class 34thPRC_19th_BR55
	{
		author="34th PRC Modding Team, Shewolf";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"19_UNSC_Weapons", //UNSC Foundries -> 19_UNSC_Weapons -> config.cpp(binarized)
			"34thPRC_Overrides"
		};
		units[]={};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 36Rnd_95x40_br_55: CA_Magazine
	{
		initspeed = 850;
	};
	class 36Rnd_95x40_ap_br_55: 36Rnd_95x40_br_55
	{
		initspeed = 900;
	};
	class 36Rnd_95x40_slap_br_55: 36Rnd_95x40_br_55
	{
		initspeed = 975;
	};
};
class CfgWeapons
{
	class arifle_19_UNSC_br55_gl_Base_F; // 19_UNSC_Weapons
	class WeaponSlotsInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class 19_UNSC_br55_gl: arifle_19_UNSC_br55_gl_Base_F // 19_UNSC_Weapons
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]+=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]+=
				{
					"19_UNSC_br_scope",
					"OPTRE_M7_Sight",
					"OPTRE_M12_Optic",
					"OPTRE_M12_Optic_Red",
					"OPTRE_M12_Optic_Green",
					"OPTRE_M6C_Scope",
					"OPTRE_M6G_Scope",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_BR55HB_Scope_Grey",
					"OPTRE_BMR_Scope",
					"OPTRE_M392_Scope",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_M73_SmartLink",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"optic_MRCO",
					"optic_Hamr",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"optic_Arco_blk_F",
					"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]+=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class 19_UNSC_br55: 19_UNSC_br55_gl // 19_UNSC_Weapons
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]+=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]+=
				{
					"19_UNSC_br_scope",
					"OPTRE_M7_Sight",
					"OPTRE_M12_Optic",
					"OPTRE_M12_Optic_Red",
					"OPTRE_M12_Optic_Green",
					"OPTRE_M6C_Scope",
					"OPTRE_M6G_Scope",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_BR55HB_Scope_Grey",
					"OPTRE_BMR_Scope",
					"OPTRE_M392_Scope",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_M73_SmartLink",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"optic_MRCO",
					"optic_Hamr",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"optic_Arco_blk_F",
					"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]+=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class 19_UNSC_br55_HB: 19_UNSC_br55_gl // 19_UNSC_Weapons
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]+=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer",
					"41st_Bayonet2",
					"145_Inches_Barrel_Bayonet"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]+=
				{
					"19_UNSC_br_scope",
					"OPTRE_M7_Sight",
					"OPTRE_M12_Optic",
					"OPTRE_M12_Optic_Red",
					"OPTRE_M12_Optic_Green",
					"OPTRE_M6C_Scope",
					"OPTRE_M6G_Scope",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_BR55HB_Scope_Grey",
					"OPTRE_BMR_Scope",
					"OPTRE_M392_Scope",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_M73_SmartLink",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"optic_MRCO",
					"optic_Hamr",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"optic_Arco_blk_F",
					"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]+=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class 19_UNSC_br55_HB_gl: 19_UNSC_br55_gl // 19_UNSC_Weapons
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]+=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer",
					"OPTRE_M7_Silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]+=
				{
					"19_UNSC_br_scope",
					"OPTRE_M7_Sight",
					"OPTRE_M12_Optic",
					"OPTRE_M12_Optic_Red",
					"OPTRE_M12_Optic_Green",
					"OPTRE_M6C_Scope",
					"OPTRE_M6G_Scope",
					"Optre_Recon_Sight",
					"Optre_Recon_Sight_Red",
					"Optre_Recon_Sight_Green",
					"Optre_Recon_Sight_Desert",
					"Optre_Recon_Sight_UNSC",
					"Optre_Recon_Sight_Snow",
					"OPTRE_BR45_Scope",
					"OPTRE_BR55HB_Scope",
					"OPTRE_BR55HB_Scope_Grey",
					"OPTRE_BMR_Scope",
					"OPTRE_M392_Scope",
					"OPTRE_M393_Scope",
					"OPTRE_M393_ACOG",
					"OPTRE_M393_EOTECH",
					"OPTRE_M73_SmartLink",
					"OPTRE_MA5_SmartLink",
					"OPTRE_MA5C_SmartLink",
					"OPTRE_MA5_BUIS",
					"Optre_Evo_Sight_Riser",
					"Optre_Evo_Sight",
					"optic_MRCO",
					"optic_Hamr",
					"optic_ERCO_blk_F",
					"optic_Holosight_blk_F",
					"optic_Arco_blk_F",
					"optic_dms"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]+=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
};
