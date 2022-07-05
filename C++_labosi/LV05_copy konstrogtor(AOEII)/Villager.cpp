#include<iostream>
#include "Villager.h"
#include<string>
#define MAXHITPOINTS 25;
using std::cout;
using std::cin;
using std::endl;
using std::string;



   Villager::Villager() {
       hitPoints = 2;
       attack = 3;
       speed = 0.8;
   }

    Villager::Villager(double hitPoints, double attack, double speed){
           this -> hitPoints = hitPoints;
           this -> attack = attack;
           this -> speed = speed;
    }

    Villager::Villager(const Villager &villager) {
       hitPoints = 25;
       attack = villager.attack;
       speed = villager.speed;
    }

    double Villager::getHitPoints() {
        return hitPoints;
    }

    void  Villager::setHitPoints(double hitPoints) {
       if(hitPoints > 0) {
           this->hitPoints = hitPoints;
       } else {
           cout << "Unijeli ste negativnu vrijesnost: ";
       }
    }

    double Villager::getAttack() {
        return attack;
    }

    void Villager::setAttack(double attack) {
       if(attack > 0) {
           this->attack = attack;
       }else{
           cout << "Unijeli ste negativnu vrijednost: ";
       }
    }

    double Villager::getSpeed() {
        return speed;
    }

    void Villager::setSpeed(double speed) {
       if(speed > 0) {
           this->speed = speed;
       }else{
           cout << "Unijeli ste negativnu veijednost: ";
       }
    }

    void Villager::info(){
       cout << "Hit points: " << hitPoints << " ";
       cout << "Attack: " << attack << " ";
       cout << "Speed: " << speed << " ";
       cout << endl;
};
