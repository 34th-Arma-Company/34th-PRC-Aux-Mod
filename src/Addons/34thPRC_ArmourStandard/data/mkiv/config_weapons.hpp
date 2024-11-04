class MA_Mjolnir_MKIV_Helmet; // MA_Armor
class VestItem;
    class ItemInfo;
    class HeadgearItem;
    class V_PlateCarrier1_rgr;
    class UniformItem;
    class H_HelmetB;
class 34thPRC_ArmourStandard_MKIV_Helmet : MA_Mjolnir_MKIV_Helmet
{
    displayName="[34th] Mjolnir MKIV Helmet";
    author= "Cappy";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
     };
	hiddenSelectionsTextures[]=
    {
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Helmet_34_CO.paa",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Visor_34_CO.paa"
    };
	hiddenSelectionsMaterials[] =
     {
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Helmet.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Visor.rvmat"
     };
	class ItemInfo : HeadgearItem
        {
            uniformModel = "MA_Armor_ORION\data\Helmets\MKIV\MKIV_Helmet_Spartan.p3d";
            mass = 50;
            modelSides[] = { 6 };
            allowedSlots[] = { 801,901,701,605 };
            hiddenSelections[] =
            {
                "camo1",
                "camo2"
            };
            hiddenSelectionsTextures[] =
            {
            "34thPRC_ArmourStandard\data\mkiv\MKIV_Helmet_34_CO.paa",
        	"34thPRC_ArmourStandard\data\mkiv\MKIV_Visor_34_CO.paa"
            };
            hiddenSelectionsMaterials[] =
            {
            "34thPRC_ArmourStandard\data\mkiv\MKIV_Helmet.rvmat",
        	"34thPRC_ArmourStandard\data\mkiv\MKIV_Visor.rvmat"
            };
		};
};
class MA_MKIV_Armor; // MA_Armor
class 34thPRC_ArmourStandard_MKIV_Armor: MA_MKIV_Armor
{
    displayName="[34th] Mjolnir MKIV Armor";
    author= "Cappy";
	hiddenSelectionsTextures[]=
	{
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Upper_34_CO.paa",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Lower_34_CO.paa",
    	"34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders_34_CO.paa",
    	"34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders_34_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Upper.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Lower.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders.rvmat"
    };
	class ItemInfo : VestItem
    {
    	vestType = "Rebreather";
    	hiddenSelections[] =
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            //    "mkvb_upper",
            //    "mkvb_lower",
            //    "mkiv_left",
            //    "mkiv_right"
        };
         hiddenSelectionsTextures[] =
        {
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Upper_34_CO.paa",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Lower_34_CO.paa",
    	"34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders_34_CO.paa",
    	"34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders_34_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Upper.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Lower.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders.rvmat",
        "34thPRC_ArmourStandard\data\mkiv\MKIV_Shoulders.rvmat"
        };
	};
};


