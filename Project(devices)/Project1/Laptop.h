#pragma once
#include"PC.h"
#include"Devices.h"

class Laptop{

public:

    Laptop();

    Laptop(PC *laptop);

    Laptop(const Laptop &newLaptop);

    ~Laptop();

    void isLaptopInTheShop();


private:

    PC* laptop;

};
