// built-in include guard removal
// just in case the user has a local dependency with the same file name
#if defined _inc_library
	#undef _inc_library
#endif
// custom include-guard to ensure we don't duplicate
#if defined _library_included
	#endinput
#endif
#define _library_included


#include <a_samp>
#include <test-boilerplate>
#include <FCNPC>
#include <zcmd>
#include <YSI\y_hooks>


new npcs[6];
hook OnScriptInit() {
    npcs[0] = createAndSpawn("Tim", 101, 320.0, 1800.0, 18.0);
    npcs[1] = createAndSpawn("Tom", 186, 320.0, 1802.0, 18.0);
    npcs[2] = createAndSpawn("Ted", 188, 320.0, 1804.0, 18.0);
    npcs[3] = createAndSpawn("Jess", 12, 320.0, 1806.0, 18.0);
    npcs[4] = createAndSpawn("Jane", 41, 320.0, 1808.0, 18.0);
    npcs[5] = createAndSpawn("Joan", 93, 320.0, 1810.0, 18.0);
}

createAndSpawn(name[], skin, Float:x, Float:y, Float:z) {
    new id = FCNPC_Create(name);
    FCNPC_Spawn(id, skin, x, y, z);
    return id;
}

CMD:npcrespawn(playerid, params[]) {
    for(new i; i < 6; i++) {
        FCNPC_Respawn(npcs[i]);
    }
    return 1;
}

CMD:weapon(playerid, params[]) {
    GivePlayerWeapon(playerid, 31, 1000);
    return 1;
}

public OnPlayerTakeDamage(playerid, issuerid, Float:amount, weaponid, bodypart) {
    printf("TakeDamage %d %d %f %d %d", playerid, issuerid, amount, weaponid, bodypart);
    return 1;
}

public OnPlayerGiveDamage(playerid, damagedid, Float:amount, weaponid, bodypart) {
    printf("GiveDamage %d %d %f %d %d", playerid, damagedid, amount, weaponid, bodypart);
    return 1;
}

public OnPlayerWeaponShot(playerid, weaponid, hittype, hitid, Float:fX, Float:fY, Float:fZ) {
    printf("WeaponShot %d %d %d %d %f %f %f", playerid, weaponid, hittype, hitid, fX, fY, fZ);
    return 1;
}
