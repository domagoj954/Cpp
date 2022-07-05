
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Motocikl{

public:
Motocikl() : proizvodjac(""), model(""), zapremnina(0){}

Motocikl(string proizvodjac, string model, int zapremnina):
proizvodjac(proizvodjac), model(model), zapremnina(zapremnina){}
// inicijalizacijske lista


Motocikl(string proizvodjac, string model):
 Motocikl(proizvodjac, model, 0){} //delegiranje

 void prikaz(){
   cout << proizvodjac << " " << model << " " << zapremnina;
 }

private:
string proizvodjac;
string model;
int zapremnina;

};
int main(){
Motocikl motor1;
Motocikl motor2("Kawasaki", "Z300", 300);

motor2.prikaz();

return 0;



}