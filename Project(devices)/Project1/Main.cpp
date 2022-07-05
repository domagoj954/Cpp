#include<iostream>
#include"Devices.h"
#include"PC.h"
#include"Smartphone.h"
#include"Laptop.h"
#include"MemoryException.h"

long long int Smartphone::users{ 1000000000 }; //vrlo vazno, postavljanje vrijednosti ako se radi sa klasama
                                               // ako se zeli u klasi onda mora biti const 
int main() {
    //PC
    PC pc1("Acer", "Windows 10", "Intel", 500, 5);
    pc1.info();// nasljeđena metoda info iz Devices, nije potrebna implementacija u PC.h i PC.cpp
    std::cout << pc1.memories(500);
    std::cout << std::endl;
    pc1.otherDevices();
   // std::cout << "*******" << pc1.getModel();

    std::cout << std::endl;

    //SMARTPHONE
    Smartphone phone1("Samsung", "Android", "SnapDragon", 200, 5);
    std::cout << std::endl;
    phone1.info();

    try{
         phone1.memories(300);
    }
    catch (MemoryException &msg) {
        msg.showError();
    }

    phone1.info();

    std::cout << std::endl;
    for (int year = 2010; year <= 2021; year++) {
        phone1.numberOfUsers();
        std::cout << " users in " << year << "." << "year" <<std::endl;
    }
    std::cout << "Users in next year: ";
    phone1.numberOfUsers();
    std::cout << std::endl;
    
    //LAPTOP
    std::cout << std::endl;
    Laptop l1(new PC("Lenovo", "Windows 10", "AMD", 1000, 4));
    l1.isLaptopInTheShop();

    Laptop l2 = l1;
    l2.isLaptopInTheShop();

    l1.~Laptop();
    l1.isLaptopInTheShop(); //ne prikazuje nista od podataka
}
//PROBLEMI:
/*
1. Virtualke moraju biti rijesene da bi se objekt mogao instancirati
2. inicijalizacija static člana iz klase Smartphone (riješeno u Main.cpp), mora se definirati broj usera
   provjeriti nasljeđivanje funkcije void info
3. Nemogućnost rješavanja klase Laptop ukoliko u PC.h nemam #pragma once (Laptop sadrži data memeber tipa PC)
*/