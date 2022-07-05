#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Film{
   string naziv;
   int godinaIzdanja;
   int trajanje;
};

void prikaziFilm(const Film &film){
    cout << film.naziv << " (" << film.godinaIzdanja << " )" << ", ";
    cout << film.trajanje / 60 << "h" << film.trajanje % 60 << "m";
    cout << endl;
}

void skratiFilm(Film &film){
    film.trajanje = 60;
}

int main(){
    Film film1 = {"Joker", 2019, 122};
    prikaziFilm(film1);
    skratiFilm(film1);
    prikaziFilm(film1);
}

