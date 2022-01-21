class CfgPatches
{
	class 187th_DC15AUGL
	{
		name = "187th DC-15A UGL";
		author = "Circles";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_DC15A_ugl_plastic"};
		ammo[]={"187th_HEDP"};
		magazines[]={"187th_HEDP_Grenade_Shell"};
	};
};

class CfgWeapons
{
	class UGL_F;
	class JLTS_DC15A_ugl_plastic;
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
	};
};

class CfgAmmo
{
	class G_40mm_HEDP;
	class 187th_HEDP: G_40mm_HEDP
	{
		explosive = 0.4; //Undefine this for default value of ??
		hit = 150; //Undefine this for default value of ??
		caliber=20;
	};
};

class CfgMagazines
{
	class 1Rnd_HE_Grenade_Shell;
	class 187th_HEDP_Grenade_Shell: 1Rnd_HE_Grenade_Shell
	{
		dlc="18th Aux";
		displayName="187th HEDP";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="187th_HEDP";
		displayNameShort="HEDP";
		mass=12;
	};
};