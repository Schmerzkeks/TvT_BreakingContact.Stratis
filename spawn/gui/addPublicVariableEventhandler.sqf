
/*
parameter

IS_BLOCKED,MONEY_LEFT
VEHICLE 1 (classname, namedisplay, countleft, price, pricedisplay, eta)
VEHICLE 2 (classname, namedisplay, countleft, price, pricedisplay, eta)
VEHICLE 3 (classname, namedisplay, countleft, price, pricedisplay, eta)
VEHICLE 4 (classname, namedisplay, countleft, price, pricedisplay, eta)

*/

_russianCredits = _this select 0;
_USCredits = _this select 1;




fillRussianSupplies = {

     russianSupplies = [

        _this select 0,
        [
            "rhs_gaz66o_vdv",
            "GAZ-66 Transport",
            30,
            100,
            "<t align='center'>100 cr</t>",
            1,
            ["light_hide", 0 ],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhs_gaz66_ap2_vdv",
            "GAZ-66 Ambulance",
            2,
            500,
            "<t align='center'>500 cr</t>",
            1,
            ["light_hide", 0 ],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhs_gaz66_repair_vdv",
            "GAZ-66 Repair",
            2,
            700,
            "<t align='center'>700 cr</t>",
            1,
            ["light_hide", 0 ],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhs_brm1k_vdv",
            "BRM1K",
            2,
            2500,
            "<t align='center'>2500 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhs_btr60_vv",
            "BTR-60",
            2,
            2000,
            "<t align='center'>2000 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhs_t72ba_tv",
            "T-72",
            2,
            4000,
            "<t align='center'>4000 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "B_supplyCrate_O",
            "Static MG",
            3,
            700,
            "<t align='center'>700 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ]
    ];

    publicVariable "russianSupplies";



    "russianSupplies" addPublicVariableEventHandler {
        diag_log format [
            "%1 has been updated to: %2",
            _this select 0,
            _this select 1
        ];

        [_this select 1,false,0,"","",""] call refreshRussianUI;
    };

    "VEHICLE_ORDERED_WEST" addPublicVariableEventHandler {
    diag_log format [
            "%1 has been updated to: %2",
            _this select 0,
            _this select 1
        ];

        [_this select 1] call refreshRussianOrder;
    };
};

fillUSSupplies = {

     USSupplies = [

        _this select 0,
        [
            "rhsusf_m998_d_2dr_fulltop",
            "HMMWV Transport",
            30,
            100,
            "<t align='center'>100 cr</t>",
            1,
            ["hide_backTop", 0, "hide_frontTop", 0 ],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhsusf_m998_d_4dr",
            "HMMWV M2",
            10,
            800,
            "<t align='center'>800 cr</t>",
            1,
            ["light_hide", 0 ],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhsusf_m113d_usarmy",
            "M113 M2",
            2,
            1500,
            "<t align='center'>1500 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "rhsusf_m113d_usarmy_medical",
            "M113 Ambulance",
            1,
            1000,
            "<t align='center'>1000 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "B_supplyCrate_B",
            "Javelin Pack (3)",
            1,
            3000,
            "<t align='center'>3000 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            (_this select 0) addWeaponCargoGlobal ['rhs_weap_fim92',2];
            (_this select 0) addWeaponCargoGlobal ['rhs_fim92_mag',4];
            }
        ],
        [
            "Box_East_WpsSpecial_F",
            "MH-6",
            2,
            2000,
            "<t align='center'>2000 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ],
        [
            "RHS_UH60M",
            "UH-60M",
            1,
            3000,
            "<t align='center'>3000 cr</t>",
            1,
            [[]],
            {
            clearWeaponCargoGlobal (_this select 0); 
            clearItemCargoGlobal (_this select 0); 
            clearBackpackCargoGlobal (_this select 0); 
            clearMagazineCargoGlobal (_this select 0);
            }
        ]
    ];

    publicVariable "USSupplies";



    "USSupplies" addPublicVariableEventHandler {
        diag_log format [
            "%1 has been updated to: %2",
            _this select 0,
            _this select 1
        ];

        [_this select 1,false,0,"","",""] call refreshUSUI;
    };

    "VEHICLE_ORDERED_EAST" addPublicVariableEventHandler {
    diag_log format [
            "%1 has been updated to: %2",
            _this select 0,
            _this select 1
        ];

        [_this select 1] call refreshUSOrder;
    };
};

[_russianCredits] call fillRussianSupplies;
[_USCredits] call fillUSSupplies;