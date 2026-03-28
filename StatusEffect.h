#include <string>
#include <cstdint>

using namespace std;

#ifndef STATUSEFFECT.H
#define STATUSEFFECT .H

class StatusEffect
{

private:
    string name;
    float immobilizationRate;
    float recoveryRate;
    float damageRate = 1;
    uint8_t damage;
    
public:
    StatusEffect(string name, uint8_t damage, uint8_t immobilizationRate, uint8_t recoveryRate)
    {
        this->name = name;
        this->damage = damage;
        this->immobilizationRate = immobilizationRate;
        this->recoveryRate = recoveryRate;
    };
};

StatusEffect Burn("Burn", 0.125, 0, 0);
StatusEffect Freeze("Freeze", 0, 1, 0.20);
StatusEffect Paralysis("Paralysis", 0, 0.25, 0);
StatusEffect Poison("Poison", 0.125, 0, 0);
StatusEffect Sleep("Sleep", 0, 1, 0);
StatusEffect Attract("Attract", 0, 0.5, 0);
StatusEffect Confusion("Confusion", 0, 0.5, 0);
StatusEffect Curse("Curse", 0.25, 0, 0);

#endif