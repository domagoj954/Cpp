#include<iostream>

void parnost(){
    int broj;
    while(true){
        std::cout << "Unesite broj: ";
        std::cin >> broj;
        if(broj % 2 == 0){
            std::cout << "Paran" << std::endl;
        }
            else{
                std::cout << "Neparan" << std::endl;
            }
        }
    }

int main(){
  parnost();
}
