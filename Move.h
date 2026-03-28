#include <string>
#include "Constants.h"
#include <cstdint>

using namespace std;

#ifndef MOVE.H
#define MOVE.H

enum MoveType {STATUS, PHYSICAL, SPECIAL};

class Move {

public:

    struct Data{
        string description;
        string name;
        Type type;
        uint8_t damage;
        uint8_t accuracy;
        uint8_t priority = 1;
        uint8_t powerPoints;

    };

    struct AdditionalEffect{}

};
#endif