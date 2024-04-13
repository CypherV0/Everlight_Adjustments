class CfgVehicles
{
class Box_Syndicate_Ammo_F; //FT crate
class ACE_medicalSupplyCrate_advanced; //MedCrate
class Box_Syndicate_WpsLaunch_F; //RAT crate
class B_supplyCrate_F; //Squad crate
class Box_NATO_AmmoVeh_F; //Vehicle Service crate medium
class B_cargoNet_01_ammo_f; // Platoon crate
// class B_Slingload_01_Cargo_F; //Vehicle Service crate large
// class CargoNet_01_barrels_F; //Vehicle Service crate small
class B_Slingload_01_Ammo_F; //Company crate

    class EVLT_Fireteam_STANAG_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_STANAG_crate";
        displayName="FT Crate (STANAG)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=50;
			};
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_red";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
		class transportWeapons
		{};
    };
	
    class EVLT_Fireteam_FAL_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_FAL_crate";
        displayName="FT Crate (FAL)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine="CUP_30Rnd_762x51_FNFAL_M";
				count=50;
			};
			class CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M
			{
				magazine="CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
		class transportWeapons
		{};
    };
	
    class EVLT_Fireteam_SWAT_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_SWAT_crate";
        displayName="FT Crate (SWAT)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhsusf_mag_40Rnd_46x30_JHP
			{
				magazine="rhsusf_mag_40Rnd_46x30_JHP";
				count=50;
			};
			class rhsusf_8Rnd_Slug
			{
				magazine="rhsusf_8Rnd_Slug";
				count=15;
			};
			class rhsusf_8Rnd_00Buck
			{
				magazine="rhsusf_8Rnd_00Buck";
				count=10;
			};
			class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
			{
				magazine="rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class hlc_12Rnd_357SIG_B_P226
			{
				magazine="hlc_12Rnd_357SIG_B_P226";
				count=10;
			};
			class rhs_mag_mk84
			{
				magazine="rhs_mag_mk84";
				count=5;
			};
        };
    };

	class EVLT_Fireteam_M16_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_M16_crate";
        displayName="FT Crate (US Cold War)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;

        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count=50;
			};
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=15;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
        class TransportWeapons
        {};
    };
	
    class EVLT_Fireteam_Rangers_SCAR_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_Rangers_SCAR_crate";
        displayName="FT Crate (SCAR-H)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
			{
				magazine="rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk";
				count=50;
			};
			class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk
			{
				magazine="rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
    };

