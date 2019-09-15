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
			"grad_curator_firesupport_tomahawk"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
  class ModuleOrdnanceMortar_F;

	class grad_curator_firesupport_tomahawk: ModuleOrdnanceMortar_F
	{
    author="Eras";
    _generalMacro="Tomahawk";
    category="Ordnance";
    displayName="Tomahawk";
    portrait="\a3\Modules_F_Curator\Data\portraitOrdnanceRocket_ca.paa";
    ammo="ammo_Missile_Cruise_01";
    model="\a3\Modules_F_Curator\Ordnance\surfaceRocket.p3d";
    function = "grad_curator_firesupport_fnc_tomahawk";
	};
};
class PreloadTextures
{
	class CfgVehicles
	{
		class grad_curator_firesupport_tomahawk
		{
			model="@*";
		};
	};
};