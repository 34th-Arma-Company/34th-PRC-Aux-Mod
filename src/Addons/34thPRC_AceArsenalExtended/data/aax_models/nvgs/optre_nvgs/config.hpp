class OPTRE_NVG
{
	label = "[A2S] OpTre NVG";
	author = "Article 2 Studios";
	options[] = {"leftattach", "middleattach", "rightattach"};
	class leftattach
	{
		label = "Left Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"left", "cnm", "hul"};
		class left
		{
			label = "NONE";
		};
		class cnm
		{
			label = "CNM";
			description = "Command Network Module";
		};
		class hul
		{
			label = "HUL";
			description = "Hardened Uplink Module";
		};
	};
	class middleattach
	{
		label = "Middle Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"middle", "mvi", "ua", "uab"};
		class middle
		{
			label = "NONE";
		};
		class mvi
		{
			label = "MVI";
			description = "Marksman's Visual Interface";
		};
		class ua
		{
			label = "UA";
			description = "Up-Armored (A)";
		};
		class uab
		{
			label = "UAB";
			description = "Up-Armored (B)";
		};
	};
	class rightattach
	{
		label = "Right Attachment";
		alwaysSelectable = 1;
		changeingame = 0;
		values[] = {"right", "ul", "hurs"};
		class right
		{
			label = "NONE";
		};
		class ul
		{
			label = "UL";
			description = "Command Uplink Module";
		};
		class hurs
		{
			label = "HURS";
			description = "Hardened Uplink - Remote Sensor";
		};
	};
};
