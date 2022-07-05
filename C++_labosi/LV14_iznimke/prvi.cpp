#include<iostream>
#include<stdexcept>

double pretvorba(double kune, double tecaj){
    double euro;
    euro = kune * tecaj;
    if(tecaj < 0){
        throw std::invalid_argument("Tecaj manji od 0!");
    }
    if(kune < 0 || tecaj > 100){
        throw std::logic_error("Krivi podaci");
    }
    return euro;
}

int main(){
    try{
        std::cout << pretvorba(100, 7.56);
    }
    catch(const std::exception& e1){
        std::cout << e1.what() << std::endl;
    }
    catch(const std::exception& e2) {   
        std::cout << e2.what() << std::endl;
    }
}