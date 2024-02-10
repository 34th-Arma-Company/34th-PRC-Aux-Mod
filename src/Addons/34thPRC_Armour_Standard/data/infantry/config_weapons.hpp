class HaloInf_Marine_GRFS_headgear; // Halo_marine_02
class 34thPRC_Armour_Standard_Headgear_Rifleman_Urban : HaloInf_Marine_GRFS_headgear
{
	displayName="[34th] CH252 Urban";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Urban\helmet_urban_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Arctic_Light : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Arctic Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arctic\helmet_arctic_light_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Arctic_Dark : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Arctic Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arctic\helmet_arctic_dark_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Arid_Light : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Arid Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arid\helmet_arid_light_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Arid_Dark : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Arid Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arid\helmet_arid_dark_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Woodland_Light : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Woodland Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Woodland\helmet_woodland_light_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Woodland_Dark : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Woodland Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Woodland\helmet_woodland_dark_co.paa"
	};
}
class 34thPRC_Armour_Standard_Headgear_Rifleman_Tropic : 34thPRC_Armour_Standard_Headgear_Rifleman_Urban
{
	displayName="[34th] CH252 Woodland Tropic";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Tropic\helmet_tropic_co.paa"
	};
}

class Uniform_Base; // Halo_marine_02
class haloinfmar_U_GRFS_uniform : Uniform_Base // Halo_marine_02
{
	class ItemInfo;
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Urban Blue Medium";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_blue_medium_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_blue_medium_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_blue_medium_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_blue_medium_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban_Blue_Light : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Urban Blue Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_blue_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_blue_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_blue_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_blue_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban_Blue_Light";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban_Blue_Dark : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Urban Blue Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_blue_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_blue_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_blue_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_blue_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban_Blue_Dark";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban_Red_Light : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Urban Red Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_red_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_red_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_red_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_red_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban_Red_Light";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Urban_Red_Dark_Test : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Urban Red_Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_red_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_red_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Urban\shirt_urban_red_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\legs_urban_red_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Urban_Red_Dark";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Arctic_Light : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Arctic Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arctic\shirt_arctic_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arctic\legs_arctic_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arctic\shoulders_arctic_light_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Arctic\shirt_arctic_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arctic\legs_arctic_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arctic\shoulders_arctic_light_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Arctic_Light";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Arctic_Dark : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Arctic Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arctic\shirt_arctic_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arctic\legs_arctic_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arctic\shoulders_arctic_dark_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Arctic\shirt_arctic_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arctic\legs_arctic_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arctic\shoulders_arctic_dark_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Arctic_Dark";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Arid_Light : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Arid Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arid\shirt_arid_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arid\legs_arid_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arid\shoulders_arid_light_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Arid\shirt_arid_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arid\legs_arid_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arid\shoulders_arid_light_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Arid_Light";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Arid_Dark : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Arid Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Arid\shirt_arid_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arid\legs_arid_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Arid\shoulders_arid_dark_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Arid\shirt_arid_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arid\legs_arid_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Arid\shoulders_arid_dark_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Arid_Dark";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Woodland_Light : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Woodland Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Woodland\shirt_woodland_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Woodland\legs_woodland_light_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Woodland\shoulders_woodland_light_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Woodland\shirt_woodland_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Woodland\legs_woodland_light_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Woodland\shoulders_woodland_light_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Woodland_Light";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Woodland_Dark : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Woodland Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Woodland\shirt_woodland_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Woodland\legs_woodland_dark_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Woodland\shoulders_woodland_dark_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Woodland\shirt_woodland_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Woodland\legs_woodland_dark_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Woodland\shoulders_woodland_dark_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Woodland_dark";
	}
}
class 34thPRC_Armour_Standard_Uniform_Rifleman_Tropic : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Tropic";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\infantry\Tropic\shirt_tropic_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Tropic\legs_tropic_co.paa",
		"34thPRC_Armour_Standard\data\infantry\Tropic\shoulders_tropic_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\infantry\Tropic\shirt_tropic_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Tropic\legs_tropic_co.paa",
			"34thPRC_Armour_Standard\data\infantry\Tropic\shoulders_tropic_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Trooper_Rifleman_Tropic";
	}
}

