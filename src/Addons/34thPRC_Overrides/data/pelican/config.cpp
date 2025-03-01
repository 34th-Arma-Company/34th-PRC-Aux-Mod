class CfgPatches
{
	class 34thPRC_Pelican
	{
		author="34th PRC Modding Team, Over Yandere";
		addonRootClass="34thPRC_Overrides";
		requiredAddons[]=
		{
			"34thPRC_Overrides",
			"OPTRE_Vehicles_SOCOM_Pelican", //[DEV] OPTRE -> Air Vehicles -> Pelican
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

class CfgVehicles
{
	class SensorsManagerComponent
	{
		class Components
		{
			class IRSensorComponent: SensorTemplateIR
			{
				class AirTarget
				{
					minRange=500;
					maxRange=3000;
					objectDistanceLimitCoef=1;
					viewDistanceLimitCoef=1;
				};
				class GroundTarget
				{
					minRange=500;
					maxRange=2000;
					objectDistanceLimitCoef=1;
					viewDistanceLimitCoef=1;
				};
				maxTrackableSpeed=300;
				animDirection="mainGun";
				angleRangeHorizontal=46;
				angleRangeVertical=34;
				aimdown=-0.25;
			};
			class VisualSensorComponent: SensorTemplateVisual
			{
				class AirTarget
				{
					minRange=500;
					maxRange=2000;
					objectDistanceLimitCoef=1;
					viewDistanceLimitCoef=1;
				};
				class GroundTarget
				{
					minRange=500;
					maxRange=1500;
					objectDistanceLimitCoef=1;
					viewDistanceLimitCoef=1;
				};
				maxTrackableSpeed=100;
				animDirection="mainGun";
				angleRangeHorizontal=46;
				angleRangeVertical=34;
				aimdown=-0.25;
			};
			class ActiveRadarSensorComponent: SensorTemplateActiveRadar
			{
				class AirTarget
				{
					minRange=5000;
					maxRange=6000;
					objectDistanceLimitCoef=-1;
					viewDistanceLimitCoef=-1;
				};
				class GroundTarget
				{
					minRange=4000;
					maxRange=5000;
					objectDistanceLimitCoef=-1;
					viewDistanceLimitCoef=-1;
				};
				maxTrackableSpeed=100;
				angleRangeHorizontal=180;
				angleRangeVertical=90;
				groundNoiseDistanceCoef=-1;
				maxGroundNoiseDistance=-1;
				minSpeedThreshold=0;
				maxSpeedThreshold=0;
				aimDown=30;
			};
			class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
			{
			};
			class LaserSensorComponent: SensorTemplateLaser
			{
			};
			class NVSensorComponent: SensorTemplateNV
			{
			};
		};
	};
	class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
	{
		class Components: components
		{
			class VehiclePrimaryGunnerDisplay
			{
				componentType="TransportFeedDisplayComponent";
				source="PrimaryGunner";
			};
			class VehicleMissileDisplay
			{
				componentType="TransportFeedDisplayComponent";
				source="Missile";
			};
			class SensorDisplay
			{
				componentType="SensorsDisplayComponent";
				range[]={4000,2000,16000,8000};
				resource="RscCustomInfoSensors";
			};
		};
	};
	class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
	{
		defaultDisplay="SensorDisplay";
		class Components: components
		{
			class VehiclePrimaryGunnerDisplay
			{
				componentType="TransportFeedDisplayComponent";
				source="PrimaryGunner";
			};
			class VehicleMissileDisplay
			{
				componentType="TransportFeedDisplayComponent";
				source="Missile";
			};
			class SensorDisplay
			{
				componentType="SensorsDisplayComponent";
				range[]={4000,2000,16000,8000};
				resource="RscCustomInfoSensors";
			};
		};
	};
};
