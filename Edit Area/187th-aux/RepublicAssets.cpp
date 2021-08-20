class JLTS_Clone_P2_DC15S_187;
class JLTS_Clone_P2_corporal_187;
class JLTS_Clone_P2_sergeant_187;
class JLTS_Clone_P2_sergeantmajor_187;
class JLTS_Clone_P2_lieutenant_187;
class 3as_Jug;
class 3as_RTT;
class 3AS_Barc;
class 3AS_BarcSideCar;
//class 3as_arc_170_Purple; missing from 3AS *sad panda noises*
class 3as_Z95_Republic;
class 3as_saber_m1;
class 3as_saber_m1Recon;
class 3as_saber_super;
class 3as_saber_m1G;
class 3as_UTAT;
class 212th_Bantha_MK1;
class 3AS_Nuclass;
class Purple_LAAT;
class Purple_LAAT_MK2;
class Purple_LAAT_MK2Light;
class 3AS_HeavyRepeater_Unarmoured;
class 3as_ATAP_base;
class 3as_AV7;
class 3AS_HeavyRepeater_Armoured;
class 3AS_StationaryTurret;

//--------------------------------------------------------------------
// Units
//---------------------------------------------------------------------

class 187th_Recruit : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Recruit";
	uniformClass="187th_Clone_Recruit";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","Put","Throw"};
	items[]={"ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_wirecutter","ACE_EntrenchingTool","ACE_EarPlugs","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_CableTie","ACE_CableTie","ACE_CableTie","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV_500","ACE_bodyBag","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint"};
	respawnItems[]={"ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_wirecutter","ACE_EntrenchingTool","ACE_EarPlugs","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_CableTie","ACE_CableTie","ACE_CableTie","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV_500","ACE_bodyBag","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint"};
	magazines[]={"JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","Luma_Green","Luma_Green","3AS_SmokeGreen","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","Luma_Green","Luma_Green","3AS_SmokeGreen","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_Recruit","187th_Clone_Recruit","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_Recruit","187th_Clone_Recruit","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Beltbag";
};

class 187th_Trooper : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Trooper";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Beltbag";
};

class 187th_Trooper_Medic : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	attendant=1;
	displayName="Medic";
	uniformClass="187th_Clone_Medic";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_surgicalKit","ACE_personalAidKit","ACE_EarPlugs","JLTS_repairkit_weapon_mini","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_surgicalKit","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack"};
	respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_surgicalKit","ACE_personalAidKit","ACE_EarPlugs","JLTS_repairkit_weapon_mini","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_surgicalKit","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Medic","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Medic","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Backpack_medic";
};

class 187th_Trooper_RTO : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="RTO";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeYellow","3AS_SmokeYellow","3AS_SmokeOrange","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeGreen","3AS_SmokeBlue","3AS_SmokeBlue","Luma_Green","Luma_Green","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_HandFlare_White","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeYellow","3AS_SmokeYellow","3AS_SmokeOrange","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeGreen","3AS_SmokeBlue","3AS_SmokeBlue","Luma_Green","Luma_Green","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_HandFlare_White","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152_8","ItemcTab","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152_8","ItemcTab","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Radio_Pack";
};

class 187th_Trooper_Crewman : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	engineer=1;
	displayName="Crewman";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Backpack";
};

class 187th_Trooper_Engineer : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	engineer=1;
	displayName="Engineer";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Backpack";
};

class 187th_Trooper_Genadier : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Grenadier";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_ugl_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_ugl_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_HuntIR_monitor","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_HuntIR_monitor","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","UGL_FlareGreen_F","UGL_FlareGreen_F"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","UGL_FlareGreen_F","UGL_FlareGreen_F"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","OPTRE_HUD_w_Glasses","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","OPTRE_HUD_w_Glasses","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Beltbag";
};

class 187th_Trooper_Support : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Support";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_Z6","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_Z6","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","Chemlight_green","Chemlight_green","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","Chemlight_green","Chemlight_green","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper"};
	backpack="187_Clone_Beltbag";
};

