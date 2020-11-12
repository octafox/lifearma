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
        if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
            player setObjectTextureGlobal [0, "textures\civ_uni.jpg"];
        };
        if (uniform player isEqualTo "U_C_Driver_2") then {
            player setObjectTextureGlobal [0, "#(argb,8,8,3)color(0.361,0.05,0,1)"];
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