class EVLT_Fireteam_US2035_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_US2035_crate";
        displayName="FT Crate (US 2035)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class 30Rnd_65x39_caseless_black_mag
			{
				magazine="30Rnd_65x39_caseless_black_mag";
				count=50;
			};
			class 30Rnd_65x39_caseless_black_mag_Tracer
			{
				magazine="30Rnd_65x39_caseless_black_mag_Tracer";
				count=15;
			};
			class 100Rnd_65x39_caseless_black_mag_tracer
			{
				magazine="100Rnd_65x39_caseless_black_mag_tracer";
				count=15;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
    };
	
    class EVLT_Fireteam_PMC_ACR_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_PMC_ACR_crate";
        displayName="FT Crate (PMC)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_PMAG
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG";
				count=50;
			};
			class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
				count=15;
			};
			class 200Rnd_65x39_cased_Box_Tracer_Red
			{
				magazine="200Rnd_65x39_cased_Box_Tracer_Red";
				count=10;
			};
			class rhsusf_20Rnd_762x51_m62_Mag
			{
				magazine="rhsusf_20Rnd_762x51_m62_Mag"
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
    };
	
	class EVLT_Fireteam_GER_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_GER_crate";
        displayName="FT Crate (G36)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhssaf_30rnd_556x45_EPR_G36
			{
				magazine="rhssaf_30rnd_556x45_EPR_G36";
				count=50;
			};
			class rhssaf_30rnd_556x45_Tracers_G36
			{
				magazine="rhssaf_30rnd_556x45_Tracers_G36";
				count=15;
			};
			class hlc_100rnd_556x45_M_G36
			{
				magazine="hlc_100rnd_556x45_M_G36";
				count=15;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
		class transportWeapons
		{};
    };

	class EVLT_Fireteam_SAS_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_SAS_crate";
        displayName="FT Crate (SAS)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhssaf_30rnd_556x45_EPR_G36
			{
				magazine="rhssaf_30rnd_556x45_EPR_G36";
				count=50;
			};
			class rhssaf_30rnd_556x45_Tracers_G36
			{
				magazine="rhssaf_30rnd_556x45_Tracers_G36";
				count=15;
			};
			class rhsusf_200Rnd_556x45_box
			{
				magazine="rhsusf_200Rnd_556x45_box";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
		class transportWeapons
		{};
    };

    class EVLT_Fireteam_CZ_VZ58_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_CZ_VZ58_crate";
        displayName="FT Crate (Vz-58)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_30Rnd_762x39mm_Savz58
			{
				magazine="rhs_30Rnd_762x39mm_Savz58";
				count=50;
			};
			class rhs_30Rnd_762x39mm_Savz58_tracer
			{
				magazine="rhs_30Rnd_762x39mm_Savz58_tracer";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_f1
			{
				magazine="rhs_mag_f1";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
		class transportWeapons
		{};
    };

	
    class EVLT_Fireteam_ME_Guer_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_ME_Guer_crate";
        displayName="FT Crate (Mid-East Guer)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class ACE_10Rnd_762x51_Mag_Tracer
			{
				magazine="ACE_10Rnd_762x51_Mag_Tracer";
				count=50;
			};
			class UK3CB_Sten_34Rnd_Magazine
			{
				magazine="UK3CB_Sten_34Rnd_Magazine";
				count=10;
			};
			class rhs_60Rnd_545X39_AK_Green
			{
				magazine="rhs_60Rnd_545X39_AK_Green";
				count=20;
			};
			class uk3cb_1rnd_riflegrenade_mas_flare
			{
				magazine="uk3cb_1rnd_riflegrenade_mas_flare";
				count=10;
			};
			class rhs_mag_f1
			{
				magazine="rhs_mag_f1";
				count=10;
			};
			class uk3cb_1rnd_riflegrenade_mas_ap
			{
				magazine="uk3cb_1rnd_riflegrenade_mas_ap";
				count=10;
			};
        };
		class transportWeapons
		{};
    };

	class EVLT_AR_MG36_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AR_MG36_crate";
        displayName="AR Crate (MG36)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class hlc_100rnd_556x45_M_G36
			{
				magazine="hlc_100rnd_556x45_M_G36";
				count=15;
			};
        };
    };

class EVLT_AR_QBZ_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AR_QBZ_crate";
        displayName="AR Crate (QBZ)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class UK3CB_DBP88_100rnd_580x42_GT
			{
				magazine="UK3CB_DBP88_100rnd_580x42_GT";
				count=15;
			};
        };
    };

	class EVLT_AR_M249_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AR_M249_crate";
        displayName="AR Crate (M249)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
        };
    };
	
	class EVLT_AR_HK416_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AR_HK416_crate";
        displayName="AR Crate (HK416)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
			{
				magazine="rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
				count=15;
			};
        };
    };

	class EVLT_MMG_MG3_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MMG_MG3_crate";
        displayName="MMG Crate (MG3)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class UK3CB_MG3_250rnd_762x51_RT
			{
				magazine="UK3CB_MG3_250rnd_762x51_RT";
				count=10;
			};
        };
    };
	
	class EVLT_AR_RPK74_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AR_RPK74_crate";
        displayName="AR Crate (RPK-545)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_60Rnd_545X39_AK_Green
			{
				magazine="rhs_60Rnd_545X39_AK_Green";
				count=20;
			};
        };
    };
	
	class EVLT_AR_RPK762_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AR_RPK762_crate";
        displayName="AR Crate (RPK-762)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_75Rnd_762x39mm_tracer
			{
				magazine="rhs_75Rnd_762x39mm_tracer";
				count=20;
			};
        };
    };
	
	class EVLT_HAT_TOW_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_HAT_TOW_crate";
        displayName="HAT Crate (TOW)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="HAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class ace_compat_rhs_usf3_mag_TOW2A
			{
				magazine="ace_compat_rhs_usf3_mag_TOW2A";
				count=5;
			};
        };
    };