class 187th_Trooper_AT : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="AT";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_RPS6","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_RPS6","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","Luma_Green","Luma_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeGreen","3AS_SmokeRed","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_RPS6_mag","JLTS_RPS6_HE_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","Luma_Green","Luma_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeGreen","3AS_SmokeRed","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_RPS6_mag","JLTS_RPS6_HE_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Backpack";
};

class 187th_Trooper_Marksman : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Marksman";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15X_JLTS_DC15X_scope","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15X_JLTS_DC15X_scope","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_SmokeRed","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_SmokeRed","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Beltbag";
};

class 187th_Trooper_EOD : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	engineer=1;
	displayName="Trooper EOD";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","JLTS_DC15S","JLTS_DC17SA","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","JLTS_DC15S","JLTS_DC17SA","Put","Throw"};
	items[]={"FirstAidKit","ACE_EarPlugs","MineDetector","ToolKit"};
	respawnItems[]={"FirstAidKit","ACE_EarPlugs","MineDetector","ToolKit"};
	magazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	respawnMagazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","187th_Clone_Trooper","JLTS_NVG_droid_chip_1"};
	backpack="187_Clone_Backpack_eod";
};

class 187th_Pilot : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Pilot";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
	items[]={"ACE_EarPlugs","FirstAidKit","ACE_EarPlugs"};
	respawnItems[]={"ACE_EarPlugs","FirstAidKit","ACE_EarPlugs"};
	magazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","SmokeShell","SmokeShellGreen"};
	respawnMagazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","SmokeShell","SmokeShellGreen"};
	linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Pilot_HelmetP2","187_Clone_Holster","JLTS_Clone_helmetInterior_P2","187th_Clone_Trooper"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Pilot_HelmetP2","187_Clone_Holster","JLTS_Clone_helmetInterior_P2","187th_Clone_Trooper"};
	backpack="187_Clone_Beltbag";
};

class 187th_Lance_Trooper : JLTS_Clone_P2_DC15S_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Lance Trooper";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_CloneNVG"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","187th_Clone_Trooper","JLTS_CloneNVG"};
	backpack="187_Clone_Beltbag";
};

class 187th_Corporal : JLTS_Clone_P2_corporal_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Corporal";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPL","187th_Clone_Trooper","JLTS_CloneNVG"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPL","187th_Clone_Trooper","JLTS_CloneNVG"};
	backpack="187_Clone_Beltbag";
};

class 187th_Sergeant : JLTS_Clone_P2_sergeant_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Sergeant";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","187th_Clone_Trooper","JLTS_CloneNVG"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","187th_Clone_Trooper","JLTS_CloneNVG"};
	backpack="187_MiniRadio_Pack";
};

class 187th_Sergeant_Major : JLTS_Clone_P2_sergeantmajor_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Sergeant Major";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","187th_Clone_Trooper","JLTS_CloneNVGRange"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","187th_Clone_Trooper","JLTS_CloneNVGRange"};
	backpack="187_MiniRadio_Pack";
};

class 187th_Lieutenant : JLTS_Clone_P2_lieutenant_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Lieutenant";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_LT","187th_Clone_Trooper","JLTS_CloneNVGRange"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_LT","187th_Clone_Trooper","JLTS_CloneNVGRange"};
	backpack="187_MiniRadio_Pack";
};

class 187th_Captain : JLTS_Clone_P2_lieutenant_187
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Infantry";
	side=1;
	displayName="Captain";
	uniformClass="187th_Clone_Trooper";
	weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA_JLTS_DC17SA_flashlight","Put","Throw"};
	items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
	magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
	linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPT","187th_Clone_Trooper","JLTS_CloneNVGRange"};
	respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPT","187th_Clone_Trooper","JLTS_CloneNVGRange"};
	backpack="187_MiniRadio_Pack";
};

//------------------------------------------------------------------
// Vehicles
//---------------------------------------------------------------------

class 187th_Juggernaut : 3as_Jug
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Armor";
	side=1;
	displayName="Juggernaut";
	hiddenSelectionsTextures[]={};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
	ace_cargo_space = 200; // Cargo space your vehicle has
};

