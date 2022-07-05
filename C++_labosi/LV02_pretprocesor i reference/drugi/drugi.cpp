#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int prikaziPolje(int polje[], int n, int* maksimum = nullptr, int* prosjek = nullptr){

   int brOperacija = 0;
     if ( prosjek != nullptr ) {
     *prosjek = 0;
     brOperacija ++;
    }
     if ( maksimum != nullptr ) {
     * maksimum = polje [0];
     brOperacija ++;
    }


    for (int i = 0; i < n; i++){
        cout << polje[i] << " ";
        

      if(prosjek != nullptr){
          *prosjek += polje[i];
          
      }
      if(prosjek != nullptr){
          *prosjek /= n;
          
      }
      if(maksimum != nullptr){
          if(polje[i] > *maksimum){
          *maksimum = polje[i];
      }
    }
  }
  if ( prosjek != nullptr ) {
* prosjek = * prosjek / n;
}
return brOperacija ;

}

int main(){
    int polje[] = {1, 2, 3, 4, 5};
    int prosjek;
    int maksimum;
    prikaziPolje(polje, 5, &prosjek, nullptr);
    cout << endl;
    cout << "Prosjek : " << prosjek << std :: endl ;
    cout << "Maksimum : " << maksimum << std :: endl ;
}



