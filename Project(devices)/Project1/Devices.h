#pragma once
#include<string>
class Devices {
public:

	Devices(std::string model, std::string operatingSystem, std::string processor, int memory, double duration);

	Devices(std::string model, std::string operatingSystem);

	virtual int memories(int someOtherMemory) = 0; //virtualne metode se moraju riješiti da bi radila implementacija

	virtual double yearsOfDuration() = 0;

	void info();

	void setModel(std::string model);
	std::string getModel();


	void setOperatingSystem(std::string operatingSystem);
	std::string getOperatingSystem();


	void setProcessor(std::string processor);
	std::string getProcessor();


	void setMemory(int memory);
	int getMemory();


	void setDuration(int duration);
	int getDuration();

protected:
	std::string model;
	std::string operatingSystem;
	std::string processor;
	int memory;
	double duration;
};