class 187th_RTT : 3as_RTT
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Armor";
	side=1;
	ace_refuel_fuelCargo = 999999999999;
	ace_rearm_defaultSupply = 999999999999;
	ace_cargo_space = 170;
	ace_repair_canRepair = 1;
	ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
	displayName="RTT";
	hiddenSelectionsTextures[]={"3as\3as_rtt\data\rtt\exterior_co.paa"};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 187th_BARC_Speeder : 3AS_Barc
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Transport";
	side=1;
	displayName="BARC Speeder";
	hiddenSelectionsTextures[]={"3as\3as_lightvics\3as_barc\data\barc_rep_co.paa"};
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 187th_BACR_Speeder_Sidecar : 3AS_BarcSideCar
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Transport";
	side=1;
	displayName="BACR Speeder Sidecar";
	hiddenSelectionsTextures[]={"3as\3as_lightvics\3as_barc\data\barc_rep_co.paa","3as\3as_lightvics\3as_barc\data\sidecar\gunner_co.paa"};
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 3as_arc_170_red;
class 187th_ARC_170 : 3as_arc_170_red
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Plane";
	side=1;
	displayName="ARC-170";
	crew="187th_Pilot";
	typicalCargo[]={"187th_Pilot"};
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
			};
			class Medium : Wide
			{
				opticsDisplayName = "MFOV";
				initFov = "(15 / 120)";
				minFov = "(15 / 120)";
				maxFov = "(15 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow : Wide
			{
				opticsDisplayName = "NFOV";
				initFov = "(3.75 / 120)";
				minFov = "(3.75 / 120)";
				maxFov = "(3.75 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 0;
		};
		minTurn = -180;
		maxTurn = 180;
		initTurn = 0;
		minElev = -10;
		maxElev = 90;
		initElev = 0;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
};

class 187th_Z_95_Headhunter : 3as_Z95_Republic
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Plane";
	side=1;
	displayName="Z 95 Headhunter";
	hiddenSelectionsTextures[]={"3as\3as_z95\data\body_co.paa","3as\3as_z95\data\cockpit_co.paa","3as\3as_saber\data\glass\glass_ca.paa"};
	crew="187th_Pilot";
	typicalCargo[]={"187th_Pilot"};
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
			};
			class Medium : Wide
			{
				opticsDisplayName = "MFOV";
				initFov = "(15 / 120)";
				minFov = "(15 / 120)";
				maxFov = "(15 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow : Wide
			{
				opticsDisplayName = "NFOV";
				initFov = "(3.75 / 120)";
				minFov = "(3.75 / 120)";
				maxFov = "(3.75 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 0;
		};
		minTurn = -180;
		maxTurn = 180;
		initTurn = 0;
		minElev = -10;
		maxElev = 90;
		initElev = 0;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
};

class 187th_Saber_Tank : 3as_saber_m1
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Armor";
	side=1;
	displayName="Saber Tank";
	hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_co.paa"};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
	canBeTransported = 1;
};

