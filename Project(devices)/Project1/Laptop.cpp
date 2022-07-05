#include<iostream>
#include"Laptop.h"

Laptop::Laptop() {
	laptop = nullptr;
}

Laptop::Laptop(PC *laptop) {
	this->laptop = laptop;
}

Laptop::Laptop(const Laptop& newLaptop) {
	if (newLaptop.laptop != nullptr) {
		laptop = new PC(*(newLaptop.laptop));

	}
}

Laptop::~Laptop() {
	if (laptop != nullptr) {
		delete laptop;
	}
}

void Laptop::isLaptopInTheShop() {
	if (laptop != nullptr) {
		laptop->info();//strelice prilikom pozivanja meoda kod pokazivaca
	}
	else {
		std::cout << "No laptops on the stock";
	}
}



	



