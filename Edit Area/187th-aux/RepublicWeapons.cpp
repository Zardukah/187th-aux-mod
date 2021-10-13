//Guns
class JLTS_DC15A_plastic;
class UGL_F;
class JLTS_DC17SA;
class JLTS_DC15S;
class JLTS_DC15A_ugl_plastic;
class JLTS_Z6;
class JLTS_DC15X;

class 187th_Z6: JLTS_Z6
{
	displayName="[187th] Z6";
	scope = 2;
	baseweapon="187th_Z6";
	magazines[]=
	{
		"JLTS_Z6_mag",
		"187th_Z6_charged_mag"
	};
};

class 187th_JLTS_DC15A_plastic: JLTS_DC15A_plastic
{
	displayName="[187th] DC-15A (plastic stock)";
	scope=2;

	class OpticsModes
        {
            class sight
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {""};
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 0.5;
                opticsZoomInit = 0.75;
                discreteInitIndex = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memoryPointCamera = "eye";
                visionMode[] = {};
                opticsFlare = "false";
                cameraDir = "";
            };
            class scope: sight
            {
                opticsID = 2;
                opticsZoomMin = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomInit = 0.125;
                distanceZoomMin = 300;
                distanceZoomMax = 300;
            };
        };
};

class 187th_JLTS_DC17SA_JLTS_DC17SA_flashlight: JLTS_DC17SA
{
	displayName="DC-17SA";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			slot="PointerSlot";
			item="JLTS_DC17SA_flashlight";
		};
	};
};

class 187th_JLTS_DC15S: JLTS_DC15S
{
	displayName="[187th] DC-15S";
	scope=2;
	class LinkedItems
	{
	};
};

class 187th_JLTS_DC15A_ugl_plastic: JLTS_DC15A_ugl_plastic
{
	displayName="[187th] DC-15A UGL (plastic stock)";
	scope=2;


	class EGLM: UGL_F
	{
		displayName="187th UGL";
		magazines[]=
		{
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"187th_HEDP_Grenade_Shell",
		};

		descriptionShort="187th UGL";
		useModelOptics=0;
		useExternalOptic=0;
		cameraDir="OP_look";
		discreteDistance[]={100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		discreteDistanceInitIndex=0;
	};

	class OpticsModes
        {
		class sight
		{
		    opticsID = 1;
		    useModelOptics = 1;
		    opticsPPEffects[] = {""};
		    opticsDisablePeripherialVision = 0;
		    opticsZoomMin = 0.25;
		    opticsZoomMax = 0.5;
		    opticsZoomInit = 0.75;
		    discreteInitIndex = 0;
		    distanceZoomMin = 200;
		    distanceZoomMax = 200;
		    memoryPointCamera = "eye";
		    visionMode[] = {};
		    opticsFlare = "false";
		    cameraDir = "";
		};
		class scope: sight
		{
		    opticsID = 2;
		    opticsZoomMin = 0.125;
		    opticsZoomMax = 0.125;
		    opticsZoomInit = 0.125;
		    distanceZoomMin = 300;
		    distanceZoomMax = 300;
		};
        };

};

class 187th_JLTS_RPS6: JLTS_RPS6
{
	displayName="RPS-6";
	scope=1;
	class LinkedItems
	{
	};
};

class 187th_JLTS_DC15X_JLTS_DC15X_scope: JLTS_DC15X
{
	displayName="DC-15X";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot="CowsSlot";
			item="JLTS_DC15X_scope";
		};
	};
};

class 187th_JLTS_DC17SA: JLTS_DC17SA
{
	displayName="DC-17SA";
	scope=1;
	class LinkedItems
	{
	};
};
//------------------------------------------------------
//Helmets
//------------------------------------------------------
class JLTS_CloneHelmetP2MC;
class 187_Clone_Helmet_Sparrow: JLTS_CloneHelmetP2MC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Sparrow)";
	ace_hearing_protection = 5.0;
	ace_hearing_lowerVolume = 0.25;
	CBRN_protection = 1;
	weaponPoolAvailable = 1;
	hiddenSelections[]={"camo1"};
	hiddenSelectionsTextures[]={"\187th-aux\Data\Helmets\187thHelmet_Sparrow.paa"};
	class ItemInfo: HeadgearItem
	{
		mass=30;
		uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2MC.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		allowedSlots[]={801,901,701,605};
		modelSides[]={6};
		class HitpointsProtectionInfo
		{
			class Face
			{
				armor = 2;
				hitpointName = "HitFace";
				passThrough = 0.03;
			};
			class Head
			{
				armor = 2;
				hitPointName = "HitHead";
				passThrough = 0.03;
			};
			class Neck
			{
				armor = 2;
				hitpointName = "HitNeck";
				passThrough = 0.03;
			};
		};
	};
	allowedFacewear[] = {};
};
class 187_Clone_Helmet_Blu: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Blu)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Blu.paa"};
};
class 187_Clone_Helmet_Darkhorse: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Darkhorse)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Darkhorse.paa"};
};
class 187_Clone_Helmet_Panda: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Panda)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Panda.paa"};
};
class 187_Clone_Helmet_Warren: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Warren)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Warren.paa"};
};
class 187_Clone_Helmet_Badger: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Badger)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Badger.paa"};
};
class 187_Clone_Helmet_Mountain: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Mountain)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mountain.paa"};
};

class 187_Clone_Helmet_Locust: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Locust)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Locust.paa"};
};

class 187_Clone_Helmet_Raven: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Raven)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Raven.paa"};
};

class 187_Clone_Helmet_Circles: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Circles)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Circles.paa"};
};

class 187_Clone_Helmet_Odissis: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Odissis)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Odissis.paa"};
};

class 187_Clone_Helmet_Pottan: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Pottan)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pottan.paa"};
};

class JLTS_CloneHelmetBARC;
class 187_Clone_Helmet_BARC: JLTS_CloneHelmetBARC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Trooper Helmet (BARC)";
	ace_hearing_protection = 5.0;
	ace_hearing_lowerVolume = 0.25;
	CBRN_protection = 1;
	weaponPoolAvailable = 1;
	hiddenSelections[]={"camo1"};
	hiddenSelectionsTextures[]={"\187th-aux\Data\Helmets\187th_barc.paa"};
	class ItemInfo: HeadgearItem
	{
		mass=30;
		uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		allowedSlots[]={801,901,701,605};
		modelSides[]={6};
		class HitpointsProtectionInfo
		{
			class Face
			{
				armor = 2;
				hitpointName = "HitFace";
				passThrough = 0.03;
			};
			class Head
			{
				armor = 2;
				hitPointName = "HitHead";
				passThrough = 0.03;
			};
			class Neck
			{
				armor = 2;
				hitpointName = "HitNeck";
				passThrough = 0.03;
			};
		};
	};
	allowedFacewear[] = {};
};
class 187_Clone_Helmet_Tiberius: 187_Clone_Helmet_BARC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Tiberius)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tiberius.paa"};
};

//-------------------------------------------------------------------
// Equipment
// ------------------------------------------------------------------

class JLTS_NVG_droid_chip_1;

class 187th_NVG_Chip: JLTS_NVG_droid_chip_1
{
	author = "PraetorPanda";
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
};
