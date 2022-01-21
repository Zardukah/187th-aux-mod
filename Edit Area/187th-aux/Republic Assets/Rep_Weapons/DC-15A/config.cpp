class CfgPatches
{
	class 187th_DC15A
	{
		name = "187th DC-15A Plastic Stock";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {""};
	};
};

class CfgWeapons
{
	class JLTS_DC15A_plastic;
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
};