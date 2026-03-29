#include <cstdint>
#include <string>
#include "constants.h"
#include "Move.h"

using namespace std;

#ifndef SPECIESDATA.H
#define SPECIESDATA .H

class DexInfo
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

class BaseStats
{
    uint16_t healthPoints;
    uint16_t attack;
    uint16_t defense;
    uint16_t specialAttack;
    uint16_t specialDefense;
    uint16_t speed;
};

class WildEncounter
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

struct GenderRatio
{
    float maleRate;
    float femaleRate;
    float genderlessRate;
};

class GenderBreeding
{
    // [0] Female Rate, [1] Male Rate, [2] Genderless Rate
    GenderRatio ratio;
    EggGroup eggGroup1;
    EggGroup eggGroup2;
    uint8_t eggCycles;

public:
    GenderBreeding(GenderRatio ratio, EggGroup eggGroup1, EggGroup eggGroup2, uint8_t eggCycles)
    {
        this->ratio = ratio;
        this->eggGroup1 = eggGroup1;
        this->eggGroup2 = eggGroup2;
        this->eggCycles = eggCycles;
    }
};

class ContestStats
{
    uint8_t cool;
    uint8_t beauty;
    uint8_t cute;
    uint8_t smart;
    uint8_t tough;
    uint8_t sheen;

public:
    /// @brief Constructor for ContestStats Class
    /// @param All species' base contest stat [0-255]
    ContestStats(uint8_t cool, uint8_t beauty, uint8_t cute, uint8_t smart, uint8_t tough, uint8_t sheen)
    {
        this->cool = cool;
        this->beauty = beauty;
        this->cute = cute;
        this->smart = smart;
        this->tough = tough;
        this->sheen = sheen;
    }
};

Move movepool[];

#endif