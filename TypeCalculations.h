#include "constants.h"

#ifndef TYPECALCULATIONS_H
#define TYPECALCULATIONS_H

Type toType(int);
double getOffensiveMatchup(Type, Type);
double getDefensiveMatchup(Type, Type);
double getDefensiveMatchup(Type, Type, Type);
double* getMultiTypeOffensiveMatchups(Type, Type);
double* getMultiTypeDefensiveMatchups(Type, Type);

#endif