#ifndef UNTITLED3_TOWNCENTER_H
#define UNTITLED3_TOWNCENTER_H
#include "Villager.h"
class TownCenter{
public:

    TownCenter();

    Villager trainVillager(Villager *unit);

    Villager *trainVillager();

    Villager *trainVillager(int hitPoints);

    //Outpost *buildOutpost(int building);

    void howManyUnits();


private:
    int villagerCounter;
    int buildingsCounter;
};

#endif //UNTITLED3_TOWNCENTER_H
