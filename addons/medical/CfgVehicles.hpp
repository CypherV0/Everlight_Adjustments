class CfgVehicles {
    class Item_Base_F;
    class ACE_epinephrineItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(Epinephrine_Display);
        author = ECSTRING(common,ACETeam);
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ACE_epinephrine,1);
        };
    };
    class ACE_personalAidKitItem;
    class GVAR(basicAidItem): ACE_personalAidKitItem {
        displayName = "Basic Aid Kit";
        author = "Cypher";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(basicAid),1);
        };
    };
    
    class GVAR(advancedAidItem): ACE_personalAidKitItem {
        displayName = "Advanced Aid Kit";
        author = "Cypher";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(advancedAid),1);
        };
    };
    class ace_zeus_moduleBase;
    class ace_zeus_moduleUnconscious: ace_zeus_moduleBase {
        function = QFUNC(moduleUnconscious);
    };
};
