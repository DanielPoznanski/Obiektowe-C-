#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H
#include "villager.h"

class Household
{
    Villager **inh;
    int maxInh;
public:
    Household(Villager *v, int maxInh);
    ~Household();
    bool addVillager(Villager *v);
    advance();
};

#endif // HOUSEHOLD_H
