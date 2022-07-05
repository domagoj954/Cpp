#ifndef UNTITLED3_OUTPOST_H
#define UNTITLED3_OUTPOST_H
#include"Villager.h"
class Outpost{
public:

    Outpost();

    Outpost(Villager *villager);

    Outpost(const Outpost &outpost);

    void isVillagerInBuilding();

    ~Outpost();

private:

    Villager *villager;
};



#endif //UNTITLED3_OUTPOST_H
