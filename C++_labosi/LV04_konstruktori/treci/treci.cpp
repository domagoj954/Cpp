#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Osoba{
    public:
     Osoba(string ime, string prezime):
       ime(ime), prezime(prezime){}
     
     string getIme(){
         return ime;
     }

     void setIme(string ime){
         this -> ime = ime;
     }

     string getPrezime(){
         return prezime;
     }

     void setPrezime(string prezime){
         this -> prezime = prezime;
     }

    private:
     string ime;
     string prezime;
};

class BankovniRacun{
    public:
     BankovniRacun(string ime, string prezime) : osoba(ime, prezime){
         stanjeRacuna = 0.0;
     }

     void uplati(double iznos){
         stanjeRacuna += iznos;
     }
     
     void isplati(double iznos){
         stanjeRacuna -= iznos;
     }
     
     void info(){
         cout << osoba.getIme() << " " << osoba.getPrezime();
         cout << ": " << stanjeRacuna << " KN" << endl;
     }

    private:
     Osoba osoba;
     double stanjeRacuna;

};

int main(){
  BankovniRacun racun1("Marko", "Markovic");
  racun1.uplati(1000);
  racun1.isplati(500);
  racun1.info();

}

