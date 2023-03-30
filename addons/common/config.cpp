#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.0;
    requiredAddons[] = {"evlt_main"};
    author[] = {"Cuel"};
    authorUrl = "";
  };
};

#include "CfgEventHandlers.hpp"
#include "adminWhitelist.hpp"
