#include <cstdint>
#include <string>
#include "constants.h"
#include "Move.h"

using namespace std;

#ifndef SPECIES.H
#define SPECIES .H

class SpeciesData
{

    struct DexInfo
    {
        // TODO: XP LEVEL UP CURVE
        string spName;
        string classification;
        Type types[2];
        // v TODO: switch to units library v
        float spWeight;
        float spHeight;
        // ^ TODO: switch to units library ^
        uint16_t spDexNumber;
        uint8_t baseHappiness;
    };

    struct BaseStats
    {
        uint16_t healthPoints;
        uint16_t attack;
        uint16_t defense;
        uint16_t specialAttack;
        uint16_t specialDefense;
        uint16_t speed;
    };

    struct WildEncounter
    {
        uint8_t catchRate;
        uint16_t xpYield;
        uint16_t healthPointsEV;
        uint16_t attackEV;
        uint16_t defenseEV;
        uint16_t specialAttackEV;
        uint16_t specialDefenseEV;
        uint16_t speedEV;
    };

    struct GenderBreeding
    {
        // [0] Female Rate, [1] Male Rate, [2] Genderless Rate
        int GenderRatio[3];
        enum EggGroup eggGroup1;
        enum EggGroup eggGroup2;
        uint8_t eggCycles;
    };

    struct ContestStats
    {
        uint8_t cool;
        uint8_t beauty;
        uint8_t cute;
        uint8_t smart;
        uint8_t tough;
        uint8_t sheen;
    };
};

#endif