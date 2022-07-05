#include"Devices.h"
#include"MemoryException.h"
#include<string>

class Smartphone : public Devices, public MemoryException {
public:

	Smartphone(std::string model, std::string operatingSystem, std::string processor, int memory, double duration);
	
	int memories(int someOtherMemory); //virtualka

	double yearsOfDuration(); //virtualka

	void showError();

	static void numberOfUsers();

private:
    static long long int users;
	std::string battery;

};
