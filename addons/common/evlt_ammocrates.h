//- template copied from RHS GREF by Ferdilanz 3/31/2023
	class Box_Syndicate_Ammo_F
	class ACE_medicalSupplyCrate_advanced
	class Box_Syndicate_WpsLaunch_F


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

	class EVLT_Fireteam_DE_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_G36"; //- need to add a stringtable.xml for this to work
		//displayName = "Fireteam (GER)"; //- should/could we just use this instead?
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

	class EVLT_Fireteam_AK762_crate: Box_Syndicate_Ammo_F
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

	class EVLT_Fireteam_AK74_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_AK74"; //- need to add a stringtable.xml for this to work
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
	
/*	class EVLT_Autorifleman_RPK74_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_AR_RPK74"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK545)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "AR Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Autorifleman_RPK762_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_AR_RPK762"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "AR Crate", 2, 0.03, "PuristaMedium"];}];";
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
	}; */
	
	class EVLT_MMG_PK_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_MMG_PK"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "MMG Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_MMG_MG3_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_MMG_MG3"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "MMG Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_MMG_M60_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_MMG_M60"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "MMG Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_MMG_M240_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_MMG_M240"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "MMG Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
/* 	class EVLT_Autorifleman_M249_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_AR_M249"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "AR Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Autorifleman_MG36_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_AR_MG36"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "AR Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_OpticWear_crate: -------------------
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_OPTICWEAR"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "";
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
	
	class EVLT_OpticWinterwear_crate: ----------------
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_OPTICWEAR_WINTER"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "";
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
	}; */
	
	class EVLT_LAT_RPG7_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_LAT_RPG7"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_RAT_RPG26_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_RAT_RPG26"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_RAT_M136_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_RAT_M136"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Fireteam_CzBREN_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_BREN"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
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
	
	class EVLT_MAT_MRAWS_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_MAT_MRAWS"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Fireteam_CzVz58_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_Vz58"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
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
	
	class EVLT_HAT_Javelin_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_HAT_JAVELIN"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_RAT_M72A7_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_RAT_M72A7"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_RAT_M72A6_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_RAT_M72A6"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_HAT_Metis_Manportable_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_HAT_METIS_MANPORT"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_HAT_Metis_Emplaced_crate: Box_Syndicate_WpsLaunch_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_HAT_METIS_EMPLACED"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Launcher Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Fireteam_M14_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_M14"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
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
	
	class EVLT_Fireteam_Stealth_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_MP5_SUBSONIC"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
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
	
	class EVLT_Explosives_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_EXPLOSIVES"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Explosives Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Medical_crate: ACE_medicalSupplyCrate_advanced
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_MEDICAL"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
		scope = 2;
		type = 0;		

		transportMaxWeapons = 70;
		transportMaxMagazines = 500;

		class EventHandlers //- requires testing
		{
			init = "addMissionEventHandler ["Draw3D", {if (_this distance player > 3) exitWith {}; if (cursorObject isNotEqualTo _this) exitWith {};  drawIcon3D ["", [.8,.8,.8,1], visiblePosition _this vectorAdd [0,0,.3], 0.2, 0.2, 45, "Medical Crate", 2, 0.03, "PuristaMedium"];}];";
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
	
	class EVLT_Fireteam_FNFAL_crate: Box_Syndicate_Ammo_F
	{

		AUTHOR_MACRO
		displayName = "$STR_EVLT_CRATE_FT_FNFAL"; //- need to add a stringtable.xml for this to work
		//displayName = "AR Crate (RPK762)"; //- should/could we just use this instead?
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
