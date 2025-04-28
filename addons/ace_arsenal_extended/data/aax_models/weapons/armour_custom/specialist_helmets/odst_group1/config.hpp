//Custom Specialist Helmets ODST Group 1: Cappy, Yandere, Luther
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
