class CfgPatches
{
	class fidskfjshjff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			#ifdef CARCOVER
			"CarCover"
			#endif
		};
	};
};
class CfgMods
{
	class fidskfjshjff
	{
		dir="fidskfjshjff";
		version="0.1";
		extra=0;
		type="mod";
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					#ifdef GAMELABS
					"GameLabs/GameLabsDefine/Global",
					#endif
					#ifdef BASICTERRITORIES
					"BasicTerritoriesDefines/scripts/Common",
					#endif
					#ifdef CarLock
					"CLDefine/scripts/Common",
					#endif
					#ifdef TRADERPLUS
					"TPDefine/scripts/Common",
					#endif
					#ifdef CARCOVER
					"CarCover/Scripts/Common",
					"CarCover/scripts/3_Game"
					#endif
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					#ifdef GAMELABS
					"GameLabs/GameLabsDefine/Global",
					#endif
					#ifdef BASICTERRITORIES
					"BasicTerritoriesDefines/scripts/Common",
					#endif
					#ifdef CarLock
					"CLDefine/scripts/Common",
					#endif
					#ifdef TRADERPLUS
					"TPDefine/scripts/Common",
					#endif
					#ifdef CARCOVER
					"CarCover/Scripts/Common",
					"CarCover/scripts/4_World"
					#endif
					
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					#ifdef GAMELABS
					"GameLabs/GameLabsDefine/Global",
					#endif
					#ifdef BASICTERRITORIES
					"BasicTerritoriesDefines/scripts/Common",
					#endif
					#ifdef CarLock
					"CLDefine/scripts/Common",
					#endif
					#ifdef TRADERPLUS
					"TPDefine/scripts/Common",
					#endif
					#ifdef CARCOVER
					"CarCover/Scripts/Common",
					"CarCover/scripts/5_Mission"
					#endif
				};
			};
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class CarCoverBase;
	/* SIBNIC HELICOPTERS */
	class CarCover_HeliMH6_SIB: CarCoverBase
	{
		scope=2;
		displayName="#str_cfgvehicles_camonet0";
		model="CarCover\data\ExpansionMh6_Cover.p3d";
		attachments[]=
		{

			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarBattery",
			"SIBMH6_blade1",
			"SIBMH6_blade2",
			"SIBMH6_blade3",
			"SIBMH6_blade4",
			"SIBMH6_blade5",
			"SIBMH6_bladem1",
			"SIBMH6_bladem2"
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\carcover.paa"
		};
	};
	class CarCover_HeliSIB_Hommade: CarCoverBase
	{
		scope=2;
		displayName="#str_cfgvehicles_camonet0";
		model="CarCover\data\Cover_GyroCopter.p3d";
		attachments[] = 
		{
			
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"CarBattery",
			"CarRadiator",
			"hommade_blade1",
			"hommade_blade2",
			"hommade_bladem1",
			"hommade_bladem2",
			"Reflector_1_1",
			"Reflector_2_1"
			
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\carcover.paa"
		};
	};
	class CarCover_HeliSIB_UH1D: CarCoverBase
	{
		scope=2;
		displayName="#str_cfgvehicles_camonet0";
		model="CarCover\data\ExpansionUh1h_Cover.p3d";
		attachments[] = 
		{
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"SIBUH1D_Door_1_1",
			"SIBUH1D_Door_1_2",
			"SIBUH1D_Door_2_1",
			"SIBUH1D_Door_2_2",
			"CarBattery",
			"SIBUH1D_blade1",
			"SIBUH1D_blade2",
			"SIBUH1D_bladem1",
			"SIBUH1D_bladem2",
			"Reflector_1_1",
			"Reflector_2_1"
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\carcover.paa"
		};
	};
	class CarCover_Heliblack_hawk_SIB: CarCoverBase
	{
		scope=2;
		displayName="#str_cfgvehicles_camonet0";
		model="CarCover\data\ExpansionUh1h_Cover.p3d";
		attachments[] = 
		{
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"SIBblack_hawk_Door_1_1",
			"SIBblack_hawk_Door_1_2",
			"SIBblack_hawk_Door_2_1",
			"SIBblack_hawk_Door_2_2",
			"CarBattery",
			"SIBblack_hawk_blade1",
			"SIBblack_hawk_blade2",
			"SIBblack_hawk_blade3",
			"SIBblack_hawk_blade4",
			"SIBblack_hawk_bladem1",
			"SIBblack_hawk_bladem2",
			"SIBblack_hawk_bladem3",
			"SIBblack_hawk_bladem4",
			"Reflector_1_1",
			"Reflector_2_1"
			
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\carcover.paa"
		};
	};
	class CarCover_Helipolice_SIB: CarCoverBase
	{
		scope=2;
		displayName="#str_cfgvehicles_camonet0";
		model="CarCover\data\ExpansionMh6_Cover.p3d";
		attachments[] = 
	{
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"SIBPolice_Door_1_1",
			"SIBPolice_Door_1_2",
			"SIBPolice_Door_2_1",
			"SIBPolice_Door_2_2",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarBattery"
			
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\carcover.paa"
		};
	};
		class CarCover_HeliMI17_SIB: CarCoverBase
	{
		scope=2;
		displayName="#str_cfgvehicles_camonet0";
		model="CarCover\data\ExpansionUh1h_Cover.p3d";
		attachments[] = 
	{
		"NivaWheel_1_1",
		"NivaWheel_1_2",
		"NivaWheel_2_1",
		"NivaWheel_2_2",
		"MI17_Door_1_1",
		"Reflector_1_1",
		"Reflector_2_1",
		"CarBattery",
		"MI17_blade1",
		"MI17_blade2",
		"MI17_blade3",
		"MI17_blade4",
		"MI17_blade5",
		"MI17_bladem1",
		"MI17_bladem2",
		"MI17_bladem3",
		"MI17_lesnica"
		
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\carcover.paa"
		};
	};
};