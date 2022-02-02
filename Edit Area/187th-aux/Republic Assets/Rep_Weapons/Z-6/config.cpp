class CfgPatches
{
	class 187th_Z6_Cannon
	{
		name = "187th Z6 Rotary Cannon";
		author = "Circles";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_Z6"};
		ammo[] = {"187th_bullet_charged_carbine_blue"};
		magazines[] = {"187th_Z6_charged_mag"};
	};
};

class CfgWeapons
{
	class JLTS_Z6;
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
};

class CfgAmmo
{
	class JLTS_bullet_carbine_blue;
	class 187th_bullet_charged_carbine_blue: JLTS_bullet_carbine_blue
	{
		author = "Circles";
		lightcolor[] = {0.500000,0.050000,0.500000};
		tracercolor[] = {0.500000,0.050000,0.500000};
		brightness = 8;
		shootDistraction = 10;
		dangerRadiusBulletClose = 9;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		caliber = 2.7;
		typicalSpeed = 1300;
		hit = 16;
		maxSpeed = 1300;
		visibleFire = 8;
		audibleFire = 10;

	};
	
	class G_40mm_HEDP;
	class 187th_HEDP: G_40mm_HEDP{
		explosive = 0.4; //Undefine this for default value of ??
		hit = 150; //Undefine this for default value of ??
		caliber=20;

	};

}

class CfgMagazines
{
	class JLTS_Z6_mag;
	class 187th_Z6_charged_mag: JLTS_Z6_mag
	{
		author = "Circles";
		count = 100;
		displayName = "Z6-C mag";
		displayNameShort = "Over Clocked Mag";
		initSpeed = 1250; // -1.2 multiply by 120% original value. Neg value is multiplier, see documentation
		mass = 25;
		ammo = "187th_bullet_charged_carbine_blue";

	};

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

}
