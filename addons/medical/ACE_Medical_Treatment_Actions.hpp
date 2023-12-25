class ace_medical_treatment_actions {
    // - Misc -------------------------------------------------------------
    class Morphine;
    class BasicAid: Morphine {
        displayName = "Use Basic Aid Kit";
        displayNameProgress = "Treating...";
        category = "advanced";
        medicRequired = 0;
        allowSelfTreatment = 1;
        allowedSelections[] = {"All"};
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        treatmentTime = "0.5 * ([_medic, _patient] call ace_medical_treatment_fnc_getHealTime)";
        animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
        items[] = {QGVAR(basicAid)};
        condition = "";
    };
    class PersonalAidKit;
    class AdvancedAid: PersonalAidKit {
        displayName = "Use Advanced Aid Kit";
        displayNameProgress = "Treating...";
        items[] = {QGVAR(advancedAid)};
        condition = "";
    };
    class BasicBandage;
    class PatchBandage: BasicBandage {
        displayName = "Patch";
        displayNameProgress = "Patching...";
        icon = "";
        category = "bandage";

        items[] = {};

        medicRequired = 0;
        allowSelfTreatment = 1;
        allowedSelections[] = {"All"};
        condition = "(!([player, 'ACE_fieldDressing'] call ace_common_fnc_hasItem)) && {[_medic, _patient, _bodyPart, 'BasicBandage'] call ace_medical_treatment_fnc_canBandage}";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        treatmentTime = "0.33 * ([_medic, _patient, _bodyPart, 'BasicBandage'] call ace_medical_treatment_fnc_getBandageTime)";
        animationMedic = "";
        animationMedicProne = "";
        animationMedicSelf = "";
        animationMedicSelfProne = "";

        litter[] = {};
    };
    class Diagnose: BasicBandage {
        allowedSelections[] = {"All"};
    };
    class CPR: BasicBandage {
        displayName = "No Pulse - (Perform CPR)";
        category = "examine";
        allowedSelections[] = {"All"};
    };
};