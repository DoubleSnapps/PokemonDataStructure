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
    Type type1;
    Type type2;
    // v TODO: switch to units library v
    float spWeight;
    float spHeight;
    // ^ TODO: switch to units library ^
    uint16_t spDexNumber;
    uint8_t baseHappiness;

public:
    DexInfo() {};

    DexInfo(string spName,
            string classification,
            Type type1,
            Type type2,
            float spWeight,
            float spHeight,
            uint16_t spDexNumber,
            uint8_t baseHappiness)
    {
        this->spName = spName;
        this->classification = classification;
        this->type1 = type1;
        this->type2 = type2;
        this->spWeight = spWeight;
        this->spHeight = spHeight;
        this->spDexNumber = spDexNumber;
        this->baseHappiness = baseHappiness;
    }
};

class BaseStats
{
    uint16_t healthPoints;
    uint16_t attack;
    uint16_t defense;
    uint16_t specialAttack;
    uint16_t specialDefense;
    uint16_t speed;

public:

    BaseStats(){};

    BaseStats(uint16_t healthPoints,
              uint16_t attack,
              uint16_t defense,
              uint16_t specialAttack,
              uint16_t specialDefense,
              uint16_t speed)
    {
        this->healthPoints = healthPoints;
        this->attack = attack;
        this->defense = defense;
        this->specialAttack = specialAttack;
        this->specialDefense = specialDefense;
        this->speed = speed;
    }
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

public:

    WildEncounter(){};

    WildEncounter(uint8_t catchRate,
                  uint16_t xpYield,
                  uint16_t healthPointsEV,
                  uint16_t attackEV,
                  uint16_t defenseEV,
                  uint16_t specialAttackEV,
                  uint16_t specialDefenseEV,
                  uint16_t speedEV)
    {
        this->catchRate = catchRate;
        this->xpYield = xpYield;
        this->healthPointsEV = healthPointsEV;
        this->attackEV = attackEV;
        this->defenseEV = defenseEV;
        this->specialAttackEV = specialAttackEV;
        this->specialDefenseEV = specialDefenseEV;
        this->speedEV = speedEV;
    }
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

    GenderBreeding(){};

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

    ContestStats(){};

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

class PokemonSpecies
{
    DexInfo dexInfo;
    BaseStats baseStats;
    WildEncounter wildEncounter;
    GenderBreeding genderBreeding;
    ContestStats contestStats;

public:
    PokemonSpecies(DexInfo dexInfo, BaseStats baseStats,
                   WildEncounter wildEncounter, GenderBreeding genderBreeding,
                   ContestStats contestStats)
    {
        this->dexInfo = dexInfo;
        this->baseStats = baseStats;
        this->wildEncounter = wildEncounter;
        this->genderBreeding = genderBreeding;
        this->contestStats = contestStats;
    }
};

#endif