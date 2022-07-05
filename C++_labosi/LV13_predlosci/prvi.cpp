//Izradite predložak funkcije maksimum. Funkcija ima dva parametra nepoznatog tipa.
//Funkcija mora vratiti vrijednost jednog od parametara koji ima veću vrijednost. Povratni
//tip je isti kao i tip oba parametara.

#include<iostream>

template<typename T>
T maksimum(T a, T b){
    T max;
    if(a > b){
        max = a;
    }
    else if(b > a){
        max = b;
    } else {
        std::cout << "Brojevi su jednaki";
    }
    return max;
}

int main(){
    std::cout << maksimum(20.1, 10.2);
}