#include<iostream>
#include<string>

class Klub{
    public:
    Klub(std::string igrac, std::string nazivKluba, int broj){
        this -> igrac = igrac;
        this -> nazivKluba = nazivKluba;
        this -> broj = broj;
    }

    virtual void brojGolova() = 0; //mora biti definirana u nasljeđivanju, ključna je 0

    void info(){
        std::cout << igrac << "  " << nazivKluba << "  " << broj << std::endl;
    }
protected: //pogledati za protectet, private i public
    std::string igrac;
    std::string nazivKluba;
    int broj;
};

class NoviKlub : public Klub{
    public:
    NoviKlub(std::string igrac, std::string nazivKluba, int broj) :
     Klub(igrac, nazivKluba, broj){}

     void brojGolova(){
         std::cout << "999"; 
     }

     void info(){
        std::cout << igrac << "  " << nazivKluba << "  " << broj << std::endl;
    }

};

int main(){
    NoviKlub klub ("Lionel Messi", "FC Barcelona", 10);
    klub.info();
}