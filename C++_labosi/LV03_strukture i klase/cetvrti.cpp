#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Valuta{

public:
Valuta(string valuta):
 Valuta(valuta, 0){}

 Valuta(string valuta, double tecaj):
  valuta(valuta), tecaj(tecaj){}

 double kupi(double kune){
  return kune / tecaj;
}

void setT(double tecaj){
 tecaj = tecaj;
 return;
}

  private:
  string valuta;
  double tecaj;
};

int main(){
  Valuta promjena1("EURO", 7.57);
  double euri = promjena1.kupi(1000);
  
  promjena1.setT(10);
  promjena1.kupi(100);

  cout << euri;

}