class EVLT_HAT_TitanC_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_HAT_TitanC_crate";
        displayName="HAT Crate (Titan-C)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="HAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class Titan_AT
			{
				magazine="Titan_AT";
				count=10;
			};
        };
    };
	
	class EVLT_MAT_MAAWS_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MAT_MAAWS_crate";
        displayName="MAT Crate (MAAWS)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_maaws_HEDP
			{
				magazine="rhs_mag_maaws_HEDP";
				count=10;
			};
			class rhs_mag_maaws_HEAT
			{
				magazine="rhs_mag_maaws_HEAT";
				count=10;
			};
        };
    };

	class EVLT_MAT_RPG32_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MAT_RPG32_crate";
        displayName="MAT Crate (RPG-32)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class RPG32_F
			{
				magazine="RPG32_F";
				count=15;
			};
        };
    };

	class EVLT_HAT_9M133_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_HAT_9M133_crate";
        displayName="HAT Crate (Kornet)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="HAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class ace_compat_rhs_afrf3_mag_9m1331
			{
				magazine="ace_compat_rhs_afrf3_mag_9m1331";
				count=5;
			};
        };
    };

	class EVLT_HAT_MetisM_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_HAT_MetisM_crate";
        displayName="HAT Crate (Metis)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="HAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class vorona_heat
			{
				magazine="vorona_heat";
				count=10;
			};
        };
    };
	
	class EVLT_MAT_RPG7_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MAT_RPG7_crate";
        displayName="MAT Crate (RPG-7)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_rpg7_PG7VS_mag
			{
				magazine="rhs_rpg7_PG7VS_mag";
				count=10;
			};
        };
    };
	
	class EVLT_HAT_FGM148_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_HAT_FGM148_crate";
        displayName="HAT Crate (Javelin)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="HAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_fgm148_magazine_AT
			{
				magazine="rhs_fgm148_magazine_AT";
				count=4;
			};
        };
    };
	
	class EVLT_Fireteam_AK762_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_AK762_crate";
        displayName="FT Crate (AK-762)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_30Rnd_762x39mm_polymer
			{
				magazine="rhs_30Rnd_762x39mm_polymer";
				count=50;
			};
			class rhs_30Rnd_762x39mm_polymer_tracer
			{
				magazine="rhs_30Rnd_762x39mm_polymer_tracer";
				count=15;
			};
			class rhs_75Rnd_762x39mm_tracer
			{
				magazine="rhs_75Rnd_762x39mm_tracer";
				count=20;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=10;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=15;
			};
			class rhs_GRD40_Red
			{
				magazine="rhs_GRD40_Red";
				count=5;
			};
			class rhs_GRD40_Green
			{
				magazine="rhs_GRD40_Green";
				count=5;
			};
			class rhs_GRD40_White
			{
				magazine="rhs_GRD40_White";
				count=10;
			};
        };
        class transportWeapons
		{};
    };


	class EVLT_Fireteam_FinlandArmy_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_FinlandArmy_crate";
        displayName="FT Crate (Finnish Army)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;

        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_30Rnd_762x39mm_polymer
			{
				magazine="rhs_30Rnd_762x39mm_polymer";
				count=50;
			};
			class rhs_30Rnd_762x39mm_polymer_tracer
			{
				magazine="rhs_30Rnd_762x39mm_polymer_tracer";
				count=15;
			};
			class rhs_100Rnd_762x54mmR
			{
				magazine="rhs_100Rnd_762x54mmR";
				count=10;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=10;
			};
        };
        class transportWeapons
		{};
    };

	class EVLT_Fireteam_Serbia_Modern_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_Serbia_Modern_crate";
        displayName="FT Crate (Serbia)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhsgref_30rnd_556x45_m21
			{
				magazine="rhsgref_30rnd_556x45_m21";
				count=50;
			};
			class rhsgref_30rnd_556x45_m21_t
			{
				magazine="rhsgref_30rnd_556x45_m21_t";
				count=15;
			};
			class rhs_10Rnd_762x54mmR_7N14
			{
				magazine="rhs_10Rnd_762x54mmR_7N14";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
			class rhssaf_mag_brd_m83_white
			{
				magazine="rhssaf_mag_brd_m83_white";
				count=10;
			};
			class rhssaf_mag_br_m84
			{
				magazine="rhssaf_mag_br_m84";
				count=10;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=15;
			};
			class rhs_GRD40_Red
			{
				magazine="rhs_GRD40_Red";
				count=5;
			};
			class rhs_GRD40_Green
			{
				magazine="rhs_GRD40_Green";
				count=5;
			};
			class rhs_GRD40_White
			{
				magazine="rhs_GRD40_White";
				count=10;
			};
        };
        class transportWeapons
		{};
    };
	
	class EVLT_Fireteam_Serboslavia_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_Serboslavia_crate";
        displayName="FT Crate (Yugo)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhssaf_30Rnd_762x39mm_M67
			{
				magazine="rhssaf_30Rnd_762x39mm_M67";
				count=50;
			};
			class rhssaf_30Rnd_762x39mm_M78_tracer
			{
				magazine="rhssaf_30Rnd_762x39mm_M78_tracer";
				count=15;
			};
			class rhs_75Rnd_762x39mm_tracer
			{
				magazine="rhs_75Rnd_762x39mm_tracer";
				count=20;
			};
			class rhsgref_10Rnd_792x57_m76
			{
				magazine="rhsgref_10Rnd_792x57_m76";
				count=15;
			};
			class rhssaf_mag_brd_m83_white
			{
				magazine="rhssaf_mag_brd_m83_white";
				count=10;
			};
			class rhssaf_mag_br_m75
			{
				magazine="rhssaf_mag_br_m75";
				count=10;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=15;
			};
			class rhs_GRD40_Red
			{
				magazine="rhs_GRD40_Red";
				count=5;
			};
			class rhs_GRD40_Green
			{
				magazine="rhs_GRD40_Green";
				count=5;
			};
			class rhs_GRD40_White
			{
				magazine="rhs_GRD40_White";
				count=10;
			};
        };
        class TransportWeapons
        {};
    };
	
	class EVLT_Fireteam_AK74_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_AK74_crate";
        displayName="FT Crate (AK-545)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_30Rnd_545x39_7N10_plum_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_plum_AK";
				count=50;
			};
			class rhs_30Rnd_545x39_AK_plum_green
			{
				magazine="rhs_30Rnd_545x39_AK_plum_green";
				count=15;
			};
			class rhs_60Rnd_545X39_AK_Green
			{
				magazine="rhs_60Rnd_545X39_AK_Green";
				count=20;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=10;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=10;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=15;
			};
			class rhs_GRD40_Red
			{
				magazine="rhs_GRD40_Red";
				count=5;
			};
			class rhs_GRD40_Green
			{
				magazine="rhs_GRD40_Green";
				count=5;
			};
			class rhs_GRD40_White
			{
				magazine="rhs_GRD40_White";
				count=10;
			};
        };
		class transportWeapons
		{};
    };
    
	class EVLT_Fireteam_China_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_China_crate";
        displayName="FT Crate (QBZ)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class rhs_mag_rdg2_white
			{
				name="rhs_mag_rdg2_white";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellYellow
			{
				name="SmokeShellYellow";
				count=5;
			};
        };
        class TransportMagazines
        {
			class UK3CB_DBP88_30rnd_580x42
			{
				magazine="UK3CB_DBP88_30rnd_580x42";
				count=50;
			};
			class UK3CB_DBP88_30rnd_580x42_GT
			{
				magazine="UK3CB_DBP88_30rnd_580x42_GT";
				count=15;
			};
			class UK3CB_DBP88_100rnd_580x42_GT
			{
				magazine="UK3CB_DBP88_100rnd_580x42_GT";
				count=10;
			};
			class UK3CB_DBP88_10rnd_580x42_GT
			{
				magazine="UK3CB_DBP88_10rnd_580x42_GT";
				count=10;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
		class transportWeapons
		{};
    };
	
	class EVLT_RAT_RPG75_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_RAT_RPG75_crate";
        displayName="Launcher Crate (RPG-75)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="RAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {
			class rhs_weap_rpg75
			{
				weapon="rhs_weap_rpg75";
				count=2;
			};
        };
		class TransportBackpacks
		{};
    };

	class EVLT_RAT_RPG26_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_RAT_RPG26_crate";
        displayName="Launcher Crate (RPG-26)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="RAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {
			class rhs_weap_rpg26
			{
				weapon="rhs_weap_rpg26";
				count=2;
			};
        };
		class TransportBackpacks
		{};
    };

	class EVLT_AAM_Stinger_crate:Box_Syndicate_WpsLaunch_F
    { 
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AAM_Stinger_crate";
        displayName="AA Missile Crate (Stinger)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AAM_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
        class TransportWeapons
        {
			class rhs_weap_fim92
			{
				weapon="rhs_weap_fim92";
				count=1;
			};
        };
		class TransportMagazines
		{
			class rhs_fim92_mag
			{
				magazine="rhs_fim92_mag";
				count=2;
			};
		};
		class TransportBackpacks
		{};
    };

	class EVLT_AAM_TitanL_crate:Box_Syndicate_WpsLaunch_F
    { 
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AAM_TitanL_crate";
        displayName="AA Missile Crate (Titan-L)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AAM_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
        class TransportWeapons
        {
			class launch_B_Titan_tna_F
			{
				weapon="launch_B_Titan_tna_F";
				count=1;
			};
        };
		class TransportMagazines
		{
			class Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportBackpacks
		{};
    };
	
	class EVLT_AAM_Igla_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_AAM_Igla_crate";
        displayName="AA Missile Crate (Igla)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AAM_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
        class TransportWeapons
        {
			class rhs_weap_igla
			{
				weapon="rhs_weap_igla";
				count=1;
			};
        };
		class TransportMagazines
		{
			class rhs_mag_9k38_rocket
			{
				magazine="rhs_mag_9k38_rocket";
				count=2;
			};
		};
		class TransportBackpacks
		{};
    };
	
	class EVLT_RAT_M72A6_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_RAT_M72A6_crate";
        displayName="Launcher Crate (M72A6)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="RAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {
			class CUP_launch_M72A6_Special
			{
				weapon="CUP_launch_M72A6_Special";
				count=2;
			};
        };
		class TransportBackpacks
		{};
    };
	
	class EVLT_RAT_M72A7_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_RAT_M72A7_crate";
        displayName="Launcher Crate (M72A7)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="RAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {
			class rhs_weap_m72a7
			{
				weapon="rhs_weap_m72a7";
				count=2;
			};
        };
		class TransportBackpacks
		{};
    };

	class EVLT_RAT_M80_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_RAT_M80_crate";
        displayName="Launcher Crate (M80)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
	editorSubcategory="RAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {
			class rhs_weap_m80
			{
				weapon="rhs_weap_m80";
				count=2;
			};
        };
		class TransportBackpacks
		{};
    };
	
	class EVLT_RAT_M136_crate:Box_Syndicate_WpsLaunch_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_RAT_M136_crate";
        displayName="Launcher Crate (M136)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="RAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {
			class rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=2;
			};
        };
		class TransportBackpacks
		{};
    };
	
	class EVLT_MMG_PK_RU_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MMG_PK_crate";
        displayName="MMG Crate (PKM/PKP)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class rhs_100Rnd_762x54mmR_green
			{
				magazine="rhs_100Rnd_762x54mmR_green";
				count=15;
			};
        };
    };
	
	class EVLT_MMG_M240_M60_Mk48_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MMG_M240_M60_Mk48_crate";
        displayName="MMG Crate (M240/M60/Mk48)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=15;
			};
        };
    };

	class EVLT_MMG_MG42_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_MMG_MG42_crate";
        displayName="MMG Crate (MG42)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
        };
        class TransportMagazines
        {
			class hlc_200Rnd_792x57_M_MG42
			{
				magazine="hlc_200Rnd_792x57_M_MG42";
				count=10;
			};
        };
    };

    class EVLT_Fireteam_M14_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Fireteam_M14_crate";
        displayName="FT Crate (M14)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=10;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhsusf_20Rnd_762x51_m62_Mag
			{
				magazine="rhsusf_20Rnd_762x51_m62_Mag";
				count=50;
			};
			class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine="CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count=15;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=5;
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=5;
			};
			class ACE_40mm_Flare_white
			{
				magazine="ACE_40mm_Flare_white";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=15;
			};
        };
        class TransportWeapons
        {};
    };

	class EVLT_Flare_GP25_crate:Box_Syndicate_Ammo_F
	{
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Flare_GP25_crate";
        displayName="Flare Crate (GP25)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="Other_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class CUP_IlumFlareWhite_GP25_M
			{
				name="CUP_IlumFlareWhite_GP25_M";
				count=20;
			};
			class CUP_FlareGreen_GP25_M
			{
				name="CUP_FlareGreen_GP25_M";
				count=10;
			};
			class CUP_FlareRed_GP25_M
			{
				name="CUP_FlareRed_GP25_M";
				count=10;
			};
			class CUP_FlareYellow_GP25_M
			{
				name="CUP_FlareYellow_GP25_M";
				count=10;
			};
		};
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
    
	class EVLT_Flare_M203_crate:Box_Syndicate_Ammo_F
	{
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Flare_M203_crate";
        displayName="Flare Crate (M203)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="Other_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_40mm_Flare_white
			{
				name="ACE_40mm_Flare_white";
				count=20;
			};
			class UGL_FlareGreen_F
			{
				name="UGL_FlareGreen_F";
				count=10;
			};
			class UGL_FlareRed_F
			{
				name="UGL_FlareRed_F";
				count=10;
			};
			class UGL_FlareYellow_F
			{
				name="UGL_FlareYellow_F";
				count=10;
			};
		};
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};

	class EVLT_Explosives_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Explosives_crate";
        displayName="Explosives Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
	editorSubcategory="Other_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class rhsusf_m112x4_mag
			{
				name="rhsusf_m112x4_mag";
				count=8;
			};
			class ACE_Clacker
			{
				name="ACE_Clacker";
				count=4;
			};
			class ACE_DefusalKit
			{
				name="ACE_DefusalKit";
				count=4;
			};
        };
	class TransportMagazines
	{};
	class TransportWeapons
	{};
	class TransportBackpacks
	{};
    };

	class EVLT_Medical_crate:ACE_medicalSupplyCrate_advanced
    {
        author="Ferdilanz";
		class SimpleObject
		{
			mapSize=1.25;
		};
        scope=2;
        vehicleclass="EVLT_Medical_crate";
        displayName="Medical Crate";
        DLC="Expansion";
	editorCategory="EverlightCrates";
	editorSubcategory="Other_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=75;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=15;
			};
			class ACE_morphine
			{
				name="ACE_morphine";
				count=15;
			};
			class ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class evlt_medical_basicAid
			{
				name="evlt_medical_basicAid";
				count=15;
			};
			class evlt_medical_advancedAid
			{
				name="evlt_medical_advancedAid";
				count=10;
			};
        };
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
    };

	class EVLT_Empty_FT_crate:Box_Syndicate_Ammo_F
    {
        author="Ferdilanz";
        mapSize=1.25;
        class SimpleObject
        {
            eden=1;
            animate[]={};
            hide[]={};
            verticalOffset=0.382;
            verticalOffsetWorld=0;
            init="''";
        };
        scope=2;
        vehicleclass="EVLT_Empty_FT_crate";
        displayName="Empty FT Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
	editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
	class TransportItems
	{};
	class TransportMagazines
	{};
	class TransportWeapons
	{};
	class TransportBackpacks
	{};
    };

	class EVLT_Empty_Squad_crate:B_supplyCrate_F
	{
        	author="Ferdilanz";
        	mapSize=1.25;
        class SimpleObject
        	{
            	eden=1;
            	animate[]={};
            	hide[]={};
            	verticalOffset=0.382;
            	verticalOffsetWorld=0;
        	init="''";
        	};
        scope=2;
        vehicleclass="EVLT_Empty_Squad_crate";
        displayName="Squad Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
		ace_cargo_space = 8; // defines the amount of ACE cargo space in the crate
        ace_cargo_hasCargo = 1; // enables the crate to carry cargo
		ace_cargo_size = 6;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        // Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.5, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
        // Carrying
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 0; // Ignore weight limitation for carrying (0-no, 1-yes)
        class ACE_Cargo {
            /*
            class Cargo {
                class ACE_medicalSupplyCrate {
                    type = "ACE_medicalSupplyCrate";
                    amount = 1;
                };
            };*/
        };
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {};
		class TransportBackpacks
		{};
    };

	class EVLT_Empty_Platoon_crate:B_cargoNet_01_ammo_f
	{
        	author="Ferdilanz";
        	mapSize=1.25;
        class SimpleObject
        	{
            	eden=1;
            	animate[]={};
            	hide[]={};
            	verticalOffset=0.382;
            	verticalOffsetWorld=0;
        	init="''";
        	};
        scope=2;
        vehicleclass="EVLT_Empty_Platoon_crate";
        displayName="Platoon Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
		ace_cargo_space = 32; // defines the amount of ACE cargo space in the crate
        ace_cargo_hasCargo = 1; // enables the crate to carry cargo
		ace_cargo_size = 8;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        // Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.8, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
        // Carrying
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 0; // Ignore weight limitation for carrying (0-no, 1-yes)
        class ACE_Cargo {
            /*
            class Cargo {
                class EVLT_Empty_FT_crate {
                    type = "EVLT_Empty_FT_crate";
                    amount = 3;
                };
            };*/
        };
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {};
		class TransportBackpacks
		{};
	};
	class EVLT_Empty_Company_crate:B_Slingload_01_Ammo_F
	{
        	author="Ferdilanz";
        	mapSize=1.25;
        class SimpleObject
        	{
            	eden=1;
            	animate[]={};
            	hide[]={};
            	verticalOffset=0.382;
            	verticalOffsetWorld=0;
        	init="''";
        	};
        scope=2;
        vehicleclass="EVLT_Empty_Company_crate";
        displayName="Company Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
		ace_rearm_defaultSupply = -1; // set rearm supply the crate can provide
		ace_cargo_space = 52; // defines the amount of ACE cargo space in the crate
        ace_cargo_hasCargo = 1; // enables the crate to carry cargo
		ace_cargo_size = 20;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
        // Dragging
        ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.5, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 0; // Ignore weight limitation for dragging (0-no, 1-yes)
        // Carrying
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 0; // Ignore weight limitation for carrying (0-no, 1-yes)
        class ACE_Cargo {
            /*
            class Cargo {
                class EVLT_Empty_FT_crate {
                    type = "EVLT_Empty_FT_crate";
                    amount = 3;
                };
            };*/
        };
		class TransportItems
		{};
		class TransportMagazines
		{};
        class TransportWeapons
        {};
		class TransportBackpacks
		{};
    };

	/* class EVLT_VehicleServiceSmall_crate:CargoNet_01_barrels_F // not in config.cpp
	{
        	author="Ferdilanz";
        	mapSize=1.25;
        class SimpleObject
        	{
            	eden=1;
            	animate[]={};
            	hide[]={};
            	verticalOffset=0.382;
            	verticalOffsetWorld=0;
        	init="''";
        	};
        scope=2;
        vehicleclass="EVLT_VehicleServiceSmall_crate";
        displayName="Vehicle Service Crate (Small)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
	editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
	ace_cargo_space = 4; // defines the amount of ACE cargo space in the crate
        ace_cargo_hasCargo = 1; // enables the crate to carry cargo
	ace_cargo_size = 4;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
	ace_repair_canRepair = 1; // Make repair vehicle
	ace_rearm_defaultSupply = 2000; // set rearm supply the crate can provide
	ace_refuel_fuelCargo = 500; // Maximum fuel cargo amount (in liters)
        // ace_refuel_hooks[] = {{0.0,0.0,0.0},{0.0,0.0,0.0}}; // Nozzle hooks positions/ Zero is default aka hidden at the origin
        // Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 0; // Ignore weight limitation for carrying (0-no, 1-yes)
        class ACE_Cargo {
            class Cargo {
                };
            };
	class TransportItems
	{
		class Toolkit
		{
			name="Toolkit";
			count=1;
		};
	};
	class TransportMagazines
	{};
        class TransportWeapons
        {};
	class TransportBackpacks
	{};
    }; */

	class EVLT_VehicleServiceMedium_crate:Box_NATO_AmmoVeh_F
	{
        	author="Ferdilanz";
        	mapSize=1.25;
        class SimpleObject
        	{
            	eden=1;
            	animate[]={};
            	hide[]={};
            	verticalOffset=0.382;
            	verticalOffsetWorld=0;
        	init="''";
        	};
        scope=2;
        vehicleclass="EVLT_VehicleServiceMedium_crate";
        displayName="Vehicle Service Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
		ace_cargo_space = 6; // defines the amount of ACE cargo space in the crate
        ace_cargo_hasCargo = 1; // enables the crate to carry cargo
		ace_cargo_size = 6;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
		ace_repair_canRepair = 1; // Make repair vehicle
		ace_rearm_defaultSupply = 5000; // set rearm supply the crate can provide
		ace_refuel_fuelCargo = -10; // Maximum fuel cargo amount (in liters)
        // ace_refuel_hooks[] = {{0.0,0.0,0.0},{0.0,0.0,0.0}}; // Nozzle hooks positions/ Zero is default aka hidden at the origin
        // Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.8, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
        // Carrying
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 0; // Ignore weight limitation for carrying (0-no, 1-yes)
        class ACE_Cargo {
            class Cargo {
                };
            };
		class TransportItems
		{
			class Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class TransportMagazines
		{};
        class TransportWeapons
        {};
		class TransportBackpacks
		{};
    };
	/* class EVLT_VehicleServiceLarge_crate:B_Slingload_01_Cargo_F // not in Config.cpp
	{
        	author="Ferdilanz";
        	mapSize=1.25;
        class SimpleObject
        	{
            	eden=1;
            	animate[]={};
            	hide[]={};
            	verticalOffset=0.382;
            	verticalOffsetWorld=0;
        	init="''";
        	};
        scope=2;
        vehicleclass="EVLT_VehicleServiceLarge_crate";
        displayName="Vehicle Service Crate (Large)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
	editorSubcategory="Logi_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        
	ace_cargo_space = 12; // defines the amount of ACE cargo space in the crate
        ace_cargo_hasCargo = 1; // enables the crate to carry cargo
	ace_cargo_size = 20;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)
        ace_cargo_blockUnloadCarry = 1; // Blocks object from being automatically picked up by player on unload
	ace_repair_canRepair = 1; // Make repair vehicle
	ace_rearm_defaultSupply = 10000; // set rearm supply the crate can provide
	ace_refuel_fuelCargo = -10; // Maximum fuel cargo amount (in liters)
        // ace_refuel_hooks[] = {{0.0,0.0,0.0},{0.0,0.0,0.0}}; // Nozzle hooks positions/ Zero is default aka hidden at the origin
        // Dragging
        ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
        // Carrying
        ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
        ace_dragging_ignoreWeightCarry = 0; // Ignore weight limitation for carrying (0-no, 1-yes)
        class ACE_Cargo {
            class Cargo {
            }; 
        };
	class TransportItems
	{
 		class Toolkit
		{
			name="Toolkit";
			count=1;
		};
	};
	class TransportMagazines
	{};
        class TransportWeapons
        {};
	class TransportBackpacks
	{};
    }; */
}; //End of File
