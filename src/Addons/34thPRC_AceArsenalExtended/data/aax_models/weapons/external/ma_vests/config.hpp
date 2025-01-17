class MA_Marine_Pouches
{
	label = "[MA] Marine Pouches";
	author = "Misriah Armory";
	options[] = {"basic", "rifle", "tl", "med", "eng"};
	class basic
	{
		label = "Basic"
		alwaysSelectable = 1;
		changeingame = 0;
		values[]= {"va0", "va1", "va2", "va3", "va4"};
		class va0
		{
			label = "VA0";
			description = "Pouchless";
		};
		class va1
		{
			label = "VA1";
			description = "Variant #1";
		};
		class va2
		{
			label = "VA2";
			description = "Variant #2";
		};
		class va3
		{
			label = "VA3";
			description = "Variant #3";
		};
		class va4
		{
			label = "VA4";
			description = "Variant #4";
		};
	};
	class rifle
	{
		label = "Rifleman"
		alwaysSelectable = 1;
		changeingame = 0;
		values[]= {"rla", "rlb", "rlc", "rld", "rma", "rmb", "rmc", "rmd", "rha", "rhb", "rhc", "rhd"};
		class rla
		{
			label = "RL(A)";
			description = "Rifleman Light (A)";
		};
		class rlb
		{
			label = "RL(B)";
			description = "Rifleman Light (B)";
		};
		class rlc
		{
			label = "RL(C)";
			description = "Rifleman Light (C)";
		};
		class rld
		{
			label = "RL(D)";
			description = "Rifleman Light (D)";
		};
		class rma
		{
			label = "RM(A)";
			description = "Rifleman Medium (A)";
		};
		class rmb
		{
			label = "RM(B)";
			description = "Rifleman Medium (B)";
		};
		class rmc
		{
			label = "RM(C)";
			description = "Rifleman Medium (C)";
		};
		class rmd
		{
			label = "RM(D)";
			description = "Rifleman Medium (D)";
		};
		class rha
		{
			label = "RH(A)";
			description = "Rifleman Heavy (A)";
		};
		class rhb
		{
			label = "RH(B)";
			description = "Rifleman Heavy (B)";
		};
		class rhc
		{
			label = "RH(C)";
			description = "Rifleman Heavy (C)";
		};
		class rhd
		{
			label = "RH(D)";
			description = "Rifleman Heavy (D)";
		};
	};
	class tl
	{
		label = "Teamleader"
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"tla", "tlb", "tma", "tmb", "tha", "thb"};
		class tla
		{
			label = "TL(A)"
			description = "Teamleader Light (A)"
		};
		class tlb
		{
			label = "TL(B)"
			description = "Teamleader Light (B)"
		};
		class tma
		{
			label = "TM(A)"
			description = "Teamleader Medium (A)"
		};
		class tmb
		{
			label = "TM(B)"
			description = "Teamleader Medium (B)"
		};
		class tha
		{
			label = "TH(A)"
			description = "Teamleader Heavy (A)"
		};
		class thb
		{
			label = "TH(B)"
			description = "Teamleader Heavy (B)"
		};
	};
	class med
	{
		label = "Medic"
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"mla", "mlb", "mma", "mmb", "mha", "mhb"};
		class mla
		{
			label = "ML(A)"
			description = "Medic Light (A)"
		};
		class mlb
		{
			label = "ML(B)"
			description = "Medic Light (B)"
		};
		class mma
		{
			label = "MM(A)"
			description = "Medic Medium (A)"
		};
		class mmb
		{
			label = "MM(B)"
			description = "Medic Medium (B)"
		};
		class mha
		{
			label = "MH(A)"
			description = "Medic Heavy (A)"
		};
		class mhb
		{
			label = "MH(B)"
			description = "Medic Heavy (B)"
		};
	};
	class eng
	{
		label = "Engineer"
		alwaysSelectable = 1;
		changeingame = 0;
		values[]={"ela", "elb", "ema", "emb", "eha", "ehb"};
		class ela
		{
			label = "EL(A)"
			description = "Engineer Light (A)"
		};
		class elb
		{
			label = "EL(B)"
			description = "Engineer Light (B)"
		};
		class ema
		{
			label = "EM(A)"
			description = "Engineer Medium (A)"
		};
		class emb
		{
			label = "EM(B)"
			description = "Engineer Medium (B)"
		};
		class eha
		{
			label = "EH(A)"
			description = "Engineer Heavy (A)"
		};
		class ehb
		{
			label = "EH(B)"
			description = "Engineer Heavy (B)"
		};
	};
};
