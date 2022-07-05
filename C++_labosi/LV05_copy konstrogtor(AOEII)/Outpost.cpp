#include<iostream>
#include"Outpost.h"
#include"Villager.h"
using std::cout;

Outpost::Outpost(){
    villager = nullptr;
}

Outpost::Outpost(Villager *villager) {
    this -> villager = villager;
}

Outpost::Outpost(const Outpost &outpost) {
    if(outpost.villager != nullptr){
        villager = new Villager(*(outpost.villager));
    }
}

Outpost::~Outpost() {
    if(villager != nullptr){
        delete villager;
    }
}

void Outpost::isVillagerInBuilding() {
    if(villager != nullptr){
        villager->info(); //zbog pokazivaca ide strelica
    } else{
        cout << "Villager is not in outpost" ;
    }
}