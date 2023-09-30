class CfgVehicles
{
class Box_Syndicate_Ammo_F;
class ACE_medicalSupplyCrate_advanced;
class Box_Syndicate_WpsLaunch_F;

    class EVLT_Fireteam_US_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_US_crate";
        displayName="FT Crate (US/CA)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=35;
			};
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_red";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
            };
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class CUP_30Rnd_762x51_FNFAL_M
			{
				magazine="CUP_30Rnd_762x51_FNFAL_M";
				count=30;
			};
			class CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M
			{
				magazine="CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
            };
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhsusf_mag_40Rnd_46x30_JHP
			{
				magazine="rhsusf_mag_40Rnd_46x30_JHP";
				count=30;
			};
			class rhsusf_8Rnd_Slug
			{
				magazine="rhsusf_8Rnd_Slug";
				count=10;
			};
			class rhsusf_8Rnd_00Buck
			{
				magazine="rhsusf_8Rnd_00Buck";
				count=10;
			};
			class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
			{
				magazine="rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
				count=5;
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
	
    class EVLT_Fireteam_Stealth_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_Stealth_crate";
        displayName="FT Crate (Stealth)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class hlc_30Rnd_9x19_SD_MP5
			{
				magazine="hlc_30Rnd_9x19_SD_MP5";
				count=35;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
            };
        };
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
        displayName="FT Crate (Rangers - SCAR)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
			{
				magazine="rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk";
				count=35;
			};
			class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk
			{
				magazine="rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
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
        displayName="FT Crate (PMC/EMC)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_PMAG
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG";
				count=35;
			};
			class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
				count=15;
			};
			class 200Rnd_65x39_cased_Box_Tracer_Red
			{
				magazine="200Rnd_65x39_cased_Box_Tracer_Red";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
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
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhssaf_30rnd_556x45_EPR_G36
			{
				magazine="rhssaf_30rnd_556x45_EPR_G36";
				count=35;
			};
			class rhssaf_30rnd_556x45_Tracers_G36
			{
				magazine="rhssaf_30rnd_556x45_Tracers_G36";
				count=15;
			};
			class hlc_100rnd_556x45_M_G36
			{
				magazine="hlc_100rnd_556x45_M_G36";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
            };
        };
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
        displayName="FT Crate (CZ-58)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_30Rnd_762x39mm_Savz58
			{
				magazine="rhs_30Rnd_762x39mm_Savz58";
				count=35;
			};
			class rhs_30Rnd_762x39mm_Savz58_tracer
			{
				magazine="rhs_30Rnd_762x39mm_Savz58_tracer";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_rpg75
            {
                weapon="rhs_weap_rpg75";
                count=1;
            };
        };
    };
	
    class EVLT_Fireteam_CZ_BREN_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_CZ_BREN_crate";
        displayName="FT Crate (CZ-BREN)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class CUP_30Rnd_556x45_XM8
			{
				magazine="CUP_30Rnd_556x45_XM8";
				count=35;
			};
			class CUP_30Rnd_TE1_Green_Tracer_556x45_XM8
			{
				magazine="CUP_30Rnd_TE1_Green_Tracer_556x45_XM8";
				count=15;
			};
			class 150Rnd_762x51_Box_Tracer
			{
				magazine="150Rnd_762x51_Box_Tracer";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_M136
            {
                weapon="rhs_weap_M136";
                count=1;
            };
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class uk3cb_no4_enfield_303_10Rnd_magazine
			{
				magazine="uk3cb_no4_enfield_303_10Rnd_magazine";
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
        class TransportWeapons
        {
            class rhs_weap_rpg75
            {
                weapon="rhs_weap_rpg75";
                count=1;
            };
        };
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
        hiddenSelectionsTextures[] = {};
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
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
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
        hiddenSelectionsTextures[] = {};
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
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
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
        hiddenSelectionsTextures[] = {};
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
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
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
        displayName="AR Crate (RPK-74)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="AR_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
				count=10;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
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
        hiddenSelectionsTextures[] = {};
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
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
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
        hiddenSelectionsTextures[] = {};
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
			class MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
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
        hiddenSelectionsTextures[] = {};
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
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
        };
    };
	
	class EVLT_LAT_RPG7_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_LAT_RPG7_crate";
        displayName="LAT Crate (RPG-7)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="LAT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
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
        hiddenSelectionsTextures[] = {};
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
				count=5;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
        };
    };
	
	class EVLT_Fireteam_Russia_AK762_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_Russia_AK762_crate";
        displayName="FT Crate (AK-762)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
				count=35;
			};
			class rhs_30Rnd_762x39mm_polymer_tracer
			{
				magazine="rhs_30Rnd_762x39mm_polymer_tracer";
				count=15;
			};
			class rhs_75Rnd_762x39mm_tracer
			{
				magazine="rhs_75Rnd_762x39mm_tracer";
				count=5;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=10;
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
        {
            class rhs_weap_rpg26
            {
                weapon="rhs_weap_rpg26";
                count=1;
            };
        };
    };
	
	class EVLT_Fireteam_FinlandArmy_AK103_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_FinlandArmy_AK103_crate";
        displayName="FT Crate (Finnish Army)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
				count=35;
			};
			class rhs_30Rnd_762x39mm_polymer_tracer
			{
				magazine="rhs_30Rnd_762x39mm_polymer_tracer";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=10;
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
        {
            class rhs_weap_m72a7
            {
                weapon="rhs_weap_m72a7";
                count=1;
            };
        };
    };
	
    class EVLT_Fireteam_FinlandSF_Mk16_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_FinlandSF_Mk16_crate";
        displayName="FT Crate (Finnish SF)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=35;
			};
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_red";
				count=15;
			};
			class rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_m72a7
            {
                weapon="rhs_weap_m72a7";
                count=1;
            };
        };
    };
	
	class EVLT_Fireteam_TLA_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_TLA_crate";
        displayName="FT Crate (TLA)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
			class rhs_30Rnd_762x39mm_tracer
			{
				magazine="rhs_30Rnd_762x39mm_tracer";
				count=35;
			};
			class rhs_75Rnd_762x39mm_tracer
			{
				magazine="rhs_75Rnd_762x39mm_tracer";
				count=10;
			};
			class rhsgref_5Rnd_762x54_m38
			{
				magazine="rhsgref_5Rnd_762x54_m38";
				count=10;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=10;
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
        {
            class rhs_weap_rpg26
            {
                weapon="rhs_weap_rpg26";
                count=1;
            };
        };
    };

	class EVLT_Fireteam_AK74_std_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_AK74_std_crate";
        displayName="FT Crate (AK-74 Std)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
			class rhs_30Rnd_545x39_7N6M_plum_AK
			{
				magazine="rhs_30Rnd_545x39_7N6M_plum_AK";
				count=35;
			};
			class rhs_30Rnd_545x39_AK_plum_green
			{
				magazine="rhs_30Rnd_545x39_AK_plum_green";
				count=15;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=10;
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
        {
            class rhs_weap_rpg26
            {
                weapon="rhs_weap_rpg26";
                count=1;
            };
        };
    };
	
	class EVLT_Fireteam_AK74_ep_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_AK74_ep_crate";
        displayName="FT Crate (AK-74 EP)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
				count=35;
			};
			class rhs_30Rnd_545x39_AK_plum_green
			{
				magazine="rhs_30Rnd_545x39_AK_plum_green";
				count=15;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=10;
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
        {
            class rhs_weap_rpg26
            {
                weapon="rhs_weap_rpg26";
                count=1;
            };
        };
    };
	
	class EVLT_MMG_CZ_M84_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_MMG_CZ_M84_crate";
        displayName="MMG Crate (M84)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
			class rhssaf_250Rnd_762x54R
			{
				magazine="rhssaf_250Rnd_762x54R";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class rhs_mag_f1
			{
				magazine="rhs_mag_f1";
				count=5;
			};
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportWeapons
        {
			class rhs_weap_rpg75
			{
				weapon="rhs_weap_rpg75";
				count=2;
			};
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportWeapons
        {
			class CUP_launch_M72A6_Special
			{
				weapon="CUP_launch_M72A6_Special";
				count=2;
			};
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportWeapons
        {
			class rhs_weap_m72a7
			{
				weapon="rhs_weap_m72a7";
				count=2;
			};
        };
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
        hiddenSelectionsTextures[] = {};
        class TransportWeapons
        {
			class rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=2;
			};
        };
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
        vehicleclass="EVLT_MMG_PK_RU_crate";
        displayName="MMG Crate (PKM/PKP)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
				count=10;
			};
			class rhs_mag_rdg2_white
			{
				magazine="rhs_mag_rdg2_white";
				count=5;
			};
			class rhs_mag_rgo
			{
				magazine="rhs_mag_rgo";
				count=5;
			};
        };
    };
	
	class EVLT_MMG_M240_M60_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_MMG_M240_M60_crate";
        displayName="MMG Crate (M240/M60)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="MMG_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
			class rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine="rhsusf_100Rnd_762x51_m62_tracer";
				count=10;
			};
			class rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=5;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
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
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhsusf_20Rnd_762x51_m62_Mag
			{
				magazine="rhsusf_20Rnd_762x51_m62_Mag";
				count=30;
			};
			class rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine="rhsusf_100Rnd_762x51_m62_tracer";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class CUP_launch_M72A6_Special
            {
                weapon="CUP_launch_M72A6_Special";
                count=1;
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
        displayName="FT Crate (M16)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count=30;
			};
			class rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine="rhsusf_100Rnd_762x51_m62_tracer";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class CUP_launch_M72A6_Special
            {
                weapon="CUP_launch_M72A6_Special";
                count=1;
            };
        };
    };
	
    class EVLT_Fireteam_M16A2_crate:Box_Syndicate_Ammo_F
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
        vehicleclass="EVLT_Fireteam_M16A2_crate";
        displayName="FT Crate (M16A2)";
        DLC="Expansion";
        editorCategory="EverlightCrates";
		editorSubcategory="FT_crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportItems
        {
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
			class SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
        };
        class TransportMagazines
        {
			class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count=30;
			};
			class rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine="rhsusf_100Rnd_762x51_m62_tracer";
				count=5;
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
				count=5;
			};
			class rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_m72a7
            {
                weapon="rhs_weap_m72a7";
                count=1;
            };
        };
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
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
    };
	class EVLT_Medical_crate:ACE_medicalSupplyCrate_advanced
    {
        author="Ferdilanz";
        mapSize=1.25;
        scope=2;
        vehicleclass="EVLT_Medical_crate";
        displayName="Medical Crate";
        DLC="Expansion";
        editorCategory="EverlightCrates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
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
    };
};