class 187th_Saber_Tank_Recon : 3as_saber_m1Recon
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Armor";
	side=1;
	displayName="Saber Tank Recon";
	hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_scout_co.paa"};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 187th_Saber_Tank_Super : 3as_saber_super
{
	faction="187th_Republic";
	editorCategory="187th_Rep_Assets";
	editorSubcategory="187th_Armor";
	side=1;
	displayName="Saber Tank Super";
	hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weapons_co.paa"};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 187th_Saber_Tank_GL : 3as_saber_m1G
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Armor";
	side=1;
	displayName="Saber Tank GL";
	hiddenSelectionsTextures[]={"3as\3as_saber\data\saber_hull_co.paa","3as\3as_saber\data\saber_weaponsgmg_co.paa"};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 187th_UT_AT : 3as_UTAT
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Armor";
	side=1;
	displayName="UT-AT";
	hiddenSelectionsTextures[]={""};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 3as_ATTE_Base;
class 187th_ATTE : 3as_ATTE_Base
{
	faction="187th_Republic";     editorCategory="187th_Test_Assets";     editorSubcategory="187th_Armor";
	side=1;
	displayname="ATTE";
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

/*class 187th_Bantha: 212th_Bantha_MK1 //Commentted out to prevent duplicates in game :)
   {
   faction="187th_Republic";
   editorCategory="187th_Rep_Assets";
   editorSubcategory="187th_Armor";
   side=1;
   displayName="Bantha test 1";
   hiddenSelectionsTextures[]={"212th\vehicles\212th_apc\data\textures\bantha-ext_arma material_co.paa","212th\vehicles\212th_apc\data\textures\bantha-tire_arma material_co.paa","212th\vehicles\212th_apc\data\textures\bantha-turret_arma material_co.paa","212th\vehicles\212th_apc\data\textures\bantha-int_arma material_co.paa"};
   crew="187th_Trooper";
   typicalCargo[]={"187th_Trooper"};

   };*/

   class 187th_Nu_A_Class_Shuttle : 3AS_Nuclass
   {
   	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Helicopter";
   	side=1;
   	displayName="Nu-class Attack Shuttle";
   	hiddenSelectionsTextures[]={"3as\3as_nu\data\charger\exterior_co.paa","3as\3as_nu\data\charger\wings_co.paa","3as\3as_nu\data\charger\interior_co.paa","3as\3as_nu\data\charger\cockpit_doors_co.paa"};
   	crew="187th_Pilot";
   	typicalCargo[]={"187th_Pilot"};
   	extCameraPosition[] = {0,6,-28};
   };

   class 187th_Nu_A_Class_Shuttle_Cargo : 3AS_Nuclass
   {
   	faction="187th_Republic";     editorCategory="187th_Test_Assets";     editorSubcategory="187th_Helicopter";
   	side=1;
   	displayName="Nu-class Cargo Shuttle (Broken)";
   	hiddenSelectionsTextures[]={"3as\3as_nu\data\charger\exterior_co.paa","3as\3as_nu\data\charger\wings_co.paa","3as\3as_nu\data\charger\interior_co.paa","3as\3as_nu\data\charger\cockpit_doors_co.paa"};
   	crew="187th_Pilot";
   	typicalCargo[]={"187th_Pilot"};
	// class VehicleTransport {}; //this disables ViV system
   	extCameraPosition[] = {0,6,-28};
   	class UserActions
   	{
	/*class Load_Inside_Vehicle
	   {
	        userActionID = 6;
	        displayName = "Load Vehicle Inside";
	        displayNameDefault = "Load Vehicle Inside";
	        textToolTip = "Load Vehicle Inside";
	        position = "cargo_door_handle";
	        showWindow = 0;
	        radius = 20;
	        priority = 2;
	        onlyForPlayer = 0;
	        condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_shuttle_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
	        statement = "0 = [this,vehicle player] spawn OES_fnc_ShuttleLoadinsideValidate;";
	   };
	   class Unload_Inside_Vehicle
	   {
	        userActionID = 7;
	        displayName = "Unload Inside Cargo";
	        displayNameDefault = "Unload Inside Cargo";
	        textToolTip = "Unload Inside Cargo";
	        showWindow = 0;
	        radius = 15;
	        priority = 3;
	        onlyForPlayer = 0;
	        condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_shuttle_AttachedToVehiclesEffect"",[]])) > 0)";
	        statement = "0 = [this] spawn OES_fnc_ShuttleUnLoadinsideValidate;";
	   };*/
	        /*class Load_Outside_Vehicle
	        {
	        	userActionID = 6;
	        	displayName = "Load Vehicle Outside";
	        	displayNameDefault = "Load Vehicle Outside";
	        	textToolTip = "Load Vehicle Outside";
	        	position = "cargo_door_handle";
	        	showWindow = 0;
	        	radius = 30;
	        	priority = 2;
	        	onlyForPlayer = 0;
	        	condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [" "OPTRE_shuttle_AttachedToVehiclesEffect" ",[]])) > 0)";
	        	statement = "0 = [this,vehicle player] spawn fn_ShuttleLoadOutsideValidate;";
	        };
	        class Unload_Outside_Vehicle
	        {
	        	userActionID = 7;
	        	displayName = "Unload Outside Cargo";
	        	displayNameDefault = "Unload Outside Cargo";
	        	textToolTip = "Unload Outside Cargo";
	        	showWindow = 0;
	        	radius = 30;
	        	priority = 3;
	        	onlyForPlayer = 0;
	        	condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [" "OPTRE_shuttle_AttachedToVehiclesEffect" ",[]])) > 0)";
	        	statement = "0 = [this] spawn fn_ShuttleUnLoadOutsideValidate;";
	        };*/
	/*class PelLift_LoadPodMenu
	   {
	        userActionID = 9;
	        displayName = "Load Supply Pods";
	        displayNameDefault = "Load Supply Pods";
	        textToolTip = "Load Supply Pods";
	        position = "cargo_door_handle";
	        showWindow = 0;
	        radius = 15;
	        priority = 2;
	        onlyForPlayer = 0;
	        condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
	        statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
	   };
	   class PelLift_OpenDetachPodMenu
	   {
	        userActionID = 8;
	        displayName = "Detach Individual Supply Pod Menu";
	        displayNameDefault = "Detach Individual Supply Pod Menu";
	        textToolTip = "Detach Individual Supply Pod Menu";
	        position = "cargo_door_handle";
	        showWindow = 0;
	        radius = 5;
	        priority = 3;
	        onlyForPlayer = 0;
	        condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
	        statement = "0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
	   };*/
	        class afterburners_turn_on
	        {
	        	showWindow = 0;
	        	hideOnUse = 0;
	        	priority = 9;
	        	role = 0;
	        	displayName = "Activate Impulse";
	        	position = "pilotview";
	        	radius = 12;
	        	onlyforplayer = 0;
	        	condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
	        	statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
	        };
	        class afterburners_turn_off
	        {
	        	showWindow = 0;
	        	hideOnUse = 0;
	        	priority = 9;
	        	role = 0;
	        	displayName = "Deactivate Impulse";
	        	position = "pilotview";
	        	radius = 12;
	        	onlyforplayer = 0;
	        	condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
	        	statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
	        };
	        class rampOpen
	        {
	        	displayName = "Cargo Ramp Open";
	        	position = "cargoaction";
	        	radius = 12;
	        	condition = "(this animationSourcePhase 'ramp' ==0 AND (alive this))";
	        	statement = "this animateSource ['ramp',1]";
	        	onlyforplayer = 0;
	        	role = 0;
	        };
	        class rampClose : rampOpen
	        {
	        	displayName = "Cargo Ramp Close";
	        	position = "cargoaction";
	        	radius = 12;
	        	condition = "(this animationSourcePhase 'ramp' ==1 AND (alive this))";
	        	statement = "this animateSource ['ramp',0]";
	        	onlyforplayer = 0;
	        };
	        class frontrampOpen
	        {
	        	role = 0;
	        	displayName = "Front Ramp Open";
	        	position = "frontaction";
	        	radius = 12;
	        	condition = "(this animationSourcePhase 'rampfront' ==0 AND (alive this))";
	        	statement = "this animateSource ['rampfront',1]";
	        	onlyforplayer = 0;
	        };
	        class frontrampClose : frontrampOpen
	        {
	        	displayName = "Front Ramp Close";
	        	position = "frontaction";
	        	radius = 12;
	        	condition = "(this animationSourcePhase 'rampfront' ==1 AND (alive this))";
	        	statement = "this animateSource ['rampfront',0]";
	        	onlyforplayer = 0;
	        };
	    };
	};

	class 3as_LAAT_Mk2;
	class 187th_LAAT_mk_2 : 3as_LAAT_Mk2
	{
		displayname="LAAT MK 2";
		faction="187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Helicopter";
		armor=800;
		fuelCapacity=4000;
		scope=2;
		scopeCurator = 2;
		side=1;
		maximumLoad = 10000;
		crew="187th_Pilot";
		weapons[]=
		{
			"ParticleBeamCannon_F",
			"3as_LAAT_Missile_AGM",
			"3as_LAAT_Missile_AA",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laser_Battery_F",
			"3as_LAAT_8Rnd_Missile_AGM",
			"3as_LAAT_8Rnd_Missile_AGM",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		tcw_emp_protection = 1;
		tcw_can_use_afterburner = 1;
		tcw_afterburner_max_boost_speed = 650;
		tcw_afterburner_min_boost_speed = 20;
		tcw_afterburner_min_brake_speed = 20;
		tcw_afterburner_increment = 10;
		tcw_afterburner_fuel_drag = 2000;
		tcw_afterburner_fuel_multi = 4;
		tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Medium : Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(15 / 120)";
					minFov = "(15 / 120)";
					maxFov = "(15 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(3.75 / 120)";
					minFov = "(3.75 / 120)";
					maxFov = "(3.75 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -120;
			maxTurn = 120;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0 AND (player == driver this)";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1 AND (alive this) AND (player == driver this)";
				statement = "this animateSource ['ramp',0,1];";
				onlyforplayer = 0;
			};
			class afterburners_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 0;
				condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
			};
			class afterburners_turn_off
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Deactivate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 0;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
			};
		};
		class EventHandlers
		{
			init = "(_this select 0) execVM '\187th-aux\Functions\loadSupply\fn_masterLoader.sqf';";
			fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
};

