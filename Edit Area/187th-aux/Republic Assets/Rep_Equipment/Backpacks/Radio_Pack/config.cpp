class CfgPatches
{
	class 187th_Radio_Pack
	{
		name = "187th Radio Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187_Radio_Pack"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_RTO;
	class 187_Radio_Pack: JLTS_Clone_backpack_RTO
	{
		displayName = "[187th] Radio Pack";
		scope = 2;
		scopeCurator = 2;
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 280;
	};
};