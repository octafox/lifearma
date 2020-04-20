#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
        };
        if (uniform player isEqualTo "U_C_Driver_2") then {
            player setObjectTextureGlobal [0, "textures\prisoner.jpg"];
        };
    };

    case west: {
        if (uniform player isEqualTo "U_I_CombatUniform") then {
            _skinName = "textures\cop_uniform.jpg";
            player setObjectTextureGlobal [0, _skinName];
        };
    };

    case independent: {
        // if (uniform player isEqualTo "U_C_Paramedic_01_F") then {
        // if (uniform player isEqualTo "U_Rangemaster") then {
        //     player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        // };
    };
};
