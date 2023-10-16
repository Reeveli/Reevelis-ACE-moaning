class CfgPatches
{
	class Rev_ACE_moaning
	{
		name="ACE moaning";
		requiredVersion=2.06;
		requiredAddons[]={
			"cba_main",
			"ace_medical"
		};
		author="Reeveli";
		authors[]= {"Reeveli"};
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		url = "https://www.youtube.com/@Reeveli";			
        version = 1.1;
        versionStr = "1.1.0";
        versionAr[] = {1, 1, 0};
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
	class Rev_moaning
	{
		class Moaning
		{
			file="x\Rev\addons\moaning\functions";
        	class moaning_init {postInit = 1;};	 
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class Reveli_ACE_moaning {init = " call compile preprocessFileLineNumbers 'x\Rev\addons\moaning\functions\Rev_moaning_settings.sqf'";};
};

