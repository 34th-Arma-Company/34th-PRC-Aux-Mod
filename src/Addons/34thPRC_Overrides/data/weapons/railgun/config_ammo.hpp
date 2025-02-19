class OPTRE_FC_16x65mm_Slug; // OPTRE_FC_Weapons --> /Ammo/cfgAmmo.hpp
class 34thPRC_Overrides_Weapons_Railgun_AP_16x65mm : OPTRE_FC_16x65mm_Slug
{
	caliber=20;
	hit=275;
	indirectHit=20;
	indirectHitRange=1;
	explosive=0.3;
	tracerStartTime=0.5;
	explosionEffects="ExploAmmoExplosion";
	craterEffects="ExploAmmoCrater";
};
class 34thPRC_Overrides_Weapons_Railgun_HE_16x65mm: 34thPRC_Overrides_Weapons_Railgun_AP_16x65mm
{
	caliber=8;
	hit=100;
	indirectHit=75;
	indirectHitRange=6;
	explosive=1;
	deflecting=4;
	ACE_damageType="grenade";
	ace_frag_enabled=1;
	ace_frag_classes[]=
	{
	"ace_frag_large"
	};
	ace_frag_metal=1000;
	ace_frag_charge=800;
	ace_frag_gurney_c=2440;
	ace_frag_gurney_k="1/2";
	ace_vehicle_damage_incendiary=0.75;
	explosionEffects="ExploAmmoExplosion";
	craterEffects="ExploAmmoCrater";
	CraterWaterEffects="ImpactEffectsWaterHE";
};
