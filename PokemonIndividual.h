#include <cstdint>
#include <string>
#include "constants.h"
#include "species.h"

using namespace std;





// Player-Mutable Data
    struct Identifiers {
        string nickname;
        uint32_t experiencePoints;
        bool pokerus;
    };

    Move knownMoves[4];

        struct IValues
    {
        uint8_t healthPoints;
        uint8_t attack;
        uint8_t defense;
        uint8_t specialAttack;
        uint8_t specialDefense;
        uint8_t speed;
    };

    struct EValues
    {
        uint8_t healthPoints;
        uint8_t attack;
        uint8_t defense;
        uint8_t specialAttack;
        uint8_t specialDefense;
        uint8_t speed;
    };

    // Non-Static Non-Mutable Data (pokemon data)
    struct GeneratedData
    {
        uint16_t dexNumber;
        Gender gender;
        float sizeModifier = 1;
        bool shiny;
        bool alpha;
    };
