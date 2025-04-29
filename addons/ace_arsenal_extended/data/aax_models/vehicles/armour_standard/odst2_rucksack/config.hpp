class 34thPRC_ArmourStandard_ODST_M52_Rucksack_Urban //New Rucksacks
{
	label = "[34th] M52 Rucksack";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"camo", "variant"};
	class camo
	{
		label="Camo";
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
	class variant
	{
		label="Model";
		alwaysSelectable=1;
		changeingame=0;
		values[]= {"standard","medic","gunbag","radio"};
		class standard
		{
			label="Standard";
		};
		class medic
		{
			label="Corpsman";
		};
		class gunbag
		{
			label="Gunbag";
		};
		class radio
		{
			label="RTO/JTAC";
		};
	};
};
