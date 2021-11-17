//Guns
class JLTS_DC15A_plastic;
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
class 187_Clone_Helmet_Panda: 187_Pilot_HelmetP2
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Panda)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Panda.paa"};
};
class 187_Clone_Helmet_Bravocado: 187_Pilot_HelmetP2
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Bravocado)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Bravocado.paa"};
};
class 187_Clone_Helmet_SpaceDaddy: 187_Pilot_HelmetP2
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Space Daddy)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_SpaceDaddy.paa"};
};
class 187_Clone_Helmet_Vinokurov: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Vinokurov)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Vinokurov.paa"};
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
class 187_Clone_Helmet_Scrut: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Scrut)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Scrut.paa"};
};
class 187_Clone_Helmet_Locust: 187_Clone_Helmet_Airborne
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Locust)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Locust.paa"};
};
class 187_Clone_Helmet_Benson: 187_Clone_Helmet_Airborne
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Benson)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Benson.paa"};
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
class 187_Clone_Helmet_Crys: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Crys)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Crys.paa"};
};
class 187_Clone_Helmet_Insomniac: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Insomniac)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Insomniac.paa"};
};
class 187_Clone_Helmet_Prophet: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Prophet)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Prophet.paa"};
};
class 187_Clone_Helmet_Thor: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Thor)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Thor.paa"};
};
class 187_Clone_Helmet_Mufasa: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Mufasa)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mufasa.paa"};
};
class 187_Clone_Helmet_Liam: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Liam)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Liam.paa"};
};
class 187_Clone_Helmet_Dropkick: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Dropkick)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Dropkick.paa"};
};
class 187_Clone_Helmet_Koala: 187_Clone_Helmet
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Koala)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Koala.paa"};
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
/*class 187_Clone_Helmet_Mufasa: 187_Clone_Helmet_BARC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Mufasa)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Mufasa.paa"};
};*/
class 187_Clone_Helmet_Tic: 187_Clone_Helmet_BARC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Tic)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Tic.paa"};
};
class 187_Clone_Helmet_Beedog: 187_Clone_Helmet_BARC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Beedog)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Beedog.paa"};
};
class 187_Clone_Helmet_Hawk: 187_Clone_Helmet_BARC
{
	author 	= "PraetorPanda";
	dlc		= "187th Aux Mod";
	scope 	= 2;
	scopeCurator = 2;
	displayName = "[187th] Clone Custom Helmet (Hawk)";
	hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Hawk.paa"};
};

//-------------------------------------------------------------------
// Equipment
// ------------------------------------------------------------------

class JLTS_NVG_droid_chip_1;

class 187th_NVG_Chip: JLTS_NVG_droid_chip_1
{
	author = "PraetorPanda";
	displayName="Pilot helm nvg";
	scope=1;
	visionMode[] = {"Normal","NVG","TI"};
	thermalMode[] = {0,1};
};
