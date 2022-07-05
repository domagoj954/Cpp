#include<iostream>
#include "Villager.h"
#include "TownCenter.h"
#include "Outpost.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    //Villager
    Villager v1 = {1, 2, 4};
    Villager v2;
    Villager v3 = v2;
    Villager v4;
    v4.setAttack(1);
    v4.setHitPoints(3);
    v4.setSpeed(5);
    v1.info();
    v2.info();
    v3.info();
    v4.setAttack(1);
    v4.setHitPoints(3);
    v4.setSpeed(5);
    v4.info();

    //Town Center
    TownCenter tc1;
    tc1.trainVillager();
    tc1.trainVillager();
    tc1.howManyUnits();

    //Outpost
    Outpost o1(new Villager(2, 3, 4));
    Outpost o2 = o1;
    o1.isVillagerInBuilding();

}