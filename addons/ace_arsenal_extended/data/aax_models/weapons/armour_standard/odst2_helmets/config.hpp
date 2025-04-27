
class 34thPRC_ArmourStandard_ODST2_CH252D_SilverVisor_Urban // MA ODST Helmet New
{
	label = "[34th] ODST CH252D Helmets";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"camo", "visor"};
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
		values[] = {"silver", "red", "gold"};
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
	};
};
