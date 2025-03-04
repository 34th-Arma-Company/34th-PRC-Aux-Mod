class CfgPatches
{
	class 34thPRC_19th_Pelican
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"Splits_Vehicles_Air_Pelican", //UNSC Foundries -> Splits_Vehicles -> Pelican
			"34thPRC_Overrides"
		};
		units[]={};
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F : Helicopter
	{
		class Turrets;
		class ViewPilot;

	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class Components;
	};

	class B_Heli_Transport_01_F : Helicopter_Base_H
	{};
	class Splits_Pelican_base : B_Heli_Transport_01_F
	{
		radarTargetSize = 1.2;
		irTargetSize = 1.2;
	};
};
