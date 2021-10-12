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

	}

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

	}

}
