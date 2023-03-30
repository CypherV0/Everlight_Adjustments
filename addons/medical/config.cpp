#include "script_component.hpp"
class CfgPatches 
{
    class ADDON
    {
        name = QUOTE(COMPONENT_NAME)
        units[] = {QGVAR(basicAidItem),QGVAR(advancedAidItem)};
        weapons[]={QGVAR(basicAid),QGVAR(advancedAid)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"evlt_main", "ace_medical_treatment", "ace_zeus"};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"