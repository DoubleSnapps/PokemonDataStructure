#include <cstdint>
#include <string>
#include "constants.h"
#include "Move.h"

using namespace std;

#ifndef SPECIES.H
#define SPECIES.H

class SpeciesData{

public:
// Player-Mutable Data
    struct Identifiers {
        string nickname;
        uint32_t experiencePoints;
        bool pokerus;
    };

    Move knownMoves[4];

    struct IValues {
        uint8_t healthPoints;
        uint8_t attack;
        uint8_t defense;
        uint8_t specialAttack;
        uint8_t specialDefense;
        uint8_t speed;
    };

    struct EValues {
        uint8_t healthPoints;
        uint8_t attack;
        uint8_t defense;
        uint8_t specialAttack;
        uint8_t specialDefense;
        uint8_t speed;
    };


// Non-Static Non-Mutable Data (pokemon data)
    struct GeneratedData {
        Gender gender;
        float sizeModifier = 1;
        bool shiny;
        bool alpha;
    };

// Static Non-Mutable Data (species data)
    struct DexInfo {
        //TODO: XP LEVEL UP CURVE
        static string spName;
        static string category;
        static float spWeight;
        static float spHeight;
        static uint16_t spDexNumber;
    };

    struct BaseStats {
        static uint16_t healthPoints;
        static uint16_t attack;
        static uint16_t defense;
        static uint16_t specialAttack;
        static uint16_t specialDefense;
        static uint16_t speed;
    };

    struct WildEncounter {
        static uint8_t catchRate;
        static uint16_t xpYield;
        static uint16_t healthPointsEV;
        static uint16_t attackEV;
        static uint16_t defenseEV;
        static uint16_t specialAttackEV;
        static uint16_t specialDefenseEV;
        static uint16_t speedEV;
    };

    struct ContestStats {
        static uint8_t cool;
        static uint8_t beauty;
        static uint8_t cute;
        static uint8_t smart;
        static uint8_t tough; 
        static uint8_t sheen;
    };

};

#endif