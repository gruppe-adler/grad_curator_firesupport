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
			"grad_test"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
  class ModuleOrdnanceMortar_F;

  class ModuleOrdnanceHowitzer_F: ModuleOrdnanceMortar_F
	{
    category="grad_curator_firesupport";
	};
	class grad_test: ModuleOrdnanceMortar_F
	{
    author="Eras";
    _generalMacro="grad_test";
    category="grad_curator_firesupport";
    displayName="Test Modul";
    portrait="\a3\Modules_F_Curator\Data\portraitOrdnanceRocket_ca.paa";
    ammo="ammo_Missile_Cruise_01";
    model="\a3\Modules_F_Curator\Ordnance\surfaceRocket.p3d";
    curatorCost=9;
    function = "eras_fnc_grad_curator_firesupport";
	};
};
class PreloadTextures
{
	class CfgVehicles
	{
		class grad_test
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