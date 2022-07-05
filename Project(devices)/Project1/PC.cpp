#include<iostream>
#include"Devices.h"
#include"PC.h"


PC::PC(std::string model, std::string operatingSystem, std::string processor, int memory, double duration) :
	Devices(model, operatingSystem, processor, memory, duration){}

int PC::memories(int someOtherMemory) { //promijeniti mozda
	memory += someOtherMemory;
	return memory;
}

double PC::yearsOfDuration() {  //promijeniti
	if (memory == 1000) {
		duration = 10;
	}
	return duration;
}

//GETTERI I SETTERI
 void PC::otherDevices() {
	std::cout << "Keyboard, mouse, speakers, camera, printer";
}

