class HaloInf_Marine_GRFS_headgear; // Halo_marine_02
class 34thPRC_Armour_Standard_Marines_CH252_Urban : HaloInf_Marine_GRFS_headgear
{
	displayName="[34th] CH252 Urban";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\urban\helmet_urban_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Arctic_Light : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Arctic Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arctic\helmet_arctic_light_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Arctic_Dark : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Arctic Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arctic\helmet_arctic_dark_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Arid_Light : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Arid Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arid\helmet_arid_light_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Arid_Dark : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Arid Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arid\helmet_arid_dark_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Woodland_Light : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Woodland Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\woodland\helmet_woodland_light_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Woodland_Dark : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Woodland Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\woodland\helmet_woodland_dark_co.paa"
	};
}
class 34thPRC_Armour_Standard_Marines_CH252_Tropic : 34thPRC_Armour_Standard_Marines_CH252_Urban
{
	displayName="[34th] CH252 Woodland Tropic";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\tropic\helmet_tropic_co.paa"
	};
}

class Uniform_Base; // Halo_marine_02
class haloinfmar_U_GRFS_uniform : Uniform_Base // Halo_marine_02
{
	class ItemInfo;
}
class 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium : haloinfmar_U_GRFS_uniform
{
	displayName="[34th] Uniform Urban Blue Medium";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_blue_medium_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\legs_urban_blue_medium_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_blue_medium_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\legs_urban_blue_medium_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Urban_Blue_Medium";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Light : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Urban Blue Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_blue_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\legs_urban_blue_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_blue_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\legs_urban_blue_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Urban_Blue_Light";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Dark : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Urban Blue Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_blue_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\legs_urban_blue_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_blue_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\legs_urban_blue_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Urban_Blue_Dark";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Urban_Red_Light : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Urban Red Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_red_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\legs_urban_red_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_red_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\legs_urban_red_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Urban_Red_Light";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Urban_Red_Dark : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Urban Red_Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_red_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\legs_urban_red_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\urban\shirt_urban_red_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\legs_urban_red_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\urban\shoulders_urban_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Urban_Red_Dark";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Arctic_Light : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Arctic Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arctic\shirt_arctic_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\arctic\legs_arctic_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\arctic\shoulders_arctic_light_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\arctic\shirt_arctic_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\arctic\legs_arctic_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\arctic\shoulders_arctic_light_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Arctic_Light";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Arctic_Dark : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Arctic Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arctic\shirt_arctic_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\arctic\legs_arctic_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\arctic\shoulders_arctic_dark_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\arctic\shirt_arctic_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\arctic\legs_arctic_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\arctic\shoulders_arctic_dark_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Arctic_Dark";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Arid_Light : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Arid Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arid\shirt_arid_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\arid\legs_arid_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\arid\shoulders_arid_light_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\arid\shirt_arid_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\arid\legs_arid_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\arid\shoulders_arid_light_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Arid_Light";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Arid_Dark : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Arid Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\arid\shirt_arid_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\arid\legs_arid_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\arid\shoulders_arid_dark_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\arid\shirt_arid_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\arid\legs_arid_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\arid\shoulders_arid_dark_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Arid_Dark";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Woodland_Light : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Woodland Light";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\woodland\shirt_woodland_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\woodland\legs_woodland_light_co.paa",
		"34thPRC_Armour_Standard\data\marines\woodland\shoulders_woodland_light_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\woodland\shirt_woodland_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\woodland\legs_woodland_light_co.paa",
			"34thPRC_Armour_Standard\data\marines\woodland\shoulders_woodland_light_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Woodland_Light";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Woodland_Dark : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Woodland Dark";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\woodland\shirt_woodland_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\woodland\legs_woodland_dark_co.paa",
		"34thPRC_Armour_Standard\data\marines\woodland\shoulders_woodland_dark_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\woodland\shirt_woodland_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\woodland\legs_woodland_dark_co.paa",
			"34thPRC_Armour_Standard\data\marines\woodland\shoulders_woodland_dark_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Woodland_dark";
	}
}
class 34thPRC_Armour_Standard_Marines_Uniform_Tropic : 34thPRC_Armour_Standard_Marines_Uniform_Urban_Blue_Medium
{
	displayName="[34th] Uniform Tropic";
	author="TheBrwnKidd";
	hiddenSelectionsTextures[]=
	{
		"34thPRC_Armour_Standard\data\marines\tropic\shirt_tropic_co.paa",
		"34thPRC_Armour_Standard\data\marines\tropic\legs_tropic_co.paa",
		"34thPRC_Armour_Standard\data\marines\tropic\shoulders_tropic_co.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"34thPRC_Armour_Standard\data\marines\tropic\shirt_tropic_co.paa",
			"34thPRC_Armour_Standard\data\marines\tropic\legs_tropic_co.paa",
			"34thPRC_Armour_Standard\data\marines\tropic\shoulders_tropic_co.paa"
		};
		uniformClass="34thPRC_Armour_Standard_Marines_Trooper_Tropic";
	}
}

