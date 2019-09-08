#include "cfgFunctions.hpp"

class CfgPatches
{
	class grad_curator_firesupport
	{
		requiredAddons[]=
		{
			"A3_Modules_F_Curator_Ordnance",
      "A3_Modules_F_Curator"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Tomahawk"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
  class ModuleOrdnanceMortar_F;

	class Tomahawk: ModuleOrdnanceMortar_F
	{
    author="Eras";
    _generalMacro="Tomahawk";
    category="grad_curator_firesupport";
    displayName="Tomahawk";
    portrait="\a3\Modules_F_Curator\Data\portraitOrdnanceRocket_ca.paa";
    ammo="ammo_Missile_Cruise_01";
    model="\a3\Modules_F_Curator\Ordnance\surfaceRocket.p3d";
    curatorCost=9;
    function = "eras_fnc_module";
	};
};
class PreloadTextures
{
	class CfgVehicles
	{
		class Tomahawk
		{
			model="@*";
		};
	};
};

class CfgFactionClasses
{
	class grad_curator_firesupport
  {
		displayName = "Gruppe Adler";
		priority = 2;
		side = 7;
	};
};