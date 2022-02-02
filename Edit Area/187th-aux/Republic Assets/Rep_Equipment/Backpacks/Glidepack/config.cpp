class CfgPatches
{
	class 187th_Glidepack
	{
		name = "187th Glidepack";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_ls_gar_glidepackClosed_backpack","187th_ls_gar_glidepackClosedLR_backpack"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class ls_gar_glidepackClosed_backpack;
	class 187th_ls_gar_glidepackClosed_backpack: ls_gar_glidepackClosed_backpack
	{
	  scope = 2;
	  displayName = "[187th] Clone Glidepack";
	  model = "ls_equipment_bluefor\backpack\gar\glidepack\glidepack_closed";
	  ls_loadout_shouldSaveContainer = 1;
	  maximumLoad = 280;
	  ParachuteClass = "ls_misc_glidepack_parachute";
	  ace_hasReserveParachute = 0;
	  ace_reserveParachute = "";
	};

	class 187th_ls_gar_glidepackClosedLR_backpack: 187th_ls_gar_glidepackClosed_backpack
	{
	  displayName = "[187th] Clone LR Glidepack";
	  maximumLoad = 280;
	  tf_isolatedAmount = 0.65;
	  tf_encryptionCode = "tf_west_radio_code";
	  tf_dialog = "anarc210_radio_dialog";
	  tf_subtype = "digital_lr";
	  tf_range = 30000;
	  tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	  tf_hasLRradio = 1;
	};
};