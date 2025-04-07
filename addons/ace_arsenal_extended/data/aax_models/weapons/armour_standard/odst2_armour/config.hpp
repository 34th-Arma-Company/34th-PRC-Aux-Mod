class 34thPRC_ArmourStandard_ODST2_M52_Urban //MA ODST Armor New
{
	label = "[34th] ODST Armors";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"camo", "variant"};
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
	class variant
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"a", "b", "c", "d", "medic_a", "medic_b", "medic_c", "medic_d", "cqb", "marksman"};
		class a
		{
			label = "M52-A";
		};
		class b
		{
			label = "M52-B";
		};
		class c
		{
			label = "M52-C";
		};
		class d
		{
			label = "M52-D";
		};
		class medic_a
		{
			label = "Medic-A";
		};
		class medic_b
		{
			label = "Medic-B";
		};
		class medic_c
		{
			label = "Medic-C";
		};
		class medic_d
		{
			label = "Medic-D";
		};
		class cqb
		{
			label = "CQB";
		};
		class marksman
		{
			label = "Marksman";
		};
	};
};
