// ============================================================================== Configuration

	#define MACRO_AUTHOR "3thPRC Modding Team"
	//#define MACRO_AUTHOR_PPL "Namenai n Friends"
	#define MACRO_MODNAME 34thPRC
	#define MACRO_MODNAME_SCRIPT aux_34thPRC
	//#define MACRO_MOD_VERSION 22.3.26a
    #define MACRO_MOD_DISPLAY_TAG [34th]

	//#define MACRO_HELMET_TEXTURES_PATH \TODO\_textures


	//#define MACRO_SCRIPT_ROOT_PATH 1st_meu_main\functions
// ============================================================================== End Configuration

// ============================================================================== Macro Functions
	#define MACRO_QUOTE(toQuote) #toQuote

	#define MACRO_QUOTE_SINGLE(toQuote) '##toQuote##'

	#define MACRO_UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2

	#define MACRO_PATCH_NAME(component) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,MACRO_UNDERSCORE_CONCAT(patch,component))

	#define MACRO_ITEM_XX(a,b) class _xx_##a {name = a; count = b;}
	#define MACRO_BACKPACK_XX(a,b) class _xx_##a {backpack = a; count = b;}
	#define MACRO_MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
	#define MACRO_WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}

	#define MACRO_FNC_NAME(title) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,fnc),title)
	#define MACRO_VAR_NAME(varName) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,var),varName)
	#define MACRO_EVENT_NAME(varName) MACRO_UNDERSCORE_CONCAT(MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME_SCRIPT,event),varName)
	#define MACRO_CLASSNAME(NAME) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,NAME)


	//displaynames TODO
	//#define MACRO_MEDICAL_ITEM_DISPLAYNAME(name) MACRO_MOD_DISPLAY_TAG name;

	// Mag counts
		#define MACRO_MAG_x1(mag)  MACRO_QUOTE(mag)
		#define MACRO_MAG_x2(mag)  MACRO_QUOTE(mag),MACRO_MAG_x1(mag)
		#define MACRO_MAG_x3(mag)  MACRO_QUOTE(mag),MACRO_MAG_x2(mag)
		#define MACRO_MAG_x4(mag)  MACRO_QUOTE(mag),MACRO_MAG_x3(mag)
		#define MACRO_MAG_x5(mag)  MACRO_QUOTE(mag),MACRO_MAG_x4(mag)
		#define MACRO_MAG_x6(mag)  MACRO_QUOTE(mag),MACRO_MAG_x5(mag)
		#define MACRO_MAG_x7(mag)  MACRO_QUOTE(mag),MACRO_MAG_x6(mag)
		#define MACRO_MAG_x8(mag)  MACRO_QUOTE(mag),MACRO_MAG_x7(mag)
		#define MACRO_MAG_x9(mag)  MACRO_QUOTE(mag),MACRO_MAG_x8(mag)
		#define MACRO_MAG_x10(mag) MACRO_QUOTE(mag),MACRO_MAG_x9(mag)
		#define MACRO_MAG_x11(mag) MACRO_QUOTE(mag),MACRO_MAG_x10(mag)
		#define MACRO_MAG_x12(mag) MACRO_QUOTE(mag),MACRO_MAG_x11(mag)
		#define MACRO_MAG_x13(mag) MACRO_QUOTE(mag),MACRO_MAG_x12(mag)
		#define MACRO_MAG_x14(mag) MACRO_QUOTE(mag),MACRO_MAG_x13(mag)
		#define MACRO_MAG_x15(mag) MACRO_QUOTE(mag),MACRO_MAG_x14(mag)

	// Script logging
		#define MACRO_DIAG_LOG "----- 34thPRC scripting log: %1 -----"
		#define MACRO_SCRIPT "[definitions.hpp]"
// ============================================================================== End Macro Functions

// ============================================================================== Macro Constants

	#define MACRO_RPT_LOG "===34th PRC FUNCTION ERROR==="
// ============================================================================== End Macro Constants

// ============================================================================== Macro Mag Weights

	#define MACRO_m247x_100rnd 32
	#define MACRO_m247x_400rnd 96

	#define MACRO_m75_100rnd 28
	#define MACRO_m75_200rnd 56

	#define MACRO_m250_100rnd 30
	#define MACRO_m250_200rnd MACRO_m250_100rnd*1.6

	#define MACRO_m250_AP_200rnd MACRO_m250_100rnd*1.8
	#define MACRO_m250_500rnd 220
	#define MACRO_m250_AP_400rnd 200

	#define MACRO_m250_HE_60rnd MACRO_m250_100rnd
	#define MACRO_m250_HE_200rnd MACRO_m250_HE_60rnd*3

	#define MACRO_m250_Stun_100rnd MACRO_m250_100rnd*0.6


// ============================================================================== End Macro Mag Weights
