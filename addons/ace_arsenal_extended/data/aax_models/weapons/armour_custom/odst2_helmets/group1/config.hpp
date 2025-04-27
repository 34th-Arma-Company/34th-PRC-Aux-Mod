//Custom ODST Helmets Group 1: Yandere, Ambrose, Shewolf, Vasya
class 34thPRC_ArmourCustom_ODST2_Yandere_CH252D_CustomVisor_Urban
{
	label = "[34th] ODST CH252D Custom Helmets";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"player","camo", "visor"};
	class player
	{
		alwaysSelectable= 1;
		changeingame =0;
		values[]= {"yandere","ambrose","shewolf", "vasya"};
		class yandere
		{
			label = "Yandere";
		};
		class ambrose
		{
			label = "Ambrose";
		};
		class shewolf
		{
			label = "Shewolf";
		};
		class vasya
		{
			label="Vasya";
		};
	};
	class camo
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
		class urban
		{
			label = "Urban";
			image = "#(rgb,8,8,3)color(0.071,0.071,0.071,1)";
		};
		class arctic
		{
			label = "Arctic";
			image = "#(rgb,8,8,3)color(0.322,0.322,0.322,1)";
		};
		class arid
		{
			label = "Arid";
			image = "#(rgb,8,8,3)color(0.282,0.267,0.239,1)";
		};
		class tropic
		{
			label = "Tropic";
			image = "#(rgb,8,8,3)color(0.196,0.2,0.122,1)";
		};
		class woodland
		{
			label = "Woodland";
			image = "#(rgb,8,8,3)color(0.149,0.153,0.125,1)";
		};
	};
	class visor
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"silver", "red", "gold", "custom"};
		class silver
		{
			label = "Silver";
		};
		class red
		{
			label = "Red";
		};
		class gold
		{
			label = "Gold";
		};
			class custom
		{
			label = "Custom";
		};
	};
};