class 3as_LAAT_Mk1;
class 187th_LAAT_mk_1 : 3as_LAAT_Mk1
{
	displayname="LAAT MK 1";
	faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Helicopter";
	armor=800;
	fuelCapacity=4000;
	scope=2;
	scopeCurator = 2;
	side=1;
	maximumLoad = 10000;
	crew="187th_Pilot";
	weapons[]=
	{
		"ParticleBeamCannon_F",
		"3as_LAAT_Missile_AGM",
		"3as_LAAT_Missile_AA",
		"CMFlareLauncher"
	};
	magazines[]=
	{
		"Laser_Battery_F",
		"3as_LAAT_8Rnd_Missile_AGM",
		"3as_LAAT_8Rnd_Missile_AGM",
		"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
		"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
		"240Rnd_CMFlare_Chaff_Magazine",
		"240Rnd_CMFlare_Chaff_Magazine",
		"240Rnd_CMFlare_Chaff_Magazine"
	};
	tcw_emp_protection = 1;
	tcw_can_use_afterburner = 1;
	tcw_afterburner_max_boost_speed = 650;
	tcw_afterburner_min_boost_speed = 20;
	tcw_afterburner_min_brake_speed = 20;
	tcw_afterburner_increment = 10;
	tcw_afterburner_fuel_drag = 2000;
	tcw_afterburner_fuel_multi = 4;
	tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
			};
			class Medium : Wide
			{
				opticsDisplayName = "MFOV";
				initFov = "(15 / 120)";
				minFov = "(15 / 120)";
				maxFov = "(15 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow : Wide
			{
				opticsDisplayName = "NFOV";
				initFov = "(3.75 / 120)";
				minFov = "(3.75 / 120)";
				maxFov = "(3.75 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 0;
		};
		minTurn = -120;
		maxTurn = 120;
		initTurn = 0;
		minElev = -10;
		maxElev = 90;
		initElev = 0;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
	class UserActions
	{
		class rampOpen
		{
			available = 0;
			showWindow = 0;
			displayName = "Ramp Open";
			position = "pilotview";
			radius = 9;
			condition = "this animationphase 'ramp' ==0";
			statement = "this animateSource ['ramp',1,1];";
			onlyforplayer = 0;
		};
		class rampClose
		{
			available = 0;
			showWindow = 0;
			displayName = "Ramp Close";
			position = "pilotview";
			radius = 9;
			condition = "this animationphase 'ramp' ==1";
			statement = "this animateSource ['ramp',0,1];";
			onlyforplayer = 0;
		};
		class afterburners_turn_on
		{
			showWindow = 0;
			hideOnUse = 0;
			priority = 9;
			role = 0;
			displayName = "Activate Impulse";
			position = "pilotview";
			radius = 6;
			onlyforplayer = 1;
			condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
			statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
		};
		class afterburners_turn_off
		{
			showWindow = 0;
			hideOnUse = 0;
			priority = 9;
			role = 0;
			displayName = "Deactivate Impulse";
			position = "pilotview";
			radius = 6;
			onlyforplayer = 1;
			condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
			statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
		};
	};
	class EventHandlers
	{
		init = "(_this select 0) execVM '\187th-aux\Functions\loadSupply\fn_masterLoader.sqf';";
		fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
	};
};

