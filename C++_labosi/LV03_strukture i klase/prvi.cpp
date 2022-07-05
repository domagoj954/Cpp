#include<iostream>
using std::cout;
using std::cin;
using std::endl;

struct KompleksniBroj{
  double re;
  double im;
};

void prikaziKompleksanBroj(KompleksniBroj broj){
  cout << "Realni: " << broj.re << " ";
  cout << "Imaginarni: " <<broj.im << endl;

}

KompleksniBroj zbrojiKompleksneBrojeve(KompleksniBroj broj1, KompleksniBroj broj2){
  KompleksniBroj rez;
  rez.re = broj1.re + broj2.re;
  rez.im = broj1.im + broj2.re;

  return rez;
}


int main(){
KompleksniBroj a{1.23, 1.54};
KompleksniBroj b{2.23, 5.54};
KompleksniBroj c = zbrojiKompleksneBrojeve(a, b);
  
 


 prikaziKompleksanBroj(a);
 prikaziKompleksanBroj(c);
 return 0;
}