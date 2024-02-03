class OPTRE_UNSC_M52A_Armor_Base; // OPTRE_UNSC_Units_Army
class OPTRE_UNSC_M52A_Armor1_WDL // OPTRE_UNSC_Units_Army
{
	class ItemInfo;
};

// TODO: inherit from  Misriah Armory invisible vest but use OPTRE's model and hidden selections
// MA_TGE_InvisVest: Vest_Camo_Base
class 34th_Declassified_Vest_Base: OPTRE_UNSC_M52A_Armor1_WDL
{
	displayName="[34th D] Attachments Test";
	author="Lupus590";
	class ItemInfo: ItemInfo
	{
		containerClass="Supply200"; // Values copied from Misriah Armory Tactical Gear and Equipment
		mass=80; // Values copied from Misriah Armory Tactical Gear and Equipment
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad", // floats badly
			"AP_AR", // looks ok but floats at the sides
			"AP_BR", // looks ok but floats a little at the sides
			"AP_Canteen", // looks ok but floats a little at the back
			"AP_GL", // looks ok but floats a little at the sides and is not on the belt
			//"AP_Knife",
			"AP_MGThigh", // looks good
			"AP_Pack", // floats badly
			//"AP_Pistol", // looks ok but floats a bit and is hard to see
			"AP_Rounds", // looks good
			"AP_SG", // floats badly
			"AP_SMG", // clips badly
			"AP_Sniper", // looks ok but clips a little at the front
			"AP_Thigh", // looks good
			"AP_Frag", // looks good
			"AP_Smoke", // looks ok but clips a little at the front and floats a little at the back
			"APO_AR", // looks ok but floats at the sides
			"APO_BR", // looks ok but floats at the sides
			"APO_Knife", // looks ok but some floating
			"APO_SMG", // floats badly
			//"APO_Sniper", // looks ok but floats at the sides
			"CustomKit_Scorch" // clips badly
		};
		class HitpointsProtectionInfo // Values copied from Misriah Armory Tactical Gear and Equipment
		{
			class Neck
			{
				hitpointName="HitNeck";
				armor=20;
				passThrough=0.5;
			};
			class Legs
			{
				hitpointName="HitLegs";
				armor=20;
				passThrough=0.5;
			};
			class Arms
			{
				hitpointName="HitArms";
				armor=25;
				passThrough=0.1;
			};
			class Hands
			{
				hitpointName="HitHands";
				armor=20;
				passThrough=0.1;
			};
			class Chest
			{
				hitpointName="HitChest";
				armor=35;
				passThrough=0.1;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=30;
				passThrough=0.1;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=30;
				passThrough=0.1;
			};
			class Pelvis
			{
				hitpointName="HitPelvis";
				armor=30;
				passThrough=0.1;
			};
			class Body
			{
				hitpointName="HitBody";
				armor=0;
				passThrough=0.1;
			};
		};
	};
};

class 34th_Declassified_Vest_APO_Knife: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_Knife";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			//"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_Knife: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Knife";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			//"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_AR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_AR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			//"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_Pistol: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Pistol";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			//"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_APO_Sniper: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_Sniper";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			//"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};


class 34th_Declassified_Vest_APO_BR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_BR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			//"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_APO_AR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments APO_AR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			//"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_Smoke: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Smoke";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			//"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_Sniper: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_Sniper";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			//"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_SMG: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_SMG";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			//"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_GP: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_GL";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			//"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};

class 34th_Declassified_Vest_AP_BR: 34th_Declassified_Vest_Base
{
	displayName="[34th D] Attachments AP_BR";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			// armour parts
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",

			"A_TacPad",
			"AP_AR",
			//"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
	};
};
