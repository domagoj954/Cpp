#include<iostream>
#include"film.hpp"


void prikaziFilm(const Film &film){
    std::cout << film.naziv << " (" << film.godinaIzdanja << " )" << ", ";
    std::cout << film.trajanje / 60 << "h" << film.trajanje % 60 << "m";
    std::cout << std::endl;
}

void skratiFilm(Film &film){
    film.trajanje = 60;
}