class 3as_LAAT_Mk2Lights;
class 187th_LAAT_Floodlights : 3as_LAAT_Mk2Lights
{
	displayname="LAAT (Floodlights)";
	faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Helicopter";
	armor=800;
	fuelCapacity=4000;
	scope=2;
	scopeCurator = 2;
	side=1;
	maximumLoad = 10000;
	crew="187th_Pilot";
	weapons[]=
	{
		"ParticleBeamCannon_F",
		"3as_LAAT_Missile_AGM",
		"3as_LAAT_Missile_AA",
		"CMFlareLauncher"
	};
	magazines[]=
	{
		"Laser_Battery_F",
		"3as_LAAT_8Rnd_Missile_AGM",
		"3as_LAAT_8Rnd_Missile_AGM",
		"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
		"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
		"240Rnd_CMFlare_Chaff_Magazine",
		"240Rnd_CMFlare_Chaff_Magazine",
		"240Rnd_CMFlare_Chaff_Magazine"
	};
	tcw_emp_protection = 1;
	tcw_can_use_afterburner = 1;
	tcw_afterburner_max_boost_speed = 650;
	tcw_afterburner_min_boost_speed = 20;
	tcw_afterburner_min_brake_speed = 20;
	tcw_afterburner_increment = 10;
	tcw_afterburner_fuel_drag = 2000;
	tcw_afterburner_fuel_multi = 4;
	tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
			};
			class Medium : Wide
			{
				opticsDisplayName = "MFOV";
				initFov = "(15 / 120)";
				minFov = "(15 / 120)";
				maxFov = "(15 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow : Wide
			{
				opticsDisplayName = "NFOV";
				initFov = "(3.75 / 120)";
				minFov = "(3.75 / 120)";
				maxFov = "(3.75 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 0;
		};
		minTurn = -120;
		maxTurn = 120;
		initTurn = 0;
		minElev = -10;
		maxElev = 90;
		initElev = 0;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
	class UserActions
	{
		class rampOpen
		{
			available = 0;
			showWindow = 0;
			displayName = "Ramp Open";
			position = "pilotview";
			radius = 9;
			condition = "(this animationphase 'ramp' ==0) AND (player == driver this)";
			statement = "this animateSource ['ramp',1,1];";
			onlyforplayer = 0;
		};
		class rampClose
		{
			available = 0;
			showWindow = 0;
			displayName = "Ramp Close";
			position = "pilotview";
			radius = 9;
			condition = "this animationphase 'ramp' ==1 AND (player == driver this)";
			statement = "this animateSource ['ramp',0,1];";
			onlyforplayer = 0;
		};
		class afterburners_turn_on
		{
			showWindow = 0;
			hideOnUse = 0;
			priority = 9;
			role = 0;
			displayName = "Activate Impulse";
			position = "pilotview";
			radius = 6;
			onlyforplayer = 1;
			condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
			statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
		};
		class afterburners_turn_off
		{
			showWindow = 0;
			hideOnUse = 0;
			priority = 9;
			role = 0;
			displayName = "Deactivate Impulse";
			position = "pilotview";
			radius = 6;
			onlyforplayer = 1;
			condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
			statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
		};
	};
	class EventHandlers
	{
		init = "(_this select 0) execVM '\187th-aux\Functions\loadSupply\fn_masterLoader.sqf';";
		fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
	};
};

