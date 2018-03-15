#include <iostream>
#include <string>
#include "villager.h"
#include "household.h"

using namespace std;


int main()
{
    Villager *v2=new Villager("Tomasz",10,85,false);
    Household *h=new Household(v2,6);
    return 0;
}
