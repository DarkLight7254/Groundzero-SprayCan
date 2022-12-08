class CfgPatches
{
	class GZ_Reskins
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
		"DZ_Data",
		"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class GZ_Reskins
	{
	    Author = "LightDL";
	    picture = "";
	    action = "";
	    type = "mod";
		dependencies[]={"Mission","Game","World"}; 

	    class defs
	    {	
	    	class gameScriptModule
			{
				value="";
				files[]= {"GZ_Reskins/scripts/3_Game" };
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"GZ_Reskins/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value="";
				files[]= {"GZ_Reskins/scripts/5_Mission"};
			};
        };
    };
};
class cfgvehicles
{
	class Inventory_Base;
	
};