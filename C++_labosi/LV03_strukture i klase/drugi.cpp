#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

class KompleksniBroj{

  public:

double getR(){
  return re;
}

void setR(double realni){
  re = realni;
}

double getI(){
  return im;
}

void setI(double imaginarni){
  im = imaginarni;
}


double izracunajApsolutnuVrijednost(){
  return sqrt(pow(re, 2)) + (pow(im, 2));
}

void zbrojiKompleksanBroj(KompleksniBroj b){
  re = re + b.re;
  im = im + b.im;

}

void prikaziKompleksanBroj(){
  cout << "Realni: " << re << " ";
  cout << "Imaginarni: " << im << endl;
}

  private:
  double re;
  double im;

};



int main(){
  KompleksniBroj a;
  KompleksniBroj b;
  KompleksniBroj aps;
  a.setR(1.23);
  a.setI(2.22);
  b.setR(4.67);
  b.setI(8.21);
  
  a.prikaziKompleksanBroj();
  
  double apsolutno = a.izracunajApsolutnuVrijednost();
   cout << "Apsolutna vrijednost: " << apsolutno << endl;
   
  a.zbrojiKompleksanBroj(b);
  a.prikaziKompleksanBroj();

  return 0;
}