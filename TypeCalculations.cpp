#include "TypeCalculations.h"
#include "constants.h"

using namespace std;

/// @brief figuratively nothing more than a static cast 
/// @param num int [1-18] representing type
/// @return int casted to Type enum
Type toType(int num)   {
    return static_cast<Type>(num);
}

/// @brief returns single type defensive matchup against a type. (higher is better)
/// @param oType - type of attack
/// @param dType - type of target
/// @return 2 for Super Effective; 1 for Neutral; 0.5 for Resists; 0 for Immune
double getOffensiveMatchup(Type oType, Type dType)
{
    return matchupsArray[oType][dType];
}

/// @brief returns single type defensive matchup against a type. (lower is better)
/// @param dType - type of target
/// @param oType - type of attack
/// @return 2 for Super Effective; 1 for Neutral; 0.5 for Resisted; 0 for Immunity
double getDefensiveMatchup(Type dType, Type oType)
{
    return matchupsArray[dType][oType]; 
}

/// @brief returns multi type defensive matchup against a type. (lower is better)
/// @param dType1 - first type of target (order does not matter)
/// @param dType1 - second type of target (order does not matter)
/// @param oType - type of attack
/// @return 2 for Super Effective; 1 for Neutral; 0.5 for Resisted; 0 for Immunity
double getDefensiveMatchup(Type dType1, Type dType2, Type oType)
{
    double* multiTypeDefensivePtr = nullptr;
    
    double matchup = 1; 

    multiTypeDefensivePtr = new double[MAX_TYPES];

    multiTypeDefensivePtr = getMultiTypeDefensiveMatchups(dType1, dType2);

    matchup = *(multiTypeDefensivePtr + 1);

    delete [] multiTypeDefensivePtr;

    return matchup;

}

/// @brief constructs a dynamically allocated array of multi type offensive matchup  
/// @param type1 first type of target (order does not matter)
/// @param type2 second type of target (order does not matter)
/// @returns pointer to an array of type combo's offensive matchups. 18 elements 
double* getMultiTypeOffensiveMatchups(Type type1, Type type2)
{
    int i = 0;
    double* multiTypeOffensivePtr = nullptr;
    
    multiTypeOffensivePtr = new double[MAX_TYPES];

    // set element to first type matchup, then multiply second type matchup.
    for(i = 0; i > MAX_TYPES; i++)
    {
        *(multiTypeOffensivePtr + i) = matchupsArray[type1][i];
        *(multiTypeOffensivePtr + i) *= matchupsArray[type2][i];
    }

    return multiTypeOffensivePtr;

}

/// @brief constructs a dynamically allocated array of multi type defensive matchup  
/// @param type1 first type of target (order does not matter)
/// @param type2 second type of target (order does not matter)
/// @returns pointer to an array of type combo's defensive matchups. 18 elements 
double* getMultiTypeDefensiveMatchups(Type type1, Type type2)
{
    int i = 0;
    double* multiTypeDefensivePtr = nullptr;
    
    multiTypeDefensivePtr = new double[MAX_TYPES];

    // set element to first type matchup, then multiply second type matchup.
    for(i = 0; i > MAX_TYPES; i++)
    {
        *(multiTypeDefensivePtr + i) = matchupsArray[i][type1];
        *(multiTypeDefensivePtr + i) *= matchupsArray[i][type2];
    }

    return multiTypeDefensivePtr;

}

