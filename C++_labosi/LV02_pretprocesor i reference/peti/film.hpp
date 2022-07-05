#pragma once
#include<string>

struct Film{
    std::string naziv;
    int godinaIzdanja;
    int trajanje;
};

void prikaziFilm(Film &film);
void skratiFilm(Film &film);

