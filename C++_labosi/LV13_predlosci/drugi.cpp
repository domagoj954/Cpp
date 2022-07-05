//Implementirajte predložak klase Vektor. Klasa mora omogućiti pohranu elemenata ovisno
//o odabranom tipu elementa. Npr.:
//Vektor<int> v1;
//Vektor<double> v2;
//Kako bi pojednostavili izradu klase, neka klasa kao podatkovni član koristi obično polje
//maksimalne veličine 100 elemenata (neće biti moguće ubaciti više od 100 elemenata u
//Vektor).
//Implementirajte sljedeće metode i operatore:
//metodu pocetak() po uzoru na front() metodu.
//metodu kraj() po uzoru na back() metodu.
//metodu ubaciNaKraj() po uzoru na push_back() metodu.

#include<iostream>
#include<vector>

template<class T1>
T1 ubaci(std::vector<T1> v){
    for(int i = 0; i < 100; i++){
        v.push_back(i);
    }
    for(auto a:v){
        std::cout << a << "  " ;
    }
    return 0;
}

int main(){
    std::vector<int> vektor;
    ubaci(vektor);

}


