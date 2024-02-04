class HaloInf_Marine_GRFS_headgear; // Halo_marine_02
class 34thPRC_Armour_Standard_Headgear_Rifleman_Urban : HaloInf_Marine_GRFS_headgear
{
	displayName="[34th] CH252";
	author="Cappy";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\helmet_co.paa"
	};
}

class Uniform_Base; // Halo_marine_02
class haloinfmar_U_GRFS_uniform : Uniform_Base // Halo_marine_02
{
	class ItemInfo;
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform";
	author="Cappy";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
		"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
		"34thPRC_Armour_Standard\data\infantry\shoulders_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
			"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
			"34thPRC_Armour_Standard\data\infantry\shoulders_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban";
	}
}

class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban2 : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform2";
	author="Cappy";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
		"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
		"34thPRC_Armour_Standard\data\infantry\shoulders2_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
			"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
			"34thPRC_Armour_Standard\data\infantry\shoulders2_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban2";
	}
}

class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban3 : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform3";
	author="Cappy";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
		"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
		"34thPRC_Armour_Standard\data\infantry\shoulders3_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
			"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
			"34thPRC_Armour_Standard\data\infantry\shoulders3_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban3";
	}
}

class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban4 : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform4";
	author="Cappy";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
		"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
		"34thPRC_Armour_Standard\data\infantry\shoulders4_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\shirt_co.paa",
			"34thPRC_Armour_Standard\data\infantry\legs_co.paa",
			"34thPRC_Armour_Standard\data\infantry\shoulders4_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban4";
	}
}
