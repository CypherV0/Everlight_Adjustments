#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    units[] = {"EVLT_Fireteam_US_crate", "EVLT_Fireteam_GER_crate", "EVLT_Fireteam_AK762_crate","EVLT_Fireteam_AK74_crate","EVLT_MMG_PK_crate","EVLT_MMG_MG3_crate","EVLT_MMG_M60_crate","EVLT_MMG_M240_crate","EVLT_LAT_RPG7_crate","EVLT_RAT_RPG26_crate","EVLT_RAT_M136_crate","EVLT_Fireteam_CzBREN_crate","EVLT_MAT_MAAWS_crate","EVLT_Fireteam_CzVz58_crate","EVLT_HAT_Javelin_crate","EVLT_RAT_M72A7_crate","EVLT_RAT_M72A6_crate","EVLT_HAT_Metis_Manportable_crate","EVLT_HAT_Metis_Emplaced_crate","EVLT_Fireteam_60s_M14_crate","EVLT_Fireteam_60s_M16_crate","EVLT_Fireteam_Stealth_crate","EVLT_Explosives_crate","EVLT_Medical_crate","EVLT_Fireteam_FNFAL_crate","EVLT_Fireteam_US_CWEarly_crate","EVLT_Fireteam_US_CWLate_crate","EVLT_Fireteam_SCARH_crate"};
    weapons[] = {};
    requiredVersion = 1.0;
    requiredAddons[] = {"evlt_main","evlt_medical","A3_Supplies_F_Exp"};
    author[] = {"Ferdilanz"};
    authorUrl = "";
  };
};
#include "CfgEventHandlers.hpp"
class CfgVehicleClasses
{
	class EverlightCrates {
        displayName = "Everlight Crates";
    };
};
#include "CfgVehicles.hpp"