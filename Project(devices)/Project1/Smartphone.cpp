#include<iostream>
#include"Smartphone.h"

Smartphone::Smartphone(std::string model, std::string operatingSystem, std::string processor, int memory, double duration) :
	Devices(model, operatingSystem, processor, memory, duration) {}

int Smartphone::memories(int someOtherMemory) {//virtualka
	if (someOtherMemory < 0) {
		showError();   //iznimka iz klase MemoryException
		return 0;
	}
	else {
		memory += someOtherMemory;
		return memory;
	}
}

double Smartphone::yearsOfDuration(){ //virtualka
	if (memory == 500){
		duration = 5;
	}
	return duration;
}

void Smartphone::showError() {
	std::cout << "Wrong input of memory";
}


void Smartphone::numberOfUsers() {
	users += 100000000;
	std::cout << users;
	return;
}


