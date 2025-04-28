//Custom M52 Group 1: Yandere, Cappy, Ambrose, Vasya
class 34thPRC_ArmourCustom_ODST2_Yandere_M52_Urban
{
	label = "[34th] ODST Custom Armors";
	author = "34th PRC Modding Team, Over Yandere";
	options[] = {"player", "camo", "variant"};
	class player
	{
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"yandere", "cappy", "ambrose", "vasya"};
		class yandere
		{
			label = "Yandere";
		};
		class cappy
		{
			label = "Cappy";
		};
		class ambrose
		{
			label = "Ambrose";
		};
		class vasya
		{
			label = "Vasya";
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

//Custom ODST Specialist Helmets Helmets Group 1: Cappy, Yandere, Luther
class 34thPRC_ArmourCustom_Cappy_EOD_Helmet_Urban
{
	label="[34thPRC] Specialist Helmets Custom";
	author="34th PRC Modding Team, Over Yandere";
	options[]= {"player","helmet","camo","visor"};
	class player
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Player";
		values[] = {"cappy", "yandere", "luther"};
		class cappy
		{
			label="Cappy";
		};
		class yandere
		{
			label="Yandere";
		};
		class luther
		{
			label="Luther";
		};
	};
	class helmet
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Helmet Type";
		values[]={"eod","gungnir","jfo","recon"};
		class eod
		{
			label="EOD";
		};
		class gungnir
		{
			label="Gungnir";
		};
		class jfo
		{
			label="JFO";
		};
		class recon
		{
			label="Recon";
		};
	};
	class camo
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Camo Variant";
		values[] = {"urban", "arctic", "arid", "tropic", "woodland"};
		class urban
		{
			label="Urban";
			image = "#(rgb,8,8,3)color(0.071,0.071,0.071,1)";
		};
		class arctic
		{
			label="Arctic";
			image = "#(rgb,8,8,3)color(0.322,0.322,0.322,1)";
		};
		class arid
		{
			label="Arid";
			image = "#(rgb,8,8,3)color(0.282,0.267,0.239,1)";
		};
		class tropic
		{
			label="Tropic";
			image = "#(rgb,8,8,3)color(0.196,0.2,0.122,1)";
		};
		class woodland
		{
			label="Woodland";
			image = "#(rgb,8,8,3)color(0.149,0.153,0.125,1)";
		};
	};
	class visor
	{
		alwaysSelectable=1;
		changeingame=0;
		label="Visor Variant";
		values[] = {"default","custom"};
		class default
		{
			label="Default";
		};
		class custom
		{
			label="Custom";
		};
	};
};
