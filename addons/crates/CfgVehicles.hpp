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
        displayName="Fireteam Crate (US)";
        DLC="Expansion";
        editorCategory="Everlight Crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportBackpacks
        {
            class B_Kitbag_rgr
            {
                backpack="B_Kitbag_rgr";
                count=1;
            };
        };
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
				count=10;
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
        displayName="Fireteam Crate (GER)";
        DLC="Expansion";
        editorCategory="Everlight Crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportBackpacks
        {
            class CUP_B_GER_Pack_Flecktarn
            {
                backpack="CUP_B_GER_Pack_Flecktarn";
                count=1;
            };
        };
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
				count=10;
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
        displayName="Fireteam Crate (AK762)";
        DLC="Expansion";
        editorCategory="Everlight Crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportBackpacks
        {
            class CUP_B_GER_Pack_Flecktarn
            {
                backpack="CUP_B_GER_Pack_Flecktarn";
                count=1;
            };
        };
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
			class rhs_30Rnd_762x39mm_polymer
			{
				magazine="rhs_30Rnd_762x39mm_polymer";
				count=35;
			};
			class rhs_30Rnd_762x39mm_polymer_tracer
			{
				magazine="rhs_30Rnd_762x39mm_polymer_tracer";
				count=10;
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
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
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
	class EVLT_Fireteam_AK762_crate:Box_Syndicate_Ammo_F // needs fixing
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
        displayName="Fireteam Crate (AK762)";
        DLC="Expansion";
        editorCategory="Everlight Crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportBackpacks
        {
            class CUP_B_GER_Pack_Flecktarn
            {
                backpack="CUP_B_GER_Pack_Flecktarn";
                count=1;
            };
        };
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
			class rhs_30Rnd_762x39mm_polymer
			{
				magazine="rhs_30Rnd_762x39mm_polymer";
				count=35;
			};
			class rhs_30Rnd_762x39mm_polymer_tracer
			{
				magazine="rhs_30Rnd_762x39mm_polymer_tracer";
				count=10;
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
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
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
	class EVLT_Fireteam_AK762_crate:Box_Syndicate_Ammo_F // needs fixing
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
        displayName="Fireteam Crate (AK762)";
        DLC="Expansion";
        editorCategory="Everlight Crates";
        maximumLoad=10000;
        destrType="DestructBuilding";
        armor=50;
        hiddenSelectionsTextures[] = {};
        class TransportBackpacks
        {
            class CUP_B_GER_Pack_Flecktarn
            {
                backpack="CUP_B_GER_Pack_Flecktarn";
                count=1;
            };
        };
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
			class 
			{
				magazine="";
				count=35;
			};
			class 
			{
				magazine="";
				count=10;
			};
			class 
			{
				magazine="";
				count=5;
			};
			class 1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=5;
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
			class rhs_VOG25
			{
				magazine="rhs_VOG25";
				count=10;
			};
        };
        class TransportWeapons
        {
            class rhs_weap_m72a7
            {
                weapon="rhs_weap_rpg26";
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
        editorCategory="Everlight Crates";
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
        editorCategory="Everlight Crates";
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