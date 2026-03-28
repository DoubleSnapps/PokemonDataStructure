#ifndef CONSTANTS_H
#define CONSTANTS_H


/// @brief pointless abstraction is the future bro
const int MAX_TYPES = 18;

enum Type{NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, 
            FIGHTING, POISON, GROUND, FLYING, PSYCHIC, 
                BUG, ROCK, GHOST, DRAGON, DARK, STEEl, FAIRY};

enum Gender{FEMALE, MALE, GENDERLESS};
//TODO: fillout
enum EggGroup {PLACEHOLDER};

enum SpecialStatus {STANDARD, REGIONAL, FOSSIL, PARADOX, ULTRA_BEAST, LEGENDARY, MYTHICAL};

const double matchupsArray[MAX_TYPES][MAX_TYPES] = 
    {{0},
    {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}};

#endif