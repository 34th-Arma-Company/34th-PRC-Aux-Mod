class arifle_19_UNSC_m7_Base_F; // 19_UNSC_Weapons
class 19_UNSC_M7: arifle_19_UNSC_m7_Base_F // 19_UNSC_Weapons
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]+=
			{
				"41st_Bayonet2",
				"145_Inches_Barrel_Bayonet"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]+=
			{
			"19_UNSC_evo",
			"OPTRE_M12_Optic",
			"OPTRE_M12_Optic_Red",
			"OPTRE_M12_Optic_Green",
			"OPTRE_M6C_Scope",
			"Optre_Recon_Sight",
			"Optre_Recon_Sight_Red",
			"Optre_Recon_Sight_Green",
			"Optre_Recon_Sight_Desert",
			"Optre_Recon_Sight_UNSC",
			"Optre_Recon_Sight_Snow"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]+=
			{
				"34thPRC_Overrides_Weapons_M7_Flashlight"
			};
		};
	};
};

class OPTRE_M45_Flashlight; // OPTRE_Weapons_Shotgun
class 34thPRC_Overrides_Weapons_M7_Flashlight : OPTRE_M45_Flashlight
{
	displayName = "[34th] M7 Flashlight";
	model = "\UNSC_F_Weapons\weapons\AR_data\attachments\MA5A_LAM.p3d"; // 19_UNSC_Weapons
}