class 187th_LAAT_TEST : 187th_LAAT_mk_2
{
	faction="187th_Republic";     editorCategory="187th_Test_Assets";     editorSubcategory="187th_Helicopter";
	displayname="Test LAAT"
	class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0 AND (player == driver this)";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1 AND (alive this) AND (player == driver this)";
				statement = "this animateSource ['ramp',0,1];";
				onlyforplayer = 0;
			};
			class afterburners_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 0;
				condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
			};
			class afterburners_turn_off
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Deactivate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 0;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
			};
			/*class load_supply
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 1;
				role = 0;
				displayName = "Load Supply";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 0;
				// condition = "(alive this) AND (count (this nearEntities [['JLTS_Ammobox_ammo_GAR', 'JLTS_Ammobox_grenades_GAR', 'JLTS_Ammobox_launchers_GAR', 'JLTS_Ammobox_explosives_GAR', 'JLTS_Ammobox_support_GAR'], 20]) > 0)";
				statement = "0 = [this] spawn OES_fnc_supplyLoader;";
			};
			class unload_supply
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 1;
				role = 0;
				displayName = "Unload Supply";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 0;
				condition = "(alive this) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_supplyUnloader;";
			};*/
		};
		class EventHandlers
		{
			init = "(_this select 0) execVM '\187th-aux\Functions\loadSupply\fn_masterLoader.sqf';";
			fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
};

