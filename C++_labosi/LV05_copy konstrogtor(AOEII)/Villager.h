#ifndef UNTITLED3_VILLAGER_H
#define UNTITLED3_VILLAGER_H

class Villager{
public:
    Villager(); //defaultni konstruktor

    Villager(double hitPoints, double attack, double speed); //dodatni konstruktor (inicijaizacijska lista, može i ne mora)

    Villager(const Villager &villager); //copy kunstruktor, referenca = kopija

    double getHitPoints();
    void setHitPoints(double hitPoints);

    double getAttack();
    void setAttack(double attack);

    double getSpeed();
    void setSpeed(double speed);

    void info();


private:
    double hitPoints;
    double attack;
    double speed;

};
#endif //UNTITLED3_VILLAGER_H
