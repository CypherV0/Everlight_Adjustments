class CfgWeapons {
    class ACE_personalAidKit;
    class CBA_MiscItem_ItemInfo;

    class GVAR(basicAid): ACE_personalAidKit {
        scope = 2;
        author = "Cypher";
        displayName = "Basic Aid Kit";
        descriptionShort = "Partially heals a unit; Partially treats fractures";
        descriptionUse = "Partially heals a unit; Partially treats fractures";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };
    class GVAR(advancedAid): ACE_personalAidKit {
        scope = 2;
        author = "Cypher";
        displayName = "Advanced Aid Kit";
        descriptionShort = "Fully heals a unit";
        descriptionUse = "Fully heals a unit";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 10;
        };
    };
};
