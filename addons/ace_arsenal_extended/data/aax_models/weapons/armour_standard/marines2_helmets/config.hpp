class 34thPRC_ArmourStandard_Marines2_CH252_Urban // MA CH252 Helmets
{
	label = "[34th] CH252 Helmets";
	author = "34th PRC Modding Team, J. Koko";
	options[] = {"camo", "eyewear", "medic", "eyewear_color"};
	class camo
	{
		label = "Camo";
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
	class eyewear
	{
		label = "Eyewear";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"standard", "eyepiece", "visor"};
		class standard
		{
			label = "Standard";
		};
		class eyepiece
		{
			label = "Eyepiece";
		};
		class visor
		{
			label = "Visor";
		};
	};
	class medic
	{
		label = "Medic";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"nonmedic", "medic"};
		class nonmedic
		{
			label = "Non-Medic";
		};
		class medic
		{
			label = "Medic";
		};
	};
	class eyewear_color
	{
		label = "Eyewear Color";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"none", "blue", "green", "red", "purple", "orange"};
		class none
		{
			label = "None";
		};
		class blue
		{
			label = "Blue";
		};
		class green
		{
			label = "Green";
		};
		class red
		{
			label = "Red";
		};
		class purple
		{
			label = "Purple";
		};
		class orange
		{
			label = "Orange";
		};
	};
};
