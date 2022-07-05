#include<iostream>
#include<string>
using std::cout;
using std::cout;
using std::endl;
using std::string;

class Motocikl{
public:
    Motocikl() : Motocikl("", "", 0){} //delegiranje konstruktora

    Motocikl(string proizvodac, string model):// postavljanje na proizvoljne vrijednosti
      Motocikl(proizvodac, model, 0){} //delegiranje konstruktora

    Motocikl(string proizvodac, string model, int zapremnina) : //inicijalizacijska lista
     proizvodac(proizvodac), model(model), zapremnina(zapremnina) {}
    
    void info(){
        cout << proizvodac << " "  << model << " " << "(" << zapremnina << ")"<< endl;
        cout << endl;
    }

private:
    string proizvodac;
    string model;
    int zapremnina;   
};

int main(){
    Motocikl motor1;
    Motocikl motor2 = {"Kawasaki", "Z300", 300};
    Motocikl motor3 = {"Kawasaki", "Z300"};
    motor1.info();
    motor2.info();
    motor3.info();
}