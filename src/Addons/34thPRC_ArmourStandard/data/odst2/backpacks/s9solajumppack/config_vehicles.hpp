class OPTRE_S12_SOLA_Jetpack; // OPTRE ---> OPTRE_Weapons
class SC_MercerJumppack; //Scion Conflict ---> sc_newequipment2
class 34thPRC_ArmourStandard_ODST2_Backpacks_S9SOLAJumppack : SC_MercerJumppack
{
	displayname="[34th] Series-9[B] SOLA Jump-Jet"
	author="34th PRC - Vasya, Outworld Studios, & Article 2 Studios"
	picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
	scope=2;
	scopearsenal=2;
	ace_gunbag=1;
	tf_hasLRradio=1;
	tf_range=25000;
	tf_encryptionCode="tf_west_radio_code";
	tf_dialog="rt1523g_radio_dialog";
	tf_subtype="digital_lr";
	tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
	model="OPTRE_Weapons\Backpacks\jetpack_on.p3d";
	uniformModel="OPTRE_Weapons\Backpacks\jetpack_on.p3d";
	hiddenSelections[]=
	{
	"camo"
	};
	hiddenSelectionsTextures[]=
	{
	"optre_weapons\backpacks\data\jetpack_co.paa"
	};
};
