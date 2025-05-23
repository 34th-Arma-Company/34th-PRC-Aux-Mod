//Custom Marine Helmet Group 1: Jade, Ramirez, Conex, Harrison
class 34thPRC_ArmourCustom_Marines2_Jade_CH252_Urban
{
	label = "[34th] CH252 Custom Helmets";
	author = "34th PRC Modding Team, J. Yandere";
	options[] = {"player", "camo", "eyewear", "medic", "eyewear_color"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"jade", "ramirez", "conex", "harrison"};
		class jade
		{
			label = "Jade";
		};
		class ramirez
		{
			label = "Ramirez";
		};
		class conex
		{
			label = "Conex";
		};
		class harrison
		{
			label = "Harrison";
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
	class eyewear
	{
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
