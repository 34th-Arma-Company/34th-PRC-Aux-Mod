//Custom Marine Armor Group 1: Jade, Harrison
class 34thPRC_ArmourCustom_Marines2_Jade_Uniform_Urban_Light
{
	label = "[34th] Custom Uniforms";
	author = "34th PRC Modding Team, Yandere";
	options[] = {"player", "camo", "collar", "variant"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"jade", "harrison"};
		class jade
		{
			label = "Jade";
		};
		class harrison
		{
			label="Harrison";
		};
	};
	class variant
	{
		label = "Variant";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"light", "medium", "heavy", "shoulderless"};
		class light
		{
			label = "Light";
		};
		class medium
		{
			label = "Medium";
		};
		class heavy
		{
			label = "Heavy";
		};
		class shoulderless
		{
			label = "Shoulderless";
		};
	};
	class camo
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"urbanRed", "urbanBlue", "arctic", "arid", "tropic", "woodland"};
		class urbanRed
		{
			label = "Urban Red";
			image = "\z\34thprc\addons\armour_standard\data\camo_pattern\Urban.paa";
		};
		class urbanBlue
		{
			label = "Night";
			image = "\z\34thprc\addons\armour_standard\data\camo_pattern\Night.paa";
		};
		class arctic
		{
			label = "Arctic";
			image = "\z\34thprc\addons\armour_standard\data\camo_pattern\Arctic.paa";
		};
		class arid
		{
			label = "Arid";
			image = "\z\34thprc\addons\armour_standard\data\camo_pattern\Arid.paa";
		};
		class tropic
		{
			label = "Tropic";
			image = "\z\34thprc\addons\armour_standard\data\camo_pattern\Tropic.paa";
		};
		class woodland
		{
			label = "Woodland";
			image = "\z\34thprc\addons\armour_standard\data\camo_pattern\Woodland.paa";
		};
	};
	class collar
	{
		label = "Collar";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"up", "down"};
		class up
		{
			label = "Collar";
		};
		class down
		{
			label = "No Collar";
		};
	};
};

