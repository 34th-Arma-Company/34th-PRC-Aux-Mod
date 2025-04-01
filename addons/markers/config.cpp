class CfgPatches
{
	class 34thPRC_Markers
	{
		author="34th PRC Modding Team";
		units[]={};
	};
};
class CfgMarkerClasses
{
	class 34thPRC_MapMarkers
	{
		displayName="34th PRC Markers";
	};
};
class CfgMarkers
{
	class 34thPRC_Markers_CompanyEmblem
	{
		name="[34th] 34th PRC";
		icon="z\34thprc\addons\markers\data\company_emblem.paa";
		color[]={1,1,1,1};
		size=40;
		shadow = 0;
		scope = 2;
		markerClass = "34thPRC_MapMarkers";
	};
	class 34thPRC_Markers_MammonActual : 34thPRC_Markers_CompanyEmblem
	{
		name="[34th] Mammon 1-Actual";
		icon="z\34thprc\addons\markers\data\mammon_1-a.paa";
	};
	class 34thPRC_Markers_Mammon1 : 34thPRC_Markers_CompanyEmblem
	{
		name="[34th] Mammon 1-1";
		icon="z\34thprc\addons\markers\data\mammon_1-1.paa";
	};
	class 34thPRC_Markers_Mammon2 : 34thPRC_Markers_CompanyEmblem
	{
		name="[34th] Mammon 1-2";
		icon="z\34thprc\addons\markers\data\mammon_1-2.paa";
	};
	class 34thPRC_Markers_SatanActual : 34thPRC_Markers_CompanyEmblem
	{
		name="[34th] Satan 2-Actual";
		icon="z\34thprc\addons\markers\data\satan_2-a.paa";
	};
};
