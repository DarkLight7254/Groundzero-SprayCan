class CfgPatches
{
	class GZ_Reskin_SneaksWeapons
	{
		units[] = {};
		weapons[] = {"SNAFUAlligator_Sneak","Rev_HT76_Sneak"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics","SNAFUAlligator","RevHT76"};
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class SNAFUAlligator;
	class Rev_HT76;
	class Rev_ACR17;
	class SNAFUAlligator_Sneak: SNAFUAlligator
	{
		scope = 2;
		displayName = "Sneak's Alligator";
		hiddenSelectionsTextures[] = 
		{
			"Deg_Reskins\SneaksWeapons\Data\SNAFUAlligator_Sneak.paa"
		};
	};
	class Rev_HT76_Sneak: Rev_HT76
	{
		scope = 2;
		displayName = "Sneak's HT-76";
		hiddenSelectionsTextures[] = {"Deg_Reskins\SneaksWeapons\Data\RevHT76_Sneak.paa"};
	};
	class Rev_ACR17_Fire: Rev_ACR17
	{
		scope = 2;
		displayName = "Fire Starter ACR17s";
		hiddenSelectionsTextures[] = {"Deg_Reskins\SneaksWeapons\Data\RevACR17s_Sneak.paa"};
	};
	
};