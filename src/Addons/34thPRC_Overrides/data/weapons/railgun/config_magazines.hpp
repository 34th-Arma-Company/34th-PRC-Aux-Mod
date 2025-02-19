class CA_Magazine;
class 34thPRC_Overrides_Weapons_Railgun_16x65mm_Slug: CA_Magazine
	{
		ammo="34thPRC_Overrides_Weapons_Railgun_16x65mm";
		displayName="1Rnd 16x65mm Slug";
		descriptionShort="Railgun Slug that can disable vehicles";
		displayNameShort="1rnd 16x65mm Slug";
		count=1;
		initSpeed=7203;
		scope=2;
		scopeArsenal=2;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\1st_meu_weapons\_textures\railgun\slug.paa";
		mass=22.5;
		nameSound="cannon";
		tracersEvery=1;
	};
class 34thPRC_Overrides_Weapons_Railgun_16x65mm_3RoundSlug: 34thPRC_Overrides_Weapons_Railgun_16x65mm_Slug
	{
		count=3;
		displayName="3Rnd 16x65mm Slug";
		displayNameShort="3rnd 16x65mm Slug";
	};
class 34thPRC_Overrides_Weapons_Railgun_16x65mm_HESlug: 34thPRC_Overrides_Weapons_Railgun_16x65mm_Slug
	{
		mass=20;
		initSpeed=7203;
		count=1;
		picture="\1st_meu_weapons\_textures\railgun\he.paa";
		ammo="34thPRC_Overrides_Weapons_Railgun_HE_16x65mm";
		displayName="1Rnd 16x65mm HE";
		displayNameShort="1rnd 16x65mm HE";
		descriptionShort="Railgun HE that can send metal fragments everywhere";
	};
