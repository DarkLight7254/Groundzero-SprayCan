class CfgPatches
{
	class Spraycan
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear_Consumables"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Spraycan_ColorBase;
	
	class SprayCan_Base: Spraycan_ColorBase
	{
		scope=2;
		displayName="Spray Paint";
		descriptionShort="Spray Can Systems";
		model="\dz\gear\consumables\spraycan.p3d";
		isMeleeWeapon=1;
		weight=500;
		absorbency=0.30000001;
		itemSize[]={1,2};
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
	};
};