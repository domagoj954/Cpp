#include<iostream>
#include"Devices.h"
#include<string>


Devices::Devices(std::string model, std::string operatingSystem, std::string processor, int memory, double duration) :
	model(model), operatingSystem(operatingSystem), processor(processor), memory(memory), duration(duration){}

Devices::Devices(std::string model, std::string operatingSystem) :
	Devices(model, operatingSystem, "", 0, 0){}

int Devices::memories(int someOtherMemory) { //promijeniti mozda
	return memory;
}

double Devices::yearsOfDuration() {  //promijeniti
	return duration;
}


void Devices::info() {
	std::cout << "Information about devices:\n "
		      << "Model: " << model << "  "
			  << "Operating system: " << operatingSystem << "  "
			  << "Processor: " << processor << "  "
		      << "Memory: " << memory << " GB  "
			  << "Duration: " << duration << " years  "
			  << std::endl;
}

void Devices::setModel(std::string model){
	this->model = model;
}
std::string Devices::getModel() {
	return model;
}

void Devices::setOperatingSystem(std::string operatingSystem) {
	this->operatingSystem = operatingSystem;
}
std::string Devices::getOperatingSystem() {
	return operatingSystem;
}

void Devices::setProcessor(std::string processor) {
	this->processor = processor;
}
std::string Devices::getProcessor() {
	return processor;
}

void Devices::setMemory(int memory) {
	this->memory = memory;
}
int Devices::getMemory() {
	return memory;
}

void Devices::setDuration(int duration) {
	this->duration = duration;
}
int Devices::getDuration() {
	return duration;
}

