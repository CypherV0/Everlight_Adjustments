//- template copied from RHS GREF by Ferdilanz 3/31/2023
	class Box_Syndicate_Ammo_F


	class EVLT_Fireteam_US_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_US"; //- need to add a stringtable.xml for this to work
		//displayName = "Fireteam (US)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "FT Crate", 2, 0.03, "PuristaMedium"];}];";
		};
		SLX_XEH_DISABLED = 1;

		class TransportWeapons //- for guns... RHS had format weap_xx(classname,amount)
		{
		};

		class TransportMagazines //- for zigzagazines... RHS had mag_xx(classname,amount)
		{
		};

		class TransportItems //- for inventory items like watches, terminals, maps, optics, other rifle attachments
		{
		};
		class TransportBackpacks //- for backpacks like deployable turrets, alice packs, et cetera
		{
		};
	};

	class EVLT_Fireteam_AK_762_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_AK762"; //- need to add a stringtable.xml for this to work
		//displayName = "Fireteam (AK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "FT Crate", 2, 0.03, "PuristaMedium"];}];";
		};
		SLX_XEH_DISABLED = 1;

		class TransportWeapons //- for guns... RHS had format weap_xx(classname,amount)
		{
		};

		class TransportMagazines //- for zigzagazines... RHS had mag_xx(classname,amount)
		{
		};

		class TransportItems //- for inventory items like watches, terminals, maps, optics, other rifle attachments
		{
		};
		class TransportBackpacks //- for backpacks like deployable turrets, alice packs, et cetera
		{
		};
	};

	class EVLT_Fireteam_AK_545_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_AK545"; //- need to add a stringtable.xml for this to work
		//displayName = "Fireteam (AK545)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "FT Crate", 2, 0.03, "PuristaMedium"];}];";
		};
		SLX_XEH_DISABLED = 1;

		class TransportWeapons //- for guns... RHS had format weap_xx(classname,amount)
		{
		};

		class TransportMagazines //- for zigzagazines... RHS had mag_xx(classname,amount)
		{
		};

		class TransportItems //- for inventory items like watches, terminals, maps, optics, other rifle attachments
		{
		};
		class TransportBackpacks //- for backpacks like deployable turrets, alice packs, et cetera
		{
		};
	};
