#include<iostream>
#include "TownCenter.h"
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

    TownCenter::TownCenter() :
     villagerCounter(0), buildingsCounter(0){}

    Villager *TownCenter::trainVillager() {
        villagerCounter++;
        return new Villager();
    }

    Villager *TownCenter::trainVillager(int hitPoints) {
        villagerCounter++;
        hitPoints = 10;
        return new Villager();
}

    void TownCenter::howManyUnits(){
        cout << "Number of units: " << villagerCounter << endl;

};