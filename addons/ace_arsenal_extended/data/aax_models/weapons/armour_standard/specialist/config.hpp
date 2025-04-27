
class 34thPRC_ArmourStandard_EOD_Helmet_Urban //Specialist Helmets
{
	label="[34thPRC] Specialist Helmets";
	author="34th PRC Modding Team, Yandere";
	options[]= {"helmet","camo"};
	class helmet
	{
		label="Helmet Type";
		alwaysSelectable=1;
		changeingame=0;
		values[]={"eod", "gungnir", "jfo", "cqc", "commando", "grenadier", "scout", "pilot", "recon"};
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
		class cqc
		{
			label="CQC";
		};
		class commando
		{
			label="Commando";
		};
		class grenadier
		{
			label="Grenadier";
		};
		class scout
		{
			label="Scout";
		};
		class pilot
		{
			label="Pilot";
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
};
class 34thPRC_ArmourStandard_EOD_CBRN_NVG_Urban //EOD NVG
{
	label="[34thPRC] EOD Helmet CBRN Attachment";
	author="34th PRC Modding Team, Over Yandere";
	options[]= {"camo"};
	class camo
	{
		alwaysSelectable=1;
		changeingame=0;
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
};