class 3AS_Patrol_LAAT_Republic;
class 187th_LAAT_LE : 3AS_Patrol_LAAT_Republic
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Helicopter";
	side=1;
	displayName="LAAT/LE";
	crew="187th_Pilot";
	typicalCargo[]={"187th_Pilot"};
};

class 3as_V19_base;
class 187th_V_19_Torrent : 3as_V19_base
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Plane";
	side=1;
	displayName="V-19 Torrent";
	crew="187th_Pilot";
	typicalCargo[]={"187th_Pilot"};
};

class 187th_Heavy_Repeater : 3AS_HeavyRepeater_Unarmoured
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Turret";
	side=1;
	displayName="Heavy Repeater";
	hiddenSelectionsTextures[]={};
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 187th_ATAP : 3as_ATAP_base
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Artillery";
	side=1;
	displayName="ATAP";
	hiddenSelectionsTextures[]={"","","",""};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 187th_AV_7 : 3as_AV7
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Artillery";
	side=1;
	displayName="AV 7";
	hiddenSelectionsTextures[]={"","","",""};
	crew="187th_Trooper_Crewman";
	typicalCargo[]={"187th_Trooper_Crewman"};
};

class 187th_Heavy_Repeater_Armored : 3AS_HeavyRepeater_Armoured
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Turret";
	side=1;
	displayName="Heavy Repeater Armored";
	hiddenSelectionsTextures[]={};
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 187th_Stationary_Turret : 3AS_StationaryTurret
{
	faction="187th_Republic";     editorCategory="187th_Rep_Assets";     editorSubcategory="187th_Turret";
	side=1;
	displayName="Stationary Turret";
	hiddenSelectionsTextures[]={};
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

// Argon Transports

class 442_argon_ammo;
class 187th_442_argon_ammo : 442_argon_ammo
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Ammo Truck";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 442_argon_device;
class 187th_442_argon_device : 442_argon_device
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Device Carrier";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 442_argon_fuel;
class 187th_442_argon_fuel : 442_argon_fuel
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Fuel Truck";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 442_argon_medical;
class 187th_442_argon_medical : 442_argon_medical
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Medical Truck";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 442_argon_repair;
class 187th_442_argon_repair : 442_argon_repair
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Repair Truck";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 442_argon_transport;
class 187th_442_argon_transport : 442_argon_transport
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Transport Truck";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};

class 442_argon_covered;
class 187th_442_argon_covered : 442_argon_covered
{
	scope = 2;
    scopeCurator = 2;
    displayName = "Argon Transport Truck (Covered)";
    faction="187th_Republic";
	editorCategory = "187th_Rep_Assets";
	editorSubcategory = "187th_Car";
	crew="187th_Trooper";
	typicalCargo[]={"187th_Trooper"};
};