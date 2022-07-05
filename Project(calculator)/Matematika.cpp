#include<iostream>
#include<string>
#include<exception>
#include<math.h>
#define PI 3.141592653589793  //predefinirana vrijednost

struct Varijable{ //Struktura
    double br1;
    double br2;
    double r; 
    bool parniNeparni;  
};

class Matematika{
    private:
    Varijable mat;

    public:
    Matematika(double br1, double br2, double r, bool parniNeparni){
        setVarijable({br1, br2, r, parniNeparni}); // struktura u konstruktoru
    }

    void setVarijable(Varijable mat){
        this->mat = mat;
    }

    Varijable getVarijable(){
        return mat;
    }

    void povrsinaKruga(){
        if(mat.r == 0){
            throw("Radijus ne moze biti 0, ispravite podatke u konstruktoru");
        }else{
        double pk = mat.r * mat.r * PI;
        std::cout << "Povrsina kruga je: " << pk << std::endl;
        }
    }

    void opsegKruga(){
        if(mat.r == 0){
            throw("Radijus ne moze biti 0, ispravite podatke u konstruktoru");
        }else{
        double ok = 2 * mat.r * PI;
        std::cout << "Opseg kruga je: " << ok << std::endl;
      }
    }

    void brojeviPN(){ //koristenje strukture kao clan podatka u klasi
        int i;
        for(i = mat.br1; i <= mat.br2; i++){
            if(mat.parniNeparni == true && i % 2 == 0){
                std::cout << i << "  ";
            }
            if(mat.parniNeparni == false && i % 2 != 0){
                std::cout << i << "  ";
            }
            }
            std::cout << std::endl;
    }

   void zbrojiBrojeve(double *br3, double *br4){ //pokazivaci
       double rezultatZbrajanja = *br3 + *br4;
       std::cout << "Rezultat zbrajanja je: " << rezultatZbrajanja << std::endl;
}    

   void mnozibrojeve(double &br5, double &br6){ //reference
       double rezultatMnozenja = br5 * br6;
       std::cout << "Rezultat mnozenja je: " << rezultatMnozenja << std::endl;
}

   void izracunajLogaritam(int br){
       if(br < 0){
           throw("Nedefiniran slucaj, unesite broj veci od 0");
       }else{
       double logaritam = log(br);
       std::cout << "Logaritam broja " << br << " je: " << logaritam << std::endl;
    }
}

  void izracunajkvadratnuJednadzbu(int a, int b, int c){
      if(b == 0){
           throw("Dijeljenje sa 0, b mora biti veci od 0");
       }else{
      double diskriminanta = b * b - 4 * a * c;
      double x1 = (-b + sqrt(diskriminanta)) / (2*a);
      double x2 = (-b - sqrt(diskriminanta)) / (2*a);
      std::cout << "Rjesenja kvadratne jednadzbe su: " << x1 << " i " << x2 << std::endl;
       }
  }

template <typename T>  //nedefinirani template
T najveci(T n){
    T polje[] = {1.1, 9.9, 4,4}; 
    T max = polje[0];
    for(int i = 0; i <= n; i++){
        if(polje[i] > max){
            max = polje[i];
        }
    }
   return max;
}

template< typename T>
T pitagora(T a, T b){
    T c;
    c = sqrt((a*a)+(b*b));
    return c;
}

};

int main(){
    double a = 5.5;
    double b = 6.5;

    Matematika mat1 (1, 10, 5.5, true); //podatkovni clanovi strukture u klasi
    mat1.povrsinaKruga();
    mat1.opsegKruga();
    mat1.brojeviPN();
    mat1.zbrojiBrojeve(&a, &b); //pokazivaci
    mat1.mnozibrojeve(a, b); //reference

    try{
        mat1.izracunajLogaritam(5);  
    }catch (const char *msg){
        std::cout << msg << std::endl;
    }

    std::cout << mat1.najveci<double>(3) << std::endl; //nedefinirani template

    try{
        mat1.izracunajkvadratnuJednadzbu(2, 1, -3); 
    }catch (const char *msg){
        std::cout << msg << std::endl;
    }

    std::cout << mat1.pitagora(3.0, 2.0) << std::endl; //nedefinirani template

}