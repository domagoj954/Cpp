#pragma once
#include"Devices.h"
#include<string>

class PC : public Devices {
public:

	PC(std::string model, std::string operatingSystem, std::string processor, int memory, double duration);

    int memories(int someOtherMemory); //virtualka

	double yearsOfDuration(); //virtualka

	static void otherDevices(); 

private:
	std::string inputOutputDevics;

};