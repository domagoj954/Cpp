#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Valuta{
public:
  Valuta(string nazivValute):
    Valuta(nazivValute, 0.0){}

  Valuta(string nazivValute, double tecaj):
    nazivValute(nazivValute), tecaj(tecaj) {}


  double kupi(double kune){
      return kune / tecaj;
  }

  void setTecaj(double tecaj){
      this -> tecaj = tecaj;
  }
 
private:
  string nazivValute;
  double tecaj;    

};

int main(){
    Valuta euro = {"EUR", 7.5};
    double euri = euro.kupi(1000);
    cout << euri << endl;
    euro.setTecaj(7);
    double euri1 = euro.kupi(1000);
    cout << euri1;

}